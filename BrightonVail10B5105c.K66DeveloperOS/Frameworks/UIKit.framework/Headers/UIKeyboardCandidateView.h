/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIInputView.h"

@class UIKeyboardCandidateGrid, UIImageView, UIKeyboardCandidateBar, UIKeyboardCandidateSortControl, UIKeyboardCandidateUnsplitKeyboardToggleButton, UIKeyboardCandidateSplitKeyboardToggleButton;

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
+ (id)activeCandidateList;	// 0x34994d0d
+ (id)activeCandidateView;	// 0x346453cd
+ (float)defaultExtendedControlHeight;	// 0x34994d35
+ (void)setActiveCandidateView:(id)view;	// 0x34994cfd
+ (id)sharedInstance;	// 0x34994c01
- (id)initWithFrame:(CGRect)frame;	// 0x34994d55
- (unsigned)_numberOfColumns:(BOOL)columns;	// 0x3499593d
- (void)_toggleExtendedCandidateView:(id)view;	// 0x349954f5
- (id)activeCandidateList;	// 0x3499536d
- (void)candidatesDidChange;	// 0x34995399
- (void)dealloc;	// 0x349950e1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x34995905
- (void)layoutSubviews;	// 0x349955d9
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x349957ed
- (void)setCandidateBarCanExtend:(BOOL)extend;	// 0x34995199
- (void)setCandidateBarExtended:(BOOL)extended;	// 0x34995431
- (void)setFrame:(CGRect)frame;	// 0x34995521
- (void)updatePageControlStatus;	// 0x34995195
- (void)willMoveToSuperview:(id)superview;	// 0x349957c1
@end

