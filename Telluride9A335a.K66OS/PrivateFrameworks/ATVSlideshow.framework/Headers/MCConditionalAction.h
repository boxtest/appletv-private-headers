/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCConditionalAction : MCAction {
@private
	NSString *mPredicate;	// 16 = 0x10
	MCAction *mActionIfTrue;	// 20 = 0x14
	MCAction *mActionIfFalse;	// 24 = 0x18
}
@property(retain) MCAction *actionIfFalse;	// G=0x31b90d71; S=0x31b90d85; @synthesize=mActionIfFalse
@property(retain) MCAction *actionIfTrue;	// G=0x31b90d39; S=0x31b90d4d; @synthesize=mActionIfTrue
@property(copy) NSString *predicate;	// G=0x31b90d01; S=0x31b90d15; @synthesize=mPredicate
+ (id)conditionalActionWithPredicate:(id)predicate;	// 0x31b90699
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31b906f9
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x31b90c41
// declared property getter: - (id)actionIfFalse;	// 0x31b90d71
// declared property getter: - (id)actionIfTrue;	// 0x31b90d39
- (void)demolish;	// 0x31b90815
- (id)imprint;	// 0x31b908a9
// declared property getter: - (id)predicate;	// 0x31b90d01
- (id)setActionGroupForCondition:(BOOL)condition;	// 0x31b90b51
// declared property setter: - (void)setActionIfFalse:(id)aFalse;	// 0x31b90d85
// declared property setter: - (void)setActionIfTrue:(id)aTrue;	// 0x31b90d4d
- (id)setAnimationTriggerForTargetPlugObjectID:(id)targetPlugObjectID withAnimationKey:(id)animationKey forCondition:(BOOL)condition;	// 0x31b90a11
- (id)setConditionalActionWithPredicate:(id)predicate forCondition:(BOOL)condition;	// 0x31b90bb9
- (id)setGenericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes forCondition:(BOOL)condition;	// 0x31b90ab1
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x31b90d15
- (id)setTransitionForTargetPlugObjectID:(id)targetPlugObjectID withTransitionID:(id)transitionID forCondition:(BOOL)condition;	// 0x31b90971
@end

