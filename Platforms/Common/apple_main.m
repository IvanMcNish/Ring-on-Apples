#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <execinfo.h>
#import <dlfcn.h>
#import <unistd.h>

#define SDL_MAIN_HANDLED 1
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include "HaloAppleLauncher.h"

void exit(int status)
{
    void *callstack[128];
    int frames = backtrace(callstack, 128);
    char **strs = backtrace_symbols(callstack, frames);
    NSLog(@"[HaloExitDebug] exit(%d) called! Callstack depth: %d", status, frames);
    for (int i = 0; i < frames; ++i) {
        NSLog(@"[HaloExitDebug] [%d] %s", i, strs[i]);
    }
    free(strs);
    _exit(status);
}

void _exit(int status)
{
    void *callstack[128];
    int frames = backtrace(callstack, 128);
    char **strs = backtrace_symbols(callstack, frames);
    NSLog(@"[HaloExitDebug] _exit(%d) called! Callstack depth: %d", status, frames);
    for (int i = 0; i < frames; ++i) {
        NSLog(@"[HaloExitDebug] [%d] %s", i, strs[i]);
    }
    free(strs);

    __asm__ volatile (
        "mov x0, %0\n"
        "mov x16, #1\n"
        "svc #0x80\n"
        :
        : "r"((int64_t)status)
        : "x0", "x16"
    );
}

static void halo_atexit_handler(void)
{
    void *callstack[128];
    int frames = backtrace(callstack, 128);
    char **strs = backtrace_symbols(callstack, frames);
    NSLog(@"[HaloExitDebug] atexit handler invoked! Depth: %d", frames);
    for (int i = 0; i < frames; ++i) {
        NSLog(@"[HaloExitDebug] [%d] %s", i, strs[i]);
    }
    free(strs);
}

static void halo_signal_handler(int sig)
{
    void *callstack[128];
    int frames = backtrace(callstack, 128);
    char **strs = backtrace_symbols(callstack, frames);
    NSLog(@"[HaloCrashDebug] Signal %d received! Callstack depth: %d", sig, frames);
    for (int i = 0; i < frames; ++i) {
        NSLog(@"[HaloCrashDebug] [%d] %s", i, strs[i]);
    }
    free(strs);
    _exit(128 + sig);
}

int main(int argc, char *argv[])
{
    signal(SIGSEGV, halo_signal_handler);
    signal(SIGBUS, halo_signal_handler);
    signal(SIGILL, halo_signal_handler);
    signal(SIGABRT, halo_signal_handler);
    atexit(halo_atexit_handler);

#if TARGET_OS_TV
    void *gles_lib = dlopen("/System/Library/Frameworks/OpenGLES.framework/OpenGLES", RTLD_NOW);
    NSLog(@"[HaloApple] dlopen OpenGLES on tvOS: %p (%s)", gles_lib, dlerror());
    Class eagl_cls = NSClassFromString(@"EAGLContext");
    Class layer_cls = NSClassFromString(@"CAEAGLLayer");
    NSLog(@"[HaloApple] EAGLContext class: %@, CAEAGLLayer class: %@", eagl_cls, layer_cls);
    void *glClear_sym = dlsym(gles_lib, "glClear");
    NSLog(@"[HaloApple] dlsym glClear: %p", glClear_sym);
#endif

    NSLog(@"[HaloApple] main() entered, calling SDL_RunApp");
    int res = SDL_RunApp(argc, argv, HaloAppleLaunch, NULL);
    NSLog(@"[HaloApple] SDL_RunApp returned: %d", res);
    return res;
}

