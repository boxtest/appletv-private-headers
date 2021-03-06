/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIPageControl, NSMutableArray, UIView, UIScrollView;
@protocol UIPageControllerDelegate;

@interface UIPageController : UIViewController {
	NSMutableArray *_viewControllers;	// 192 = 0xc0
	UIView *_wrapperViews[3];	// 196 = 0xc4
	int _notificationState[3];	// 208 = 0xd0
	UIScrollView *_scrollView;	// 220 = 0xdc
	UIPageControl *_pageControl;	// 224 = 0xe0
	id<UIPageControllerDelegate> _delegate;	// 228 = 0xe4
	int _pageSpacing;	// 232 = 0xe8
	int _visibleIndex;	// 236 = 0xec
	int _pageCount;	// 240 = 0xf0
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _pageControllerFlags;	// 244 = 0xf4
}
@property(assign, nonatomic) id<UIPageControllerDelegate> delegate;	// G=0x33cf0a25; S=0x33b5e12d; @synthesize=_delegate
@property(assign, nonatomic) BOOL displaysPageControl;	// G=0x33cf0705; S=0x33cf0751; 
@property(assign, nonatomic) int pageCount;	// G=0x33cf05d5; S=0x33b5f6e5; 
@property(assign, nonatomic) float pageSpacing;	// G=0x33cf04fd; S=0x33b5e08d; 
@property(assign, nonatomic) int visibleIndex;	// G=0x33b601e5; S=0x33b5f7b5; 
@property(readonly, assign, nonatomic) UIViewController *visibleViewController;	// G=0x33b60b7d; 
@property(assign, nonatomic) BOOL wraps;	// G=0x33cf05e9; S=0x33cf05fd; 
- (void)_adjustScrollViewContentInsets;	// 0x33b5e9a5
- (BOOL)_allowsAutorotation;	// 0x33cf07e5
- (void)_createPageControl;	// 0x33b5f495
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)orientation;	// 0x33b60471
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x33cf08c1
- (BOOL)_hasNextViewController;	// 0x33b5f229
- (BOOL)_hasPreviousViewController;	// 0x33b5eae5
- (BOOL)_hasVisibleViewController;	// 0x33cf0595
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x33b603fd
- (BOOL)_isViewControllerBeingUnloaded:(id)unloaded atIndex:(int)index;	// 0x33b5f179
- (id)_loadNextViewController;	// 0x33b5f305
- (id)_loadPreviousViewController;	// 0x33b5ebc5
- (id)_loadVisibleViewControllerAndNotify:(BOOL)notify;	// 0x33b5eda9
- (BOOL)_needToLoadNext;	// 0x33cf0559
- (BOOL)_needToLoadPrevious;	// 0x33cf0519
- (BOOL)_needToLoadVisible;	// 0x33b5ff5d
- (id)_nextViewController;	// 0x33b5f295
- (int)_nextViewControllerNotificationState;	// 0x33b61f7d
- (void)_notifyNextViewController:(int)controller animated:(BOOL)animated;	// 0x33b61fa5
- (void)_notifyPreviousViewController:(int)controller animated:(BOOL)animated;	// 0x33b62c71
- (void)_notifyViewController:(id)controller ofState:(int)state previousState:(int)state3 animated:(BOOL)animated;	// 0x33b60325
- (void)_notifyVisibleViewController:(int)controller animated:(BOOL)animated;	// 0x33b60295
- (void)_pageChanged:(id)changed;	// 0x33cf0719
- (id)_pageControllerScrollView;	// 0x33b5e1d9
- (id)_previousViewController;	// 0x33b5eb51
- (int)_previousViewControllerNotificationState;	// 0x33b61f91
- (void)_replaceViewControllerAtIndex:(int)index withViewController:(id)viewController;	// 0x33b5ef11
- (id)_scrollView;	// 0x33b5e239
- (void)_scrollView:(id)view boundsDidChangeToSize:(CGSize)bounds;	// 0x33b5e785
- (void)_scrollViewDidEndPaging;	// 0x33b62b91
- (void)_scrollViewDidScroll:(id)_scrollView forceUpdate:(BOOL)update;	// 0x33b60599
- (CGRect)_scrollViewFrame;	// 0x33b5e5a5
- (void)_scrollViewWillBeginPaging;	// 0x33b61edd
- (void)_setNextViewController:(id)controller;	// 0x33b5f47d
- (void)_setNextViewControllerNotificationState:(int)state;	// 0x33b5ff45
- (void)_setPreviousViewController:(id)controller;	// 0x33b5f215
- (void)_setPreviousViewControllerNotificationState:(int)state;	// 0x33b5ff21
- (void)_setVisibleViewController:(id)controller;	// 0x33b5eef9
- (void)_setVisibleViewControllerNotificationState:(int)state;	// 0x33b5ff31
- (BOOL)_shouldUseOnePartRotation;	// 0x33cf0899
- (id)_visibleViewController;	// 0x33b5ed31
- (int)_visibleViewControllerNotificationState;	// 0x33b60311
- (void)dealloc;	// 0x33b61cc9
// declared property getter: - (id)delegate;	// 0x33cf0a25
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x33cf0995
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x33cf09f9
// declared property getter: - (BOOL)displaysPageControl;	// 0x33cf0705
- (int)indexOfViewController:(id)viewController;	// 0x33b604b5
- (void)loadView;	// 0x33b5e24d
// declared property getter: - (int)pageCount;	// 0x33cf05d5
// declared property getter: - (float)pageSpacing;	// 0x33cf04fd
- (void)reloadViewControllerAtIndex:(int)index;	// 0x33b5fe49
- (id)rotatingFooterView;	// 0x33cf0871
- (id)rotatingHeaderView;	// 0x33cf0849
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33b5e12d
// declared property setter: - (void)setDisplaysPageControl:(BOOL)control;	// 0x33cf0751
// declared property setter: - (void)setPageCount:(int)count;	// 0x33b5f6e5
// declared property setter: - (void)setPageSpacing:(float)spacing;	// 0x33b5e08d
// declared property setter: - (void)setVisibleIndex:(int)index;	// 0x33b5f7b5
- (void)setVisibleIndex:(int)index animated:(BOOL)animated;	// 0x33cf05b5
- (void)setVisibleIndex:(int)index preservingLoadedViewControllers:(BOOL)controllers animated:(BOOL)animated;	// 0x33b5f7d5
// declared property setter: - (void)setWraps:(BOOL)wraps;	// 0x33cf05fd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x33b60455
- (void)viewDidAppear:(BOOL)view;	// 0x33b60ab5
- (void)viewDidDisappear:(BOOL)view;	// 0x33b6135d
- (void)viewDidUnload;	// 0x33cf03b9
- (void)viewWillAppear:(BOOL)view;	// 0x33b6024d
- (void)viewWillDisappear:(BOOL)view;	// 0x33b6111d
// declared property getter: - (int)visibleIndex;	// 0x33b601e5
// declared property getter: - (id)visibleViewController;	// 0x33b60b7d
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33cf095d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33cf0925
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33cf09c1
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33cf08ed
// declared property getter: - (BOOL)wraps;	// 0x33cf05e9
@end

