/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPAnimationSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import <NSObject.h> // Unknown library
#import "MPNavigatorSupport.h"

@class MCContainerNavigator, NSString, NSMutableDictionary, MCPlug, MPNavigatorInternal;

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport> {
	MPNavigatorInternal *_internal;	// 4 = 0x4
	NSMutableDictionary *_layers;	// 8 = 0x8
	NSMutableDictionary *_actions;	// 12 = 0xc
	MCPlug *_plug;	// 16 = 0x10
	MCContainerNavigator *_navigator;	// 20 = 0x14
	id _parent;	// 24 = 0x18
	NSMutableDictionary *_animationPaths;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x333dae85; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x333d9fa1; converted property
@property(assign) double duration;	// G=0x333da94d; S=0x333da971; converted property
@property(copy, nonatomic) NSString *initialLayer;	// G=0x333d9ed5; S=0x333d9ef5; @dynamic
@property(assign) BOOL isTriggered;	// G=0x333dad69; S=0x333dad8d; converted property
@property(readonly, retain) NSMutableDictionary *layers;	// G=0x333d9f91; converted property
@property(assign) double numberOfLoops;	// G=0x333dac59; S=0x333dac79; converted property
@property(assign) float opacity;	// G=0x333da225; S=0x333da245; converted property
@property(retain) id parent;	// G=0x333d9949; S=0x333db355; converted property
@property(assign) double phaseInDuration;	// G=0x333daa39; S=0x333daa59; converted property
@property(assign) double phaseOutDuration;	// G=0x333dab49; S=0x333dab69; converted property
@property(retain) MCPlug *plug;	// G=0x333db039; S=0x333db621; converted property
@property(assign) CGPoint position;	// G=0x333da2d9; S=0x333da309; converted property
@property(assign) float rotationAngle;	// G=0x333da44d; S=0x333da46d; converted property
@property(assign) float scale;	// G=0x333da729; S=0x333da749; converted property
@property(assign) CGSize size;	// G=0x333da501; S=0x333da531; converted property
@property(assign) BOOL startsPaused;	// G=0x333dae19; S=0x333dae3d; converted property
@property(assign) double timeIn;	// G=0x333da899; S=0x333da8b9; converted property
@property(assign) float xRotationAngle;	// G=0x333da5c1; S=0x333da5e1; converted property
@property(assign) float yRotationAngle;	// G=0x333da675; S=0x333da695; converted property
@property(assign) int zIndex;	// G=0x333da7dd; S=0x333da829; converted property
@property(assign) float zPosition;	// G=0x333da399; S=0x333da3b9; converted property
- (id)init;	// 0x333d81e1
- (id)initWithCoder:(id)coder;	// 0x333d8b61
- (id)actionForKey:(id)key;	// 0x333dae95
- (id)actionableObjectForID:(id)anId;	// 0x333dcab5
// converted property getter: - (id)actions;	// 0x333dae85
- (id)allSlides:(BOOL)slides;	// 0x333db049
- (id)allSongs;	// 0x333db161
- (id)animationPathForKey:(id)key;	// 0x333d9fb1
// converted property getter: - (id)animationPaths;	// 0x333d9fa1
- (void)cleanup;	// 0x333dc0a9
- (void)configureActions;	// 0x333db40d
- (void)copyActions:(id)actions;	// 0x333dc8d5
- (void)copyAnimationPaths:(id)paths;	// 0x333dc7d1
- (void)copyLayers:(id)layers;	// 0x333dc605
- (void)copyStruct:(id)aStruct;	// 0x333dc2d5
- (id)copyWithZone:(NSZone *)zone;	// 0x333d96d1
- (void)dealloc;	// 0x333d97d5
// converted property getter: - (double)duration;	// 0x333da94d
- (void)encodeWithCoder:(id)coder;	// 0x333d8489
- (void)finalize;	// 0x333d9795
// declared property getter: - (id)initialLayer;	// 0x333d9ed5
// converted property getter: - (BOOL)isTriggered;	// 0x333dad69
- (id)layerForKey:(id)key;	// 0x333d99d1
- (id)layerKey;	// 0x333d9959
- (id)layerKeyDictionary;	// 0x333dcbd9
// converted property getter: - (id)layers;	// 0x333d9f91
- (id)navigatorKey;	// 0x333d98bd
// converted property getter: - (double)numberOfLoops;	// 0x333dac59
- (id)objectID;	// 0x333db315
// converted property getter: - (float)opacity;	// 0x333da225
// converted property getter: - (id)parent;	// 0x333d9949
- (id)parentDocument;	// 0x333db275
// converted property getter: - (double)phaseInDuration;	// 0x333daa39
// converted property getter: - (double)phaseOutDuration;	// 0x333dab49
// converted property getter: - (id)plug;	// 0x333db039
- (id)plugID;	// 0x333db2f5
// converted property getter: - (CGPoint)position;	// 0x333da2d9
- (void)reconnectAll;	// 0x333dc9d9
- (void)removeActionForKey:(id)key;	// 0x333dafc1
- (void)removeAllLayers;	// 0x333d9ded
- (void)removeAnimationPathForKey:(id)key;	// 0x333da159
- (void)removeLayerForKey:(id)key;	// 0x333d9c55
// converted property getter: - (float)rotationAngle;	// 0x333da44d
// converted property getter: - (float)scale;	// 0x333da729
- (void)setAction:(id)action forKey:(id)key;	// 0x333daeb5
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x333d9fd1
- (void)setContainer:(id)container;	// 0x333db5dd
// converted property setter: - (void)setDuration:(double)duration;	// 0x333da971
// declared property setter: - (void)setInitialLayer:(id)layer;	// 0x333d9ef5
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x333dad8d
- (void)setLayer:(id)layer forKey:(id)key;	// 0x333d99f1
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x333dac79
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x333da245
// converted property setter: - (void)setParent:(id)parent;	// 0x333db355
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x333daa59
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x333dab69
// converted property setter: - (void)setPlug:(id)plug;	// 0x333db621
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x333da309
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x333da46d
// converted property setter: - (void)setScale:(float)scale;	// 0x333da749
// converted property setter: - (void)setSize:(CGSize)size;	// 0x333da531
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x333dae3d
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x333da8b9
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x333da5e1
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x333da695
// converted property setter: - (void)setZIndex:(int)index;	// 0x333da829
// converted property setter: - (void)setZPosition:(float)position;	// 0x333da3b9
// converted property getter: - (CGSize)size;	// 0x333da501
// converted property getter: - (BOOL)startsPaused;	// 0x333dae19
// converted property getter: - (double)timeIn;	// 0x333da899
- (id)uuid;	// 0x333db335
// converted property getter: - (float)xRotationAngle;	// 0x333da5c1
// converted property getter: - (float)yRotationAngle;	// 0x333da675
// converted property getter: - (int)zIndex;	// 0x333da7dd
// converted property getter: - (float)zPosition;	// 0x333da399
@end
