/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, MRCroppingSprite, MRTextRenderer, NSArray, MRImage;

@interface MREffectSlidingPanels : MREffect {
	MRTextRenderer *mTextRenderer;	// 112 = 0x70
	MRImage *mTextImage;	// 116 = 0x74
	CGContextRef mCachedRenderedText;	// 120 = 0x78
	NSMutableDictionary *mSprites;	// 124 = 0x7c
	MRCroppingSprite *mTextSprite;	// 128 = 0x80
	CGSize mMaxTextSize;	// 132 = 0x84
	BOOL mIsLoaded;	// 140 = 0x8c
	NSArray *mCurrentInfo;	// 144 = 0x90
}
- (id)init;	// 0x3210b9b5
- (void)_applySizeScripts:(float)scripts;	// 0x3210c851
- (void)_cleanup;	// 0x3210ba71
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3210bb65
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3210c359
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3210c33d
- (void)_unload;	// 0x3210c395
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x3210e3c1
- (void)computeAnimationForTime:(double)time direction:(id)direction rect:(CGRect *)rect justification:(CGPoint *)justification;	// 0x3210e3d5
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3210e1bd
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3210e331
- (BOOL)isLoadedForTime:(double)time;	// 0x3210bad1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3210c489
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3210cbfd
@end

