/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSArray;

@interface MPStyleManager : NSObject {
	NSMutableDictionary *mStyles;	// 4 = 0x4
	NSArray *mPaths;	// 8 = 0x8
	NSString *mCurrentLocale;	// 12 = 0xc
}
+ (void)loadStyleManagerWithPaths:(id)paths;	// 0x3242d7a9
+ (void)releaseSharedManager;	// 0x3242bc01
+ (id)sharedManager;	// 0x3242bb0d
- (id)initWithPaths:(id)paths;	// 0x3242f031
- (id)_containerDescriptionForLayerAtIndex:(int)index ofStyle:(id)style;	// 0x3242fa69
- (id)allStyleIDs;	// 0x3242bd5d
- (double)allowUserDefinedDurationForStyleID:(id)styleID;	// 0x3242ef89
- (int)antialiasLevelForStyleID:(id)styleID;	// 0x3242db7d
- (BOOL)authorOnAspectRatioChangeForStyleID:(id)styleID;	// 0x3242d4e9
- (CGColorRef)backgroundCGColorForStyleID:(id)styleID;	// 0x3242c659
- (id)backgroundColorLayersForStyleID:(id)styleID;	// 0x3242ed9d
- (double)basePeriodForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x3242ebbd
- (BOOL)canCancelAuthoringForStyleID:(id)styleID;	// 0x3242ee49
- (void)dealloc;	// 0x3242bccd
- (int)defaultAutoKenBurnsLevelForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x3242e705
- (int)defaultAutoKenBurnsLevelForZIndex:(int)zindex ofStyle:(id)style;	// 0x3242e419
- (float)defaultAutoKenBurnsLikelihoodForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x3242e555
- (float)defaultAutoKenBurnsLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x3242e2b9
- (id)defaultColorSchemeForStyleID:(id)styleID;	// 0x3242d495
- (double)defaultEffectDurationForLayer:(int)layer ofStyle:(id)style;	// 0x3242ea9d
- (float)defaultFilterLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x3242e16d
- (id)defaultPositionForZIndex:(int)zindex ofStyle:(id)style;	// 0x3242e051
- (CGSize)defaultSizeForZIndex:(int)zindex ofStyle:(id)style;	// 0x3242de25
- (double)defaultTransitionDurationForLayer:(int)layer ofStyle:(id)style withAspectRatio:(float)aspectRatio;	// 0x3242eb05
- (double)delayFaceDetectionForStyleID:(id)styleID;	// 0x3242be51
- (id)demoDocumentWithImages:(id)images properties:(id)properties count:(int)count options:(id)options;	// 0x3242d851
- (id)descriptionForStyleID:(id)styleID;	// 0x3242bda9
- (float)displayDurationFactorForEffectID:(id)effectID inStyleID:(id)styleID;	// 0x3242dd21
- (float)displayDurationFactorForStyleID:(id)styleID;	// 0x3242dbcd
- (int)dynamicBatchSizeForStyleID:(id)styleID;	// 0x3242bf51
- (BOOL)easeKenBurnsForStyleID:(id)styleID;	// 0x3242dddd
- (id)effectIDsForStyleID:(id)styleID;	// 0x3242c731
- (id)effectPresetIDsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x3242e8a5
- (id)effectPresetIDsForStyleID:(id)styleID;	// 0x3242c3f1
- (id)effectPresetsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x3242c515
- (id)framesForStyleID:(id)styleID;	// 0x3242c2cd
- (BOOL)hasImagesForLayerID:(id)layerID forStyleID:(id)styleID;	// 0x3242ee89
- (int)indexOfMainLayerForStyleID:(id)styleID;	// 0x3242cbf9
- (int)indexOfTitleEffectLayerForStyleID:(id)styleID;	// 0x3242cc7d
- (id)interstitialEffectLayoutForStyleID:(id)styleID;	// 0x3242cda9
- (id)interstitialEffectLayoutsForStyleID:(id)styleID;	// 0x3242cd75
- (BOOL)isDynamicForStyleID:(id)styleID;	// 0x3242bf01
- (int)kenBurnsOffsetTypeForStyleID:(id)styleID;	// 0x3242dd91
- (id)layerIDForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x3242ec8d
- (int)layerIndexForLayerID:(id)layerID ofStyle:(id)style;	// 0x3242ec0d
- (id)localizedNameForStyleID:(id)styleID;	// 0x3242bfa1
- (id)localizedNameForStyleID:(id)styleID withLanguage:(id)language;	// 0x3242c07d
- (BOOL)machineMeetsRequirementsForStyleID:(id)styleID;	// 0x3242d429
- (int)mediaPresentationOrderForStyleID:(id)styleID;	// 0x3242d805
- (double)minimumDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x3242d1c9
- (double)minimumEffectDurationForStyleID:(id)styleID;	// 0x3242d299
- (double)navigationIncrementForStyleID:(id)styleID;	// 0x3242ef19
- (BOOL)needsFaceDetectionForStyleID:(id)styleID;	// 0x3242be01
- (BOOL)needsReauthorOnAspectRatioChange:(id)change;	// 0x3242d6f1
- (BOOL)needsStyleUpdateOnSlideChangeForStyleID:(id)styleID;	// 0x3242d689
- (BOOL)needsTimingUpdateOnSlideChangeForStyleID:(id)styleID;	// 0x3242d621
- (BOOL)needsToBeLiveForStyleID:(id)styleID;	// 0x3242beb1
- (int)numberOfSlidesToPreloadForStyleID:(id)styleID;	// 0x3242d5b5
- (double)posterTimeForStyleID:(id)styleID;	// 0x3242d759
- (id)previewPathForStyleID:(id)styleID;	// 0x3242c25d
- (int)regionOfInterestPickModeForStyleID:(id)styleID;	// 0x3242ee05
- (void)reloadBundles;	// 0x3242f189
- (int)reorderModeForStyleID:(id)styleID;	// 0x3242dfe5
- (id)resourcePathForStyleID:(id)styleID;	// 0x3242c295
- (double)shortestDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x3242d0a1
- (double)shortestEffectDurationForStyleID:(id)styleID;	// 0x3242ce81
- (id)songPathsForStyleID:(id)styleID;	// 0x3242cba5
- (int)subtitleOrderForStyleID:(id)styleID;	// 0x3242d549
- (BOOL)supportsRandomTransitionForStyleID:(id)styleID;	// 0x3242d42d
- (id)thumbnailPathForStyleID:(id)styleID;	// 0x3242c14d
- (id)thumbnailPathForStyleID:(id)styleID scaleFactor:(float)factor;	// 0x3242c185
- (id)titleEffectLayoutForStyleID:(id)styleID;	// 0x3242ce15
- (id)titleEffectLayoutsForStyleID:(id)styleID;	// 0x3242cd41
- (id)transitionsForStyleID:(id)styleID;	// 0x3242c971
- (id)versionOfStyleID:(id)styleID;	// 0x3242bdc9
@end
