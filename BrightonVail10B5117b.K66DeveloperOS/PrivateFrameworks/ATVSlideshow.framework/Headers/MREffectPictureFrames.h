/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MZEffectTiming.h"
#import "MREffect.h"

@class NSMutableDictionary, NSMutableArray, MRImageProvider, MRCroppingSprite, NSString;

@interface MREffectPictureFrames : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSMutableDictionary *mFrameProviders;	// 120 = 0x78
	MRCroppingSprite *mFrameSprite;	// 124 = 0x7c
	MRImageProvider *mWallProvider;	// 128 = 0x80
	MRImageProvider *mGradientProvider;	// 132 = 0x84
	NSMutableArray *mTableProviders;	// 136 = 0x88
	NSMutableArray *mWallSprites;	// 140 = 0x8c
	NSMutableArray *mLayoutWidths;	// 144 = 0x90
	float mTotalWidth;	// 148 = 0x94
	float mXOffset;	// 152 = 0x98
	BOOL mIsLoaded;	// 156 = 0x9c
	NSMutableArray *mLayouts;	// 160 = 0xa0
	NSMutableArray *mFrames;	// 164 = 0xa4
	NSMutableArray *mSlideOrder;	// 168 = 0xa8
	NSMutableArray *mAspectRatios;	// 172 = 0xac
	NSString *mFirstFrame;	// 176 = 0xb0
	NSString *mLastFrame;	// 180 = 0xb4
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x3347e6e9
+ (BOOL)hasCustomTiming;	// 0x3347e6e1
+ (void)initialize;	// 0x33479e81
- (id)initWithEffectID:(id)effectID;	// 0x3347bc7d
- (void)_applyTimingToSlideProviders;	// 0x3347e889
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x3347feb5
- (void)_cleanup;	// 0x3347bd91
- (void)_drawBreakFrame:(id)frame provider:(id)provider index:(int)index rect:(CGRect)rect time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33482541
- (void)_drawBreakFrameInRect:(CGRect)rect frameWidth:(float)width time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33482b6d
- (id)_drawFrame:(id)frame provider:(id)provider index:(int)index rect:(CGRect)rect time:(double)time onTable:(BOOL)table inContext:(id)context withArguments:(id)arguments;	// 0x33482fed
- (double)_durationForEffect;	// 0x3347ec01
- (double)_durationForEffect:(BOOL)effect;	// 0x3347ec19
- (CGRect)_frameRectFromInfo:(id)info onShelf:(BOOL)shelf;	// 0x33480231
- (float)_nextSlideProviderAspectRatioToFitInAspectRatio:(id)aspectRatio providerKeys:(id)keys slideInformation:(id)information index:(int *)index force:(BOOL)force;	// 0x33481bf1
- (id)_populateFrames;	// 0x3347ff41
- (id)_randomFrameForAspectRatio:(id)aspectRatio forTable:(BOOL)table allowMatte:(BOOL)matte onlyLoaded:(BOOL)loaded ignoreFrames:(id)frames randomGenerator:(id)generator;	// 0x3348207d
- (CGRect)_rectForFrameID:(id)frameID rect:(CGRect)rect onTable:(BOOL)table aspectRatio:(float)ratio slideAspectRatio:(float)ratio5;	// 0x33482371
- (void)_setupLayoutWithSlideInformation:(id)slideInformation;	// 0x3347f235
- (float)_startingOffset;	// 0x3347f1b5
- (float)_startingWidth;	// 0x3347f05d
- (void)_unload;	// 0x3348384d
- (float)_xForSlideAtIndex:(int)index layoutWidth:(float *)width;	// 0x33480311
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x334809b1
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x33480a99
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x334836b9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33483805
- (BOOL)isLoadedForTime:(double)time;	// 0x3347c579
- (id)layoutsWithSlidesInfo:(id)slidesInfo seed:(unsigned)seed hasShelf:(BOOL)shelf;	// 0x3347c089
- (double)lowestDisplayTime;	// 0x33480ab1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3347c999
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33480ac9
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x3347e839
- (void)setPixelSize:(CGSize)size;	// 0x3347c779
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x33480871
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x33480781
@end

