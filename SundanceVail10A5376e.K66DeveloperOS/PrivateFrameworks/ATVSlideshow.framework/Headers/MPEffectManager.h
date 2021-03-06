/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableArray, NSLock;

@interface MPEffectManager : NSObject {
	NSMutableDictionary *mEffects;	// 4 = 0x4
	NSMutableDictionary *mCategories;	// 8 = 0x8
	NSMutableDictionary *mCachedAspectRatios;	// 12 = 0xc
	NSMutableDictionary *mCachedBreakInfo;	// 16 = 0x10
	NSLock *mLock;	// 20 = 0x14
	NSMutableArray *mRegisteredFonts;	// 24 = 0x18
}
+ (void)initialize;	// 0x361ef939
+ (void)loadEffectManagerWithPaths:(id)paths;	// 0x361f2dd9
+ (void)releaseSharedManager;	// 0x361efa59
+ (id)sharedManager;	// 0x361ef965
- (id)initWithPaths:(id)paths;	// 0x361f2e35
- (void)_loadFontsFromPath:(id)path requiredFonts:(id)fonts;	// 0x361f38ad
- (id)allCategoryIDs;	// 0x361f0505
- (id)allEffectIDs;	// 0x361f04e5
- (BOOL)allowTextCustomizationForEffectID:(id)effectID presetID:(id)anId forTextAtIndex:(int)index;	// 0x361f2d1d
- (id)aspectRatioForEffectID:(id)effectID;	// 0x361f15a9
- (id)attributesForEffectID:(id)effectID andPresetID:(id)anId;	// 0x361f0805
- (double)breakScaleOffsetForEffectID:(id)effectID;	// 0x361f2ba1
- (int)breakTypeForSlideAtIndex:(int)index inEffect:(id)effect forPresetID:(id)presetID;	// 0x361f232d
- (id)categoryIDsForEffectID:(id)effectID;	// 0x361eff6d
- (id)controlForAttribute:(id)attribute forEffectID:(id)effectID;	// 0x361f0291
- (void)dealloc;	// 0x361efb25
- (void)defaultDurationsForEffectID:(id)effectID phaseInDuration:(double *)duration mainDuration:(double *)duration3 phaseOutDuration:(double *)duration4;	// 0x361f10cd
- (double)defaultFullDurationForEffectID:(id)effectID;	// 0x361f1e0d
- (double)defaultMainDurationForEffectID:(id)effectID;	// 0x361f1059
- (double)defaultPhaseInDurationForEffectID:(id)effectID;	// 0x361f1025
- (double)defaultPhaseOutDurationForEffectID:(id)effectID;	// 0x361f1095
- (double)defaultPosterFrameTimeForEffect:(id)effect;	// 0x361f13ad
- (double)defaultPosterFrameTimeForEffectID:(id)effectID andPresetID:(id)anId;	// 0x361f12d1
- (id)defaultStringForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x361f06d9
- (id)defaultStringForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index needsNSConversion:(BOOL)conversion;	// 0x361f1669
- (id)descriptionForEffectID:(id)effectID;	// 0x361f099d
- (double)durationPaddingForEffectID:(id)effectID;	// 0x361f2c01
- (BOOL)effectDoesAccumulate:(id)accumulate;	// 0x361f212d
- (id)effectIDsForCategoryID:(id)categoryID;	// 0x361effa5
- (BOOL)effectNeedsBreakInformation:(id)information;	// 0x361f20e5
- (BOOL)effectNeedsRandomSeedInformation:(id)information;	// 0x361f209d
- (id)effectsWithNumOfImages:(unsigned)images;	// 0x361f03dd
- (id)imageInputInfoForEffectID:(id)effectID;	// 0x361f0fcd
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x361f012d
- (id)localizedEffectNameForEffectID:(id)effectID;	// 0x361f00e9
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inEffect:(id)effect;	// 0x361f0245
- (float)maxFontSizeInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x361f06fd
- (unsigned)maxNumOfImagesPerEffectInList:(id)list;	// 0x361f1f15
- (float)mediaAspectRatioForEffectID:(id)effectID usingAttributes:(id)attributes atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x361f0d51
- (float)mediaAspectRatioForEffectID:(id)effectID usingAttributes:(id)attributes atIndex:(int)index defaultAspectRatio:(float)ratio imageAspectRatio:(float)ratio5;	// 0x361f28e9
- (float)mediaAspectRatioForEffectID:(id)effectID usingPresetID:(id)anId atIndex:(int)index;	// 0x361f0ac9
- (float)mediaAspectRatioForEffectID:(id)effectID usingPresetID:(id)anId atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x361f0c31
- (float)mediaAspectRatioHintForEffectID:(id)effectID usingAttributes:(id)attributes atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x361f265d
- (id)mediaAspectRatioHintsForEffectID:(id)effectID usingPresetID:(id)anId defaultAspectRatio:(float)ratio;	// 0x361f2175
- (id)mediaAspectRatiosForEffectID:(id)effectID usingPresetID:(id)anId;	// 0x361f09bd
- (id)mediaAspectRatiosForEffectID:(id)effectID usingPresetID:(id)anId defaultAspectRatio:(float)ratio;	// 0x361f0b2d
- (unsigned)minNumOfImagesPerEffectInList:(id)list;	// 0x361f1fd9
- (double)minimumEffectDurationForEffectID:(id)effectID;	// 0x361f1cc9
- (unsigned)numOfImagesForEffectID:(id)effectID;	// 0x361efd41
- (unsigned)numOfImagesForEffectPresetID:(id)effectPresetID;	// 0x361f1e81
- (unsigned)numOfTextsForEffectID:(id)effectID;	// 0x361eff25
- (int)numberOfSecondarySlidesForEffectID:(id)effectID;	// 0x361f1519
- (int)numberOfSlidesForEffectID:(id)effectID;	// 0x361f1451
- (id)orientationForEffectID:(id)effectID;	// 0x361f1569
- (BOOL)posterTimeIsStaticForEffectID:(id)effectID andPresetID:(id)anId;	// 0x361f1b9d
- (id)presetIDsForEffectID:(id)effectID;	// 0x361f07bd
- (id)settingsUIControlDescriptionsForEffect:(id)effect;	// 0x361f03a5
- (id)showTimeScriptForEffectID:(id)effectID atSlideIndex:(int)slideIndex;	// 0x361f1c55
- (id)sizeScriptForEffectID:(id)effectID atIndex:(int)index;	// 0x361f1d99
- (BOOL)skipBreakScaleForEffectID:(id)effectID;	// 0x361f1619
- (BOOL)useUppercaseForEffectID:(id)effectID presetID:(id)anId forTextAtIndex:(int)index;	// 0x361f2c61
- (id)versionOfEffectID:(id)effectID;	// 0x361efd09
@end

