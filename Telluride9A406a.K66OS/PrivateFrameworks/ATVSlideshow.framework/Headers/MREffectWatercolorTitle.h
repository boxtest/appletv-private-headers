/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectWatercolorTitle : MREffect {
	MRTextRenderer *mTextRenderer;	// 112 = 0x70
	MRImage *mTextImage;	// 116 = 0x74
	MRCroppingSprite *mTextSprite;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x349f3de5
- (void)_cleanup;	// 0x349f3e41
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349f43b5
- (int)_maxLinesForTextElement:(id)textElement;	// 0x349f43b1
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x349f437d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x349f3ec9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x349f3f19
- (BOOL)isLoadedForTime:(double)time;	// 0x349f3fa1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349f4025
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349f405d
- (void)setPixelSize:(CGSize)size;	// 0x349f3f71
@end

