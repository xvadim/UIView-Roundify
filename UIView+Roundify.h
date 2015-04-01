@import UIKit;

@interface UIView (Roundify)
/**
 *  @brief Adds round corners to the givem view.
 *
 *  @discussion
 *  You should do this in your view controller's viewDidLayoutSubviews method,
 *  so the view has already been resized from the storyboard.
 * 
 *  @code
 - (void) viewDidLayoutSubviews {
   [super viewDidLayoutSubviews];
   [self.someView addRoundedCorners:(UIRectCornerTopLeft | UIRectCornerBottomLeft)
                            withRadii:(CGSize){16.f, 16.f}];
 }
 *  @endcode
 *
 *  @param corners A bitmask value that identifies the corners that will be rounded.
 *  @param radii   The radius of each corner oval.
 *  @see http://stackoverflow.com/questions/4847163/round-two-corners-in-uiview 
 */
-(void)addRoundedCorners:(UIRectCorner)corners withRadii:(CGSize)radii;

@end
