/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITransitionState.h"

@class UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UIQueuingScrollViewState : _UITransitionState {
	UIView *_view;	// 16 = 0x10
	UIViewController *_viewController;	// 20 = 0x14
	BOOL _manual;	// 24 = 0x18
}
@property(readonly, assign, nonatomic, getter=isManual) BOOL manual;	// G=0x32eef05d; @synthesize=_manual
@property(readonly, assign, nonatomic) UIView *view;	// G=0x32eef04d; @synthesize=_view
- (id)initWithTransitionDirection:(int)transitionDirection view:(id)view manual:(BOOL)manual completion:(id)completion;	// 0x32eeee49
- (void)dealloc;	// 0x32eeef31
- (id)description;	// 0x32eeef99
- (BOOL)isCompatibleWithTransitionInDirection:(int)direction;	// 0x32eeef95
// declared property getter: - (BOOL)isManual;	// 0x32eef05d
// declared property getter: - (id)view;	// 0x32eef04d
@end
