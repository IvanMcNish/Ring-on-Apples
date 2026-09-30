#ifndef HALO_APPLE_LAUNCHER_H
#define HALO_APPLE_LAUNCHER_H

#include <TargetConditionals.h>

#if TARGET_OS_TV
#import <UIKit/UIKit.h>
@interface HaloTVAppDelegate : UIResponder <UIApplicationDelegate>
@property (strong, nonatomic) UIWindow *window;
@end
#endif

#ifdef __cplusplus
extern "C" {
#endif

int HaloAppleLaunch(int argc, char **argv);

#ifdef __cplusplus
}
#endif

#endif /* HALO_APPLE_LAUNCHER_H */
