/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>

@class CALayer, UIView, NSMutableDictionary, CADisplayLink, PKExtendedPhysicsWorld, NSArray, NSMutableSet, NSMutableArray;
@protocol _UIDynamicReferenceSystem, UIDynamicAnimatorDelegate;

@interface UIDynamicAnimator : NSObject {
	PKExtendedPhysicsWorld *_world;	// 4 = 0x4
	CADisplayLink *_displaylink;	// 8 = 0x8
	double _elapsedTime;	// 12 = 0xc
	double _realElapsedTime;	// 20 = 0x14
	double _lastUpdateTime;	// 28 = 0x1c
	double _lastInterval;	// 36 = 0x24
	long long _ticks;	// 44 = 0x2c
	NSMutableSet *_unmappedItems;	// 52 = 0x34
	NSMutableSet *_mappedItems;	// 56 = 0x38
	CALayer *_debugLayer;	// 60 = 0x3c
	NSMutableDictionary *_bodies;	// 64 = 0x40
	NSMutableArray *_topLevelBehaviors;	// 68 = 0x44
	NSMutableSet *_registeredBehaviors;	// 72 = 0x48
	NSMutableSet *_behaviorsToRemove;	// 76 = 0x4c
	NSMutableSet *_behaviorsToAdd;	// 80 = 0x50
	NSMutableArray *_postSolverActions;	// 84 = 0x54
	BOOL _isInWorldStepMethod;	// 88 = 0x58
	BOOL _needsLocalBehaviorReevaluation;	// 89 = 0x59
	unsigned _referenceSystemType;	// 92 = 0x5c
	BOOL _disableIntegralization;	// 96 = 0x60
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	} _stateFlags;	// 97 = 0x61
	float _accuracy;	// 100 = 0x64
	int _registeredCollisionGroups;	// 104 = 0x68
	int _registeredImplicitBounds;	// 108 = 0x6c
	CGRect _referenceSystemBounds;	// 112 = 0x70
	id<_UIDynamicReferenceSystem> _referenceSystem;	// 128 = 0x80
	int _debugInterval;	// 132 = 0x84
	id _action;	// 136 = 0x88
	id<UIDynamicAnimatorDelegate> _delegate;	// 140 = 0x8c
	BOOL _disableDisplayLink;	// 144 = 0x90
	float _speed;	// 148 = 0x94
}
@property(readonly, assign, nonatomic) NSArray *behaviors;	// G=0x2f964a05; 
@property(assign, nonatomic) id<UIDynamicAnimatorDelegate> delegate;	// G=0x2f966841; S=0x2f966861; 
@property(readonly, assign) double elapsedTime;	// G=0x2f9649ed; converted property
@property(readonly, assign, nonatomic) UIView *referenceView;	// G=0x2f966b89; 
@property(readonly, assign, nonatomic, getter=isRunning) BOOL running;	// G=0x2f965f79; 
+ (id)_allDynamicAnimators;	// 0x2f963865
+ (void)initialize;	// 0x2f963239
- (id)init;	// 0x2f9632cd
- (id)initWithCollectionViewLayout:(id)collectionViewLayout;	// 0x2f9632bd
- (id)initWithReferenceSystem:(id)referenceSystem;	// 0x2f9632e1
- (id)initWithReferenceView:(id)referenceView;	// 0x2f9632ad
- (BOOL)_alwaysDisableDisplayLink;	// 0x2f966981
- (double)_animatorInterval;	// 0x2f966aa1
- (BOOL)_animatorStep:(double)step;	// 0x2f966991
- (id)_bodyForItem:(id)item;	// 0x2f965e55
- (int)_debugInterval;	// 0x2f966945
- (void)_defaultMapper:(id)mapper position:(CGPoint)position angle:(float)angle isView:(BOOL)view;	// 0x2f964b9d
- (id)_delegate;	// 0x2f966851
- (void)_displayLinkTick:(id)tick;	// 0x2f966ab9
- (void)_evaluateLocalBehaviors;	// 0x2f9643fd
- (BOOL)_isDefaultMapperEnabledForItem:(id)item;	// 0x2f964b69
- (BOOL)_isWorldActive;	// 0x2f965f61
- (id)_keyForItem:(id)item;	// 0x2f965e11
- (void)_postSolverStep;	// 0x2f96646d
- (void)_preSolverStep;	// 0x2f966281
- (float)_ptmRatio;	// 0x2f963be1
- (double)_realElapsedTime;	// 0x2f966b61
- (void)_reevaluateImplicitBounds;	// 0x2f9644a5
- (id)_referenceSystem;	// 0x2f966d49
- (CGRect)_referenceSystemBounds;	// 0x2f966d21
- (unsigned)_referenceSystemType;	// 0x2f966d39
- (void)_registerBehavior:(id)behavior;	// 0x2f963c9d
- (id)_registerBodyForItem:(id)item;	// 0x2f964fe9
- (id)_registerBodyForItem:(id)item shape:(unsigned)shape;	// 0x2f9656d9
- (int)_registerCollisionGroup;	// 0x2f964b09
- (void)_registerImplicitBounds;	// 0x2f9644f5
- (void)_registerViewForDefaultMapperDisabling:(id)defaultMapperDisabling;	// 0x2f964a9d
- (void)_registerViewForDefaultMapperEnabling:(id)defaultMapperEnabling;	// 0x2f964a31
- (BOOL)_roundingEnabled;	// 0x2f964b51
- (void)_runBlockPostSolverIfNeeded:(id)needed;	// 0x2f966405
- (void)_setAction:(id)action;	// 0x2f9668f9
- (void)_setAlwaysDisableDisplayLink:(BOOL)link;	// 0x2f966955
- (void)_setDebugInterval:(int)interval;	// 0x2f966935
- (void)_setDelegate:(id)delegate;	// 0x2f9668e9
- (void)_setReferenceSystem:(id)system;	// 0x2f966bb1
- (void)_setRoundingEnabled:(BOOL)enabled;	// 0x2f964b35
- (void)_setRunning:(BOOL)running;	// 0x2f965f91
- (void)_setSpeed:(float)speed;	// 0x2f965ec1
- (void)_setupWorld;	// 0x2f965efd
- (void)_shouldReevaluateLocalBehaviors;	// 0x2f9643dd
- (float)_speed;	// 0x2f965eed
- (void)_start;	// 0x2f966095
- (void)_stop;	// 0x2f965fdd
- (void)_tickle;	// 0x2f96605d
- (long long)_ticks;	// 0x2f966b49
- (void)_traverseBehaviorHierarchy:(id)hierarchy;	// 0x2f96451d
- (void)_unregisterBehavior:(id)behavior;	// 0x2f964071
- (void)_unregisterBodyForItem:(id)item action:(id)action;	// 0x2f964e2d
- (void)_unregisterCollisionGroup;	// 0x2f964b21
- (void)_unregisterImplicitBounds;	// 0x2f964509
- (id)_world;	// 0x2f965eb1
- (void)addBehavior:(id)behavior;	// 0x2f963be5
// declared property getter: - (id)behaviors;	// 0x2f964a05
- (void)dealloc;	// 0x2f96367d
// declared property getter: - (id)delegate;	// 0x2f966841
- (id)description;	// 0x2f963945
- (void)didBeginContact:(id)contact;	// 0x2f96422d
- (void)didEndContact:(id)contact;	// 0x2f964305
// converted property getter: - (double)elapsedTime;	// 0x2f9649ed
// declared property getter: - (BOOL)isRunning;	// 0x2f965f79
- (id)itemsInRect:(CGRect)rect;	// 0x2f964ffd
- (id)layoutAttributesForCellAtIndexPath:(id)indexPath;	// 0x2f9651c1
- (id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f965155
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x2f9650e9
- (id)recursiveDescription;	// 0x2f963a71
// declared property getter: - (id)referenceView;	// 0x2f966b89
- (void)removeAllBehaviors;	// 0x2f964825
- (void)removeBehavior:(id)behavior;	// 0x2f963c41
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f966861
- (void)setReferenceView:(id)view;	// 0x2f966b79
- (void)updateItemFromCurrentState:(id)currentState;	// 0x2f965231
@end

