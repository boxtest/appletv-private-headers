/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIKeyboardCandidateScrollViewControllerDelegate.h"
#import "UIView.h"

@class UIKeyboardCandidateSortSelectionBar, UIKeyboardCandidateInlinePadBottomShadowView, NSString, UIKeyboardCandidateScrollViewController, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
@private
	NSArray *_candidates;	// 48 = 0x30
	NSString *_inlineText;	// 52 = 0x34
	CGRect _inlineRect;	// 56 = 0x38
	float _maxX;	// 72 = 0x48
	BOOL _expanded;	// 76 = 0x4c
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 80 = 0x50
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 84 = 0x54
	UIKeyboardCandidateInlinePadBottomShadowView *_shadowView;	// 88 = 0x58
	UIKeyboardCandidateSortSelectionBar *_sortSelectionBar;	// 92 = 0x5c
	int _position;	// 96 = 0x60
	BOOL _reducedWidth;	// 100 = 0x64
	CGRect _previousCollapsedFrame;	// 104 = 0x68
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x3029b8bd; S=0x3029b8cd; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x3029b7d5; S=0x3029b7e5; @synthesize=_candidates
@property(readonly, assign, nonatomic) CGSize collapsedSize;	// G=0x302998cd; 
@property(assign, nonatomic) BOOL expanded;	// G=0x3029b89d; S=0x3029b8ad; @synthesize=_expanded
@property(readonly, assign, nonatomic) CGSize expandedSize;	// G=0x30299905; 
@property(assign, nonatomic) CGRect inlineRect;	// G=0x3029b83d; S=0x3029b861; @synthesize=_inlineRect
@property(copy, nonatomic) NSString *inlineText;	// G=0x3029b809; S=0x3029b819; @synthesize=_inlineText
@property(assign, nonatomic) float maxX;	// G=0x3029b87d; S=0x3029b88d; @synthesize=_maxX
@property(assign, nonatomic) int position;	// G=0x3029b911; S=0x3029b921; @synthesize=_position
@property(assign, nonatomic) CGRect previousCollapsedFrame;	// G=0x3029b951; S=0x3029b975; @synthesize=_previousCollapsedFrame
@property(assign, nonatomic) BOOL reducedWidth;	// G=0x3029b931; S=0x3029b941; @synthesize=_reducedWidth
@property(readonly, assign, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x3029b661; @synthesize=_scrollViewController
@property(retain, nonatomic) UIKeyboardCandidateInlinePadBottomShadowView *shadowView;	// G=0x3029b8dd; S=0x3029b8ed; @synthesize=_shadowView
@property(readonly, assign, nonatomic) UIKeyboardCandidateSortSelectionBar *sortSelectionBar;	// G=0x3029b6dd; @synthesize=_sortSelectionBar
- (id)initWithFrame:(CGRect)frame;	// 0x30299585
- (void)adjustFrameForInlineText:(id)inlineText inlineRect:(CGRect)rect maxX:(float)x;	// 0x3029a711
- (CGRect)adjustedFrameFromDesiredFrame:(CGRect)desiredFrame textHeight:(float)height;	// 0x3029a339
- (CGRect)adjustedInlineRectFromInlineText:(id)inlineText inlineRect:(CGRect)rect;	// 0x30299f19
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x3029b2d1
- (id)candidateAtIndex:(unsigned)index;	// 0x3029b2a5
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x3029b419
// declared property getter: - (id)candidateListDelegate;	// 0x3029b8bd
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x3029b465
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x3029b4b1
// declared property getter: - (id)candidates;	// 0x3029b7d5
- (void)collapse;	// 0x30299da1
// declared property getter: - (CGSize)collapsedSize;	// 0x302998cd
- (void)configureKeyboard:(id)keyboard;	// 0x3029b325
- (unsigned)count;	// 0x3029b2fd
- (id)currentCandidate;	// 0x3029b255
- (unsigned)currentIndex;	// 0x3029b27d
- (void)dealloc;	// 0x302997a5
- (void)expand;	// 0x3029993d
// declared property getter: - (BOOL)expanded;	// 0x3029b89d
// declared property getter: - (CGSize)expandedSize;	// 0x30299905
- (BOOL)handleNumberKey:(unsigned)key;	// 0x3029b351
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x3029b37d
// declared property getter: - (CGRect)inlineRect;	// 0x3029b83d
// declared property getter: - (id)inlineText;	// 0x3029b809
- (BOOL)isAcceptableFrame:(CGRect)frame afterScrollBy:(float)by;	// 0x3029a231
- (void)layout;	// 0x3029ad71
- (void)layoutShadow;	// 0x3029abed
// declared property getter: - (float)maxX;	// 0x3029b87d
- (void)padInlineFloatingViewExpand:(id)expand;	// 0x3029b515
- (BOOL)padInlineFloatingViewIsExpanded:(id)expanded;	// 0x3029b4fd
// declared property getter: - (int)position;	// 0x3029b911
// declared property getter: - (CGRect)previousCollapsedFrame;	// 0x3029b951
// declared property getter: - (BOOL)reducedWidth;	// 0x3029b931
// declared property getter: - (id)scrollViewController;	// 0x3029b661
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x3029b8cd
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x3029b7e5
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x3029aba9
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x3029aa91
// declared property setter: - (void)setExpanded:(BOOL)expanded;	// 0x3029b8ad
- (void)setFrame:(CGRect)frame;	// 0x30299885
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x3029b861
// declared property setter: - (void)setInlineText:(id)text;	// 0x3029b819
// declared property setter: - (void)setMaxX:(float)x;	// 0x3029b88d
// declared property setter: - (void)setPosition:(int)position;	// 0x3029b921
// declared property setter: - (void)setPreviousCollapsedFrame:(CGRect)frame;	// 0x3029b975
// declared property setter: - (void)setReducedWidth:(BOOL)width;	// 0x3029b941
// declared property setter: - (void)setShadowView:(id)view;	// 0x3029b8ed
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x3029b125
// declared property getter: - (id)shadowView;	// 0x3029b8dd
- (void)showCandidateAtIndex:(unsigned)index;	// 0x3029b15d
- (void)showNextCandidate;	// 0x3029b189
- (void)showNextPage;	// 0x3029b205
- (void)showPageAtIndex:(unsigned)index;	// 0x3029b1d9
- (void)showPreviousCandidate;	// 0x3029b1b1
- (void)showPreviousPage;	// 0x3029b22d
// declared property getter: - (id)sortSelectionBar;	// 0x3029b6dd
- (void)sortSelectionBarAction;	// 0x3029b525
@end
