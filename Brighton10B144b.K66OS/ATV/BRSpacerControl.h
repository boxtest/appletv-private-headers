/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRSpacerControl : BRControl {
	float _pixels;	// 84 = 0x54
}
@property(assign) float pixels;	// G=0x30be71; S=0x30be61; converted property
+ (id)spacerWithPixels:(float)pixels;	// 0x30bdc5
- (id)init;	// 0x30be05
// converted property getter: - (float)pixels;	// 0x30be71
// converted property setter: - (void)setPixels:(float)pixels;	// 0x30be61
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30be81
@end

