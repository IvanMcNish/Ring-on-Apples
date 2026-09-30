//
// HaloTouchHUDView.h
// Halo Combat Evolved - Apple Platforms
//
// Modern Sci-Fi Cyan HUD & Touch Controls matching exact layout specifications.
//

#import <TargetConditionals.h>

#if TARGET_OS_IPHONE && !TARGET_OS_TV

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HaloTouchHUDView : UIView

+ (instancetype)sharedHUD;
+ (void)attachToViewController:(UIViewController *)vc;
+ (void)detach;

@property (nonatomic, assign) BOOL isMenuMode;
@property (nonatomic, assign) CGFloat hudOpacity;
@property (nonatomic, assign) CGFloat lookSensitivity;
@property (nonatomic, assign) BOOL invertLookY;
@property (nonatomic, assign) BOOL showLeftFireButton;

- (void)updateLayoutForBounds:(CGRect)bounds;
- (void)checkGameStateAndVisibility;

@end

NS_ASSUME_NONNULL_END

#endif // TARGET_OS_IPHONE && !TARGET_OS_TV
