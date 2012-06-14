/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite;

@interface MREffectFramedSlide : MREffect {
	MRCroppingSprite *mSprite;	// 116 = 0x74
	BOOL mHasInnerRect;	// 120 = 0x78
	BOOL mHasOuterRect;	// 121 = 0x79
	BOOL mIsPlayable;	// 122 = 0x7a
	BOOL mIsPlaying;	// 123 = 0x7b
	BOOL mIsPressed;	// 124 = 0x7c
}
+ (void)initialize;	// 0x365bd351
- (id)init;	// 0x365bd3dd
- (void)_cleanup;	// 0x365bd441
- (void)_renderImage:(id)image withFrame:(id)frame atTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365bde41
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x365be241
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x365be285
- (BOOL)isNative3D;	// 0x365bd8bd
- (BOOL)isOpaque;	// 0x365bd8c1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365bd8c5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365bdad9
- (void)setAttributes:(id)attributes;	// 0x365bd46d
- (void)setLiveAttributes:(id)attributes;	// 0x365bd819
@end
