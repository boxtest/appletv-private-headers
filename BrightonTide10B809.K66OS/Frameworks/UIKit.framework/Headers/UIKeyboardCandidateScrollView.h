/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class NSArray, UITableViewIndex, UIKeyboardCandidateScrollViewController;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateScrollView : UIScrollView {
	float _indexMaximumHeight;	// 464 = 0x1d0
	UIKeyboardCandidateScrollViewController *_parentViewController;	// 468 = 0x1d4
	UIView *_headerView;	// 472 = 0x1d8
	float _previousGroupBarStartingY;	// 476 = 0x1dc
	UITableViewIndex *_index;	// 480 = 0x1e0
	NSArray *_indexTitles;	// 484 = 0x1e4
}
@property(retain, nonatomic) UIView *headerView;	// G=0x32eb0d05; S=0x32eb09d9; @synthesize=_headerView
@property(readonly, assign, nonatomic) UITableViewIndex *index;	// G=0x32eb0d35; @synthesize=_index
@property(retain, nonatomic) NSArray *indexTitles;	// G=0x32eb0d45; S=0x32eb0bb5; @synthesize=_indexTitles
@property(assign, nonatomic) UIKeyboardCandidateScrollViewController *parentViewController;	// G=0x32eb0ce5; S=0x32eb0cf5; @synthesize=_parentViewController
@property(assign, nonatomic) float previousGroupBarStartingY;	// G=0x32eb0d15; S=0x32eb0d25; @synthesize=_previousGroupBarStartingY
- (id)initWithFrame:(CGRect)frame;	// 0x32eaf799
- (void)addSubview:(id)subview;	// 0x32eb094d
- (void)dealloc;	// 0x32eaf8b9
- (void)delayUpdateIndex;	// 0x32eb03e9
- (void)drawRect:(CGRect)rect;	// 0x32eafaf9
- (float)groupBarStartingY;	// 0x32eb01f5
// declared property getter: - (id)headerView;	// 0x32eb0d05
// declared property getter: - (id)index;	// 0x32eb0d35
// declared property getter: - (id)indexTitles;	// 0x32eb0d45
- (BOOL)isCellVisible:(id)visible;	// 0x32eafa5d
- (void)keyboardDidHideNotification:(id)keyboard;	// 0x32eb09b1
- (void)keyboardWillShowNotification:(id)keyboard;	// 0x32eb09c5
// declared property getter: - (id)parentViewController;	// 0x32eb0ce5
// declared property getter: - (float)previousGroupBarStartingY;	// 0x32eb0d15
- (void)scrollToBottomWithAnimation:(BOOL)animation;	// 0x32eaf9dd
- (void)scrollToOffsetFromTop:(float)top withAnimation:(BOOL)animation;	// 0x32eaf95d
- (void)scrollToTopWithAnimation:(BOOL)animation;	// 0x32eaf949
- (void)setContentOffset:(CGPoint)offset;	// 0x32eb0601
// declared property setter: - (void)setHeaderView:(id)view;	// 0x32eb09d9
// declared property setter: - (void)setIndexTitles:(id)titles;	// 0x32eb0bb5
// declared property setter: - (void)setParentViewController:(id)controller;	// 0x32eb0cf5
// declared property setter: - (void)setPreviousGroupBarStartingY:(float)y;	// 0x32eb0d25
- (BOOL)shouldShowIndex;	// 0x32eb05b1
- (void)showIndex:(BOOL)index;	// 0x32eb0441
- (void)updateIndex;	// 0x32eb03b9
- (void)updateIndex:(BOOL)index;	// 0x32eb0295
@end
