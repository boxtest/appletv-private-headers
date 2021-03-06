/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIEvent, NSMutableArray, NSMutableSet, UIView;
@protocol UIGestureRecognizerDelegate;

@interface UIGestureRecognizer : NSObject {
	NSMutableArray *_targets;	// 4 = 0x4
	NSMutableArray *_delayedTouches;	// 8 = 0x8
	UIView *_view;	// 12 = 0xc
	UIEvent *_updateEvent;	// 16 = 0x10
	id<UIGestureRecognizerDelegate> _delegate;	// 20 = 0x14
	NSMutableSet *_failureRequirements;	// 24 = 0x18
	NSMutableSet *_failureDependents;	// 28 = 0x1c
	NSMutableSet *_dynamicFailureRequirements;	// 32 = 0x20
	NSMutableSet *_dynamicFailureDependents;	// 36 = 0x24
	id _failureMap;	// 40 = 0x28
	NSMutableSet *_friends;	// 44 = 0x2c
	int _state;	// 48 = 0x30
	struct {
		unsigned delegateShouldBegin : 1;
		unsigned delegateCanPrevent : 1;
		unsigned delegateCanBePrevented : 1;
		unsigned delegateShouldRecognizeSimultaneously : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldRequireFailure : 1;
		unsigned delegateShouldBeRequiredToFail : 1;
		unsigned delegateFailed : 1;
		unsigned privateDelegateShouldBegin : 1;
		unsigned privateDelegateCanPrevent : 1;
		unsigned privateDelegateCanBePrevented : 1;
		unsigned privateDelegateShouldRecognizeSimultaneously : 1;
		unsigned privateDelegateShouldReceiveTouch : 1;
		unsigned subclassShouldRequireFailure : 1;
		unsigned cancelsTouchesInView : 1;
		unsigned delaysTouchesBegan : 1;
		unsigned delaysTouchesEnded : 1;
		unsigned disabled : 1;
		unsigned dirty : 1;
		unsigned queriedFailureRequirements : 1;
		unsigned delivered : 1;
		unsigned continuous : 1;
		unsigned requiresDelayedBegan : 1;
	} _gestureFlags;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL cancelsTouchesInView;	// G=0x32f5a1c5; S=0x32cfed89; 
@property(assign, nonatomic) BOOL delaysTouchesBegan;	// G=0x32f5a1dd; S=0x32cf3261; 
@property(assign, nonatomic) BOOL delaysTouchesEnded;	// G=0x32f5a1f5; S=0x32cf355d; 
@property(assign, nonatomic) id<UIGestureRecognizerDelegate> delegate;	// G=0x32dcf659; S=0x32cd54e1; @synthesize=_delegate
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x32d0f335; S=0x32cc0f39; 
@property(readonly, assign, nonatomic) int state;	// G=0x32d0f351; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x32cd5841; 
+ (BOOL)_touchesBeganWasDelayedForTouch:(id)touch;	// 0x32da98ad
- (id)init;	// 0x32f59fa9
- (id)initWithCoder:(id)coder;	// 0x32f59fbd
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x32cd514d
- (id)_activeTouchesForEvent:(id)event;	// 0x32da4059
- (void)_addDynamicFailureDependent:(id)dependent;	// 0x32df6551
- (void)_addDynamicFailureRequirement:(id)requirement;	// 0x32df64f5
- (void)_addFailureDependent:(id)dependent;	// 0x32d0ebf1
- (void)_addFriendGesture:(id)gesture;	// 0x32e37031
- (BOOL)_affectedByGesture:(id)gesture;	// 0x32da46a1
- (void)_appendDescription:(id)description forDependencies:(id)dependencies toString:(id)string atLevel:(int)level;	// 0x32f5a48d
- (void)_appendDescriptionToString:(id)string atLevel:(int)level includingDependencies:(BOOL)dependencies;	// 0x32f5a5f5
- (void)_appendSubclassDescription:(id)description;	// 0x32f5a489
- (id)_briefDescription;	// 0x32f5a439
- (void)_cancelRecognition;	// 0x32f5a401
- (CGPoint)_centroidOfTouches:(id)touches excludingEnded:(BOOL)ended;	// 0x32d6d0a9
- (void)_clearDelayedTouches;	// 0x32d43c85
- (void)_clearUpdateTimer;	// 0x32d3eaed
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x32f122e1
- (void)_delayTouch:(id)touch forEvent:(id)event;	// 0x32da4705
- (void)_delayTouchesForEvent:(id)event;	// 0x32d6e199
- (void)_delayedUpdateGesture;	// 0x32d6d5a9
- (BOOL)_delegateCanPreventGestureRecognizer:(id)recognizer;	// 0x32da5dcd
- (BOOL)_delegateShouldReceiveTouch:(id)_delegate;	// 0x32d6cc2d
- (int)_depthFirstViewCompare:(id)compare;	// 0x32da4291
- (void)_detach;	// 0x32f72c99
- (float)_distanceBetweenTouches:(id)touches;	// 0x32e0c0a1
- (void)_enqueueDelayedTouchToSend:(id)send;	// 0x32d6ea59
- (void)_enqueueDelayedTouchesToSend;	// 0x32d43a9d
- (void)_exclude;	// 0x32da6009
- (id)_failureMap;	// 0x32d6ecad
- (void)_failureRequirementCompleted:(id)completed withEvent:(id)event;	// 0x32de99cd
- (void)_invalidate;	// 0x32f5aac9
- (BOOL)_isDirty;	// 0x32cf3eb9
- (BOOL)_isExcludedByGesture:(id)gesture;	// 0x32da4459
- (BOOL)_isFriendWithGesture:(id)gesture;	// 0x32dc4995
- (BOOL)_isRecognized;	// 0x32d54d71
- (void)_queryFailureRequirements;	// 0x32d6d3b5
- (void)_queueForResetIfFinished;	// 0x32d3e835
- (void)_relatedGestureReleased:(id)released;	// 0x32de9d21
- (void)_removeFailureDependent:(id)dependent;	// 0x32e191f1
- (BOOL)_requiresGestureRecognizerToFail:(id)fail;	// 0x32da4169
- (void)_resetGestureRecognizer;	// 0x32d6ef3d
- (void)_resetIfFinished;	// 0x32d6ecbd
- (void)_setDirty;	// 0x32d6d285
- (void)_setFailureMap:(id)map;	// 0x32d0f365
- (BOOL)_shouldBegin;	// 0x32da51c5
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x32da428d
- (void)_touchWasCancelled:(id)cancelled;	// 0x32da9991
- (void)_updateGestureStateWithEvent:(id)event afterDelay:(BOOL)delay;	// 0x32d6d331
- (void)_updateGestureWithEvent:(id)event;	// 0x32d6d5cd
- (void)addTarget:(id)target action:(SEL)action;	// 0x32d552d9
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x32da5dc9
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x32dc4951
// declared property getter: - (BOOL)cancelsTouchesInView;	// 0x32f5a1c5
- (void)dealloc;	// 0x32d438ed
// declared property getter: - (BOOL)delaysTouchesBegan;	// 0x32f5a1dd
// declared property getter: - (BOOL)delaysTouchesEnded;	// 0x32f5a1f5
// declared property getter: - (id)delegate;	// 0x32dcf659
- (id)description;	// 0x32f5aa81
- (void)encodeWithCoder:(id)coder;	// 0x32f5a105
- (void)ignoreTouch:(id)touch forEvent:(id)event;	// 0x32d6ea0d
// declared property getter: - (BOOL)isEnabled;	// 0x32d0f335
- (CGPoint)locationInView:(id)view;	// 0x32e0ceed
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x32f5ab2d
- (unsigned)numberOfTouches;	// 0x32f5aae1
- (void)removeFailureRequirement:(id)requirement;	// 0x32e1915d
- (void)removeTarget:(id)target action:(SEL)action;	// 0x32d3f09d
- (void)requireGestureRecognizerToFail:(id)fail;	// 0x32d0eb65
- (void)requireOtherGestureToFail:(id)fail;	// 0x32d0eb55
- (void)reset;	// 0x32d117f1
// declared property setter: - (void)setCancelsTouchesInView:(BOOL)view;	// 0x32cfed89
// declared property setter: - (void)setDelaysTouchesBegan:(BOOL)began;	// 0x32cf3261
// declared property setter: - (void)setDelaysTouchesEnded:(BOOL)ended;	// 0x32cf355d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32cd54e1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32cc0f39
- (void)setState:(int)state;	// 0x32d6e921
- (void)setView:(id)view;	// 0x32cd5899
// declared property getter: - (int)state;	// 0x32d0f351
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32f5a211
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32f5a21d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32f5a219
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32f5a215
// declared property getter: - (id)view;	// 0x32cd5841
@end

