/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSMutableDictionary;

@interface MPStyleManager : NSObject {
	NSMutableDictionary *mStyles;	// 4 = 0x4
}
+ (void)loadStyleManagerWithPaths:(id)paths;	// 0x33cf9bb5
+ (void)releaseSharedManager;	// 0x33cf87b5
+ (id)sharedManager;	// 0x33cf876d
- (id)initWithPaths:(id)paths;	// 0x33cfb145
- (id)_containerDescriptionForLayerAtIndex:(int)index ofStyle:(id)style;	// 0x33cfba29
- (id)allStyleIDs;	// 0x33cf8839
- (int)antialiasLevelForStyleID:(id)styleID;	// 0x33cf9fe1
- (BOOL)authorOnAspectRatioChangeForStyleID:(id)styleID;	// 0x33cf9b01
- (CGColorRef)backgroundCGColorForStyleID:(id)styleID;	// 0x33cf8cf9
- (id)backgroundColorLayerForStyleID:(id)styleID;	// 0x33cfb011
- (double)basePeriodForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x33cfaecd
- (BOOL)canCancelAuthoringForStyleID:(id)styleID;	// 0x33cfb079
- (void)dealloc;	// 0x33cf87e5
- (int)defaultAutoKenBurnsLevelForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x33cfaa81
- (int)defaultAutoKenBurnsLevelForZIndex:(int)zindex ofStyle:(id)style;	// 0x33cfa7a9
- (float)defaultAutoKenBurnsLikelihoodForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x33cfa8f5
- (float)defaultAutoKenBurnsLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x33cfa655
- (id)defaultColorSchemeForStyleID:(id)styleID;	// 0x33cf9ab9
- (double)defaultEffectDurationForLayer:(int)layer ofStyle:(id)style;	// 0x33cfae0d
- (float)defaultFilterLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x33cfa52d
- (id)defaultPositionForZIndex:(int)zindex ofStyle:(id)style;	// 0x33cfa419
- (CGSize)defaultSizeForZIndex:(int)zindex ofStyle:(id)style;	// 0x33cfa22d
- (double)defaultTransitionDurationForLayer:(int)layer ofStyle:(id)style;	// 0x33cfae6d
- (id)demoDocumentWithImages:(id)images properties:(id)properties count:(int)count options:(id)options;	// 0x33cf9c59
- (id)descriptionForStyleID:(id)styleID;	// 0x33cf8881
- (float)displayDurationFactorForEffectID:(id)effectID inStyleID:(id)styleID;	// 0x33cfa175
- (float)displayDurationFactorForStyleID:(id)styleID;	// 0x33cfa029
- (BOOL)easeKenBurnsForStyleID:(id)styleID;	// 0x33cfa1e9
- (id)effectIDsForStyleID:(id)styleID;	// 0x33cf8db1
- (id)effectPresetIDsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x33cfac05
- (id)effectPresetIDsForStyleID:(id)styleID;	// 0x33cf8ab9
- (id)effectPresetsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x33cf8bc9
- (id)framesForStyleID:(id)styleID;	// 0x33cf89a9
- (BOOL)hasImagesForLayerID:(id)layerID forStyleID:(id)styleID;	// 0x33cfb0b5
- (int)indexOfMainLayerForStyleID:(id)styleID;	// 0x33cf9299
- (int)indexOfTitleEffectLayerForStyleID:(id)styleID;	// 0x33cf9319
- (id)interstitialEffectLayoutForStyleID:(id)styleID;	// 0x33cf9435
- (id)interstitialEffectLayoutsForStyleID:(id)styleID;	// 0x33cf9409
- (id)layerIDForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x33cfaf15
- (id)localizedNameForStyleID:(id)styleID;	// 0x33cf88d1
- (BOOL)machineMeetsRequirementsForStyleID:(id)styleID;	// 0x33cf9a59
- (int)mediaPresentationOrderForStyleID:(id)styleID;	// 0x33cf9c15
- (double)minimumDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x33cf982d
- (double)minimumEffectDurationForStyleID:(id)styleID;	// 0x33cf98f9
- (double)posterTimeForStyleID:(id)styleID;	// 0x33cf9f99
- (id)previewPathForStyleID:(id)styleID;	// 0x33cf8979
- (int)regionOfInterestPickModeForStyleID:(id)styleID;	// 0x33cfb03d
- (double)shortestDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x33cf9701
- (double)shortestEffectDurationForStyleID:(id)styleID;	// 0x33cf94fd
- (id)songPathsForStyleID:(id)styleID;	// 0x33cf9251
- (int)subtitleOrderForStyleID:(id)styleID;	// 0x33cf9b59
- (BOOL)supportsRandomTransitionForStyleID:(id)styleID;	// 0x33cf9a5d
- (id)thumbnailPathForStyleID:(id)styleID;	// 0x33cf8949
- (id)titleEffectLayoutForStyleID:(id)styleID;	// 0x33cf9499
- (id)titleEffectLayoutsForStyleID:(id)styleID;	// 0x33cf93dd
- (id)transitionsForStyleID:(id)styleID;	// 0x33cf9009
- (id)versionOfStyleID:(id)styleID;	// 0x33cf88a1
@end
