/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRImageProvider, MRTextRenderer, MRCroppingSprite;

@interface MREffectShatterTitle : MREffect {
	MRImageProvider *mMasks[9];	// 116 = 0x74
	MRTextRenderer *mTextRenderer;	// 152 = 0x98
	MRImage *mTextImage;	// 156 = 0x9c
	MRCroppingSprite *mTextSprite;	// 160 = 0xa0
}
- (id)initWithEffectID:(id)effectID;	// 0x3338ad69
- (void)_cleanup;	// 0x3338af45
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3338ba61
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3338bd65
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3338bd31
- (void)_unload;	// 0x3338bcd9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3338b041
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3338b085
- (BOOL)isLoadedForTime:(double)time;	// 0x3338b0dd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3338b1bd
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3338b241
- (void)setPixelSize:(CGSize)size;	// 0x3338afd5
@end

