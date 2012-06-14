/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "MPLayerableSupportInternal.h"
#import <NSObject.h> // Unknown library

@class MPDocumentInternal, NSMutableDictionary, MCMontage, NSArray;
@protocol MPAssetKeyDelegate;

@interface MPDocument : NSObject <MPLayerableSupportInternal, NSCoding> {
@private
	MCMontage *_montage;	// 4 = 0x4
	NSArray *_userProvidedStacks;	// 8 = 0x8
	NSMutableDictionary *_documentAttributes;	// 12 = 0xc
	NSMutableDictionary *_fileProperties;	// 16 = 0x10
	NSMutableDictionary *_layerGroups;	// 20 = 0x14
	BOOL _preserveMedia;	// 24 = 0x18
	id<MPAssetKeyDelegate> _assetKeyDelegate;	// 28 = 0x1c
	MPDocumentInternal *_internal;	// 32 = 0x20
}
@property(assign) id assetKeyDelegate;	// G=0x3205d6b5; S=0x3205d6c5; converted property
@property(retain) id audioPaths;	// G=0x3205dda9; S=0x3205dde1; converted property
@property(retain) id audioPlaylist;	// G=0x3205e505; S=0x3205e53d; converted property
@property(assign) CGColorRef backgroundCGColor;	// G=0x3205e421; S=0x3205e459; converted property
@property(readonly, retain) NSMutableDictionary *documentAttributes;	// G=0x3205e5c9; converted property
@property(retain) id documentLayerGroup;	// G=0x3205fded; S=0x3205f759; converted property
@property(retain) id fileURL;	// G=0x3205d82d; S=0x3205d84d; converted property
@property(retain) id lastRandomTransition;	// G=0x32061689; S=0x320616a9; converted property
@property(assign) int loopingMode;	// G=0x3205d5c9; S=0x3205d601; converted property
@property(retain) id mediaProperties;	// G=0x3205d125; S=0x3205d135; converted property
@property(retain) MCMontage *montage;	// G=0x3205e5b1; S=0x32060029; converted property
@property(assign) double numberOfLoops;	// G=0x3205d63d; S=0x3205d675; converted property
@property(assign) BOOL preserveMedia;	// G=0x3205d105; S=0x3205d115; converted property
@property(assign) BOOL savesPathsAsAbsolute;	// G=0x3205d7a9; S=0x3205d7cd; converted property
@property(retain) id stacks;	// G=0x3205dcad; S=0x3205dcbd; converted property
@property(retain) id styleID;	// G=0x32062389; S=0x320623c1; converted property
@property(retain) id title;	// G=0x32062351; S=0x3206236d; converted property
@property(retain) id undoManager;	// G=0x3205d7ed; S=0x3205d80d; converted property
@property(retain) id videoPaths;	// G=0x3205dcfd; S=0x3205dd6d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3205bd8d
+ (void)initialize;	// 0x3205bcc5
+ (BOOL)isNativeType:(id)type;	// 0x3205be0d
+ (id)readableTypes;	// 0x3205bde5
+ (id)unarchiveDocumentFromData:(id)data error:(id *)error;	// 0x3205bca9
+ (id)writableTypes;	// 0x3205bdbd
- (id)init;	// 0x3205be31
- (id)initWithCoder:(id)coder;	// 0x3205c49d
- (CGImageRef)CGImageForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x32062b79
- (CGImageRef)CGImageForAssetAtPath:(id)path andSize:(CGSize)size orientation:(char *)orientation thumbnailIfPossible:(BOOL)possible now:(BOOL)now;	// 0x32062bb5
- (IOSurfaceRef)IOSurfaceForAssetAtPath:(id)path andSize:(CGSize)size orientation:(char *)orientation;	// 0x32062e09
- (void)_setMediaProperties:(id)properties;	// 0x32060069
- (id)absolutePathForAssetAtPath:(id)path;	// 0x320623fd
- (id)absolutePathForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x320626fd
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x32062b09
- (id)absoluteVideoPaths;	// 0x32060079
- (id)actionableObjectForID:(id)anId;	// 0x3205fcd5
- (void)addAudioPath:(id)path;	// 0x3205db29
- (void)addAudioPaths:(id)paths;	// 0x3205db65
- (void)addLayer:(id)layer;	// 0x3205def9
- (void)addLayers:(id)layers;	// 0x3205df8d
- (void)addStacks:(id)stacks;	// 0x3205dba1
- (void)addVideoPath:(id)path;	// 0x3205dab1
- (void)addVideoPaths:(id)paths;	// 0x3205daed
- (id)allEffectContainers;	// 0x3205ea09
- (id)allEffects;	// 0x3205ea41
- (id)allSlides;	// 0x3205ea79
- (id)allSlides:(BOOL)slides;	// 0x3205ea8d
- (id)allSongs;	// 0x3205ebc9
- (id)altitudeForPath:(id)path;	// 0x32060dcd
- (int)antialiasLevel;	// 0x3205ed39
- (unsigned)applyStyle:(id)style;	// 0x3205cf1d
- (id)areaForPath:(id)path;	// 0x32060d0d
- (double)aspectRatioDidChange:(float)aspectRatio atTime:(double)time;	// 0x32061c59
// converted property getter: - (id)assetKeyDelegate;	// 0x3205d6b5
- (id)attributeForAssetAtPath:(id)path forKey:(id)key;	// 0x32063061
// converted property getter: - (id)audioPaths;	// 0x3205dda9
// converted property getter: - (id)audioPlaylist;	// 0x3205e505
- (id)authoringOptionForKey:(id)key;	// 0x3205d54d
// converted property getter: - (CGColorRef)backgroundCGColor;	// 0x3205e421
- (void)beginBatchModify;	// 0x3205d86d
- (id)cachedAbsolutePathFromPath:(id)path;	// 0x32061d0d
- (id)cachedAbsoluteStillPathFromPath:(id)path;	// 0x32061e85
- (id)captionForPath:(id)path;	// 0x32060a7d
- (id)cityForPath:(id)path;	// 0x32060c8d
- (void)cleanup;	// 0x3205d981
- (void)configureActions;	// 0x3206206d
- (int)countOfLayers;	// 0x320621e5
- (id)countryForPath:(id)path;	// 0x32060bcd
- (id)creationDateForPath:(id)path;	// 0x3206096d
- (id)currentStyle;	// 0x3205cee5
- (id)dataForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x32062d9d
- (void)dealloc;	// 0x3205cdd1
- (id)definedPlaceNameForPath:(id)path;	// 0x32060d8d
- (id)description;	// 0x3205ccc5
- (id)descriptionForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x32061679
- (BOOL)detectFacesInBackground;	// 0x32061c9d
- (id)displayName;	// 0x3205ced9
- (id)documentAttributeForKey:(id)key;	// 0x3205cf81
// converted property getter: - (id)documentAttributes;	// 0x3205e5c9
// converted property getter: - (id)documentLayerGroup;	// 0x3205fded
- (void)dump;	// 0x3205e5c1
- (double)duration;	// 0x3205e495
- (double)durationForPath:(id)path;	// 0x3205f741
- (id)elements;	// 0x3205eeb5
- (void)encodeWithCoder:(id)coder;	// 0x3205c2f1
- (void)endBatchModify;	// 0x3205d8cd
- (double)fadeOutAudioDuration;	// 0x320616c9
// converted property getter: - (id)fileURL;	// 0x3205d82d
- (void)finalize;	// 0x3205cd91
- (id)flightPlanFrom:(CGPoint)from to:(CGPoint)to;	// 0x3206160d
- (id)fullDebugLog;	// 0x3205e5c5
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x3205dfdd
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x32062295
- (BOOL)isAudioAtPath:(id)path;	// 0x320603e5
- (BOOL)isImageAtPath:(id)path;	// 0x3206012d
- (BOOL)isInBatchModify;	// 0x32062155
- (BOOL)isLive;	// 0x32061cd1
- (BOOL)isMovieAtPath:(id)path;	// 0x32060289
- (BOOL)isSupportedMovieForAssetAtPath:(id)path;	// 0x32062e91
- (id)keyedLayers;	// 0x3205e411
- (id)keywordsForPath:(id)path;	// 0x320609f5
// converted property getter: - (id)lastRandomTransition;	// 0x32061689
- (CGPoint)latLongPointForMap:(id)map withAttributes:(id)attributes;	// 0x320610dd
- (id)latitudeForPath:(id)path;	// 0x32060abd
- (id)layerForKey:(id)key;	// 0x3205e1ed
- (id)layers;	// 0x3205dec1
- (BOOL)layersCanPositionZIndex;	// 0x32062069
- (id)longitudeForPath:(id)path;	// 0x32060b45
// converted property getter: - (int)loopingMode;	// 0x3205d5c9
- (id)mainLayers;	// 0x3205e579
- (int)mapLevelForPath:(id)path;	// 0x32061559
- (id)marimbaDocument;	// 0x3206310d
// converted property getter: - (id)mediaProperties;	// 0x3205d125
- (int)mediaTypeForPath:(id)path;	// 0x3205f755
// converted property getter: - (id)montage;	// 0x3205e5b1
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x3205e1ad
- (BOOL)nearingEndWithOptions:(id)options;	// 0x32061c09
- (BOOL)needsToRemoveFadeIn;	// 0x320621b1
- (id)neighborhoodForPath:(id)path;	// 0x32060d4d
// converted property getter: - (double)numberOfLoops;	// 0x3205d63d
- (id)objectInLayersAtIndex:(int)index;	// 0x3206221d
- (id)oceanForPath:(id)path;	// 0x32060c0d
- (id)orderedVideoPaths;	// 0x3205dd35
- (void)organizeRandomTransitions;	// 0x32061709
- (id)organizedRandomTransitions;	// 0x32061bc1
- (id)outroEffect;	// 0x3205e86d
- (id)placeForPath:(id)path;	// 0x32060ccd
- (CGPoint)pointForMap:(id)map withAttributes:(id)attributes;	// 0x320611bd
- (double)posterTime;	// 0x3205ed01
// converted property getter: - (BOOL)preserveMedia;	// 0x3205d105
- (id)propertiesForMediaPath:(id)mediaPath;	// 0x3205d1d1
- (BOOL)readFromPath:(id)path ofType:(id)type error:(id *)error;	// 0x3205cd8d
- (void)reconnectAllTransitions;	// 0x3205ed89
- (id)regionsOfInterestForPath:(id)path;	// 0x32060541
- (id)regionsOfInterestForPath:(id)path detect:(BOOL)detect;	// 0x32060555
- (void)removeAllAudioPaths;	// 0x3205de55
- (void)removeAllLayers;	// 0x3205e01d
- (void)removeAllStacks;	// 0x3205de8d
- (void)removeAllVideoPaths;	// 0x3205de1d
- (double)removeFadeInIfNeeded;	// 0x32062179
- (void)removeLayerForKey:(id)key;	// 0x3205e32d
- (void)removeLayersAtIndices:(id)indices;	// 0x3205e171
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x320622d5
- (void)removePath:(id)path;	// 0x3205dc35
- (void)removePaths:(id)paths;	// 0x3205dc71
- (void)removePropertiesForMediaPath:(id)mediaPath;	// 0x3205d4cd
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x32062311
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x32062f4d
- (CGSize)resolutionForPath:(id)path;	// 0x3205f359
// converted property getter: - (BOOL)savesPathsAsAbsolute;	// 0x3205d7a9
- (void)setAbsolutePath:(id)path forKey:(id)key;	// 0x32061db5
- (void)setAbsoluteStillPath:(id)path forKey:(id)key;	// 0x32061f2d
// converted property setter: - (void)setAssetKeyDelegate:(id)delegate;	// 0x3205d6c5
- (void)setAudioFadeOutDuration:(double)duration;	// 0x320616e9
// converted property setter: - (void)setAudioPaths:(id)paths;	// 0x3205dde1
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x3205e53d
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x3205d589
// converted property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x3205e459
- (void)setDocumentAttribute:(id)attribute forKey:(id)key;	// 0x3205d031
// converted property setter: - (void)setDocumentLayerGroup:(id)group;	// 0x3205f759
// converted property setter: - (void)setFileURL:(id)url;	// 0x3205d84d
// converted property setter: - (void)setLastRandomTransition:(id)transition;	// 0x320616a9
- (void)setLayer:(id)layer forKey:(id)key;	// 0x3205e20d
// converted property setter: - (void)setLoopingMode:(int)mode;	// 0x3205d601
// converted property setter: - (void)setMediaProperties:(id)properties;	// 0x3205d135
// converted property setter: - (void)setMontage:(id)montage;	// 0x32060029
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x3205d675
// converted property setter: - (void)setPreserveMedia:(BOOL)media;	// 0x3205d115
- (void)setProperties:(id)properties forMediaPath:(id)mediaPath;	// 0x3205d255
// converted property setter: - (void)setSavesPathsAsAbsolute:(BOOL)absolute;	// 0x3205d7cd
// converted property setter: - (void)setStacks:(id)stacks;	// 0x3205dcbd
// converted property setter: - (void)setStyleID:(id)anId;	// 0x320623c1
- (void)setTemporarilyCacheAbsolutePaths:(BOOL)paths;	// 0x32061ffd
// converted property setter: - (void)setTitle:(id)title;	// 0x3206236d
// converted property setter: - (void)setUndoManager:(id)manager;	// 0x3205d80d
// converted property setter: - (void)setVideoPaths:(id)paths;	// 0x3205dd6d
- (void)setupDocumentLayerGroup;	// 0x3205f9c9
- (void)setupLayerGroups;	// 0x3205fbe5
// converted property getter: - (id)stacks;	// 0x3205dcad
- (double)startTimeForAssetAtPath:(id)path;	// 0x32063065
- (double)startTimeForPath:(id)path;	// 0x3205f719
- (id)stateForPath:(id)path;	// 0x32060c4d
- (double)stopTimeForAssetAtPath:(id)path;	// 0x320630b9
- (double)stopTimeForPath:(id)path;	// 0x3205f72d
// converted property getter: - (id)styleID;	// 0x32062389
- (CGImageRef)thumbnailCGImageForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x32062d19
- (id)tiledMapPathsForAttributes:(id)attributes;	// 0x32060e55
// converted property getter: - (id)title;	// 0x32062351
- (id)titleEffect;	// 0x3205e5d9
// converted property getter: - (id)undoManager;	// 0x3205d7ed
- (void)upgradeDocument;	// 0x3205fe0d
- (id)uuid;	// 0x3205ee95
- (id)valueInLayersWithName:(id)name;	// 0x32062259
- (double)videoDuration;	// 0x3205e4cd
// converted property getter: - (id)videoPaths;	// 0x3205dcfd
- (float)volumeForPath:(id)path;	// 0x320600b1
@end
