//
// HaloTouchHUDView.m
// Halo Combat Evolved - Apple Platforms
//
// Modern Sci-Fi Cyan HUD & Touch Controls matching exact layout specifications:
// - Left: Frag Grenade, Swap Grenade, Move Joystick, Crouch.
// - Right: Primary Shoots (Upper & Mid), Melee, Reload, Jump, Zoom, Weapon Swap, Flashlight.
// - Top Center: BACK & START Buttons (Available in both Menu & Gameplay).
// - Menu Mode: Move Joystick (Left) + ABXY Diamond Cruceta (Right), passing other touches through.
// - Gameplay Mode: Seamless 1:1 direct mouse look & ultra-responsive rapid fire.
//

#import <TargetConditionals.h>

#if TARGET_OS_IPHONE && !TARGET_OS_TV

#import "HaloTouchHUDView.h"
#import "host_sdl.h"
#import <SDL3/SDL_gamepad.h>
#import <SDL3/SDL_scancode.h>
#import <AudioToolbox/AudioToolbox.h>
#import <QuartzCore/QuartzCore.h>

typedef NS_ENUM(NSInteger, HaloCyanIconType) {
    HALO_ICON_GRENADE,
    HALO_ICON_GRENADE_SWAP,
    HALO_ICON_CROUCH,
    HALO_ICON_SHOOT,
    HALO_ICON_MELEE,
    HALO_ICON_RELOAD,
    HALO_ICON_JUMP,
    HALO_ICON_ZOOM,
    HALO_ICON_WEAPON,
    HALO_ICON_FLASHLIGHT,
    HALO_ICON_LETTER,
    HALO_ICON_START,
    HALO_ICON_BACK
};

// ============================================================================
// HaloCyanControl (Vector-Drawn Sci-Fi Button with 0ms Touch Response)
// ============================================================================

@interface HaloCyanControl : UIControl
@property (nonatomic, assign) HaloCyanIconType iconType;
@property (nonatomic, copy) NSString *labelPrimary;
@property (nonatomic, copy, nullable) NSString *labelSecondary;
@property (nonatomic, copy, nullable) NSString *letterText;
@property (nonatomic, strong, nullable) UIColor *customAccentColor;
@property (nonatomic, assign) BOOL isPressed;
@property (nonatomic, assign) BOOL isToggled;
@property (nonatomic, assign) BOOL supportsToggle;
@end

@implementation HaloCyanControl

- (instancetype)initWithFrame:(CGRect)frame
                     iconType:(HaloCyanIconType)iconType
                 primaryLabel:(NSString *)primary
               secondaryLabel:(nullable NSString *)secondary
{
    self = [super initWithFrame:frame];
    if (self) {
        _iconType = iconType;
        _labelPrimary = [primary copy];
        _labelSecondary = [secondary copy];
        self.backgroundColor = [UIColor clearColor];
        self.contentMode = UIViewContentModeRedraw;
        self.exclusiveTouch = NO;
        self.multipleTouchEnabled = YES;

        [self addTarget:self action:@selector(handleInternalDown) forControlEvents:UIControlEventTouchDown];
        [self addTarget:self action:@selector(handleInternalUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    }
    return self;
}

- (void)handleInternalDown
{
    _isPressed = YES;
    if (_supportsToggle) {
        _isToggled = !_isToggled;
    }
    AudioServicesPlaySystemSound(1519); // Light crisp haptic click
    [self setNeedsDisplay];

    [UIView animateWithDuration:0.06 animations:^{
        self.transform = CGAffineTransformMakeScale(0.92, 0.92);
    }];
}

- (void)handleInternalUp
{
    _isPressed = NO;
    [self setNeedsDisplay];

    [UIView animateWithDuration:0.10 animations:^{
        self.transform = CGAffineTransformIdentity;
    }];
}

// Direct touch overrides for immediate 0ms response on iPhone / iPad (Rapid Fire support)
- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [super touchesBegan:touches withEvent:event];
    [self handleInternalDown];
    [self sendActionsForControlEvents:UIControlEventTouchDown];
}

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [super touchesEnded:touches withEvent:event];
    [self handleInternalUp];
    [self sendActionsForControlEvents:UIControlEventTouchUpInside];
}

- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [super touchesCancelled:touches withEvent:event];
    [self handleInternalUp];
    [self sendActionsForControlEvents:UIControlEventTouchCancel];
}

- (void)drawRect:(CGRect)rect
{
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    if (!ctx) return;

    CGFloat w = rect.size.width;
    CGFloat h = rect.size.height;
    CGFloat diameter = (_labelPrimary.length > 0) ? MIN(w, h * 0.78) : MIN(w, h);
    CGRect circleRect = CGRectMake((w - diameter) / 2.0, 2.0, diameter, diameter);

    UIColor *cyanBright = _customAccentColor ?: [UIColor colorWithRed:0.0 green:0.95 blue:1.0 alpha:1.0];
    UIColor *cyanGlow = [cyanBright colorWithAlphaComponent:0.45];
    UIColor *fillColor = _isPressed ? [cyanBright colorWithAlphaComponent:0.38] :
                         (_isToggled ? [cyanBright colorWithAlphaComponent:0.28] :
                                       [UIColor colorWithRed:0.04 green:0.09 blue:0.14 alpha:0.72]);

    // 1. Fill Circle
    CGContextSetFillColorWithColor(ctx, fillColor.CGColor);
    CGContextFillEllipseInRect(ctx, circleRect);

    // 2. Outer Glow Ring
    CGContextSetShadowWithColor(ctx, CGSizeZero, 7.0, cyanGlow.CGColor);
    CGContextSetStrokeColorWithColor(ctx, cyanBright.CGColor);
    CGContextSetLineWidth(ctx, 1.8);
    CGContextStrokeEllipseInRect(ctx, CGRectInset(circleRect, 1.0, 1.0));
    CGContextSetShadowWithColor(ctx, CGSizeZero, 0, NULL);

    // 3. Inner Decorative Ring
    CGContextSetStrokeColorWithColor(ctx, [cyanBright colorWithAlphaComponent:0.4].CGColor);
    CGContextSetLineWidth(ctx, 1.0);
    CGContextStrokeEllipseInRect(ctx, CGRectInset(circleRect, 4.0, 4.0));

    // 4. Draw Specific Vector Icon
    CGContextSaveGState(ctx);
    CGContextSetStrokeColorWithColor(ctx, cyanBright.CGColor);
    CGContextSetFillColorWithColor(ctx, cyanBright.CGColor);
    CGContextSetLineWidth(ctx, 1.8);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);

    CGPoint center = CGPointMake(CGRectGetMidX(circleRect), CGRectGetMidY(circleRect));
    CGFloat r = diameter / 2.0;

    switch (_iconType) {
        case HALO_ICON_GRENADE: {
            // Frag Grenade Body
            CGRect gBody = CGRectMake(center.x - r * 0.32, center.y - r * 0.22, r * 0.64, r * 0.72);
            UIBezierPath *path = [UIBezierPath bezierPathWithRoundedRect:gBody cornerRadius:r * 0.25];
            [path stroke];

            // Grid lines on grenade
            CGContextMoveToPoint(ctx, gBody.origin.x, center.y + r * 0.04);
            CGContextAddLineToPoint(ctx, CGRectGetMaxX(gBody), center.y + r * 0.04);
            CGContextMoveToPoint(ctx, gBody.origin.x, center.y + r * 0.26);
            CGContextAddLineToPoint(ctx, CGRectGetMaxX(gBody), center.y + r * 0.26);
            CGContextMoveToPoint(ctx, center.x, gBody.origin.y);
            CGContextAddLineToPoint(ctx, center.x, CGRectGetMaxY(gBody));
            CGContextStrokePath(ctx);

            // Grenade Cap / Fuse
            CGRect gCap = CGRectMake(center.x - r * 0.16, center.y - r * 0.44, r * 0.32, r * 0.20);
            CGContextStrokeRect(ctx, gCap);

            // Pull Ring Handle
            CGContextStrokeEllipseInRect(ctx, CGRectMake(center.x - r * 0.44, center.y - r * 0.48, r * 0.26, r * 0.26));
            break;
        }

        case HALO_ICON_GRENADE_SWAP: {
            // Dual circular curved swap arrows
            CGFloat loopR = r * 0.48;
            UIBezierPath *arc1 = [UIBezierPath bezierPathWithArcCenter:center radius:loopR startAngle:0.2 endAngle:M_PI - 0.3 clockwise:YES];
            [arc1 stroke];
            UIBezierPath *arc2 = [UIBezierPath bezierPathWithArcCenter:center radius:loopR startAngle:M_PI + 0.2 endAngle:2.0 * M_PI - 0.3 clockwise:YES];
            [arc2 stroke];

            // Arrowheads
            CGPoint p1 = CGPointMake(center.x + cosf(M_PI - 0.3) * loopR, center.y + sinf(M_PI - 0.3) * loopR);
            UIBezierPath *arr1 = [UIBezierPath bezierPath];
            [arr1 moveToPoint:CGPointMake(p1.x - 5.0, p1.y - 4.0)];
            [arr1 addLineToPoint:p1];
            [arr1 addLineToPoint:CGPointMake(p1.x + 3.0, p1.y - 6.0)];
            [arr1 stroke];

            CGPoint p2 = CGPointMake(center.x + cosf(2.0 * M_PI - 0.3) * loopR, center.y + sinf(2.0 * M_PI - 0.3) * loopR);
            UIBezierPath *arr2 = [UIBezierPath bezierPath];
            [arr2 moveToPoint:CGPointMake(p2.x + 5.0, p2.y + 4.0)];
            [arr2 addLineToPoint:p2];
            [arr2 addLineToPoint:CGPointMake(p2.x - 3.0, p2.y + 6.0)];
            [arr2 stroke];

            // Center Plasma Grenade oval dot
            CGContextFillEllipseInRect(ctx, CGRectMake(center.x - r * 0.20, center.y - r * 0.25, r * 0.40, r * 0.50));
            break;
        }

        case HALO_ICON_CROUCH: {
            // Kneeling Soldier Silhouette
            CGContextFillEllipseInRect(ctx, CGRectMake(center.x - r * 0.14, center.y - r * 0.52, r * 0.28, r * 0.28));

            UIBezierPath *soldier = [UIBezierPath bezierPath];
            [soldier moveToPoint:CGPointMake(center.x - r * 0.08, center.y - r * 0.20)];
            [soldier addLineToPoint:CGPointMake(center.x + r * 0.16, center.y - r * 0.15)];
            [soldier addLineToPoint:CGPointMake(center.x + r * 0.10, center.y + r * 0.15)];
            [soldier addLineToPoint:CGPointMake(center.x + r * 0.38, center.y + r * 0.20)];
            [soldier addLineToPoint:CGPointMake(center.x + r * 0.35, center.y + r * 0.48)];
            [soldier addLineToPoint:CGPointMake(center.x + r * 0.20, center.y + r * 0.48)];
            [soldier addLineToPoint:CGPointMake(center.x - r * 0.15, center.y + r * 0.48)];
            [soldier addLineToPoint:CGPointMake(center.x - r * 0.10, center.y + r * 0.15)];
            [soldier closePath];
            [soldier fill];
            break;
        }

        case HALO_ICON_SHOOT: {
            // Targeting Reticle with 3 Bullets
            CGFloat crossR = r * 0.55;
            CGContextStrokeEllipseInRect(ctx, CGRectMake(center.x - crossR, center.y - crossR, crossR * 2.0, crossR * 2.0));

            // 4 Crosshair ticks
            CGContextMoveToPoint(ctx, center.x - crossR - 5.0, center.y);
            CGContextAddLineToPoint(ctx, center.x - crossR + 6.0, center.y);
            CGContextMoveToPoint(ctx, center.x + crossR + 5.0, center.y);
            CGContextAddLineToPoint(ctx, center.x + crossR - 6.0, center.y);
            CGContextMoveToPoint(ctx, center.x, center.y - crossR - 5.0);
            CGContextAddLineToPoint(ctx, center.x, center.y - crossR + 6.0);
            CGContextMoveToPoint(ctx, center.x, center.y + crossR + 5.0);
            CGContextAddLineToPoint(ctx, center.x, center.y + crossR - 6.0);
            CGContextStrokePath(ctx);

            // 3 Vertical Bullets in Center
            CGFloat bW = crossR * 0.24;
            CGFloat bH = crossR * 0.70;
            CGFloat bSpacing = crossR * 0.42;

            for (int i = -1; i <= 1; i++) {
                CGFloat bx = center.x + i * bSpacing - bW / 2.0;
                CGFloat by = center.y - bH / 2.0;
                CGRect bRect = CGRectMake(bx, by + bW / 2.0, bW, bH - bW / 2.0);
                CGContextFillRect(ctx, bRect);

                UIBezierPath *tip = [UIBezierPath bezierPath];
                [tip moveToPoint:CGPointMake(bx, by + bW / 2.0)];
                [tip addQuadCurveToPoint:CGPointMake(bx + bW, by + bW / 2.0) controlPoint:CGPointMake(bx + bW / 2.0, by - 3.0)];
                [tip closePath];
                [tip fill];
            }
            break;
        }

        case HALO_ICON_MELEE: {
            // Clenched Fist Icon
            UIBezierPath *fist = [UIBezierPath bezierPath];
            [fist moveToPoint:CGPointMake(center.x - r * 0.22, center.y + r * 0.45)];
            [fist addLineToPoint:CGPointMake(center.x - r * 0.32, center.y + r * 0.10)];
            [fist addLineToPoint:CGPointMake(center.x - r * 0.38, center.y - r * 0.15)];
            [fist addLineToPoint:CGPointMake(center.x - r * 0.20, center.y - r * 0.42)];
            [fist addLineToPoint:CGPointMake(center.x + r * 0.22, center.y - r * 0.36)];
            [fist addLineToPoint:CGPointMake(center.x + r * 0.36, center.y - r * 0.05)];
            [fist addLineToPoint:CGPointMake(center.x + r * 0.15, center.y + r * 0.45)];
            [fist closePath];
            [fist fill];

            CGContextSetStrokeColorWithColor(ctx, [UIColor colorWithRed:0.04 green:0.09 blue:0.14 alpha:1.0].CGColor);
            CGContextSetLineWidth(ctx, 1.6);
            CGContextMoveToPoint(ctx, center.x - r * 0.15, center.y - r * 0.30);
            CGContextAddLineToPoint(ctx, center.x - r * 0.10, center.y + r * 0.10);
            CGContextMoveToPoint(ctx, center.x + r * 0.02, center.y - r * 0.28);
            CGContextAddLineToPoint(ctx, center.x + r * 0.05, center.y + r * 0.12);
            CGContextStrokePath(ctx);
            break;
        }

        case HALO_ICON_RELOAD: {
            // Circular Sync Arrows + Center Gear
            CGFloat loopR = r * 0.46;
            UIBezierPath *arc1 = [UIBezierPath bezierPathWithArcCenter:center radius:loopR startAngle:-M_PI_4 endAngle:3.0 * M_PI_4 clockwise:YES];
            [arc1 stroke];
            UIBezierPath *arc2 = [UIBezierPath bezierPathWithArcCenter:center radius:loopR startAngle:3.0 * M_PI_4 + 0.4 endAngle:7.0 * M_PI_4 clockwise:YES];
            [arc2 stroke];

            CGPoint p1 = CGPointMake(center.x + cosf(3.0 * M_PI_4) * loopR, center.y + sinf(3.0 * M_PI_4) * loopR);
            UIBezierPath *arrow1 = [UIBezierPath bezierPath];
            [arrow1 moveToPoint:CGPointMake(p1.x - 7.0, p1.y - 2.0)];
            [arrow1 addLineToPoint:p1];
            [arrow1 addLineToPoint:CGPointMake(p1.x + 2.0, p1.y + 7.0)];
            [arrow1 stroke];

            CGFloat gearR = r * 0.20;
            CGContextFillEllipseInRect(ctx, CGRectMake(center.x - gearR, center.y - gearR, gearR * 2.0, gearR * 2.0));
            CGContextSetStrokeColorWithColor(ctx, [UIColor colorWithRed:0.04 green:0.09 blue:0.14 alpha:1.0].CGColor);
            CGContextStrokeEllipseInRect(ctx, CGRectMake(center.x - gearR * 0.4, center.y - gearR * 0.4, gearR * 0.8, gearR * 0.8));
            break;
        }

        case HALO_ICON_JUMP: {
            // Bold Upward Arrow
            UIBezierPath *arrow = [UIBezierPath bezierPath];
            [arrow moveToPoint:CGPointMake(center.x, center.y - r * 0.52)];
            [arrow addLineToPoint:CGPointMake(center.x + r * 0.42, center.y - r * 0.05)];
            [arrow addLineToPoint:CGPointMake(center.x + r * 0.18, center.y - r * 0.05)];
            [arrow addLineToPoint:CGPointMake(center.x + r * 0.18, center.y + r * 0.45)];
            [arrow addLineToPoint:CGPointMake(center.x - r * 0.18, center.y + r * 0.45)];
            [arrow addLineToPoint:CGPointMake(center.x - r * 0.18, center.y - r * 0.05)];
            [arrow addLineToPoint:CGPointMake(center.x - r * 0.42, center.y - r * 0.05)];
            [arrow closePath];
            [arrow fill];
            break;
        }

        case HALO_ICON_ZOOM: {
            // Precision Sniper Reticle
            CGFloat scopeR = r * 0.52;
            CGContextStrokeEllipseInRect(ctx, CGRectMake(center.x - scopeR, center.y - scopeR, scopeR * 2.0, scopeR * 2.0));
            CGContextStrokeEllipseInRect(ctx, CGRectMake(center.x - scopeR * 0.45, center.y - scopeR * 0.45, scopeR * 0.9, scopeR * 0.9));

            CGContextMoveToPoint(ctx, center.x - scopeR - 4.0, center.y);
            CGContextAddLineToPoint(ctx, center.x - scopeR * 0.45, center.y);
            CGContextMoveToPoint(ctx, center.x + scopeR * 0.45, center.y);
            CGContextAddLineToPoint(ctx, center.x + scopeR + 4.0, center.y);
            CGContextMoveToPoint(ctx, center.x, center.y - scopeR - 4.0);
            CGContextAddLineToPoint(ctx, center.x, center.y - scopeR * 0.45);
            CGContextMoveToPoint(ctx, center.x, center.y + scopeR * 0.45);
            CGContextAddLineToPoint(ctx, center.x, center.y + scopeR + 4.0);
            CGContextStrokePath(ctx);

            CGContextFillEllipseInRect(ctx, CGRectMake(center.x - 2.0, center.y - 2.0, 4.0, 4.0));
            break;
        }

        case HALO_ICON_WEAPON: {
            // Silhouettes: Assault Rifle (Top) + Handgun (Bottom)
            UIBezierPath *rifle = [UIBezierPath bezierPath];
            CGFloat ry = center.y - r * 0.20;
            [rifle moveToPoint:CGPointMake(center.x - r * 0.48, ry)];
            [rifle addLineToPoint:CGPointMake(center.x + r * 0.38, ry)];
            [rifle addLineToPoint:CGPointMake(center.x + r * 0.38, ry + 4.0)];
            [rifle addLineToPoint:CGPointMake(center.x + r * 0.05, ry + 5.0)];
            [rifle addLineToPoint:CGPointMake(center.x - r * 0.05, ry + 12.0)];
            [rifle addLineToPoint:CGPointMake(center.x - r * 0.15, ry + 12.0)];
            [rifle addLineToPoint:CGPointMake(center.x - r * 0.15, ry + 5.0)];
            [rifle addLineToPoint:CGPointMake(center.x - r * 0.30, ry + 10.0)];
            [rifle addLineToPoint:CGPointMake(center.x - r * 0.40, ry + 8.0)];
            [rifle closePath];
            [rifle fill];

            UIBezierPath *pistol = [UIBezierPath bezierPath];
            CGFloat py = center.y + r * 0.18;
            [pistol moveToPoint:CGPointMake(center.x - r * 0.08, py)];
            [pistol addLineToPoint:CGPointMake(center.x + r * 0.28, py)];
            [pistol addLineToPoint:CGPointMake(center.x + r * 0.28, py + 5.0)];
            [pistol addLineToPoint:CGPointMake(center.x + r * 0.06, py + 5.0)];
            [pistol addLineToPoint:CGPointMake(center.x + r * 0.02, py + 14.0)];
            [pistol addLineToPoint:CGPointMake(center.x - r * 0.10, py + 14.0)];
            [pistol closePath];
            [pistol fill];
            break;
        }

        case HALO_ICON_FLASHLIGHT: {
            // Flashlight + Beam rays
            CGFloat fx = center.x - r * 0.20;
            CGFloat fy = center.y;
            CGRect fBody = CGRectMake(fx - r * 0.25, fy - r * 0.14, r * 0.35, r * 0.28);
            CGContextFillRect(ctx, fBody);
            CGRect fBezel = CGRectMake(fx + r * 0.10, fy - r * 0.22, r * 0.12, r * 0.44);
            CGContextFillRect(ctx, fBezel);

            CGContextMoveToPoint(ctx, fBezel.origin.x + fBezel.size.width + 4.0, fy - r * 0.12);
            CGContextAddLineToPoint(ctx, center.x + r * 0.48, fy - r * 0.38);
            CGContextMoveToPoint(ctx, fBezel.origin.x + fBezel.size.width + 4.0, fy);
            CGContextAddLineToPoint(ctx, center.x + r * 0.52, fy);
            CGContextMoveToPoint(ctx, fBezel.origin.x + fBezel.size.width + 4.0, fy + r * 0.12);
            CGContextAddLineToPoint(ctx, center.x + r * 0.48, fy + r * 0.38);
            CGContextStrokePath(ctx);
            break;
        }

        case HALO_ICON_LETTER: {
            // Large Bold Glowing Letter (A, B, X, Y)
            if (_letterText.length > 0) {
                NSMutableParagraphStyle *style = [[NSMutableParagraphStyle alloc] init];
                style.alignment = NSTextAlignmentCenter;
                UIFont *font = [UIFont systemFontOfSize:r * 0.95 weight:UIFontWeightBlack];
                NSDictionary *attrs = @{
                    NSFontAttributeName: font,
                    NSForegroundColorAttributeName: cyanBright,
                    NSParagraphStyleAttributeName: style
                };
                CGRect textRect = CGRectMake(circleRect.origin.x, center.y - (font.lineHeight / 2.0), circleRect.size.width, font.lineHeight);
                [_letterText drawInRect:textRect withAttributes:attrs];
            }
            break;
        }

        case HALO_ICON_START: {
            // Hamburger / 3 Horizontal Lines
            CGFloat lineW = r * 0.70;
            CGFloat lineSpacing = r * 0.26;
            CGContextSetLineWidth(ctx, 2.2);
            for (int i = -1; i <= 1; i++) {
                CGFloat ly = center.y + i * lineSpacing;
                CGContextMoveToPoint(ctx, center.x - lineW / 2.0, ly);
                CGContextAddLineToPoint(ctx, center.x + lineW / 2.0, ly);
            }
            CGContextStrokePath(ctx);
            break;
        }

        case HALO_ICON_BACK: {
            // Xbox Two Overlapping Rectangles / View Icon
            CGFloat boxW = r * 0.48;
            CGFloat boxH = r * 0.38;
            CGContextSetLineWidth(ctx, 1.6);
            CGRect b1 = CGRectMake(center.x - boxW * 0.75, center.y - boxH * 0.65, boxW, boxH);
            CGContextStrokeRect(ctx, b1);
            CGRect b2 = CGRectMake(center.x - boxW * 0.25, center.y - boxH * 0.25, boxW, boxH);
            CGContextStrokeRect(ctx, b2);
            break;
        }
    }
    CGContextRestoreGState(ctx);

    // 5. Draw Primary & Secondary Cyan Text Labels below circle
    CGFloat labelY = CGRectGetMaxY(circleRect) + 3.0;
    if (_labelPrimary.length > 0) {
        NSMutableParagraphStyle *style = [[NSMutableParagraphStyle alloc] init];
        style.alignment = NSTextAlignmentCenter;
        NSDictionary *attrs = @{
            NSFontAttributeName: [UIFont systemFontOfSize:MAX(9.0, diameter * 0.155) weight:UIFontWeightHeavy],
            NSForegroundColorAttributeName: cyanBright,
            NSParagraphStyleAttributeName: style
        };
        CGRect textRect = CGRectMake(0, labelY, w, 13.0);
        [_labelPrimary drawInRect:textRect withAttributes:attrs];
    }

    if (_labelSecondary.length > 0) {
        NSMutableParagraphStyle *style = [[NSMutableParagraphStyle alloc] init];
        style.alignment = NSTextAlignmentCenter;
        NSDictionary *attrs = @{
            NSFontAttributeName: [UIFont systemFontOfSize:MAX(8.0, diameter * 0.13) weight:UIFontWeightBold],
            NSForegroundColorAttributeName: [cyanBright colorWithAlphaComponent:0.75],
            NSParagraphStyleAttributeName: style
        };
        CGRect textRect = CGRectMake(0, labelY + 12.0, w, 11.0);
        [_labelSecondary drawInRect:textRect withAttributes:attrs];
    }
}

@end

// ============================================================================
// HaloMoveJoystick (Sci-Fi Segmented D-Pad / Move Stick - Clean Polished Vector)
// ============================================================================

@interface HaloMoveJoystick : UIView
@property (nonatomic, strong) UIView *thumbKnob;
@property (nonatomic, assign) CGPoint baseCenter;
@property (nonatomic, assign) CGFloat maxRadius;
@property (nonatomic, assign) BOOL isTracking;
@property (nonatomic, strong, nullable) UITouch *activeTouch;
@property (nonatomic, strong) UILabel *labelMove;
@end

@implementation HaloMoveJoystick

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor clearColor];
        self.contentMode = UIViewContentModeRedraw;
        _maxRadius = frame.size.width * 0.38;

        CGFloat knobSize = frame.size.width * 0.40;
        _thumbKnob = [[UIView alloc] initWithFrame:CGRectMake(0, 0, knobSize, knobSize)];
        _thumbKnob.center = CGPointMake(frame.size.width / 2.0, (frame.size.height - 18.0) / 2.0);
        _thumbKnob.backgroundColor = [UIColor colorWithRed:0.0 green:0.75 blue:0.90 alpha:0.32];
        _thumbKnob.layer.cornerRadius = knobSize / 2.0;
        _thumbKnob.layer.borderWidth = 2.0;
        _thumbKnob.layer.borderColor = [UIColor colorWithRed:0.0 green:0.95 blue:1.0 alpha:1.0].CGColor;
        _thumbKnob.layer.shadowColor = [UIColor colorWithRed:0.0 green:0.95 blue:1.0 alpha:1.0].CGColor;
        _thumbKnob.layer.shadowRadius = 7.0;
        _thumbKnob.layer.shadowOpacity = 0.55;
        _thumbKnob.userInteractionEnabled = NO;
        [self addSubview:_thumbKnob];

        // Center glowing pinpoint dot
        UIView *dot = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 8, 8)];
        dot.center = CGPointMake(knobSize / 2.0, knobSize / 2.0);
        dot.backgroundColor = [UIColor colorWithRed:0.0 green:0.95 blue:1.0 alpha:1.0];
        dot.layer.cornerRadius = 4.0;
        [_thumbKnob addSubview:dot];

        _baseCenter = _thumbKnob.center;

        _labelMove = [[UILabel alloc] initWithFrame:CGRectMake(0, frame.size.height - 16.0, frame.size.width, 15.0)];
        _labelMove.text = @"MOVE";
        _labelMove.textAlignment = NSTextAlignmentCenter;
        _labelMove.textColor = [UIColor colorWithRed:0.0 green:0.95 blue:1.0 alpha:1.0];
        _labelMove.font = [UIFont systemFontOfSize:12.0 weight:UIFontWeightHeavy];
        [self addSubview:_labelMove];
    }
    return self;
}

- (void)drawRect:(CGRect)rect
{
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    if (!ctx) return;

    CGFloat w = rect.size.width;
    CGFloat h = rect.size.height - 18.0;
    CGFloat diameter = MIN(w, h);
    CGRect circleRect = CGRectMake((w - diameter) / 2.0, 0, diameter, diameter);
    CGPoint center = CGPointMake(CGRectGetMidX(circleRect), CGRectGetMidY(circleRect));
    CGFloat r = diameter / 2.0;

    UIColor *cyanBright = [UIColor colorWithRed:0.0 green:0.95 blue:1.0 alpha:1.0];
    UIColor *cyanGlow = [UIColor colorWithRed:0.1 green:0.95 blue:1.0 alpha:0.45];

    // 1. Semi-translucent dark circular background
    CGContextSetFillColorWithColor(ctx, [UIColor colorWithRed:0.03 green:0.07 blue:0.12 alpha:0.65].CGColor);
    CGContextFillEllipseInRect(ctx, circleRect);

    // 2. Outer Glow Ring
    CGContextSetShadowWithColor(ctx, CGSizeZero, 6.0, cyanGlow.CGColor);
    CGContextSetStrokeColorWithColor(ctx, cyanBright.CGColor);
    CGContextSetLineWidth(ctx, 2.0);
    CGContextStrokeEllipseInRect(ctx, CGRectInset(circleRect, 1.0, 1.0));
    CGContextSetShadowWithColor(ctx, CGSizeZero, 0, NULL);

    // 3. 4 Clean Diagonal Dividing Lines at precisely 45°, 135°, 225°, 315°
    // Lines connect cleanly from the center knob edge to the outer ring
    CGFloat knobR = r * 0.40;
    CGFloat cos45 = 0.70710678f;

    CGContextSetStrokeColorWithColor(ctx, [cyanBright colorWithAlphaComponent:0.45].CGColor);
    CGContextSetLineWidth(ctx, 1.4);
    CGContextSetLineCap(ctx, kCGLineCapRound);

    // Top-Left divider line (135°)
    CGContextMoveToPoint(ctx, center.x - knobR * cos45, center.y - knobR * cos45);
    CGContextAddLineToPoint(ctx, center.x - r * cos45, center.y - r * cos45);

    // Top-Right divider line (45°)
    CGContextMoveToPoint(ctx, center.x + knobR * cos45, center.y - knobR * cos45);
    CGContextAddLineToPoint(ctx, center.x + r * cos45, center.y - r * cos45);

    // Bottom-Left divider line (225°)
    CGContextMoveToPoint(ctx, center.x - knobR * cos45, center.y + knobR * cos45);
    CGContextAddLineToPoint(ctx, center.x - r * cos45, center.y + r * cos45);

    // Bottom-Right divider line (315°)
    CGContextMoveToPoint(ctx, center.x + knobR * cos45, center.y + knobR * cos45);
    CGContextAddLineToPoint(ctx, center.x + r * cos45, center.y + r * cos45);

    CGContextStrokePath(ctx);

    // 4. Directional Chevrons: Perfectly Symmetrical & Crisp
    CGContextSetStrokeColorWithColor(ctx, cyanBright.CGColor);
    CGContextSetLineWidth(ctx, 2.4);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);

    CGFloat chevWing = 10.0;
    CGFloat chevPeakDist = r * 0.70;
    CGFloat chevBaseDist = r * 0.58;

    // Up Chevron (^)
    CGContextMoveToPoint(ctx, center.x - chevWing, center.y - chevBaseDist);
    CGContextAddLineToPoint(ctx, center.x, center.y - chevPeakDist);
    CGContextAddLineToPoint(ctx, center.x + chevWing, center.y - chevBaseDist);

    // Down Chevron (v)
    CGContextMoveToPoint(ctx, center.x - chevWing, center.y + chevBaseDist);
    CGContextAddLineToPoint(ctx, center.x, center.y + chevPeakDist);
    CGContextAddLineToPoint(ctx, center.x + chevWing, center.y + chevBaseDist);

    // Left Chevron (<)
    CGContextMoveToPoint(ctx, center.x - chevBaseDist, center.y - chevWing);
    CGContextAddLineToPoint(ctx, center.x - chevPeakDist, center.y);
    CGContextAddLineToPoint(ctx, center.x - chevBaseDist, center.y + chevWing);

    // Right Chevron (>)
    CGContextMoveToPoint(ctx, center.x + chevBaseDist, center.y - chevWing);
    CGContextAddLineToPoint(ctx, center.x + chevPeakDist, center.y);
    CGContextAddLineToPoint(ctx, center.x + chevBaseDist, center.y + chevWing);

    CGContextStrokePath(ctx);
}

- (void)updateKnobForLocation:(CGPoint)loc
{
    CGFloat dx = loc.x - _baseCenter.x;
    CGFloat dy = loc.y - _baseCenter.y;
    CGFloat dist = sqrtf(dx * dx + dy * dy);

    CGFloat clampedDist = MIN(dist, _maxRadius);
    CGFloat angle = atan2f(dy, dx);

    CGPoint knobPos = CGPointMake(_baseCenter.x + cosf(angle) * clampedDist,
                                  _baseCenter.y + sinf(angle) * clampedDist);
    _thumbKnob.center = knobPos;

    CGFloat normX = (clampedDist > 0.001) ? (cosf(angle) * (clampedDist / _maxRadius)) : 0.0;
    CGFloat normY = (clampedDist > 0.001) ? (sinf(angle) * (clampedDist / _maxRadius)) : 0.0;

    mac_host_touch_set_stick(0, (float)normX, (float)normY);
}

- (void)resetStick
{
    _isTracking = NO;
    _activeTouch = nil;
    [UIView animateWithDuration:0.18 delay:0 usingSpringWithDamping:0.65 initialSpringVelocity:0.5 options:UIViewAnimationOptionCurveEaseOut animations:^{
        self.thumbKnob.center = self.baseCenter;
    } completion:nil];

    mac_host_touch_set_stick(0, 0.0f, 0.0f);
}

@end

// ============================================================================
// HaloTouchHUDView Implementation
// ============================================================================

@interface HaloTouchHUDView ()

// Left In-Game Controls
@property (nonatomic, strong) HaloCyanControl *grenadeBtn;
@property (nonatomic, strong) HaloCyanControl *grenadeSwapBtn;
@property (nonatomic, strong) HaloMoveJoystick *moveJoystick;
@property (nonatomic, strong) HaloCyanControl *crouchBtn;

// Right In-Game Controls
@property (nonatomic, strong) HaloCyanControl *upperShootBtn;
@property (nonatomic, strong) HaloCyanControl *meleeBtn;
@property (nonatomic, strong) HaloCyanControl *primaryShootBtn;
@property (nonatomic, strong) HaloCyanControl *reloadBtn;
@property (nonatomic, strong) HaloCyanControl *jumpBtn;
@property (nonatomic, strong) HaloCyanControl *zoomBtn;
@property (nonatomic, strong) HaloCyanControl *weaponSwapBtn;
@property (nonatomic, strong) HaloCyanControl *flashlightBtn;

// Top Center System Controls (Always Visible: Menu & Gameplay)
@property (nonatomic, strong) HaloCyanControl *backBtn;
@property (nonatomic, strong) HaloCyanControl *startBtn;

// Menu Cruceta (ABXY Diamond on Right Side)
@property (nonatomic, strong) UIView *menuCrucetaView;
@property (nonatomic, strong) HaloCyanControl *menuBtnA;
@property (nonatomic, strong) HaloCyanControl *menuBtnB;
@property (nonatomic, strong) HaloCyanControl *menuBtnX;
@property (nonatomic, strong) HaloCyanControl *menuBtnY;

// Game State Poller Timer
@property (nonatomic, strong) NSTimer *statePollTimer;
@property (nonatomic, assign) BOOL lastInGameplayState;

// Look / Touch Aim Tracking (1:1 Native Mouse Precision)
@property (nonatomic, strong, nullable) UITouch *lookTouch;
@property (nonatomic, assign) CGPoint lastLookPoint;

@end

@implementation HaloTouchHUDView

+ (instancetype)sharedHUD
{
    static HaloTouchHUDView *s_hud = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        s_hud = [[HaloTouchHUDView alloc] initWithFrame:[UIScreen mainScreen].bounds];
    });
    return s_hud;
}

+ (void)attachToViewController:(UIViewController *)vc
{
    if (!vc || !vc.view) return;
    HaloTouchHUDView *hud = [self sharedHUD];
    hud.frame = vc.view.bounds;
    hud.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [hud updateLayoutForBounds:vc.view.bounds];

    if (hud.superview != vc.view) {
        [hud removeFromSuperview];
        [vc.view addSubview:hud];
        [vc.view bringSubviewToFront:hud];
    }
    [hud startStatePolling];
}

+ (void)detach
{
    HaloTouchHUDView *hud = [self sharedHUD];
    [hud.statePollTimer invalidate];
    hud.statePollTimer = nil;
    [hud removeFromSuperview];
}

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor clearColor];
        self.multipleTouchEnabled = YES;
        self.userInteractionEnabled = YES;

        _hudOpacity = 0.88;
        _lookSensitivity = 1.0;
        _invertLookY = NO;
        _showLeftFireButton = YES;
        _isMenuMode = YES;
        _lastInGameplayState = NO;

        self.alpha = _hudOpacity;

        [self setupSubviews];
        [self applyModeLayout:NO animated:NO];
        [self updateLayoutForBounds:frame];
    }
    return self;
}

- (void)startStatePolling
{
    [self.statePollTimer invalidate];
    self.statePollTimer = [NSTimer scheduledTimerWithTimeInterval:0.15
                                                           target:self
                                                         selector:@selector(checkGameStateAndVisibility)
                                                         userInfo:nil
                                                          repeats:YES];
}

- (void)checkGameStateAndVisibility
{
    int inGameplay = mac_host_is_in_gameplay();
    if (inGameplay != _lastInGameplayState) {
        _lastInGameplayState = (inGameplay != 0);
        _isMenuMode = !inGameplay;
        [self applyModeLayout:(inGameplay != 0) animated:YES];
    }
}

- (void)applyModeLayout:(BOOL)inGameplay animated:(BOOL)animated
{
    void (^changes)(void) = ^{
        // Menu ABXY diamond controls
        self.menuCrucetaView.alpha = inGameplay ? 0.0 : 1.0;
        self.menuCrucetaView.hidden = inGameplay;

        // In-game combat controls
        CGFloat gameAlpha = inGameplay ? 1.0 : 0.0;
        self.grenadeBtn.alpha = gameAlpha;
        self.grenadeBtn.hidden = !inGameplay;
        self.grenadeSwapBtn.alpha = gameAlpha;
        self.grenadeSwapBtn.hidden = !inGameplay;
        self.crouchBtn.alpha = gameAlpha;
        self.crouchBtn.hidden = !inGameplay;

        self.upperShootBtn.alpha = gameAlpha;
        self.upperShootBtn.hidden = !inGameplay;
        self.meleeBtn.alpha = gameAlpha;
        self.meleeBtn.hidden = !inGameplay;
        self.primaryShootBtn.alpha = gameAlpha;
        self.primaryShootBtn.hidden = !inGameplay;
        self.reloadBtn.alpha = gameAlpha;
        self.reloadBtn.hidden = !inGameplay;
        self.jumpBtn.alpha = gameAlpha;
        self.jumpBtn.hidden = !inGameplay;
        self.zoomBtn.alpha = gameAlpha;
        self.zoomBtn.hidden = !inGameplay;
        self.weaponSwapBtn.alpha = gameAlpha;
        self.weaponSwapBtn.hidden = !inGameplay;
        self.flashlightBtn.alpha = gameAlpha;
        self.flashlightBtn.hidden = !inGameplay;

        // Move joystick and system Back/Start buttons stay visible in BOTH modes
        self.moveJoystick.alpha = 1.0;
        self.moveJoystick.hidden = NO;
        self.backBtn.alpha = 1.0;
        self.backBtn.hidden = NO;
        self.startBtn.alpha = 1.0;
        self.startBtn.hidden = NO;
    };

    if (animated) {
        [UIView animateWithDuration:0.25 animations:changes];
    } else {
        changes();
    }
}

- (void)setupSubviews
{
    // ==========================================
    // Left Side In-Game Controls
    // ==========================================

    _grenadeBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 72, 92)
                                                iconType:HALO_ICON_GRENADE
                                            primaryLabel:@"GRENADE"
                                          secondaryLabel:@"(1/3)"];
    [_grenadeBtn addTarget:self action:@selector(onGrenadeDown) forControlEvents:UIControlEventTouchDown];
    [_grenadeBtn addTarget:self action:@selector(onGrenadeUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_grenadeBtn];

    _grenadeSwapBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 60, 80)
                                                    iconType:HALO_ICON_GRENADE_SWAP
                                                primaryLabel:@"SWAP"
                                              secondaryLabel:nil];
    [_grenadeSwapBtn addTarget:self action:@selector(onGrenadeSwapDown) forControlEvents:UIControlEventTouchDown];
    [_grenadeSwapBtn addTarget:self action:@selector(onGrenadeSwapUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_grenadeSwapBtn];

    _moveJoystick = [[HaloMoveJoystick alloc] initWithFrame:CGRectMake(0, 0, 148, 166)];
    [self addSubview:_moveJoystick];

    _crouchBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 72, 92)
                                              iconType:HALO_ICON_CROUCH
                                          primaryLabel:@"CROUCH"
                                        secondaryLabel:@"(HOLD/TAP)"];
    _crouchBtn.supportsToggle = YES;
    [_crouchBtn addTarget:self action:@selector(onCrouchDown) forControlEvents:UIControlEventTouchDown];
    [_crouchBtn addTarget:self action:@selector(onCrouchUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_crouchBtn];

    // ==========================================
    // Top Center System Controls (BACK & START)
    // ==========================================

    _backBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 52, 66)
                                             iconType:HALO_ICON_BACK
                                         primaryLabel:@"BACK"
                                       secondaryLabel:nil];
    [_backBtn addTarget:self action:@selector(onBackDown) forControlEvents:UIControlEventTouchDown];
    [_backBtn addTarget:self action:@selector(onBackUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_backBtn];

    _startBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 52, 66)
                                              iconType:HALO_ICON_START
                                          primaryLabel:@"START"
                                        secondaryLabel:nil];
    [_startBtn addTarget:self action:@selector(onStartDown) forControlEvents:UIControlEventTouchDown];
    [_startBtn addTarget:self action:@selector(onStartUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_startBtn];

    // ==========================================
    // Right Side In-Game Controls
    // ==========================================

    _upperShootBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 76, 96)
                                                   iconType:HALO_ICON_SHOOT
                                               primaryLabel:@"PRIMARY SHOOT"
                                             secondaryLabel:nil];
    [_upperShootBtn addTarget:self action:@selector(onShootDown) forControlEvents:UIControlEventTouchDown];
    [_upperShootBtn addTarget:self action:@selector(onShootUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_upperShootBtn];

    _meleeBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 64, 84)
                                              iconType:HALO_ICON_MELEE
                                          primaryLabel:@"MELEE"
                                        secondaryLabel:nil];
    [_meleeBtn addTarget:self action:@selector(onMeleeDown) forControlEvents:UIControlEventTouchDown];
    [_meleeBtn addTarget:self action:@selector(onMeleeUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_meleeBtn];

    _primaryShootBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 80, 100)
                                                     iconType:HALO_ICON_SHOOT
                                                 primaryLabel:@"PRIMARY SHOOT"
                                               secondaryLabel:nil];
    [_primaryShootBtn addTarget:self action:@selector(onShootDown) forControlEvents:UIControlEventTouchDown];
    [_primaryShootBtn addTarget:self action:@selector(onShootUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_primaryShootBtn];

    _reloadBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 68, 88)
                                               iconType:HALO_ICON_RELOAD
                                           primaryLabel:@"RELOAD"
                                         secondaryLabel:@"(32/120)"];
    [_reloadBtn addTarget:self action:@selector(onReloadDown) forControlEvents:UIControlEventTouchDown];
    [_reloadBtn addTarget:self action:@selector(onReloadUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_reloadBtn];

    _jumpBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 74, 94)
                                             iconType:HALO_ICON_JUMP
                                         primaryLabel:@"JUMP"
                                       secondaryLabel:nil];
    [_jumpBtn addTarget:self action:@selector(onJumpDown) forControlEvents:UIControlEventTouchDown];
    [_jumpBtn addTarget:self action:@selector(onJumpUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_jumpBtn];

    _zoomBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 66, 86)
                                             iconType:HALO_ICON_ZOOM
                                         primaryLabel:@"ZOOM"
                                       secondaryLabel:nil];
    [_zoomBtn addTarget:self action:@selector(onZoomDown) forControlEvents:UIControlEventTouchDown];
    [_zoomBtn addTarget:self action:@selector(onZoomUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_zoomBtn];

    _weaponSwapBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 72, 92)
                                                   iconType:HALO_ICON_WEAPON
                                               primaryLabel:@"AR-12 / Pistol"
                                             secondaryLabel:nil];
    [_weaponSwapBtn addTarget:self action:@selector(onWeaponSwapDown) forControlEvents:UIControlEventTouchDown];
    [_weaponSwapBtn addTarget:self action:@selector(onWeaponSwapUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_weaponSwapBtn];

    _flashlightBtn = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 56, 76)
                                                   iconType:HALO_ICON_FLASHLIGHT
                                               primaryLabel:@"FLASHLIGHT"
                                             secondaryLabel:nil];
    [_flashlightBtn addTarget:self action:@selector(onFlashlightDown) forControlEvents:UIControlEventTouchDown];
    [_flashlightBtn addTarget:self action:@selector(onFlashlightUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [self addSubview:_flashlightBtn];

    // ==========================================
    // Menu Mode ABXY Cruceta (Diamond Formation)
    // ==========================================

    _menuCrucetaView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 180, 180)];
    _menuCrucetaView.backgroundColor = [UIColor clearColor];

    _menuBtnA = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 54, 54)
                                              iconType:HALO_ICON_LETTER
                                          primaryLabel:@""
                                        secondaryLabel:nil];
    _menuBtnA.letterText = @"A";
    _menuBtnA.customAccentColor = [UIColor colorWithRed:0.2 green:1.0 blue:0.4 alpha:1.0]; // Neon Green
    [_menuBtnA addTarget:self action:@selector(onMenuADown) forControlEvents:UIControlEventTouchDown];
    [_menuBtnA addTarget:self action:@selector(onMenuAUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [_menuCrucetaView addSubview:_menuBtnA];

    _menuBtnB = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 54, 54)
                                              iconType:HALO_ICON_LETTER
                                          primaryLabel:@""
                                        secondaryLabel:nil];
    _menuBtnB.letterText = @"B";
    _menuBtnB.customAccentColor = [UIColor colorWithRed:1.0 green:0.25 blue:0.35 alpha:1.0]; // Neon Red
    [_menuBtnB addTarget:self action:@selector(onMenuBDown) forControlEvents:UIControlEventTouchDown];
    [_menuBtnB addTarget:self action:@selector(onMenuBUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [_menuCrucetaView addSubview:_menuBtnB];

    _menuBtnX = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 54, 54)
                                              iconType:HALO_ICON_LETTER
                                          primaryLabel:@""
                                        secondaryLabel:nil];
    _menuBtnX.letterText = @"X";
    _menuBtnX.customAccentColor = [UIColor colorWithRed:0.1 green:0.75 blue:1.0 alpha:1.0]; // Neon Blue
    [_menuBtnX addTarget:self action:@selector(onMenuXDown) forControlEvents:UIControlEventTouchDown];
    [_menuBtnX addTarget:self action:@selector(onMenuXUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [_menuCrucetaView addSubview:_menuBtnX];

    _menuBtnY = [[HaloCyanControl alloc] initWithFrame:CGRectMake(0, 0, 54, 54)
                                              iconType:HALO_ICON_LETTER
                                          primaryLabel:@""
                                        secondaryLabel:nil];
    _menuBtnY.letterText = @"Y";
    _menuBtnY.customAccentColor = [UIColor colorWithRed:1.0 green:0.85 blue:0.1 alpha:1.0]; // Neon Yellow
    [_menuBtnY addTarget:self action:@selector(onMenuYDown) forControlEvents:UIControlEventTouchDown];
    [_menuBtnY addTarget:self action:@selector(onMenuYUp) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    [_menuCrucetaView addSubview:_menuBtnY];

    [self addSubview:_menuCrucetaView];
}

// ============================================================================
// Target-Actions (Gameplay & System Bridge)
// ============================================================================

// Shooting: Fire instantly on every tap for semi-automatic guns + hold for automatics
- (void)onShootDown
{
    mac_host_touch_set_trigger(1, 1.0f);
    mac_host_send_mouse_button(1, 1); // SDL_BUTTON_LEFT down
}

- (void)onShootUp
{
    mac_host_touch_set_trigger(1, 0.0f);
    mac_host_send_mouse_button(1, 0); // SDL_BUTTON_LEFT up
}

- (void)onGrenadeDown { mac_host_touch_set_trigger(0, 1.0f); }
- (void)onGrenadeUp   { mac_host_touch_set_trigger(0, 0.0f); }

// Switch Grenade Type (Black Button in Halo CE)
- (void)onGrenadeSwapDown { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER, 1); }
- (void)onGrenadeSwapUp   { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER, 0); }

- (void)onJumpDown { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_SOUTH, 1); }
- (void)onJumpUp   { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_SOUTH, 0); }

- (void)onMeleeDown { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_EAST, 1); }
- (void)onMeleeUp   { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_EAST, 0); }

- (void)onReloadDown { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_WEST, 1); }
- (void)onReloadUp   { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_WEST, 0); }

- (void)onWeaponSwapDown { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_NORTH, 1); }
- (void)onWeaponSwapUp   { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_NORTH, 0); }

- (void)onZoomDown { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_RIGHT_STICK, 1); }
- (void)onZoomUp   { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_RIGHT_STICK, 0); }

- (void)onCrouchDown
{
    mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_LEFT_STICK, _crouchBtn.isToggled ? 1 : 0);
}
- (void)onCrouchUp
{
    mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_LEFT_STICK, _crouchBtn.isToggled ? 1 : 0);
}

- (void)onFlashlightDown { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_LEFT_SHOULDER, 1); }
- (void)onFlashlightUp   { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_LEFT_SHOULDER, 0); }

// System Buttons: START & BACK (Available in both Menu & Gameplay)
- (void)onStartDown
{
    mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_START, 1);
    mac_host_send_key(SDL_SCANCODE_ESCAPE, 1);
}

- (void)onStartUp
{
    mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_START, 0);
    mac_host_send_key(SDL_SCANCODE_ESCAPE, 0);
}

- (void)onBackDown
{
    mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_BACK, 1);
    mac_host_send_key(SDL_SCANCODE_F1, 1);
    if (_isMenuMode) {
        mac_host_send_key(SDL_SCANCODE_ESCAPE, 1);
    }
}

- (void)onBackUp
{
    mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_BACK, 0);
    mac_host_send_key(SDL_SCANCODE_F1, 0);
    if (_isMenuMode) {
        mac_host_send_key(SDL_SCANCODE_ESCAPE, 0);
    }
}

// Menu Cruceta Buttons
- (void)onMenuADown { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_SOUTH, 1); }
- (void)onMenuAUp   { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_SOUTH, 0); }

- (void)onMenuBDown { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_EAST, 1); }
- (void)onMenuBUp   { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_EAST, 0); }

- (void)onMenuXDown { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_WEST, 1); }
- (void)onMenuXUp   { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_WEST, 0); }

- (void)onMenuYDown { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_NORTH, 1); }
- (void)onMenuYUp   { mac_host_touch_set_button(SDL_GAMEPAD_BUTTON_NORTH, 0); }

// ============================================================================
// Layout Calculation
// ============================================================================

- (void)updateLayoutForBounds:(CGRect)bounds
{
    if (CGRectIsEmpty(bounds)) return;
    self.frame = bounds;

    UIEdgeInsets insets = UIEdgeInsetsZero;
    if (@available(iOS 11.0, *)) {
        insets = self.safeAreaInsets;
    }

    CGFloat w = bounds.size.width;
    CGFloat h = bounds.size.height;
    BOOL isPad = (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad);
    CGFloat scale = isPad ? 1.15 : 1.0;

    // --- Left Column ---
    CGFloat leftX = insets.left + 24.0;
    CGFloat joySize = 148.0 * scale;
    CGFloat joyY = (h - joySize) / 2.0;

    _moveJoystick.frame = CGRectMake(leftX + 10.0, joyY, joySize, joySize + 18.0);
    _moveJoystick.baseCenter = CGPointMake(joySize / 2.0, joySize / 2.0);

    // GRENADE (Top-Left)
    CGFloat gSize = 70.0 * scale;
    _grenadeBtn.frame = CGRectMake(leftX + 10.0, insets.top + 18.0, gSize, gSize + 18.0);

    // GRENADE SWAP (Next to grenade)
    CGFloat gsSize = 58.0 * scale;
    _grenadeSwapBtn.frame = CGRectMake(leftX + 10.0 + gSize + 12.0, insets.top + 22.0, gsSize, gsSize + 16.0);

    // CROUCH (Bottom-Left)
    CGFloat cSize = 72.0 * scale;
    _crouchBtn.frame = CGRectMake(leftX + 16.0, h - insets.bottom - cSize - 28.0, cSize, cSize + 20.0);

    // --- Top Center System Controls (BACK & START) ---
    CGFloat sysBtnW = 54.0 * scale;
    CGFloat sysBtnH = 66.0 * scale;
    CGFloat topSysY = insets.top + 8.0;
    _backBtn.frame = CGRectMake((w / 2.0) - sysBtnW - 14.0, topSysY, sysBtnW, sysBtnH);
    _startBtn.frame = CGRectMake((w / 2.0) + 14.0, topSysY, sysBtnW, sysBtnH);

    // --- Right Columns (Gameplay Layout) ---
    CGFloat col2X = w - insets.right - 85.0 * scale;
    CGFloat col1X = col2X - 86.0 * scale;

    // Top: Upper Shoot & Melee
    CGFloat topRowY = insets.top + 24.0;
    _upperShootBtn.frame = CGRectMake(col1X - 6.0, topRowY, 78.0 * scale, 98.0 * scale);
    _meleeBtn.frame = CGRectMake(col2X, topRowY + 4.0, 68.0 * scale, 88.0 * scale);

    // Flashlight
    _flashlightBtn.frame = CGRectMake(col1X - 70.0 * scale, topRowY + 6.0, 56.0 * scale, 76.0 * scale);

    // Middle: Primary Shoot & Reload
    CGFloat midRowY = (h - 96.0 * scale) / 2.0 - 15.0;
    _primaryShootBtn.frame = CGRectMake(col1X - 6.0, midRowY, 82.0 * scale, 102.0 * scale);
    _reloadBtn.frame = CGRectMake(col2X, midRowY + 4.0, 70.0 * scale, 90.0 * scale);

    // Lower: Jump & Zoom
    CGFloat lowRowY = midRowY + 86.0 * scale;
    _jumpBtn.frame = CGRectMake(col1X - 4.0, lowRowY, 76.0 * scale, 96.0 * scale);
    _zoomBtn.frame = CGRectMake(col2X + 2.0, lowRowY + 2.0, 68.0 * scale, 88.0 * scale);

    // Bottom-Right: Weapon Swap (AR-12 / Pistol)
    CGFloat weaponY = lowRowY + 82.0 * scale;
    if (weaponY + 92.0 > h - insets.bottom) {
        weaponY = h - insets.bottom - 88.0 * scale;
    }
    _weaponSwapBtn.frame = CGRectMake(col2X - 6.0, weaponY, 76.0 * scale, 92.0 * scale);

    // --- Menu Cruceta (Right Side Diamond) ---
    CGFloat crucetaSize = 180.0 * scale;
    CGFloat crucetaX = w - insets.right - crucetaSize - 25.0;
    CGFloat crucetaY = (h - crucetaSize) / 2.0;
    _menuCrucetaView.frame = CGRectMake(crucetaX, crucetaY, crucetaSize, crucetaSize);

    CGFloat btnSize = 52.0 * scale;
    CGFloat centerDist = crucetaSize * 0.33;
    CGPoint crucetaCenter = CGPointMake(crucetaSize / 2.0, crucetaSize / 2.0);

    _menuBtnY.frame = CGRectMake(crucetaCenter.x - btnSize / 2.0, crucetaCenter.y - centerDist - btnSize / 2.0, btnSize, btnSize);
    _menuBtnA.frame = CGRectMake(crucetaCenter.x - btnSize / 2.0, crucetaCenter.y + centerDist - btnSize / 2.0, btnSize, btnSize);
    _menuBtnX.frame = CGRectMake(crucetaCenter.x - centerDist - btnSize / 2.0, crucetaCenter.y - btnSize / 2.0, btnSize, btnSize);
    _menuBtnB.frame = CGRectMake(crucetaCenter.x + centerDist - btnSize / 2.0, crucetaCenter.y - btnSize / 2.0, btnSize, btnSize);
}

// ============================================================================
// Smart Hit-Testing & Smooth Look/Aim Swiping
// ============================================================================

- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event
{
    if (self.alpha < 0.1) return NO;

    // Top Center System Controls (Always interactive in both Menu & Gameplay)
    if (CGRectContainsPoint(_backBtn.frame, point) || CGRectContainsPoint(_startBtn.frame, point)) {
        return YES;
    }

    if (_isMenuMode) {
        // Intercept touches over Move Joystick
        CGPoint joyPt = [self convertPoint:point toView:_moveJoystick];
        if ([_moveJoystick pointInside:joyPt withEvent:event]) return YES;

        // Intercept touches over Menu ABXY Diamond buttons
        CGPoint crucetaPt = [self convertPoint:point toView:_menuCrucetaView];
        if ([_menuCrucetaView pointInside:crucetaPt withEvent:event]) {
            for (UIView *sub in _menuCrucetaView.subviews) {
                CGPoint p = [_menuCrucetaView convertPoint:crucetaPt toView:sub];
                if ([sub pointInside:p withEvent:event]) return YES;
            }
        }

        // Pass all other touches directly through so users can tap menu options natively
        return NO;
    }

    // In Gameplay Mode:
    // Left Controls
    if (CGRectContainsPoint(_grenadeBtn.frame, point) ||
        CGRectContainsPoint(_grenadeSwapBtn.frame, point) ||
        CGRectContainsPoint(_crouchBtn.frame, point) ||
        CGRectContainsPoint(_moveJoystick.frame, point)) {
        return YES;
    }

    // Left joystick touch activation zone
    if (point.x < self.bounds.size.width * 0.40 && point.y > self.bounds.size.height * 0.25) {
        return YES;
    }

    // Right Action Buttons
    if (CGRectContainsPoint(_upperShootBtn.frame, point) ||
        CGRectContainsPoint(_meleeBtn.frame, point) ||
        CGRectContainsPoint(_primaryShootBtn.frame, point) ||
        CGRectContainsPoint(_reloadBtn.frame, point) ||
        CGRectContainsPoint(_jumpBtn.frame, point) ||
        CGRectContainsPoint(_zoomBtn.frame, point) ||
        CGRectContainsPoint(_weaponSwapBtn.frame, point) ||
        CGRectContainsPoint(_flashlightBtn.frame, point)) {
        return YES;
    }

    // Right Free Look / Aim Surface
    if (point.x >= self.bounds.size.width * 0.40) {
        return YES;
    }

    return NO;
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    for (UITouch *touch in touches) {
        CGPoint loc = [touch locationInView:self];

        // 1. Move Joystick activation (Works in both Menu and Gameplay)
        if (loc.x < self.bounds.size.width * 0.40 && loc.y > self.bounds.size.height * 0.20) {
            if (!_moveJoystick.isTracking) {
                _moveJoystick.isTracking = YES;
                _moveJoystick.activeTouch = touch;
                CGPoint joyLoc = [touch locationInView:_moveJoystick];
                [_moveJoystick updateKnobForLocation:joyLoc];
                continue;
            }
        }

        // 2. Right Free Look Activation (Gameplay mode only)
        if (!_isMenuMode && loc.x >= self.bounds.size.width * 0.40 && !_lookTouch) {
            UIView *hit = [self hitTest:loc withEvent:event];
            if (hit == self || hit == nil) {
                _lookTouch = touch;
                _lastLookPoint = loc;
                continue;
            }
        }
    }
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    for (UITouch *touch in touches) {
        if (touch == _moveJoystick.activeTouch) {
            CGPoint joyLoc = [touch locationInView:_moveJoystick];
            [_moveJoystick updateKnobForLocation:joyLoc];
            continue;
        }

        if (!_isMenuMode && touch == _lookTouch) {
            CGPoint cur = [touch locationInView:self];
            CGFloat dx = cur.x - _lastLookPoint.x;
            CGFloat dy = cur.y - _lastLookPoint.y;
            _lastLookPoint = cur;

            // Direct 1:1 camera aim tracking
            mac_host_touch_look_delta((float)dx, (float)dy);
            continue;
        }
    }
}

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    for (UITouch *touch in touches) {
        if (touch == _moveJoystick.activeTouch) {
            [_moveJoystick resetStick];
        }
        if (touch == _lookTouch) {
            _lookTouch = nil;
            mac_host_touch_look_end();
        }
    }
}

- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self touchesEnded:touches withEvent:event];
}

@end

#endif // TARGET_OS_IPHONE && !TARGET_OS_TV
