/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, NSMutableDictionary, NSMutableArray, NSArray, MRImage, MRTextRenderer;

@interface MREffectOrigamiTitle : MREffect {
	MRTextRenderer *mText0Renderer;	// 112 = 0x70
	MRCroppingSprite *mText0Sprite;	// 116 = 0x74
	NSMutableArray *mText0Images;	// 120 = 0x78
	NSMutableArray *mText0Offsets;	// 124 = 0x7c
	MRImage *mText0Image;	// 128 = 0x80
	unsigned char mLineWordCounts[3];	// 132 = 0x84
	NSArray *mPatchworkAtEnd;	// 136 = 0x88
	NSMutableDictionary *mSprites;	// 140 = 0x8c
	CGSize mImageSize;	// 144 = 0x90
}
- (id)init;	// 0x31b145e9
- (void)_cleanup;	// 0x31b146a5
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b171ed
- (int)_maxLinesForTextElement:(id)textElement;	// 0x31b17865
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x31b1781d
- (void)_unload;	// 0x31b17869
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x31b15fe9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x31b1615d
- (BOOL)isLoadedForTime:(double)time;	// 0x31b14711
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b16b11
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b147b5
- (void)renderFallImage:(id)image atProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes :(CGPoint *)arg7 :(CGPoint)arg8;	// 0x31b1650d
- (void)renderFallImage:(id)image atProgress:(float)progress strength:(float)strength inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes :(CGPoint *)arg8 :(CGPoint)arg9;	// 0x31b161f1
- (void)renderStillImage:(id)image withKey:(id)key inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x31b16815
- (void)renderTextEffectAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b15d91
- (void)renderTitleEffectAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b14885
@end

