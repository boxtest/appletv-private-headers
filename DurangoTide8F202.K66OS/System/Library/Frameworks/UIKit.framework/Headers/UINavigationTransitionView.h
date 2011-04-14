/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UIWindow;

@interface UINavigationTransitionView : UIView <NSCoding> {
@private
	id _delegate;	// 44 = 0x2c
	UIView *_fromView;	// 48 = 0x30
	UIView *_toView;	// 52 = 0x34
	int _transition;	// 56 = 0x38
	UIView *_firstResponderToRestore;	// 60 = 0x3c
	UIWindow *_originalWindow;	// 64 = 0x40
	float _fromViewAlpha;	// 68 = 0x44
	unsigned _isTransitioning : 1;	// 72 = 0x48
	unsigned _popoverWillCleanUpNavigationTransition : 1;	// 72 = 0x48
	unsigned _usesRoundedCorners : 1;	// 72 = 0x48
}
@property(assign, nonatomic) id delegate;	// G=0x307bdd55; S=0x305c77a1; @synthesize=_delegate
@property(readonly, assign) UIView *fromView;	// G=0x307bdd45; @synthesize=_fromView
@property(readonly, assign) BOOL isTransitioning;	// G=0x306b9c89; 
@property(assign, nonatomic) BOOL popoverWillCleanUpNavigationTransition;	// G=0x307bdd1d; S=0x307bdcfd; 
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x307bdd31; S=0x307bdf49; 
+ (double)defaultDurationForTransition:(int)transition;	// 0x305e5cb5
- (id)initWithCoder:(id)coder;	// 0x307bde69
- (id)initWithFrame:(CGRect)frame;	// 0x305c772d
- (void)_cleanupTransition;	// 0x305e6835
- (void)_cleanupTransitionFromPopover;	// 0x307bdd65
- (BOOL)_isTransitioningFromView:(id)view;	// 0x306b9c25
- (void)_navigationTransitionDidStop;	// 0x305e67fd
- (void)_notifyDelegateTransitionDidStopWithContext:(id)_notifyDelegateTransition;	// 0x305e6c65
- (void)dealloc;	// 0x3060e721
// declared property getter: - (id)delegate;	// 0x307bdd55
- (void)encodeWithCoder:(id)coder;	// 0x307bdda1
// declared property getter: - (id)fromView;	// 0x307bdd45
// declared property getter: - (BOOL)isTransitioning;	// 0x306b9c89
// declared property getter: - (BOOL)popoverWillCleanUpNavigationTransition;	// 0x307bdd1d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x305c77a1
// declared property setter: - (void)setPopoverWillCleanUpNavigationTransition:(BOOL)cleanUpNavigationTransition;	// 0x307bdcfd
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x307bdf49
- (BOOL)transition:(int)transition fromView:(id)view toView:(id)view3;	// 0x305e52e5
- (BOOL)transition:(int)transition toView:(id)view;	// 0x305e52c5
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x307bdd31
@end
