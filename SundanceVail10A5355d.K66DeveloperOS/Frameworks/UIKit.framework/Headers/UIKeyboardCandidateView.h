/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIInputView.h"

@class UIImageView, UIKeyboardCandidateBar, UIKeyboardCandidateUnsplitKeyboardToggleButton, UIKeyboardCandidateSplitKeyboardToggleButton, UIKeyboardCandidateSortControl, UIKeyboardCandidateGrid;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView : UIInputView {
	UIKeyboardCandidateBar *_bar;	// 144 = 0x90
	UIKeyboardCandidateSortControl *_sortControl;	// 148 = 0x94
	UIKeyboardCandidateGrid *_extendedView;	// 152 = 0x98
	UIImageView *_leftBackground;	// 156 = 0x9c
	UIImageView *_rightBackground;	// 160 = 0xa0
	UIKeyboardCandidateUnsplitKeyboardToggleButton *_leftButton;	// 164 = 0xa4
	UIKeyboardCandidateSplitKeyboardToggleButton *_rightButton;	// 168 = 0xa8
	struct {
		unsigned isExtended;
		unsigned didMinimizeKeyboard;
		unsigned isSplit;
	} _candidateBarFlags;	// 172 = 0xac
}
+ (id)activeCandidateList;	// 0x33e3a935
+ (id)activeCandidateView;	// 0x33e3a90d
+ (float)defaultExtendedControlHeight;	// 0x33e3a95d
+ (void)setActiveCandidateView:(id)view;	// 0x33e3a925
+ (id)sharedInstance;	// 0x33e3a811
- (id)initWithFrame:(CGRect)frame;	// 0x33e3a97d
- (void)_toggleExtendedCandidateView:(id)view;	// 0x33e3b09d
- (id)activeCandidateList;	// 0x33e3ae89
- (void)candidatesDidChange;	// 0x33e3aeb5
- (void)dealloc;	// 0x33e3ac41
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33e3b431
- (void)layoutSubviews;	// 0x33e3b149
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x33e3b35d
- (void)setCandidateBarCanExtend:(BOOL)extend;	// 0x33e3acf9
- (void)setCandidateBarExtended:(BOOL)extended;	// 0x33e3aef1
- (void)setFrame:(CGRect)frame;	// 0x33e3b0c9
- (void)updatePageControlStatus;	// 0x33e3acf5
- (void)willMoveToSuperview:(id)superview;	// 0x33e3b331
@end
