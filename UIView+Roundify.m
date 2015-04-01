@import QuartzCore;

#import "UIView+Roundify.h"

@implementation UIView (Roundify)

-(void)addRoundedCorners:(UIRectCorner)corners withRadii:(CGSize)radii {
    CAShapeLayer *maskLayer = [CAShapeLayer layer];
    maskLayer.frame = self.bounds;
    
    UIBezierPath *roundedPath = [UIBezierPath bezierPathWithRoundedRect:maskLayer.bounds
                                                      byRoundingCorners:corners
                                                            cornerRadii:radii];
    maskLayer.path = [roundedPath CGPath];
    self.layer.mask = maskLayer;
}

@end

