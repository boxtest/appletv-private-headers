/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "MZEffectTiming.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary, NSMutableArray, NSString, MRImageProvider;

@interface MREffectHangingPictures : MREffect <MZEffectTiming> {
	MRImageProvider *mRopeImageProvider;	// 112 = 0x70
	MRImageProvider *mPhotoFrameImageProviders[6];	// 116 = 0x74
	NSMutableDictionary *mSprites;	// 140 = 0x8c
	NSMutableDictionary *mMatrices;	// 144 = 0x90
	NSString *mCurrentMainSlideKey;	// 148 = 0x94
	NSMutableArray *mSmallSlideProviders;	// 152 = 0x98
	double mSlideTimings[20][3];	// 156 = 0x9c
	BOOL mScenario[9];	// 636 = 0x27c
	unsigned char mNumberOfRopes;	// 645 = 0x285
	unsigned short mFrameIndices;	// 646 = 0x286
}
@property(readonly, assign) double mainDuration;	// @dynamic
@property(readonly, assign) double phaseInDuration;	// @dynamic
@property(readonly, assign) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x349a2be5
+ (BOOL)hasCustomTiming;	// 0x349a2be1
+ (void)initialize;	// 0x349a248d
- (id)initWithEffectID:(id)effectID;	// 0x349a2561
- (void)_applyTimingToSlideProviders;	// 0x349a2e69
- (void)_applyTimingToSmallSlideProviders;	// 0x349a2fbd
- (double)_buildScenarioWithNumberOfSlides:(unsigned)slides orientationInformation:(BOOL *)information;	// 0x349a33c1
- (void)_cleanup;	// 0x349a2a75
- (void)_unload;	// 0x349a6571
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x349a2e11
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x349a2e41
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x349a634d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x349a64dd
- (BOOL)isLoadedForTime:(double)time;	// 0x349a3949
- (double)lowestDisplayTime;	// 0x349a2e55
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349a3bb1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349a5621
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x349a3139
- (void)setPixelSize:(CGSize)size;	// 0x349a3199
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x349a2d99
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x349a2d69
@end
