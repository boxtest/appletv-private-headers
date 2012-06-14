/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRTextRenderer, NSMutableDictionary, MRImage;

@interface MREffectWatercolorPanel : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	MRCroppingSprite *mTextSprite;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x33d5a4e9
- (void)_cleanup;	// 0x33d5a555
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d5b919
- (int)_maxLinesForTextElement:(id)textElement;	// 0x33d5b915
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x33d5b8e9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33d5b6e9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33d5b85d
- (BOOL)isLoadedForTime:(double)time;	// 0x33d5a57d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d5a5ed
- (void)renderEffect2AtTime:(double)time isSquare:(BOOL)square inContext:(id)context withArguments:(id)arguments;	// 0x33d5a705
- (void)renderEffect3AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d5ad35
- (void)renderEffectSubtitleAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d5b119
@end
