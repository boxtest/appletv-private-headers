/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRCroppingSprite, MRTextRenderer;

@interface MREffectReflectionsSubtitle : MREffect {
	MRCroppingSprite *mTextSprite;	// 116 = 0x74
	MRTextRenderer *mTextRenderer;	// 120 = 0x78
	MRImage *mTextImage;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x331c7649
- (void)_cleanup;	// 0x331c76a5
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x331c7c7d
- (int)_maxLinesForTextElement:(id)textElement;	// 0x331c7751
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x331c7729
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x331c7755
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x331c7799
- (BOOL)isLoadedForTime:(double)time;	// 0x331c77f1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x331c7879
@end
