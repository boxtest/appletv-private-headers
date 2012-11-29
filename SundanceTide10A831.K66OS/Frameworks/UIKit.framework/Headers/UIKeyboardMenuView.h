/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIView.h"
#import "UIDimmingViewDelegate.h"

@class NSTimer, UIInputSwitcherShadowView, UIDimmingView, UITableView;

__attribute__((visibility("hidden")))
@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate> {
	UITableView *m_table;	// 88 = 0x58
	UIInputSwitcherShadowView *m_shadowView;	// 92 = 0x5c
	UIView *m_selExtraView;	// 96 = 0x60
	CGRect m_referenceRect;	// 100 = 0x64
	float m_pointerOffset;	// 116 = 0x74
	BOOL m_scrollable;	// 120 = 0x78
	BOOL m_scrolling;	// 121 = 0x79
	BOOL m_shouldFade;	// 122 = 0x7a
	CGPoint m_point;	// 124 = 0x7c
	double m_scrollStartTime;	// 132 = 0x84
	int m_scrollDirection;	// 140 = 0x8c
	NSTimer *m_scrollTimer;	// 144 = 0x90
	int m_visibleRows;	// 148 = 0x94
	int m_firstVisibleRow;	// 152 = 0x98
	int m_mode;	// 156 = 0x9c
	double dismissDelay;	// 160 = 0xa0
	UIDimmingView *m_dimmingView;	// 168 = 0xa8
	double _dismissDelay;	// 172 = 0xac
}
@property(readonly, retain) UIDimmingView *dimmingView;	// G=0x31fb0265; converted property
@property(assign) double dismissDelay;	// G=0x31fb1d9d; S=0x31d38429; @synthesize=_dismissDelay
@property(assign, nonatomic) int mode;	// G=0x31fb1d7d; S=0x31fb1d8d; @synthesize=m_mode
@property(readonly, assign) BOOL usesTable;	// G=0x31d38371; 
- (id)initWithFrame:(CGRect)frame;	// 0x31d37d69
- (void)_delayedFade;	// 0x31fb0a15
- (void)applicationWillSuspend:(id)application;	// 0x31fb0169
- (void)autoscrollTimerFired:(id)fired;	// 0x31fb0ec1
- (BOOL)centerPopUpOverKey;	// 0x31fb0165
- (void)dealloc;	// 0x31fb00a9
- (int)defaultSelectedIndex;	// 0x31fb1d45
- (void)didSelectItemAtIndex:(int)index;	// 0x31fb1d79
// converted property getter: - (id)dimmingView;	// 0x31fb0265
- (void)dimmingViewWasTapped:(id)tapped;	// 0x31fb0399
// declared property getter: - (double)dismissDelay;	// 0x31fb1d9d
- (void)endScrolling:(id)scrolling;	// 0x31fb0d11
- (void)fade;	// 0x31fb0b19
- (void)fadeAnimationDidStop:(id)fadeAnimation finished:(id)finished context:(void *)context;	// 0x31fb0c0d
- (void)fadeWithDelay:(double)delay;	// 0x31fb0b71
- (id)font;	// 0x31fb019d
- (void)hide;	// 0x31d38789
- (void)highlightRow:(int)row;	// 0x31fb15ad
- (int)indexForIndexPath:(id)indexPath;	// 0x31fb170d
- (BOOL)isVisible;	// 0x31d386bd
// declared property getter: - (int)mode;	// 0x31fb1d7d
- (int)numberOfItems;	// 0x31fb1d41
- (void)performShowAnimation;	// 0x31fb01c1
- (CGSize)preferredSize;	// 0x31fb1d49
- (void)removeFromSuperview;	// 0x31fb0bb1
- (void)selectItemAtPoint:(CGPoint)point;	// 0x31fb1699
// declared property setter: - (void)setDismissDelay:(double)delay;	// 0x31d38429
- (void)setFrame:(CGRect)frame;	// 0x31d37fc9
// declared property setter: - (void)setMode:(int)mode;	// 0x31fb1d8d
- (void)setNeedsDisplayForCell:(id)cell;	// 0x31fb0c41
- (void)setNeedsDisplayForTopBottomCells;	// 0x31fb0c89
- (void)show;	// 0x31fb03b9
- (void)showAsHUD;	// 0x31fb0911
- (void)showAsPopupFromRect:(CGRect)rect inView:(id)view;	// 0x31fb0969
- (void)stopAnyAutoscrolling;	// 0x31fb0e19
- (id)subtitleFont;	// 0x31fb0179
- (id)subtitleForItemAtIndex:(int)index;	// 0x31fb1d6d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31fb1731
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31fb1b59
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x31fb1b51
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31fb1721
- (id)titleForItemAtIndex:(int)index;	// 0x31fb1d61
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31fb1b8d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31fb1d31
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31fb1c59
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x31fb1bf1
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x31fb11e9
// declared property getter: - (BOOL)usesTable;	// 0x31d38371
@end
