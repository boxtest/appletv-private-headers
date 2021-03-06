/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, MRCAMLBezierData, MRImageProvider, MRTextRenderer, MRCroppingSprite, NSArray, MRImage;

@interface MREffectTableTop : MREffect {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	MRCroppingSprite *mExtraSprites[2];	// 120 = 0x78
	MRImageProvider *mPhotoBackProvider;	// 128 = 0x80
	MRTextRenderer *mTextRenderer;	// 132 = 0x84
	MRImage *mTextImage;	// 136 = 0x88
	MRCroppingSprite *mTextSprite;	// 140 = 0x8c
	MRCroppingSprite *mPhotoBackSprite;	// 144 = 0x90
	float mLocalMatrix[16];	// 148 = 0x94
	CGSize mMaxTextSize;	// 212 = 0xd4
	BOOL mIsBreak;	// 220 = 0xdc
	BOOL mIsLoaded;	// 221 = 0xdd
	NSArray *mShuffledIndicies;	// 224 = 0xe0
	MRCAMLBezierData *mBezierData;	// 228 = 0xe4
}
+ (void)initialize;	// 0x36297e89
- (id)initWithEffectID:(id)effectID;	// 0x36297fdd
- (void)_cleanup;	// 0x36298179
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3629b439
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3629b431
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3629b419
- (void)_unload;	// 0x3629b8d5
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3629b17d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3629b34d
- (BOOL)isLoadedForTime:(double)time;	// 0x36298321
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x362983dd
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x36298839
- (void)setPixelSize:(CGSize)size;	// 0x362982c9
@end

