/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MZEffectTiming.h"
#import "MREffect.h"

@class MRCAMLBezierData, NSMutableArray, NSDictionary, MRImage, NSMutableDictionary;

@interface MREffectHyperGrid : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSMutableArray *mLayouts;	// 120 = 0x78
	int mSlideStartIndex;	// 124 = 0x7c
	int mIterationStartIndex;	// 128 = 0x80
	int mLastSlideIndex;	// 132 = 0x84
	MRImage *mSavedImage;	// 136 = 0x88
	int mLastIteration;	// 140 = 0x8c
	MRCAMLBezierData *mCurves[2];	// 144 = 0x90
	MRCAMLBezierData *mBreakCurves[2];	// 152 = 0x98
	BOOL mNeedsToRecalculateIterations;	// 160 = 0xa0
	float mAspectRatio;	// 164 = 0xa4
	NSDictionary *mBreakInformation;	// 168 = 0xa8
	int mLastUsableIteration;	// 172 = 0xac
	int mLastIterationsAdded[2];	// 176 = 0xb0
	BOOL mCanAddSlides;	// 184 = 0xb8
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x3222f419
+ (BOOL)hasCustomTiming;	// 0x3222f415
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x3222f4d9
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x3222f4dd
- (id)initWithEffectID:(id)effectID;	// 0x3222f025
- (void)_applyTimingToSlideProviders:(int)slideProviders;	// 0x3222f91d
- (float)_aspectRatioForLayout:(int)layout atIndex:(int)index inAspectRatio:(float)aspectRatio;	// 0x32232ad9
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x32230965
- (double)_calculateMainDuration;	// 0x32230499
- (void)_cleanup;	// 0x3222f2a1
- (void)_drawSlideAtIndex:(int)index size:(CGSize)size position:(CGPoint)position atTime:(double)time iterationTime:(double)time5 iterationDuration:(double)duration inContext:(id)context withArguments:(id)arguments;	// 0x32234031
- (int)_findLandscape:(BOOL)landscape inIndicies:(id)indicies withSlideInformation:(id)slideInformation;	// 0x32230a01
- (int)_findLandscape:(BOOL)landscape inIndicies:(id)indicies withSlideInformation:(id)slideInformation iterations:(id)iterations neededAspectRatio:(float)ratio;	// 0x32230a35
- (int)_iterationForTime:(double)time;	// 0x32232fe1
- (BOOL)_layoutAtIndexHasBreak:(int)indexHasBreak;	// 0x32232f91
- (int)_layoutCount:(int)count;	// 0x3222f8f9
- (int)_lowestDisplayIteration;	// 0x3222f695
- (void)_renderIteration:(id)iteration atTime:(double)time relativeTime:(double)time3 inContext:(id)context withArguments:(id)arguments;	// 0x32233709
- (void)_setupLayoutsWithSlideInfo:(id)slideInfo aspectRatio:(float)ratio;	// 0x32230d21
- (CGSize)_sizeForLayout:(int)layout atIndex:(int)index;	// 0x32233f8d
- (id)_slideProviderWithAspectRatio:(BOOL)aspectRatio nearest:(int)nearest actual:(int *)actual;	// 0x322345d5
- (void)_unload;	// 0x32234801
- (void)_updateSizeScripts:(int)scripts;	// 0x3222fd91
- (void)appendSlideInformation:(id)information andTextInformation:(id)information2;	// 0x3222f881
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x322307a9
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x32230901
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3223466d
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x3222f521
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x322347b9
- (id)layoutForSlideIndex:(int)slideIndex forIterations:(id)iterations atIndex:(int *)index;	// 0x32230bb1
- (double)lowestDisplayTime;	// 0x32230739
- (BOOL)needsMoreSlidesAtTime:(double)time;	// 0x32230919
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32232ba9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32233111
- (void)setAttributes:(id)attributes;	// 0x3222f379
- (void)setMultiImageSlideRange:(NSRange)range;	// 0x3222f769
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x322305b9
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x32230361
- (BOOL)slideIndex:(int)index isInIteration:(id)iteration;	// 0x32230ccd
- (BOOL)supportsDynamicExpansion;	// 0x3222f4e1
- (int)typicalSlideBatchSize;	// 0x3222f4e5
@end
