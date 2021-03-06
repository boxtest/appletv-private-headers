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
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x34306be5
+ (BOOL)hasCustomTiming;	// 0x34306be1
+ (void)initialize;	// 0x3430648d
- (id)initWithEffectID:(id)effectID;	// 0x34306561
- (void)_applyTimingToSlideProviders;	// 0x34306e69
- (void)_applyTimingToSmallSlideProviders;	// 0x34306fbd
- (double)_buildScenarioWithNumberOfSlides:(unsigned)slides orientationInformation:(BOOL *)information;	// 0x343073c1
- (void)_cleanup;	// 0x34306a75
- (void)_unload;	// 0x3430a571
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x34306e11
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x34306e41
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3430a34d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3430a4dd
- (BOOL)isLoadedForTime:(double)time;	// 0x34307949
- (double)lowestDisplayTime;	// 0x34306e55
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34307bb1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34309621
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x34307139
- (void)setPixelSize:(CGSize)size;	// 0x34307199
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x34306d99
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x34306d69
@end

