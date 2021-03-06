/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, NSMutableDictionary, MRImage, MRTextRenderer, MRImageProvider;

@interface MREffectTableTop : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	MRCroppingSprite *mExtraSprites[2];	// 116 = 0x74
	MRImageProvider *mPhotoBackProvider;	// 124 = 0x7c
	MRTextRenderer *mTextRenderer;	// 128 = 0x80
	MRImage *mTextImage;	// 132 = 0x84
	MRCroppingSprite *mTextSprite;	// 136 = 0x88
	MRCroppingSprite *mPhotoBackSprite;	// 140 = 0x8c
	float mLocalMatrix[16];	// 144 = 0x90
	CGSize mMaxTextSize;	// 208 = 0xd0
}
+ (void)initialize;	// 0x32f379e9
- (id)initWithEffectID:(id)effectID;	// 0x32f37b41
- (void)_cleanup;	// 0x32f37ca5
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f3a8fd
- (int)_maxLinesForTextElement:(id)textElement;	// 0x32f3a8f9
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x32f3a8dd
- (void)_unload;	// 0x32f3accd
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x32f3a66d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x32f3a839
- (BOOL)isLoadedForTime:(double)time;	// 0x32f37e15
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f37ed1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f37f45
- (void)setPixelSize:(CGSize)size;	// 0x32f37db9
@end

