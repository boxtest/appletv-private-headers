/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class UIKeyboardCandidateScrollViewController, UITableViewIndex;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateScrollView : UIScrollView {
	UIKeyboardCandidateScrollViewController *_parentViewController;	// 444 = 0x1bc
	UIView *_headerView;	// 448 = 0x1c0
	float _previousGroupBarStartingY;	// 452 = 0x1c4
	UITableViewIndex *_index;	// 456 = 0x1c8
}
@property(retain, nonatomic) UIView *headerView;	// G=0x30fbb491; S=0x30fbb281; @synthesize=_headerView
@property(retain, nonatomic) UITableViewIndex *index;	// G=0x30fbb4c1; S=0x30fbb399; @synthesize=_index
@property(assign, nonatomic) UIKeyboardCandidateScrollViewController *parentViewController;	// G=0x30fbb471; S=0x30fbb481; @synthesize=_parentViewController
@property(assign, nonatomic) float previousGroupBarStartingY;	// G=0x30fbb4a1; S=0x30fbb4b1; @synthesize=_previousGroupBarStartingY
- (id)initWithFrame:(CGRect)frame;	// 0x30fba3c9
- (void)addSubview:(id)subview;	// 0x30fbb209
- (void)dealloc;	// 0x30fba455
- (void)drawRect:(CGRect)rect;	// 0x30fba669
- (float)groupBarStartingY;	// 0x30fbad21
// declared property getter: - (id)headerView;	// 0x30fbb491
// declared property getter: - (id)index;	// 0x30fbb4c1
- (BOOL)isCellVisible:(id)visible;	// 0x30fba5cd
// declared property getter: - (id)parentViewController;	// 0x30fbb471
// declared property getter: - (float)previousGroupBarStartingY;	// 0x30fbb4a1
- (void)scrollToBottomWithAnimation:(BOOL)animation;	// 0x30fba54d
- (void)scrollToOffsetFromTop:(float)top withAnimation:(BOOL)animation;	// 0x30fba4cd
- (void)scrollToTopWithAnimation:(BOOL)animation;	// 0x30fba4b9
- (void)setContentOffset:(CGPoint)offset;	// 0x30fbaebd
// declared property setter: - (void)setHeaderView:(id)view;	// 0x30fbb281
// declared property setter: - (void)setIndex:(id)index;	// 0x30fbb399
// declared property setter: - (void)setParentViewController:(id)controller;	// 0x30fbb481
// declared property setter: - (void)setPreviousGroupBarStartingY:(float)y;	// 0x30fbb4b1
- (void)updateIndexFrame;	// 0x30fbadc1
@end
