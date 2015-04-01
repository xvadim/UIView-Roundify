UIView+Roundify
===============

An UIView category with method for adding round corners selectively.

Usage:

```objective-c
#import "UIView+Roundify.h

...

- (void) viewDidLayoutSubviews {
   [super viewDidLayoutSubviews];
   [self.someView addRoundedCorners:(UIRectCornerTopLeft | UIRectCornerBottomLeft)
                            withRadii:(CGSize){16.f, 16.f}];
 }
```

See this [tip](http://stackoverflow.com/questions/4847163/round-two-corners-in-uiview) on Stack Overflow.
