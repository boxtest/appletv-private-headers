/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"


@interface MREffectJustAButton : MREffect {
	BOOL mIsPressed;	// 116 = 0x74
	BOOL mIsSet;	// 117 = 0x75
}
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x332d39ed
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332d3a09
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332d3a41
- (void)setLiveAttributes:(id)attributes;	// 0x332d3971
@end

