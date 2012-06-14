/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIView.h"

@class UIScrollView, NSMutableArray, UIKeyboardCandidateExtended, UIKeyboardCandidateBarBackgroundView, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate> {
@private
	id<UIKeyboardCandidateListDelegate> m_delegate;	// 48 = 0x30
	UIKeyboardCandidateBarBackgroundView *m_cellsContainerView;	// 52 = 0x34
	NSArray *m_candidates;	// 56 = 0x38
	NSArray *m_allCandidates;	// 60 = 0x3c
	NSString *m_inlineText;	// 64 = 0x40
	NSMutableArray *m_cells;	// 68 = 0x44
	unsigned m_currentCandidateIndex;	// 72 = 0x48
	CGRect m_inlineRect;	// 76 = 0x4c
	float m_maxX;	// 92 = 0x5c
	BOOL m_largeUIShowing;	// 96 = 0x60
	UIKeyboardCandidateExtended *m_extendedCandidatesView;	// 100 = 0x64
	UIScrollView *m_scrollView;	// 104 = 0x68
	UIView *m_extendedButton;	// 108 = 0x6c
	UIView *m_shadowView;	// 112 = 0x70
	BOOL m_minimized;	// 116 = 0x74
	BOOL m_animating;	// 117 = 0x75
}
@property(assign, nonatomic, getter=isAnimating) BOOL animating;	// G=0x30351db5; S=0x30351dc5; @synthesize=m_animating
@property(retain, nonatomic) UIKeyboardCandidateBarBackgroundView *cellsContainerView;	// G=0x30351d3d; S=0x30351d4d; @synthesize=m_cellsContainerView
@property(retain, nonatomic) UIKeyboardCandidateExtended *extendedCandidatesView;	// G=0x30350621; S=0x30351d71; @synthesize=m_extendedCandidatesView
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// G=0x30351d95; S=0x30351da5; @synthesize=m_minimized
+ (id)activeInstance;	// 0x300a9c85
+ (float)candidateBarHeight;	// 0x3034efb1
+ (id)sharedInstance;	// 0x3034ee0d
- (id)initWithFrame:(CGRect)frame;	// 0x3034f045
- (id).cxx_construct;	// 0x30351dd5
- (BOOL)_addCells:(int)cells;	// 0x30350b8d
- (void)_bgAddCells:(id)cells;	// 0x30350b01
- (void)_cellSelected:(id)selected;	// 0x30350841
- (void)_clearAll;	// 0x303507b1
- (void)_clearCells;	// 0x303506bd
- (void)_forceLayoutTo:(unsigned)to;	// 0x30351409
- (void)_hideExtendedCandidatesViewWithAnimation:(BOOL)animation;	// 0x303518b9
- (void)_setCurrentCandidateIndex:(unsigned)index;	// 0x3034fa35
- (void)_showExtendedCandidatesView;	// 0x303514c1
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x30350349
- (id)candidateAtIndex:(unsigned)index;	// 0x303502dd
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x3035058d
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x303505ad
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x303505cd
// declared property getter: - (id)cellsContainerView;	// 0x30351d3d
- (void)configureKeyboard:(id)keyboard;	// 0x3035046d
- (unsigned)count;	// 0x3035044d
- (id)currentCandidate;	// 0x303501fd
- (unsigned)currentIndex;	// 0x30350271
- (void)dealloc;	// 0x3034f3ad
// declared property getter: - (id)extendedCandidatesView;	// 0x30350621
// declared property getter: - (BOOL)isAnimating;	// 0x30351db5
// declared property getter: - (BOOL)isMinimized;	// 0x30351d95
- (void)layout;	// 0x3034f629
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3034f325
- (CGSize)screenSpaceBetweenStatusBarAndKeyboard;	// 0x303509b1
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x30351dc5
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x3034f45d
// declared property setter: - (void)setCellsContainerView:(id)view;	// 0x30351d4d
// declared property setter: - (void)setExtendedCandidatesView:(id)view;	// 0x30351d71
// declared property setter: - (void)setMinimized:(BOOL)minimized;	// 0x30351da5
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x3034f975
- (void)showCandidateAtIndex:(unsigned)index;	// 0x3034fb61
- (void)showNextCandidate;	// 0x3034fc79
- (void)showNextPage;	// 0x30350185
- (void)showPageAtIndex:(unsigned)index;	// 0x30350145
- (void)showPreviousCandidate;	// 0x3034fed5
- (void)showPreviousPage;	// 0x303501c1
@end
