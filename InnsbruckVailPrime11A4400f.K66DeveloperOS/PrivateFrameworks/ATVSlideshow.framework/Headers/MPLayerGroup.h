/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import </libobjc.A.h>
#import "MPAnimationSupport.h"
#import "MPLayerableSupportInternal.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import "MPNavigatorSupport.h"
#import "MPAutomaticLayerSupport.h"
#import "MPManualLayerSupport.h"

@class NSMutableArray, NSString, MPAudioPlaylist, NSArray, NSDictionary, MCContainerParallelizer, MPLayerGroupInternal, MCPlugParallel, NSMutableDictionary;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {
	MPLayerGroupInternal *_internal;	// 4 = 0x4
	NSMutableArray *_userProvidedVideoPaths;	// 8 = 0x8
	NSMutableArray *_userProvidedAudioPaths;	// 12 = 0xc
	MCPlugParallel *_plug;	// 16 = 0x10
	MCContainerParallelizer *_parallelizer;	// 20 = 0x14
	MPAudioPlaylist *_audioPlaylist;	// 24 = 0x18
	NSMutableArray *_layers;	// 28 = 0x1c
	NSMutableDictionary *_layerDictionary;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	NSMutableDictionary *_authoringOptions;	// 40 = 0x28
	NSMutableDictionary *_animationPaths;	// 44 = 0x2c
	NSMutableDictionary *_actions;	// 48 = 0x30
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x2fbc53e5; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x2fbc4ae1; converted property
@property(copy, nonatomic) NSArray *audioPaths;	// G=0x2fbc3e79; S=0x2fbc3e89; @dynamic
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x2fbc2e85; S=0x2fbc2e99; converted property
@property(retain) id authoredVersionInfo;	// G=0x2fbc89cd; S=0x2fbc89ed; converted property
@property(retain) NSMutableDictionary *authoringOptions;	// G=0x2fbc1835; S=0x2fbc1aed; converted property
@property(assign, nonatomic) BOOL autoAdjustDuration;	// G=0x2fbc4581; S=0x2fbc45a5; @dynamic
@property(assign, nonatomic) CGColorRef backgroundCGColor;	// G=0x2fbc3379; S=0x2fbc33d5; @dynamic
@property(retain) id container;	// G=0x2fbc630d; S=0x2fbc631d; converted property
@property(assign) double duration;	// G=0x2fbc2b81; S=0x2fbc2c31; converted property
@property(assign) double durationPadding;	// G=0x2fbc7849; S=0x2fbc7869; converted property
@property(assign, nonatomic) NSDictionary *initialState;	// G=0x2fbc3825; S=0x2fbc3845; 
@property(assign) BOOL isTriggered;	// G=0x2fbc2d9d; S=0x2fbc2dc1; converted property
@property(assign) int lastSlideUsed;	// G=0x2fbc9b81; S=0x2fbc9a75; converted property
@property(readonly, retain) NSMutableArray *layers;	// G=0x2fbc1da9; converted property
@property(assign, nonatomic) unsigned loopingMode;	// G=0x2fbc32c9; S=0x2fbc32e9; @dynamic
@property(assign) double numberOfLoops;	// G=0x2fbc40ed; S=0x2fbc4111; converted property
@property(assign) float opacity;	// G=0x2fbc4d35; S=0x2fbc4d55; converted property
@property(retain) id parent;	// G=0x2fbc2e75; S=0x2fbc5fd5; converted property
@property(assign) double phaseInDuration;	// G=0x2fbc4291; S=0x2fbc42b1; converted property
@property(assign) double phaseOutDuration;	// G=0x2fbc43f9; S=0x2fbc4419; converted property
@property(retain) MCPlugParallel *plug;	// G=0x2fbc55a1; S=0x2fbc6481; converted property
@property(assign) CGPoint position;	// G=0x2fbc4de9; S=0x2fbc4e19; converted property
@property(assign) float rotationAngle;	// G=0x2fbc4f5d; S=0x2fbc4f7d; converted property
@property(assign) float scale;	// G=0x2fbc5239; S=0x2fbc5259; converted property
@property(assign) CGSize size;	// G=0x2fbc5011; S=0x2fbc5041; converted property
@property(assign) BOOL startsPaused;	// G=0x2fbc2e09; S=0x2fbc2e2d; converted property
@property(assign) double timeIn;	// G=0x2fbc2d21; S=0x2fbc2d41; converted property
@property(readonly, assign, nonatomic) NSString *uuid;	// G=0x2fbc3805; 
@property(copy, nonatomic) NSArray *videoPaths;	// G=0x2fbc3b85; S=0x2fbc3e39; @dynamic
@property(assign) float xRotationAngle;	// G=0x2fbc50d1; S=0x2fbc50f1; converted property
@property(assign) float yRotationAngle;	// G=0x2fbc5185; S=0x2fbc51a5; converted property
@property(assign) int zIndex;	// G=0x2fbc52ed; S=0x2fbc5371; converted property
@property(assign) float zPosition;	// G=0x2fbc4ea9; S=0x2fbc4ec9; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x2fbbefd1
- (id)init;	// 0x2fbbf051
- (id)initWithCoder:(id)coder;	// 0x2fbbfd89
- (id)absoluteVideoPaths;	// 0x2fbc5d49
- (id)actionForKey:(id)key;	// 0x2fbc53f5
- (id)actionableObjectForID:(id)anId;	// 0x2fbc9bf1
// converted property getter: - (id)actions;	// 0x2fbc53e5
- (void)addAudioPath:(id)path;	// 0x2fbc396d
- (void)addAudioPaths:(id)paths;	// 0x2fbc39d9
- (void)addLayer:(id)layer;	// 0x2fbc1db9
- (void)addLayers:(id)layers;	// 0x2fbc1e15
- (void)addVideoPath:(id)path;	// 0x2fbc3895
- (void)addVideoPaths:(id)paths;	// 0x2fbc3901
- (id)allEffectContainers;	// 0x2fbc55b1
- (id)allEffects;	// 0x2fbc56a9
- (id)allSlides:(BOOL)slides;	// 0x2fbc57a9
- (id)allSongs;	// 0x2fbc597d
- (id)animationPathForKey:(id)key;	// 0x2fbc4af1
// converted property getter: - (id)animationPaths;	// 0x2fbc4ae1
- (double)aspectRatioDidChange:(float)aspectRatio atTime:(double)time;	// 0x2fbc90bd
// declared property getter: - (id)audioPaths;	// 0x2fbc3e79
// converted property getter: - (id)audioPlaylist;	// 0x2fbc2e85
// converted property getter: - (id)authoredVersionInfo;	// 0x2fbc89cd
- (id)authoringOptionForKey:(id)key;	// 0x2fbc1a21
// converted property getter: - (id)authoringOptions;	// 0x2fbc1835
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x2fbc4581
// declared property getter: - (CGColorRef)backgroundCGColor;	// 0x2fbc3379
- (void)cachePaths;	// 0x2fbc5f71
- (void)cleanup;	// 0x2fbc7271
- (void)configureActions;	// 0x2fbc60c5
// converted property getter: - (id)container;	// 0x2fbc630d
- (void)copyActions:(id)actions;	// 0x2fbc88c1
- (void)copyAnimationPaths:(id)paths;	// 0x2fbc87b5
- (void)copyAudioPlaylist:(id)playlist;	// 0x2fbc8771
- (void)copyLayerDictionary:(id)dictionary;	// 0x2fbc8665
- (void)copyLayers:(id)layers;	// 0x2fbc8539
- (void)copyStruct:(id)aStruct;	// 0x2fbc8139
- (id)copyWithZone:(NSZone *)zone;	// 0x2fbc0c4d
- (int)countOfLayers;	// 0x2fbc9eed
- (void)dealloc;	// 0x2fbc0df1
- (BOOL)detectFacesInBackground;	// 0x2fbc9eb1
// converted property getter: - (double)duration;	// 0x2fbc2b81
// converted property getter: - (double)durationPadding;	// 0x2fbc7849
- (void)encodeWithCoder:(id)coder;	// 0x2fbbf3e9
- (void)finalize;	// 0x2fbc0db1
// declared property getter: - (id)initialState;	// 0x2fbc3825
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x2fbc1e55
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x2fbca015
// converted property getter: - (BOOL)isTriggered;	// 0x2fbc2d9d
- (id)keyedLayers;	// 0x2fbc463d
// converted property getter: - (int)lastSlideUsed;	// 0x2fbc9b81
- (id)layerForKey:(id)key;	// 0x2fbc464d
- (id)layerKey;	// 0x2fbc45c5
- (id)layerKeyDictionary;	// 0x2fbc9e91
// converted property getter: - (id)layers;	// 0x2fbc1da9
- (BOOL)layersCanPositionZIndex;	// 0x2fbc5f59
- (id)liveLock;	// 0x2fbc8a0d
// declared property getter: - (unsigned)loopingMode;	// 0x2fbc32c9
- (id)mainLayers;	// 0x2fbc3f09
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x2fbc2795
- (id)navigatorKey;	// 0x2fbc0f99
- (BOOL)nearingEndWithOptions:(id)options;	// 0x2fbc8a2d
// converted property getter: - (double)numberOfLoops;	// 0x2fbc40ed
- (id)objectID;	// 0x2fbc5f39
- (id)objectInLayersAtIndex:(int)index;	// 0x2fbc9f0d
- (id)observer;	// 0x2fbc5f75
// converted property getter: - (float)opacity;	// 0x2fbc4d35
- (id)orderedVideoPaths;	// 0x2fbc3b95
// converted property getter: - (id)parent;	// 0x2fbc2e75
- (id)parentDocument;	// 0x2fbc5e99
// converted property getter: - (double)phaseInDuration;	// 0x2fbc4291
// converted property getter: - (double)phaseOutDuration;	// 0x2fbc43f9
// converted property getter: - (id)plug;	// 0x2fbc55a1
- (id)plugID;	// 0x2fbc5f19
// converted property getter: - (CGPoint)position;	// 0x2fbc4de9
- (double)posterTime;	// 0x2fbc5b79
- (void)reconfigureLoopingMode;	// 0x2fbc7a99
- (void)reconnectAll;	// 0x2fbc78e1
- (void)removeActionForKey:(id)key;	// 0x2fbc5529
- (void)removeAllAudioPaths;	// 0x2fbc3ee9
- (void)removeAllLayers;	// 0x2fbc21ad
- (void)removeAllVideoPaths;	// 0x2fbc3ec9
- (void)removeAnimationPathForKey:(id)key;	// 0x2fbc4ca9
- (void)removeLayerForKey:(id)key;	// 0x2fbc4861
- (void)removeLayersAtIndices:(id)indices;	// 0x2fbc2359
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x2fbca055
- (void)removePath:(id)path;	// 0x2fbc3a45
- (void)removePaths:(id)paths;	// 0x2fbc3acd
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x2fbca091
- (void)resetDuration;	// 0x2fbc7471
// converted property getter: - (float)rotationAngle;	// 0x2fbc4f5d
// converted property getter: - (float)scale;	// 0x2fbc5239
- (void)setAction:(id)action forKey:(id)key;	// 0x2fbc5415
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x2fbc4b11
// declared property setter: - (void)setAudioPaths:(id)paths;	// 0x2fbc3e89
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x2fbc2e99
// converted property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x2fbc89ed
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x2fbc1845
// converted property setter: - (void)setAuthoringOptions:(id)options;	// 0x2fbc1aed
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x2fbc45a5
// declared property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x2fbc33d5
- (void)setBackgroundColorString:(id)string;	// 0x2fbc3399
// converted property setter: - (void)setContainer:(id)container;	// 0x2fbc631d
// converted property setter: - (void)setDuration:(double)duration;	// 0x2fbc2c31
// converted property setter: - (void)setDurationPadding:(double)padding;	// 0x2fbc7869
// declared property setter: - (void)setInitialState:(id)state;	// 0x2fbc3845
- (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x2fbc9bd1
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x2fbc2dc1
// converted property setter: - (void)setLastSlideUsed:(int)used;	// 0x2fbc9a75
- (void)setLayer:(id)layer forKey:(id)key;	// 0x2fbc466d
// declared property setter: - (void)setLoopingMode:(unsigned)mode;	// 0x2fbc32e9
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x2fbc4111
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x2fbc4d55
// converted property setter: - (void)setParent:(id)parent;	// 0x2fbc5fd5
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x2fbc42b1
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x2fbc4419
// converted property setter: - (void)setPlug:(id)plug;	// 0x2fbc6481
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x2fbc4e19
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x2fbc4f7d
// converted property setter: - (void)setScale:(float)scale;	// 0x2fbc5259
// converted property setter: - (void)setSize:(CGSize)size;	// 0x2fbc5041
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x2fbc2e2d
- (unsigned)setStyleID:(id)anId;	// 0x2fbc1055
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x2fbc2d41
- (void)setUsedAllPaths:(BOOL)paths;	// 0x2fbc9a55
// declared property setter: - (void)setVideoPaths:(id)paths;	// 0x2fbc3e39
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x2fbc50f1
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x2fbc51a5
// converted property setter: - (void)setZIndex:(int)index;	// 0x2fbc5371
// converted property setter: - (void)setZPosition:(float)position;	// 0x2fbc4ec9
// converted property getter: - (CGSize)size;	// 0x2fbc5011
// converted property getter: - (BOOL)startsPaused;	// 0x2fbc2e09
- (id)styleID;	// 0x2fbc1025
// converted property getter: - (double)timeIn;	// 0x2fbc2d21
// declared property getter: - (id)uuid;	// 0x2fbc3805
- (id)valueInLayersWithName:(id)name;	// 0x2fbc9f2d
- (double)videoDuration;	// 0x2fbc2a11
// declared property getter: - (id)videoPaths;	// 0x2fbc3b85
// converted property getter: - (float)xRotationAngle;	// 0x2fbc50d1
// converted property getter: - (float)yRotationAngle;	// 0x2fbc5185
// converted property getter: - (int)zIndex;	// 0x2fbc52ed
// converted property getter: - (float)zPosition;	// 0x2fbc4ea9
@end

