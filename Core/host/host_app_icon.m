#import <TargetConditionals.h>

#if TARGET_OS_OSX
#import <AppKit/AppKit.h>
#include <arpa/inet.h>
#include <netinet/in.h>

extern void halo_network_add_broadcast_target(unsigned long address);

@interface HaloMacBonjour : NSObject <NSNetServiceDelegate, NSNetServiceBrowserDelegate>
@property (nonatomic, strong) NSNetService *netService;
@property (nonatomic, strong) NSNetServiceBrowser *netServiceBrowser;
@property (nonatomic, strong) NSMutableArray<NSNetService *> *discoveredServices;
+ (instancetype)sharedInstance;
- (void)start;
@end

@implementation HaloMacBonjour
+ (instancetype)sharedInstance {
	static HaloMacBonjour *s_inst = nil;
	static dispatch_once_t onceToken;
	dispatch_once(&onceToken, ^{
		s_inst = [[HaloMacBonjour alloc] init];
	});
	return s_inst;
}

- (instancetype)init {
	self = [super init];
	if (self) {
		_discoveredServices = [[NSMutableArray alloc] init];
	}
	return self;
}

- (void)start {
	static BOOL started = NO;
	if (started) return;
	started = YES;

	self.netService = [[NSNetService alloc] initWithDomain:@"local."
													  type:@"_halo._udp."
													  name:[NSString stringWithFormat:@"Halo-Mac-%d", (int)getpid()]
													  port:5150];
	self.netService.delegate = self;
	[self.netService publishWithOptions:0];

	self.netServiceBrowser = [[NSNetServiceBrowser alloc] init];
	self.netServiceBrowser.delegate = self;
	[self.netServiceBrowser searchForServicesOfType:@"_halo._udp." inDomain:@"local."];
	fprintf(stderr, "[Bonjour-Mac] Publishing _halo._udp. and browsing local network\n");
}

- (void)netServiceBrowser:(NSNetServiceBrowser *)browser didFindService:(NSNetService *)service moreComing:(BOOL)moreComing {
	if ([service.name isEqualToString:self.netService.name]) return;
	[self.discoveredServices addObject:service];
	service.delegate = self;
	[service resolveWithTimeout:5.0];
}

- (void)netServiceDidResolveAddress:(NSNetService *)service {
	for (NSData *addressData in service.addresses) {
		struct sockaddr *sa = (struct sockaddr *)addressData.bytes;
		if (sa->sa_family == AF_INET) {
			struct sockaddr_in *sin = (struct sockaddr_in *)sa;
			char ipStr[INET_ADDRSTRLEN];
			inet_ntop(AF_INET, &(sin->sin_addr), ipStr, INET_ADDRSTRLEN);
			fprintf(stderr, "[Bonjour-Mac] Discovered peer %s at %s\n", [service.name UTF8String], ipStr);
			halo_network_add_broadcast_target(sin->sin_addr.s_addr);
		}
	}
}
@end
#endif

#include "host_app_icon.h"
#include <stdio.h>
#include <stdlib.h>

void mac_host_activate_app(void)
{
#if TARGET_OS_OSX
	if (![NSThread isMainThread])
		return;
	@autoreleasepool {
		[[NSApplication sharedApplication] activate];
		[[HaloMacBonjour sharedInstance] start];
	}
#endif
}

void mac_host_apply_app_icon(void)
{
#if TARGET_OS_OSX
	if (![NSThread isMainThread])
	{
		dispatch_async(dispatch_get_main_queue(), ^{
			mac_host_apply_app_icon();
		});
		return;
	}
	@autoreleasepool {
		[[HaloMacBonjour sharedInstance] start];
		const char *configured_path = getenv("HALO_APP_ICON");
		NSString *path = configured_path && configured_path[0]
			? [NSString stringWithUTF8String:configured_path]
			: [[NSBundle mainBundle] pathForResource:@"HaloCombatEvolved" ofType:@"icns"];
		if (!path)
			return;
		NSImage *icon = [[NSImage alloc] initWithContentsOfFile:path];
		if (icon) {
			[[NSApplication sharedApplication] setApplicationIconImage:icon];
			fprintf(stderr, "[macos] native application icon loaded: %s\n", [path fileSystemRepresentation]);
			[icon release];
		} else {
			fprintf(stderr, "[macos] cannot load application icon: %s\n", [path fileSystemRepresentation]);
		}
	}
#endif
}

#if TARGET_OS_TV
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <dlfcn.h>

static id s_tv_eagl_context = nil;

void *tvos_create_eagl_context(void)
{
	Class eagl_cls = NSClassFromString(@"EAGLContext");
	Class layer_cls = NSClassFromString(@"CAEAGLLayer");
	if (!eagl_cls) return (void *)0x1;

	id context = [[eagl_cls alloc] initWithAPI:3];
	if (!context) context = [[eagl_cls alloc] initWithAPI:2];
	if (!context) return (void *)0x1;

	s_tv_eagl_context = context;
	[eagl_cls setCurrentContext:context];
	NSLog(@"[tvos-eagl] Created and set EAGLContext: %@", context);

	void (^setup_layer)(void) = ^{
		UIWindow *keyWin = nil;
		for (UIWindow *w in [UIApplication sharedApplication].windows) {
			if (w.isKeyWindow) { keyWin = w; break; }
		}
		if (!keyWin && [UIApplication sharedApplication].windows.count > 0) {
			keyWin = [UIApplication sharedApplication].windows[0];
		}
		if (keyWin && layer_cls) {
			UIView *rootView = keyWin.rootViewController.view;
			if (rootView) {
				CAEAGLLayer *eaglLayer = [[layer_cls alloc] init];
				eaglLayer.frame = rootView.bounds;
				CGFloat scale = [UIScreen mainScreen].scale;
				if (scale < 1.0) scale = 1.0;
				eaglLayer.contentsScale = scale;
				eaglLayer.opaque = YES;
				eaglLayer.drawableProperties = @{
					@"kEAGLDrawablePropertyRetainedBacking": @NO,
					@"kEAGLDrawablePropertyColorFormat": @"kEAGLColorFormatRGBA8"
				};
				[rootView.layer addSublayer:eaglLayer];
				NSLog(@"[tvos-eagl] Attached CAEAGLLayer to rootView layer: bounds %@, scale %.1f", NSStringFromCGRect(rootView.bounds), scale);

				GLuint fbo = 0, rbo = 0;
				typedef void (*PGLGEN)(GLsizei, GLuint *);
				typedef void (*PGLBIND)(GLenum, GLuint);
				typedef void (*PGLFBORBO)(GLenum, GLenum, GLenum, GLuint);
				void *gles = dlopen("/System/Library/Frameworks/OpenGLES.framework/OpenGLES", RTLD_NOW);
				PGLGEN glGenFramebuffers_fn = (PGLGEN)dlsym(gles, "glGenFramebuffers");
				PGLGEN glGenRenderbuffers_fn = (PGLGEN)dlsym(gles, "glGenRenderbuffers");
				PGLBIND glBindFramebuffer_fn = (PGLBIND)dlsym(gles, "glBindFramebuffer");
				PGLBIND glBindRenderbuffer_fn = (PGLBIND)dlsym(gles, "glBindRenderbuffer");
				PGLFBORBO glFramebufferRenderbuffer_fn = (PGLFBORBO)dlsym(gles, "glFramebufferRenderbuffer");

				if (glGenFramebuffers_fn && glGenRenderbuffers_fn && glBindFramebuffer_fn && glBindRenderbuffer_fn) {
					glGenFramebuffers_fn(1, &fbo);
					glGenRenderbuffers_fn(1, &rbo);
					glBindFramebuffer_fn(0x8D40 /* GL_FRAMEBUFFER */, fbo);
					glBindRenderbuffer_fn(0x8D41 /* GL_RENDERBUFFER */, rbo);
					BOOL ok = [context renderbufferStorage:0x8D41 fromDrawable:eaglLayer];
					NSLog(@"[tvos-eagl] renderbufferStorage result: %d, fbo=%u rbo=%u", ok, fbo, rbo);
					if (glFramebufferRenderbuffer_fn) {
						glFramebufferRenderbuffer_fn(0x8D40, 0x8CE0 /* GL_COLOR_ATTACHMENT0 */, 0x8D41, rbo);
					}
					extern void gles_set_default_fbo(GLuint fbo);
					gles_set_default_fbo(fbo);
				}
			}
		}
	};

	if ([NSThread isMainThread]) {
		setup_layer();
	} else {
		dispatch_sync(dispatch_get_main_queue(), setup_layer);
	}

	return (__bridge void *)context;
}

void tvos_make_current_eagl_context(void *context)
{
	Class eagl_cls = NSClassFromString(@"EAGLContext");
	if (eagl_cls && context && context != (void *)0x1) {
		[eagl_cls setCurrentContext:(__bridge id)context];
	}
}

void tvos_swap_eagl_buffers(void)
{
	Class eagl_cls = NSClassFromString(@"EAGLContext");
	if (eagl_cls) {
		id current = [eagl_cls currentContext];
		if (current) {
			[current presentRenderbuffer:0x8D41 /* GL_RENDERBUFFER */];
		}
	}
}
#endif

