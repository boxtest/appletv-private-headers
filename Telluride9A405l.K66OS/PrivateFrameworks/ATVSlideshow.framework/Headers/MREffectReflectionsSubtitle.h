/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectReflectionsSubtitle : MREffect {
	MRCroppingSprite *mTextSprite;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x33548971
- (void)_cleanup;	// 0x335489cd
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33548ee9
- (int)_maxLinesForTextElement:(id)textElement;	// 0x33548a7d
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x33548a55
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33548a81
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33548ad1
- (BOOL)isLoadedForTime:(double)time;	// 0x33548b29
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33548bad
@end
