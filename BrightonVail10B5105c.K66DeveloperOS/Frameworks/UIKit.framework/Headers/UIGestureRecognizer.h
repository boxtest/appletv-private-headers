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
@property(assign, nonatomic) BOOL cancelsTouchesInView;	// G=0x3480e135; S=0x345b2d71; 
@property(assign, nonatomic) BOOL delaysTouchesBegan;	// G=0x3480e14d; S=0x345a7249; 
@property(assign, nonatomic) BOOL delaysTouchesEnded;	// G=0x3480e165; S=0x345a7545; 
@property(assign, nonatomic) id<UIGestureRecognizerDelegate> delegate;	// G=0x34683641; S=0x345894c9; @synthesize=_delegate
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x345c331d; S=0x34574f21; 
@property(readonly, assign, nonatomic) int state;	// G=0x345c3339; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x34589829; 
+ (BOOL)_touchesBeganWasDelayedForTouch:(id)touch;	// 0x3465d895
- (id)init;	// 0x3480df19
- (id)initWithCoder:(id)coder;	// 0x3480df2d
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x34589135
- (id)_activeTouchesForEvent:(id)event;	// 0x34658041
- (void)_addDynamicFailureDependent:(id)dependent;	// 0x346aa539
- (void)_addDynamicFailureRequirement:(id)requirement;	// 0x346aa4dd
- (void)_addFailureDependent:(id)dependent;	// 0x345c2bd9
- (void)_addFriendGesture:(id)gesture;	// 0x346eb019
- (BOOL)_affectedByGesture:(id)gesture;	// 0x34658689
- (void)_appendDescription:(id)description forDependencies:(id)dependencies toString:(id)string atLevel:(int)level;	// 0x3480e3fd
- (void)_appendDescriptionToString:(id)string atLevel:(int)level includingDependencies:(BOOL)dependencies;	// 0x3480e565
- (void)_appendSubclassDescription:(id)description;	// 0x3480e3f9
- (id)_briefDescription;	// 0x3480e3a9
- (void)_cancelRecognition;	// 0x3480e371
- (CGPoint)_centroidOfTouches:(id)touches excludingEnded:(BOOL)ended;	// 0x34621091
- (void)_clearDelayedTouches;	// 0x345f7c6d
- (void)_clearUpdateTimer;	// 0x345f2ad5
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x347c6251
- (void)_delayTouch:(id)touch forEvent:(id)event;	// 0x346586ed
- (void)_delayTouchesForEvent:(id)event;	// 0x34622181
- (void)_delayedUpdateGesture;	// 0x34621591
- (BOOL)_delegateCanPreventGestureRecognizer:(id)recognizer;	// 0x34659db5
- (BOOL)_delegateShouldReceiveTouch:(id)_delegate;	// 0x34620c15
- (int)_depthFirstViewCompare:(id)compare;	// 0x34658279
- (void)_detach;	// 0x34826c09
- (float)_distanceBetweenTouches:(id)touches;	// 0x346c0089
- (void)_enqueueDelayedTouchToSend:(id)send;	// 0x34622a41
- (void)_enqueueDelayedTouchesToSend;	// 0x345f7a85
- (void)_exclude;	// 0x34659ff1
- (id)_failureMap;	// 0x34622c95
- (void)_failureRequirementCompleted:(id)completed withEvent:(id)event;	// 0x3469d9b5
- (void)_invalidate;	// 0x3480ea39
- (BOOL)_isDirty;	// 0x345a7ea1
- (BOOL)_isExcludedByGesture:(id)gesture;	// 0x34658441
- (BOOL)_isFriendWithGesture:(id)gesture;	// 0x3467897d
- (BOOL)_isRecognized;	// 0x34608d59
- (void)_queryFailureRequirements;	// 0x3462139d
- (void)_queueForResetIfFinished;	// 0x345f281d
- (void)_relatedGestureReleased:(id)released;	// 0x3469dd09
- (void)_removeFailureDependent:(id)dependent;	// 0x346cd1d9
- (BOOL)_requiresGestureRecognizerToFail:(id)fail;	// 0x34658151
- (void)_resetGestureRecognizer;	// 0x34622f25
- (void)_resetIfFinished;	// 0x34622ca5
- (void)_setDirty;	// 0x3462126d
- (void)_setFailureMap:(id)map;	// 0x345c334d
- (BOOL)_shouldBegin;	// 0x346591ad
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x34658275
- (void)_touchWasCancelled:(id)cancelled;	// 0x3465d979
- (void)_updateGestureStateWithEvent:(id)event afterDelay:(BOOL)delay;	// 0x34621319
- (void)_updateGestureWithEvent:(id)event;	// 0x346215b5
- (void)addTarget:(id)target action:(SEL)action;	// 0x346092c1
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x34659db1
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x34678939
// declared property getter: - (BOOL)cancelsTouchesInView;	// 0x3480e135
- (void)dealloc;	// 0x345f78d5
// declared property getter: - (BOOL)delaysTouchesBegan;	// 0x3480e14d
// declared property getter: - (BOOL)delaysTouchesEnded;	// 0x3480e165
// declared property getter: - (id)delegate;	// 0x34683641
- (id)description;	// 0x3480e9f1
- (void)encodeWithCoder:(id)coder;	// 0x3480e075
- (void)ignoreTouch:(id)touch forEvent:(id)event;	// 0x346229f5
// declared property getter: - (BOOL)isEnabled;	// 0x345c331d
- (CGPoint)locationInView:(id)view;	// 0x346c0ed5
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x3480ea9d
- (unsigned)numberOfTouches;	// 0x3480ea51
- (void)removeFailureRequirement:(id)requirement;	// 0x346cd145
- (void)removeTarget:(id)target action:(SEL)action;	// 0x345f3085
- (void)requireGestureRecognizerToFail:(id)fail;	// 0x345c2b4d
- (void)requireOtherGestureToFail:(id)fail;	// 0x345c2b3d
- (void)reset;	// 0x345c57d9
// declared property setter: - (void)setCancelsTouchesInView:(BOOL)view;	// 0x345b2d71
// declared property setter: - (void)setDelaysTouchesBegan:(BOOL)began;	// 0x345a7249
// declared property setter: - (void)setDelaysTouchesEnded:(BOOL)ended;	// 0x345a7545
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x345894c9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x34574f21
- (void)setState:(int)state;	// 0x34622909
- (void)setView:(id)view;	// 0x34589881
// declared property getter: - (int)state;	// 0x345c3339
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3480e181
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3480e18d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3480e189
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3480e185
// declared property getter: - (id)view;	// 0x34589829
@end
