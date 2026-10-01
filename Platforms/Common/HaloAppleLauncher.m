#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import <GameController/GameController.h>
#if TARGET_OS_IPHONE || TARGET_OS_TV
#import <AVFoundation/AVFoundation.h>
#import <GameKit/GameKit.h>
#endif
#include "HaloAppleLauncher.h"
#include "host_sdl_audio.h"
#include "host_sdl.h"
#import <objc/runtime.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <net/if.h>

extern int halo_main(int argc, char **argv);

@interface HaloBonjourManager : NSObject <NSNetServiceDelegate, NSNetServiceBrowserDelegate>
@property (nonatomic, strong) NSNetService *localService;
@property (nonatomic, strong) NSNetServiceBrowser *browser;
@property (nonatomic, strong) NSMutableArray<NSNetService *> *discoveredServices;
+ (instancetype)shared;
- (void)start;
- (NSString *)localIPAddress;
@end

@implementation HaloBonjourManager

+ (instancetype)shared {
    static HaloBonjourManager *mgr = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        mgr = [[HaloBonjourManager alloc] init];
    });
    return mgr;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _discoveredServices = [NSMutableArray array];
    }
    return self;
}

- (void)start {
    dispatch_async(dispatch_get_main_queue(), ^{
        if (self.localService) return;
        NSString *devName = [UIDevice currentDevice].name ?: @"HaloDevice";
        NSString *cleanName = [NSString stringWithFormat:@"Halo-%@-%04d",
            [devName stringByReplacingOccurrencesOfString:@" " withString:@"-"],
            arc4random_uniform(10000)];

        self.localService = [[NSNetService alloc] initWithDomain:@"local." type:@"_halo._udp." name:cleanName port:5150];
        self.localService.delegate = self;
        [self.localService publishWithOptions:0];

        self.browser = [[NSNetServiceBrowser alloc] init];
        self.browser.delegate = self;
        [self.browser searchForServicesOfType:@"_halo._udp." inDomain:@"local."];
        NSLog(@"[Bonjour] Halo network discovery and advertising started (service: %@)", cleanName);
    });
}

- (void)netServiceBrowser:(NSNetServiceBrowser *)browser didFindService:(NSNetService *)service moreComing:(BOOL)moreComing {
    if ([service.name isEqualToString:self.localService.name]) return;
    NSLog(@"[Bonjour] Discovered peer service: %@", service.name);
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
            NSLog(@"[Bonjour] Resolved peer %@ IP: %s", service.name, ipStr);
            halo_network_add_broadcast_target(sin->sin_addr.s_addr);
        }
    }
}

- (NSString *)localIPAddress {
    NSString *address = @"127.0.0.1";
    struct ifaddrs *interfaces = NULL;
    struct ifaddrs *temp_addr = NULL;
    if (getifaddrs(&interfaces) == 0) {
        temp_addr = interfaces;
        while (temp_addr != NULL) {
            if (temp_addr->ifa_addr && temp_addr->ifa_addr->sa_family == AF_INET) {
                NSString *name = [NSString stringWithUTF8String:temp_addr->ifa_name];
                if ([name isEqualToString:@"en0"] || [name hasPrefix:@"en"]) {
                    address = [NSString stringWithUTF8String:inet_ntoa(((struct sockaddr_in *)temp_addr->ifa_addr)->sin_addr)];
                    break;
                }
            }
            temp_addr = temp_addr->ifa_next;
        }
        freeifaddrs(interfaces);
    }
    return address;
}
@end

static NSString *s_saveRootPath = nil;

static void EnsureDirectory(NSString *path)
{
    NSFileManager *fm = [NSFileManager defaultManager];
    if (![fm fileExistsAtPath:path]) {
        [fm createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:nil];
    }
}

static void SetupStarterConfig(NSString *saveRoot)
{
    NSString *configPath = [saveRoot stringByAppendingPathComponent:@"config.toml"];
    NSFileManager *fm = [NSFileManager defaultManager];
    if ([fm fileExistsAtPath:configPath]) {
        return;
    }

    NSString *defaultConfig =
        @"# Halo Combat Evolved - Apple Platforms Config\n\n"
        @"[display]\n"
        @"fullscreen = true\n"
        @"resolution = \"native\"\n"
        @"render_scale = \"1.0\"\n"
        @"window_scale = 1\n"
        @"vsync = true\n"
        @"interpolation = true\n\n"
        @"[audio]\n"
        @"volume = 1.0\n\n"
        @"[input]\n"
        @"virtual_controls = \"auto\"\n"
        @"forward = \"W\"\n"
        @"backward = \"S\"\n"
        @"left = \"A\"\n"
        @"right = \"D\"\n"
        @"jump = \"Space\"\n"
        @"fire = \"Mouse1\"\n"
        @"action = \"E,R\"\n"
        @"melee = \"F\"\n"
        @"grenade = \"G\"\n"
        @"zoom = \"Mouse2,Z\"\n"
        @"change_weapon = \"Tab\"\n"
        @"flashlight = \"Q\"\n"
        @"crouch = \"LeftCtrl,C\"\n"
        @"mouse_sensitivity = 1.0\n"
        @"invert_mouse = false\n\n"
        @"[network]\n"
        @"online = true\n"
        @"allow_upnp = true\n"
        @"netcode = \"distributed\"\n"
        @"join_from_clipboard = true\n";

    [defaultConfig writeToFile:configPath atomically:YES encoding:NSUTF8StringEncoding error:nil];
}

static NSString *GetConfigValue(NSString *key)
{
    if (!s_saveRootPath) return nil;
    NSString *path = [s_saveRootPath stringByAppendingPathComponent:@"config.toml"];
    NSString *content = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil];
    if (!content) return nil;

    NSString *pattern = [NSString stringWithFormat:@"(?m)^\\s*%@\\s*=\\s*\"?([^\r\n\"]+)\"?", key];
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern options:0 error:nil];
    NSTextCheckingResult *match = [regex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (match && match.numberOfRanges > 1) {
        return [content substringWithRange:[match rangeAtIndex:1]];
    }
    return nil;
}

static void SetConfigValue(NSString *section, NSString *key, NSString *value, BOOL isString)
{
    if (!s_saveRootPath) return;
    NSString *path = [s_saveRootPath stringByAppendingPathComponent:@"config.toml"];
    NSString *content = [NSString stringWithContentsOfFile:path encoding:NSUTF8StringEncoding error:nil] ?: @"";

    NSString *valStr = isString ? [NSString stringWithFormat:@"\"%@\"", value] : value;
    NSString *pattern = [NSString stringWithFormat:@"(?m)^(\\s*%@\\s*=\\s*)[^\r\n]+", key];
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern options:0 error:nil];

    if ([regex numberOfMatchesInString:content options:0 range:NSMakeRange(0, content.length)] > 0) {
        content = [regex stringByReplacingMatchesInString:content options:0 range:NSMakeRange(0, content.length) withTemplate:[NSString stringWithFormat:@"$1%@", valStr]];
    } else {
        NSString *secHeader = [NSString stringWithFormat:@"[%@]", section];
        NSRange secRange = [content rangeOfString:secHeader];
        if (secRange.location != NSNotFound) {
            NSUInteger insertIdx = secRange.location + secRange.length;
            NSString *entry = [NSString stringWithFormat:@"\n%@ = %@", key, valStr];
            content = [NSString stringWithFormat:@"%@%@%@", [content substringToIndex:insertIdx], entry, [content substringFromIndex:insertIdx]];
        } else {
            content = [content stringByAppendingFormat:@"\n[%@]\n%@ = %@\n", section, key, valStr];
        }
    }
    [content writeToFile:path atomically:YES encoding:NSUTF8StringEncoding error:nil];
}

#if TARGET_OS_TV
@interface HaloTVSplashViewController : UIViewController
@end

@implementation HaloTVSplashViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor blackColor];
    
    NSString *imgPath = [[NSBundle mainBundle] pathForResource:@"LaunchImage" ofType:@"png"];
    UIImage *img = imgPath ? [UIImage imageWithContentsOfFile:imgPath] : [UIImage imageNamed:@"LaunchImage"];
    UIImageView *imageView = [[UIImageView alloc] initWithFrame:self.view.bounds];
    imageView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    imageView.contentMode = UIViewContentModeScaleAspectFill;
    imageView.image = img;
    [self.view addSubview:imageView];
    
    UILabel *titleLabel = [[UILabel alloc] initWithFrame:CGRectMake(80, self.view.bounds.size.height - 140, self.view.bounds.size.width - 160, 60)];
    titleLabel.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleTopMargin;
    titleLabel.text = @"Halo: Combat Evolved • Apple TV Edition";
    titleLabel.font = [UIFont systemFontOfSize:36 weight:UIFontWeightMedium];
    titleLabel.textColor = [[UIColor whiteColor] colorWithAlphaComponent:0.85];
    titleLabel.textAlignment = NSTextAlignmentCenter;
    [self.view addSubview:titleLabel];
}
@end

@implementation HaloTVAppDelegate
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    NSLog(@"[HaloApple] tvOS HaloTVAppDelegate didFinishLaunchingWithOptions");
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    HaloTVSplashViewController *vc = [[HaloTVSplashViewController alloc] init];
    self.window.rootViewController = vc;
    [self.window makeKeyAndVisible];
    return YES;
}
@end
#endif

#if TARGET_OS_IPHONE && !TARGET_OS_TV
#import "HaloTouchHUDView.h"

static NSString *s_virtualControllerMode = @"auto";

static void UpdateVirtualControllerVisibility(void)
{
    HaloTouchHUDView *hud = [HaloTouchHUDView sharedHUD];
    if ([s_virtualControllerMode isEqualToString:@"hidden"]) {
        hud.hidden = YES;
        mac_host_touch_set_hud_active(0);
    } else if ([s_virtualControllerMode isEqualToString:@"always"]) {
        hud.hidden = NO;
        mac_host_touch_set_hud_active(hud.isMenuMode ? 0 : 1);
    } else { // auto: show on touch devices when no physical controller is connected
        BOOL hasPhysical = NO;
        for (GCController *c in [GCController controllers]) {
            hasPhysical = YES;
            break;
        }
        if (hasPhysical) {
            hud.hidden = YES;
            mac_host_touch_set_hud_active(0);
        } else {
            hud.hidden = NO;
            mac_host_touch_set_hud_active(hud.isMenuMode ? 0 : 1);
        }
    }
}

static void SetupVirtualController(void)
{
    dispatch_async(dispatch_get_main_queue(), ^{
        s_virtualControllerMode = GetConfigValue(@"virtual_controls") ?: @"auto";
        UpdateVirtualControllerVisibility();

        [[NSNotificationCenter defaultCenter] addObserverForName:GCControllerDidConnectNotification
                                                          object:nil
                                                           queue:[NSOperationQueue mainQueue]
                                                      usingBlock:^(NSNotification *note) {
            UpdateVirtualControllerVisibility();
        }];

        [[NSNotificationCenter defaultCenter] addObserverForName:GCControllerDidDisconnectNotification
                                                          object:nil
                                                           queue:[NSOperationQueue mainQueue]
                                                      usingBlock:^(NSNotification *note) {
            UpdateVirtualControllerVisibility();
        }];
    });
}
#endif

// ============================================================================
// Halo Settings Overlay & Configuration UI
// ============================================================================

@interface HaloSettingsOverlay : NSObject
+ (instancetype)shared;
+ (void)install;
+ (void)openSettings;
@property (nonatomic, strong) UIButton *gearButton;
@property (nonatomic, assign) UIViewController *attachedVC;
@property (nonatomic, strong) NSTimer *pollTimer;
@end

@implementation HaloSettingsOverlay

+ (instancetype)shared {
    static HaloSettingsOverlay *s_inst = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        s_inst = [[HaloSettingsOverlay alloc] init];
    });
    return s_inst;
}

+ (void)install {
    [[HaloSettingsOverlay shared] startInstallPolling];
}

- (void)startInstallPolling {
    [self.pollTimer invalidate];
    self.pollTimer = [NSTimer scheduledTimerWithTimeInterval:0.5 repeats:YES block:^(NSTimer * _Nonnull timer) {
        [self tryAttach];
    }];
}

static BOOL (*s_origOpenURL)(id, SEL, UIApplication*, NSURL*, NSDictionary*) = NULL;
static BOOL SwizzledOpenURL(id self, SEL _cmd, UIApplication *app, NSURL *url, NSDictionary *options) {
    if ([url.scheme isEqualToString:@"halo"]) {
        NSLog(@"[HaloURL] Open URL: %@", url.absoluteString);
        mac_host_queue_join_invite(url.absoluteString.UTF8String);
        [[HaloSettingsOverlay shared] showNotice:[NSString stringWithFormat:@"Conectando a partida en línea:\n%@\n\nEntra en el juego a Multijugador -> System Link para unirte.", url.absoluteString]];
        return YES;
    }
    if (s_origOpenURL) {
        return s_origOpenURL(self, _cmd, app, url, options);
    }
    return NO;
}

- (void)tryAttach {
    UIWindow *window = nil;
    for (UIWindow *w in [UIApplication sharedApplication].windows) {
        if (w.isKeyWindow || w.rootViewController) {
            window = w;
            break;
        }
    }
    if (!window && [UIApplication sharedApplication].windows.count > 0) {
        window = [UIApplication sharedApplication].windows.firstObject;
    }
    UIViewController *rootVC = window.rootViewController;
    if (!rootVC || !rootVC.view) return;

    if ([NSStringFromClass([rootVC class]) containsString:@"Splash"]) return;
    if (self.attachedVC == rootVC) return;

    self.attachedVC = rootVC;
    [self.pollTimer invalidate];
    self.pollTimer = nil;

    NSLog(@"[HaloSettings] Installing Settings Overlay on rootViewController: %@", rootVC);

    // Install URL Scheme Handler (halo://join/...)
    id appDelegate = [UIApplication sharedApplication].delegate;
    if (appDelegate) {
        Class delClass = [appDelegate class];
        Method m = class_getInstanceMethod(delClass, @selector(application:openURL:options:));
        if (m) {
            s_origOpenURL = (void *)method_getImplementation(m);
            method_setImplementation(m, (IMP)SwizzledOpenURL);
        } else {
            class_addMethod(delClass, @selector(application:openURL:options:), (IMP)SwizzledOpenURL, "B@:@@@");
        }
        NSLog(@"[HaloURL] Registered halo:// URL scheme handler on delegate %@", delClass);
    }

#if TARGET_OS_IPHONE && !TARGET_OS_TV
    // 1. Floating Settings Gear Button (Draggable)
    if (!self.gearButton) {
        CGFloat size = 44.0;
        CGFloat x = rootVC.view.bounds.size.width - size - 16.0;
        CGFloat y = 20.0;
        if (@available(iOS 11.0, *)) {
            y = MAX(y, rootVC.view.safeAreaInsets.top + 8.0);
        }
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(x, y, size, size);
        btn.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleBottomMargin;
        btn.backgroundColor = [UIColor colorWithWhite:0.1 alpha:0.7];
        btn.layer.cornerRadius = size / 2.0;
        btn.layer.borderWidth = 1.2;
        btn.layer.borderColor = [UIColor colorWithWhite:0.9 alpha:0.5].CGColor;
        btn.clipsToBounds = YES;
        [btn setTitle:@"⚙️" forState:UIControlStateNormal];
        btn.titleLabel.font = [UIFont systemFontOfSize:22];
        [btn addTarget:self action:@selector(gearButtonTapped:) forControlEvents:UIControlEventTouchUpInside];

        UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(handlePan:)];
        [btn addGestureRecognizer:pan];

        self.gearButton = btn;

        // Attach modern HaloTouchHUDView under gear button
        [HaloTouchHUDView attachToViewController:rootVC];
        UpdateVirtualControllerVisibility();

        [rootVC.view addSubview:btn];
        [rootVC.view bringSubviewToFront:btn];
    }

    // 2. 3-Finger Tap Gesture
    UITapGestureRecognizer *threeFingerTap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(onGestureTrigger:)];
    threeFingerTap.numberOfTouchesRequired = 3;
    [rootVC.view addGestureRecognizer:threeFingerTap];
#endif

#if TARGET_OS_TV
    // Apple TV Remote Play/Pause button
    UITapGestureRecognizer *playPauseTap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(onGestureTrigger:)];
    playPauseTap.allowedPressTypes = @[@(UIPressTypePlayPause)];
    [rootVC.view addGestureRecognizer:playPauseTap];
    NSLog(@"[HaloSettings] Configured Play/Pause button for settings menu on Apple TV");
#endif

#if TARGET_OS_IPHONE || TARGET_OS_TV
    [GCController setShouldMonitorBackgroundEvents:YES];

    Class gkLocalPlayerClass = NSClassFromString(@"GKLocalPlayer");
    if (gkLocalPlayerClass) {
        SEL selLocal = NSSelectorFromString(@"localPlayer");
        if ([gkLocalPlayerClass respondsToSelector:selLocal]) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
            id localPlayer = [gkLocalPlayerClass performSelector:selLocal];
            if (localPlayer) {
                [localPlayer setValue:^(UIViewController *vc, NSError *err) {
                    if (vc) {
                        dispatch_async(dispatch_get_main_queue(), ^{
                            UIViewController *top = [self topViewController];
                            if (top) [top presentViewController:vc animated:YES completion:nil];
                        });
                    } else {
                        NSLog(@"[HaloGameKit] Local player state: %@", err ? err.localizedDescription : @"Connected");
                    }
                } forKey:@"authenticateHandler"];
            }
#pragma clang diagnostic pop
        }
    }

    Class gkClass = NSClassFromString(@"GKAccessPoint");
    if (gkClass) {
        SEL selShared = NSSelectorFromString(@"shared");
        if ([gkClass respondsToSelector:selShared]) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
            id point = [gkClass performSelector:selShared];
            if (point) {
                [point setValue:@NO forKey:@"showHighlights"];
                [point setValue:@NO forKey:@"active"];
            }
#pragma clang diagnostic pop
        }
    }
#endif

    // Gamepads: Combination triggers (L3+R3 or L1+R1+Menu/Options)
    for (GCController *c in [GCController controllers]) {
        [self setupControllerTriggers:c];
    }
    [[NSNotificationCenter defaultCenter] addObserverForName:GCControllerDidConnectNotification
                                                      object:nil
                                                       queue:[NSOperationQueue mainQueue]
                                                  usingBlock:^(NSNotification *note) {
        [self setupControllerTriggers:note.object];
    }];
}

- (void)handlePan:(UIPanGestureRecognizer *)pan {
    UIView *view = pan.view;
    CGPoint translation = [pan translationInView:view.superview];
    view.center = CGPointMake(view.center.x + translation.x, view.center.y + translation.y);
    [pan setTranslation:CGPointZero inView:view.superview];
}

- (void)gearButtonTapped:(UIButton *)sender {
    [self showMainMenu];
}

- (void)onGestureTrigger:(UIGestureRecognizer *)recognizer {
    [self showMainMenu];
}

- (void)setupControllerTriggers:(GCController *)controller {
    if (controller.extendedGamepad) {
        GCExtendedGamepad *gp = controller.extendedGamepad;

        void (^checkCombo)(void) = ^{
            BOOL l3 = NO, r3 = NO;
            if (@available(iOS 12.1, tvOS 12.1, *)) {
                l3 = gp.leftThumbstickButton && gp.leftThumbstickButton.isPressed;
                r3 = gp.rightThumbstickButton && gp.rightThumbstickButton.isPressed;
            }
            BOOL l1 = gp.leftShoulder && gp.leftShoulder.isPressed;
            BOOL r1 = gp.rightShoulder && gp.rightShoulder.isPressed;
            BOOL menu = gp.buttonMenu && gp.buttonMenu.isPressed;
            BOOL options = gp.buttonOptions && gp.buttonOptions.isPressed;

            // Trigger combo:
            // 1. L3 + R3 (Thumbstick clicks simultaneously)
            // 2. L1 + R1 + Start/Menu (Shoulders held while pressing Start/Menu)
            // 3. L1 + R1 + Select/Options
            if ((l3 && r3) || (l1 && r1 && (menu || options))) {
                dispatch_async(dispatch_get_main_queue(), ^{
                    [HaloSettingsOverlay openSettings];
                });
            }
        };

        if (@available(iOS 12.1, tvOS 12.1, *)) {
            if (gp.leftThumbstickButton) {
                gp.leftThumbstickButton.pressedChangedHandler = ^(GCControllerButtonInput *btn, float val, BOOL pressed) {
                    if (pressed) checkCombo();
                };
            }
            if (gp.rightThumbstickButton) {
                gp.rightThumbstickButton.pressedChangedHandler = ^(GCControllerButtonInput *btn, float val, BOOL pressed) {
                    if (pressed) checkCombo();
                };
            }
        }
        if (gp.leftShoulder) {
            gp.leftShoulder.pressedChangedHandler = ^(GCControllerButtonInput *btn, float val, BOOL pressed) {
                if (pressed) checkCombo();
            };
        }
        if (gp.rightShoulder) {
            gp.rightShoulder.pressedChangedHandler = ^(GCControllerButtonInput *btn, float val, BOOL pressed) {
                if (pressed) checkCombo();
            };
        }
        if (gp.buttonMenu) {
            gp.buttonMenu.pressedChangedHandler = ^(GCControllerButtonInput *btn, float val, BOOL pressed) {
                if (pressed) checkCombo();
            };
        }
        if (gp.buttonOptions) {
            gp.buttonOptions.pressedChangedHandler = ^(GCControllerButtonInput *btn, float val, BOOL pressed) {
                if (pressed) checkCombo();
            };
        }

        if (@available(iOS 14.0, tvOS 14.0, *)) {
            if ([gp respondsToSelector:@selector(buttonHome)] && gp.buttonHome) {
                gp.buttonHome.pressedChangedHandler = ^(GCControllerButtonInput *btn, float val, BOOL pressed) {
                    if (pressed) {
                        NSLog(@"[HaloGamepad] Guide/Home button pressed -> Opening in-game settings");
                        dispatch_async(dispatch_get_main_queue(), ^{
                            [HaloSettingsOverlay openSettings];
                        });
                    }
                };
            }
        }
    }
}

+ (void)openSettings {
    [[HaloSettingsOverlay shared] showMainMenu];
}

- (UIViewController *)topViewController {
    UIViewController *top = self.attachedVC;
    if (!top) {
        UIWindow *win = [UIApplication sharedApplication].keyWindow;
        top = win.rootViewController;
    }
    while (top.presentedViewController) {
        top = top.presentedViewController;
    }
    return top;
}

- (void)presentMenuAlert:(UIAlertController *)alert fromVC:(UIViewController *)vc {
    // Suspend in-game input so game controller focuses entirely on the menu
    mac_host_set_input_suspended(1);
    [vc presentViewController:alert animated:YES completion:nil];
}

- (void)dismissMenu {
    // Resume in-game input when menu closes
    mac_host_set_input_suspended(0);
}

- (void)showMainMenu {
    UIViewController *top = [self topViewController];
    if ([top isKindOfClass:[UIAlertController class]]) return;

    NSString *currRes = GetConfigValue(@"resolution") ?: @"native";
    NSString *currScale = GetConfigValue(@"render_scale") ?: @"1.0";
    NSString *currVol = GetConfigValue(@"volume") ?: @"1.0";
    NSString *currInterp = GetConfigValue(@"interpolation") ?: @"true";
    NSString *currSens = GetConfigValue(@"mouse_sensitivity") ?: @"1.0";
    NSString *currOnline = GetConfigValue(@"online") ?: @"true";
#if TARGET_OS_IPHONE && !TARGET_OS_TV
    NSString *currVirt = s_virtualControllerMode ?: @"auto";
#endif

    NSString *title = @"⚙️ Halo: Combat Evolved • Ajustes";
    NSString *msg = [NSString stringWithFormat:@"Resolución: %@ | Escala: %@ | Red: %@ | Audio: %@ | FPS: %@",
                     currRes, currScale, [currOnline isEqualToString:@"true"] ? @"Online" : @"Local", currVol,
                     [currInterp isEqualToString:@"true"] ? @"60" : @"30"];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title message:msg preferredStyle:UIAlertControllerStyleAlert];

    [alert addAction:[UIAlertAction actionWithTitle:[NSString stringWithFormat:@"🖥 Resolución de Pantalla (%@)", currRes] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self showResolutionMenu];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:[NSString stringWithFormat:@"📐 Escala de Renderizado (%@)", currScale] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self showScaleMenu];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:[NSString stringWithFormat:@"🌐 Red y Multijugador (%@)", [currOnline isEqualToString:@"true"] ? @"Online Activado" : @"Solo LAN"] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self showNetworkMenu];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:[NSString stringWithFormat:@"🔊 Volumen de Audio (%@)", currVol] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self showVolumeMenu];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:[NSString stringWithFormat:@"🎯 Rendimiento (%@)", [currInterp isEqualToString:@"true"] ? @"60 FPS (Suave)" : @"30 FPS (Xbox)"] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self showFpsMenu];
    }]];

#if TARGET_OS_IPHONE && !TARGET_OS_TV
    [alert addAction:[UIAlertAction actionWithTitle:[NSString stringWithFormat:@"🕹 Controles Virtuales (%@)", currVirt] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self showVirtualControlsMenu];
    }]];
#endif

    [alert addAction:[UIAlertAction actionWithTitle:[NSString stringWithFormat:@"🎮 Sensibilidad de Mirilla (%@)", currSens] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self showSensitivityMenu];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"ℹ️ Info del Port & Dispositivo" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self showSystemInfo];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"Cerrar" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [self dismissMenu];
    }]];

    [self presentMenuAlert:alert fromVC:top];
}

- (void)showNotice:(NSString *)message {
    UIViewController *top = [self topViewController];
    UIAlertController *notice = [UIAlertController alertControllerWithTitle:@"✅ Ajuste Guardado" message:message preferredStyle:UIAlertControllerStyleAlert];
    [notice addAction:[UIAlertAction actionWithTitle:@"Entendido" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self dismissMenu];
    }]];
    [self presentMenuAlert:notice fromVC:top];
}

- (void)showResolutionMenu {
    UIViewController *top = [self topViewController];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"🖥 Resolución de Renderizado"
                                                                   message:@"Selecciona la resolución interna de renderizado para el viewport:"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    NSDictionary *modes = @{
        @"Nativa (Pantalla Completa / Retina / 4K)": @"native",
        @"1080p (Full HD - 1920x1080)": @"1920x1080",
        @"720p (HD - 1280x720 • Recomendado)": @"1280x720",
        @"480p (Xbox Clásico - 640x480)": @"640x480"
    };

    NSArray *order = @[
        @"Nativa (Pantalla Completa / Retina / 4K)",
        @"1080p (Full HD - 1920x1080)",
        @"720p (HD - 1280x720 • Recomendado)",
        @"480p (Xbox Clásico - 640x480)"
    ];

    for (NSString *title in order) {
        NSString *val = modes[title];
        [alert addAction:[UIAlertAction actionWithTitle:title style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
            SetConfigValue(@"display", @"resolution", val, YES);
            setenv("HALO_RESOLUTION", [val UTF8String], 1);
            [self showNotice:[NSString stringWithFormat:@"Resolución configurada en: %@.\nSe guardó en config.toml. Tomará efecto al recargar el nivel o reiniciar el juego.", val]];
        }]];
    }
    [alert addAction:[UIAlertAction actionWithTitle:@"Cancelar" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [self dismissMenu];
    }]];
    [self presentMenuAlert:alert fromVC:top];
}

- (void)showScaleMenu {
    UIViewController *top = [self topViewController];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"📐 Escala de Renderizado"
                                                                   message:@"Reduce la carga sobre la GPU manteniendo la proporción de la pantalla:"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    NSArray *scales = @[
        @{@"title": @"100% (Resolución Máxima)", @"val": @"1.0"},
        @{@"title": @"75% (Equilibrado • Óptimo iPad/Apple TV)", @"val": @"0.75"},
        @{@"title": @"50% (Modo Rendimiento / Ahorro)", @"val": @"0.50"}
    ];

    for (NSDictionary *item in scales) {
        [alert addAction:[UIAlertAction actionWithTitle:item[@"title"] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
            NSString *val = item[@"val"];
            SetConfigValue(@"display", @"render_scale", val, NO);
            setenv("HALO_RENDER_SCALE", [val UTF8String], 1);
            [self showNotice:[NSString stringWithFormat:@"Escala de renderizado: %@.\nGuardado en config.toml.", val]];
        }]];
    }
    [alert addAction:[UIAlertAction actionWithTitle:@"Cancelar" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [self dismissMenu];
    }]];
    [self presentMenuAlert:alert fromVC:top];
}

- (void)showNetworkMenu {
    UIViewController *top = [self topViewController];
    NSString *currOnline = GetConfigValue(@"online") ?: @"true";
    NSString *currUpnp = GetConfigValue(@"allow_upnp") ?: @"true";
    NSString *currNetcode = GetConfigValue(@"netcode") ?: @"distributed";
    NSString *myIP = [[HaloBonjourManager shared] localIPAddress];

    NSString *msg = [NSString stringWithFormat:
        @"Tu IP Local (Wi-Fi): %@\n"
        @"• Modo en línea: %@\n"
        @"• Reenvío UPnP: %@\n"
        @"• Netcode: %@",
        myIP,
        [currOnline isEqualToString:@"true"] ? @"Activado" : @"Solo LAN",
        [currUpnp isEqualToString:@"true"] ? @"Activado" : @"Desactivado",
        currNetcode];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"🌐 Red y Multijugador"
                                                                   message:msg
                                                            preferredStyle:UIAlertControllerStyleAlert];

    // 1. Direct IP Search for LAN
    [alert addAction:[UIAlertAction actionWithTitle:@"🎯 Buscar por IP Directa en LAN" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        UIAlertController *ipPrompt = [UIAlertController alertControllerWithTitle:@"Conectar por IP Local"
                                                                          message:@"Introduce la dirección IP del dispositivo que aloja la partida (ej: 192.168.1.50):"
                                                                   preferredStyle:UIAlertControllerStyleAlert];
        [ipPrompt addTextFieldWithConfigurationHandler:^(UITextField *textField) {
            textField.placeholder = @"192.168.1.xxx";
#if !TARGET_OS_TV
            textField.keyboardType = UIKeyboardTypeDecimalPad;
#endif
        }];
        [ipPrompt addAction:[UIAlertAction actionWithTitle:@"Buscar Partida" style:UIAlertActionStyleDefault handler:^(UIAlertAction *act) {
            NSString *ip = ipPrompt.textFields.firstObject.text;
            struct in_addr addr;
            if (ip.length > 0 && inet_aton(ip.UTF8String, &addr)) {
                halo_network_add_broadcast_target(addr.s_addr);
                [self showNotice:[NSString stringWithFormat:@"Se añadió la IP %@ a la búsqueda de partidas.\nAhora ve a Multijugador -> System Link.", ip]];
            } else {
                [self showNotice:@"Dirección IP inválida."];
            }
        }]];
        [ipPrompt addAction:[UIAlertAction actionWithTitle:@"Cancelar" style:UIAlertActionStyleCancel handler:^(UIAlertAction *a) {
            [self dismissMenu];
        }]];
        [self presentMenuAlert:ipPrompt fromVC:top];
    }]];

    // 2. Internet Invite Link Join
    [alert addAction:[UIAlertAction actionWithTitle:@"🔗 Unirse por Enlace de Internet (halo://join/...)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        UIAlertController *joinPrompt = [UIAlertController alertControllerWithTitle:@"Unirse a Partida en Línea"
                                                                            message:@"Introduce el enlace de invitación (halo://join/...) del anfitrión:"
                                                                     preferredStyle:UIAlertControllerStyleAlert];
        [joinPrompt addTextFieldWithConfigurationHandler:^(UITextField *textField) {
            textField.placeholder = @"halo://join/...";
#if !TARGET_OS_TV
            NSString *clip = UIPasteboard.generalPasteboard.string;
            if ([clip containsString:@"halo://join/"]) {
                textField.text = clip;
            }
#endif
        }];
        [joinPrompt addAction:[UIAlertAction actionWithTitle:@"Conectar" style:UIAlertActionStyleDefault handler:^(UIAlertAction *act) {
            NSString *link = joinPrompt.textFields.firstObject.text;
            if ([link containsString:@"halo://join/"]) {
                mac_host_queue_join_invite(link.UTF8String);
                [self showNotice:@"¡Conectando al anfitrión!\nEl enlace se ha enviado al juego. Ahora ve en el juego a:\nMultijugador -> System Link\n¡Y verás la partida del anfitrión en la lista!"];
            } else {
                [self showNotice:@"El enlace no es válido. Debe comenzar con 'halo://join/'."];
            }
        }]];
        [joinPrompt addAction:[UIAlertAction actionWithTitle:@"Cancelar" style:UIAlertActionStyleCancel handler:^(UIAlertAction *a) {
            [self dismissMenu];
        }]];
        [self presentMenuAlert:joinPrompt fromVC:top];
    }]];

    // 3. View / Copy Host Invite Link
    [alert addAction:[UIAlertAction actionWithTitle:@"📋 Copiar / Ver Mi Enlace de Anfitrión" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        const char *active = mac_host_get_active_invite_link();
        NSString *link = active ? [NSString stringWithUTF8String:active] : nil;
#if !TARGET_OS_TV
        if (!link) {
            NSString *clip = UIPasteboard.generalPasteboard.string;
            if ([clip containsString:@"halo://join/"]) {
                link = clip;
            }
        }
#endif
        if (link) {
#if !TARGET_OS_TV
            UIPasteboard.generalPasteboard.string = link;
            [self showNotice:[NSString stringWithFormat:@"Enlace copiado al portapapeles:\n%@", link]];
#else
            [self showNotice:[NSString stringWithFormat:@"Tu enlace de anfitrión actual:\n%@", link]];
#endif
        } else {
            [self showNotice:@"Aún no has creado una partida pública.\nPara generar tu enlace de invitación, entra en el juego a:\nMultijugador -> System Link -> Crear Partida."];
        }
    }]];

    // 4. Toggle Online
    NSString *toggleOnlineTitle = [currOnline isEqualToString:@"true"] ? @"Desactivar Juego en Línea (Solo LAN)" : @"Activar Juego en Línea (Internet + LAN)";
    [alert addAction:[UIAlertAction actionWithTitle:toggleOnlineTitle style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        BOOL newOnline = ![currOnline isEqualToString:@"true"];
        NSString *valStr = newOnline ? @"true" : @"false";
        SetConfigValue(@"network", @"online", valStr, NO);
        setenv("HALO_NET_ONLINE", [valStr UTF8String], 1);
        [self showNotice:[NSString stringWithFormat:@"Juego en línea: %@.", newOnline ? @"Activado (Internet y Red Local)" : @"Desactivado (Solo Red Local LAN)"]];
    }]];

    // 5. Toggle UPnP
    NSString *toggleUpnpTitle = [currUpnp isEqualToString:@"true"] ? @"Desactivar Reenvío UPnP de Router" : @"Activar Reenvío UPnP de Router";
    [alert addAction:[UIAlertAction actionWithTitle:toggleUpnpTitle style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        BOOL newUpnp = ![currUpnp isEqualToString:@"true"];
        NSString *valStr = newUpnp ? @"true" : @"false";
        SetConfigValue(@"network", @"allow_upnp", valStr, NO);
        setenv("HALO_NET_ALLOW_UPNP", [valStr UTF8String], 1);
        [self showNotice:[NSString stringWithFormat:@"Reenvío UPnP: %@.", newUpnp ? @"Activado" : @"Desactivado"]];
    }]];

    // 6. Toggle Netcode
    NSString *toggleNetcodeTitle = [currNetcode isEqualToString:@"distributed"] ? @"Cambiar a Netcode Clásico (lockstep)" : @"Cambiar a Netcode Moderno (distributed)";
    [alert addAction:[UIAlertAction actionWithTitle:toggleNetcodeTitle style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *newNetcode = [currNetcode isEqualToString:@"distributed"] ? @"lockstep" : @"distributed";
        SetConfigValue(@"network", @"netcode", newNetcode, YES);
        setenv("HALO_NETCODE", [newNetcode UTF8String], 1);
        [self showNotice:[NSString stringWithFormat:@"Netcode establecido en: %@.", newNetcode]];
    }]];

    // 7. Multiplayer Guide
    [alert addAction:[UIAlertAction actionWithTitle:@"ℹ️ Cómo Jugar en Multijugador" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *guide =
            @"1. Red Local (LAN / Wi-Fi):\n"
            @"Cualquier dispositivo (iPhone, iPad, Apple TV o Mac/PC) conectado a la misma red Wi-Fi se detecta automáticamente.\n"
            @"Un jugador entra a Multijugador -> System Link y selecciona 'Crear Partida'. Los demás verán la partida en la lista y podrán unirse al instante.\n"
            @"Si tu router bloquea emisiones Wi-Fi, usa 'Buscar por IP Directa en LAN'.\n\n"
            @"2. En Línea (Internet):\n"
            @"Al crear una partida en System Link, se genera un enlace (halo://join/...). Cópialo con 'Copiar / Ver Mi Enlace' y pásalo a tus amigos para que se unan con 'Unirse por Enlace'.";
        UIAlertController *guideAlert = [UIAlertController alertControllerWithTitle:@"Guía Multijugador" message:guide preferredStyle:UIAlertControllerStyleAlert];
        [guideAlert addAction:[UIAlertAction actionWithTitle:@"Entendido" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
            [self dismissMenu];
        }]];
        [self presentMenuAlert:guideAlert fromVC:top];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"Cancelar" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [self dismissMenu];
    }]];

    [self presentMenuAlert:alert fromVC:top];
}

- (void)showVolumeMenu {
    UIViewController *top = [self topViewController];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"🔊 Volumen de Audio"
                                                                   message:@"Ajusta el volumen maestro en tiempo real:"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    NSArray *vols = @[
        @{@"title": @"100% (Máximo)", @"val": @"1.0"},
        @{@"title": @"75%", @"val": @"0.75"},
        @{@"title": @"50%", @"val": @"0.50"},
        @{@"title": @"25%", @"val": @"0.25"},
        @{@"title": @"Silencio (0%)", @"val": @"0.0"}
    ];

    for (NSDictionary *item in vols) {
        [alert addAction:[UIAlertAction actionWithTitle:item[@"title"] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
            NSString *val = item[@"val"];
            SetConfigValue(@"audio", @"volume", val, NO);
            setenv("HALO_VOLUME", [val UTF8String], 1);
            mac_host_set_volume([val floatValue]);
            [self showNotice:[NSString stringWithFormat:@"Volumen establecido en: %@%%.", @([val floatValue] * 100)]];
        }]];
    }
    [alert addAction:[UIAlertAction actionWithTitle:@"Cancelar" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [self dismissMenu];
    }]];
    [self presentMenuAlert:alert fromVC:top];
}

- (void)showFpsMenu {
    UIViewController *top = [self topViewController];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"🎯 Tasa de Cuadros (FPS)"
                                                                   message:@"Interpolación de animación y cámara entre ticks:"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addAction:[UIAlertAction actionWithTitle:@"60 FPS (Interpolación Suave • Recomendado)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        SetConfigValue(@"display", @"interpolation", @"true", NO);
        setenv("HALO_INTERPOLATION", "true", 1);
        [self showNotice:@"Interpolación 60 FPS activada."];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"30 FPS (Xbox Clásico)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        SetConfigValue(@"display", @"interpolation", @"false", NO);
        setenv("HALO_INTERPOLATION", "false", 1);
        [self showNotice:@"Modo 30 FPS Xbox Clásico seleccionado."];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"Cancelar" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [self dismissMenu];
    }]];
    [self presentMenuAlert:alert fromVC:top];
}

#if TARGET_OS_IPHONE && !TARGET_OS_TV
- (void)showVirtualControlsMenu {
    UIViewController *top = [self topViewController];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"🕹 Controles Virtuales (Warzone HUD)"
                                                                   message:@"Configuración del esquema táctil en pantalla:"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    [alert addAction:[UIAlertAction actionWithTitle:@"Automático (Ocultar si hay control conectado)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        s_virtualControllerMode = @"auto";
        SetConfigValue(@"input", @"virtual_controls", @"auto", YES);
        UpdateVirtualControllerVisibility();
        [self showNotice:@"Modo Automático activado."];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"Siempre Visibles" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        s_virtualControllerMode = @"always";
        SetConfigValue(@"input", @"virtual_controls", @"always", YES);
        UpdateVirtualControllerVisibility();
        [self showNotice:@"Controles táctiles siempre visibles."];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"Ocultar Controles Táctiles" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        s_virtualControllerMode = @"hidden";
        SetConfigValue(@"input", @"virtual_controls", @"hidden", YES);
        UpdateVirtualControllerVisibility();
        [self showNotice:@"Controles táctiles ocultos."];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"Alternar Botón de Disparo Izquierdo" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        HaloTouchHUDView *hud = [HaloTouchHUDView sharedHUD];
        hud.showLeftFireButton = !hud.showLeftFireButton;
        [self showNotice:hud.showLeftFireButton ? @"Botón de disparo izquierdo activado." : @"Botón de disparo izquierdo oculto."];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"Alternar Invertir Mirilla Y" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        HaloTouchHUDView *hud = [HaloTouchHUDView sharedHUD];
        hud.invertLookY = !hud.invertLookY;
        [self showNotice:hud.invertLookY ? @"Invertir eje Y activado." : @"Invertir eje Y desactivado (Normal)."];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"Opacidad del HUD (60% / 80% / 100%)" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        HaloTouchHUDView *hud = [HaloTouchHUDView sharedHUD];
        if (hud.hudOpacity > 0.85) hud.hudOpacity = 0.50;
        else if (hud.hudOpacity > 0.65) hud.hudOpacity = 1.0;
        else hud.hudOpacity = 0.75;
        [self showNotice:[NSString stringWithFormat:@"Opacidad del HUD: %.0f%%.", hud.hudOpacity * 100.0]];
    }]];

    [alert addAction:[UIAlertAction actionWithTitle:@"Cancelar" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [self dismissMenu];
    }]];
    [self presentMenuAlert:alert fromVC:top];
}
#endif

- (void)showSensitivityMenu {
    UIViewController *top = [self topViewController];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"🎮 Sensibilidad de Mirilla"
                                                                   message:@"Velocidad de giro al apuntar:"
                                                            preferredStyle:UIAlertControllerStyleAlert];

    NSArray *sens = @[
        @{@"title": @"0.5x (Baja / Precisión)", @"val": @"0.5"},
        @{@"title": @"0.75x (Moderada)", @"val": @"0.75"},
        @{@"title": @"1.0x (Normal • Predeterminada)", @"val": @"1.0"},
        @{@"title": @"1.25x (Dinámica)", @"val": @"1.25"},
        @{@"title": @"1.5x (Rápida)", @"val": @"1.5"},
        @{@"title": @"2.0x (Muy Rápida)", @"val": @"2.0"}
    ];

    for (NSDictionary *item in sens) {
        [alert addAction:[UIAlertAction actionWithTitle:item[@"title"] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
            NSString *val = item[@"val"];
            SetConfigValue(@"input", @"mouse_sensitivity", val, NO);
            setenv("HALO_MOUSE_SENSITIVITY", [val UTF8String], 1);
#if TARGET_OS_IPHONE && !TARGET_OS_TV
            [HaloTouchHUDView sharedHUD].lookSensitivity = [val doubleValue];
#endif
            [self showNotice:[NSString stringWithFormat:@"Sensibilidad configurada en %@x.", val]];
        }]];
    }
    [alert addAction:[UIAlertAction actionWithTitle:@"Cancelar" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        [self dismissMenu];
    }]];
    [self presentMenuAlert:alert fromVC:top];
}

- (void)showSystemInfo {
    UIViewController *top = [self topViewController];
    UIScreen *screen = [UIScreen mainScreen];
    CGRect b = screen.bounds;
    CGFloat s = screen.scale;
    NSInteger w = (NSInteger)(b.size.width * s + 0.5);
    NSInteger h = (NSInteger)(b.size.height * s + 0.5);

    NSString *platformName = @"iOS";
#if TARGET_OS_TV
    platformName = @"tvOS (Apple TV)";
#elif TARGET_OS_IPHONE
    platformName = (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad) ? @"iPadOS" : @"iOS (iPhone)";
#endif

    NSString *info = [NSString stringWithFormat:
        @"Plataforma: %@\n"
        @"Resolución Nativa: %ldx%ld (Escala: %.1fx)\n"
        @"Resolución Port: %@\n"
        @"Escala de Render: %@\n"
        @"Modo Red: %@ (UPnP: %@)\n"
        @"Interpolación: %@\n"
        @"Volumen Activo: %@\n"
        @"Guardado: %@",
        platformName, (long)w, (long)h, s,
        GetConfigValue(@"resolution") ?: @"native",
        GetConfigValue(@"render_scale") ?: @"1.0",
        ([GetConfigValue(@"online") isEqualToString:@"true"]) ? @"Online" : @"LAN",
        GetConfigValue(@"allow_upnp") ?: @"true",
        GetConfigValue(@"interpolation") ?: @"true",
        GetConfigValue(@"volume") ?: @"1.0",
        s_saveRootPath ?: @"N/A"];

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"ℹ️ Halo Combat Evolved Port" message:info preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"Entendido" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        [self dismissMenu];
    }]];
    [self presentMenuAlert:alert fromVC:top];
}

@end

// ============================================================================
// Halo Apple Launch Entry Point
// ============================================================================

int HaloAppleLaunch(int argc, char **argv)
{
    @autoreleasepool {
        NSBundle *bundle = [NSBundle mainBundle];
        NSString *bundlePath = [bundle bundlePath];
        NSString *resourcePath = [bundle resourcePath];

        // 1. Locate GameData
        NSString *dataRoot = [bundle pathForResource:@"GameData" ofType:nil];
        if (!dataRoot) {
            dataRoot = [resourcePath stringByAppendingPathComponent:@"GameData"];
        }

        // 2. Locate halo_guest.elf
        NSString *elfPath = [bundle pathForResource:@"halo_guest" ofType:@"elf"];
        if (!elfPath) {
            elfPath = [resourcePath stringByAppendingPathComponent:@"halo_guest.elf"];
        }

        // 3. Writable directory for saves and configs
        NSString *saveRoot = nil;
#if TARGET_OS_TV
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
        saveRoot = [[paths firstObject] stringByAppendingPathComponent:@"HaloCE/save"];
#else
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSApplicationSupportDirectory, NSUserDomainMask, YES);
        saveRoot = [[paths firstObject] stringByAppendingPathComponent:@"Halo Combat Evolved/save"];
#endif

        EnsureDirectory(saveRoot);
        s_saveRootPath = saveRoot;
        SetupStarterConfig(saveRoot);

        // 4. Read configured preferences or use defaults
        NSString *savedRes = GetConfigValue(@"resolution") ?: @"native";
        NSString *savedScale = GetConfigValue(@"render_scale") ?: @"1.0";
        NSString *savedVol = GetConfigValue(@"volume") ?: @"1.0";
        NSString *savedInterp = GetConfigValue(@"interpolation") ?: @"true";
        NSString *savedSens = GetConfigValue(@"mouse_sensitivity") ?: @"1.0";
        NSString *savedOnline = GetConfigValue(@"online") ?: @"true";
        NSString *savedUpnp = GetConfigValue(@"allow_upnp") ?: @"true";
        NSString *savedNetcode = GetConfigValue(@"netcode") ?: @"distributed";

        // 5. Configure environment
        setenv("HALO_DATA_ROOT", [dataRoot fileSystemRepresentation], 1);
        setenv("HALO_SAVE_ROOT", [saveRoot fileSystemRepresentation], 1);
        setenv("HALO_CONFIG_ROOT", [saveRoot fileSystemRepresentation], 1);
        setenv("HALO_GUEST_ELF", [elfPath fileSystemRepresentation], 1);
        setenv("HALO_FULLSCREEN", "true", 1);
        setenv("HALO_RESOLUTION", [savedRes UTF8String], 1);
        setenv("HALO_RENDER_SCALE", [savedScale UTF8String], 1);
        setenv("HALO_AUDIO_ENABLE", "1", 1);
        setenv("HALO_VOLUME", [savedVol UTF8String], 1);
        setenv("HALO_INTERPOLATION", [savedInterp UTF8String], 1);
        setenv("HALO_MOUSE_SENSITIVITY", [savedSens UTF8String], 1);
        setenv("HALO_NET_ONLINE", [savedOnline UTF8String], 1);
        setenv("HALO_NET_ALLOW_UPNP", [savedUpnp UTF8String], 1);
        setenv("HALO_NETCODE", [savedNetcode UTF8String], 1);
        setenv("HALO_NET_JOIN_FROM_CLIPBOARD", "true", 1);
        setenv("HALO_AUDIO_EVIDENCE", "1", 1);
        setenv("HALO_NO_FFMPEG", "1", 1);
        setenv("HALO_SDL_TEST_SKIP_AT_MS", "3000", 1);
        setenv("HALO_SDL_SWAP_TRACE", "1", 1);

#if TARGET_OS_IPHONE || TARGET_OS_TV
        @try {
            AVAudioSession *session = [AVAudioSession sharedInstance];
            NSError *sessionErr = nil;
            [session setCategory:AVAudioSessionCategoryPlayback error:&sessionErr];
            if (sessionErr) {
                NSLog(@"[HaloApple] setCategory error: %@", sessionErr);
            }
            [session setActive:YES error:&sessionErr];
            if (sessionErr) {
                NSLog(@"[HaloApple] setActive error: %@", sessionErr);
            } else {
                NSLog(@"[HaloApple] AVAudioSession activated for Playback (outputVolume: %.2f)", session.outputVolume);
            }
        } @catch (id ex) {
            NSLog(@"[HaloApple] AVAudioSession exception: %@", ex);
        }
#endif

#if TARGET_OS_IPHONE && !TARGET_OS_TV
        SetupVirtualController();
#endif

        [HaloSettingsOverlay install];
        [[HaloBonjourManager shared] start];

        NSLog(@"[HaloApple] Initializing on Apple Platform:");
        NSLog(@"[HaloApple] Bundle:     %@", bundlePath);
        NSLog(@"[HaloApple] Data:       %@", dataRoot);
        NSLog(@"[HaloApple] ELF:        %@", elfPath);
        NSLog(@"[HaloApple] Save:       %@", saveRoot);
        NSLog(@"[HaloApple] Resolution: %@", savedRes);
        NSLog(@"[HaloApple] Scale:      %@", savedScale);
        NSLog(@"[HaloApple] Volume:     %@", savedVol);
        NSLog(@"[HaloApple] Online:     %@", savedOnline);
        NSLog(@"[HaloApple] Netcode:    %@", savedNetcode);

        return halo_main(argc, argv);
    }
}
