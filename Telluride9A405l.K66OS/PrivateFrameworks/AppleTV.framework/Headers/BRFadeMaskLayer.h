/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRFadeMaskLayer : BRControl {
@private
	float _topFadeHeight;	// 48 = 0x30
	float _bottomFadeHeight;	// 52 = 0x34
	float _leftFadeWidth;	// 56 = 0x38
	float _rightFadeWidth;	// 60 = 0x3c
	CGFunctionRef _shadingFunction;	// 64 = 0x40
}
@property(assign) float bottomFadeHeight;	// G=0x35e6d7d1; S=0x35e6d795; converted property
@property(assign) float leftFadeWidth;	// G=0x35e6d81d; S=0x35e6d7e1; converted property
@property(assign) float rightFadeWidth;	// G=0x35e6d869; S=0x35e6d82d; converted property
@property(assign) float topFadeHeight;	// G=0x35e6d785; S=0x35e6d749; converted property
- (id)init;	// 0x35e6d679
// converted property getter: - (float)bottomFadeHeight;	// 0x35e6d7d1
- (void)dealloc;	// 0x35e6d705
- (void)drawInContext:(CGContextRef)context;	// 0x35e6d879
// converted property getter: - (float)leftFadeWidth;	// 0x35e6d81d
// converted property getter: - (float)rightFadeWidth;	// 0x35e6d869
// converted property setter: - (void)setBottomFadeHeight:(float)height;	// 0x35e6d795
- (void)setEnableMaskAnimation:(BOOL)animation;	// 0x35e6dac1
// converted property setter: - (void)setLeftFadeWidth:(float)width;	// 0x35e6d7e1
// converted property setter: - (void)setRightFadeWidth:(float)width;	// 0x35e6d82d
// converted property setter: - (void)setTopFadeHeight:(float)height;	// 0x35e6d749
// converted property getter: - (float)topFadeHeight;	// 0x35e6d785
@end

