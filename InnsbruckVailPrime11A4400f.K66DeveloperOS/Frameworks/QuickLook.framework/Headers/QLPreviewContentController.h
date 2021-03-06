/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "QLPreviewItemInteractionDelegate.h"
#import "QLPreviewContentControllerProtocol.h"
#import <UIKit/UIViewController.h>

@class NSMutableSet, NSMutableDictionary, UIPageViewController, UITapGestureRecognizer, UILongPressGestureRecognizer, UISegmentedControl, UIColor, NSMutableOrderedSet, QLAirPlayController, NSString, NSMutableArray;
@protocol QLPreviewContentDataSource, QLPreviewContentDelegate;

@interface QLPreviewContentController : UIViewController <QLPreviewContentControllerProtocol, QLPreviewItemInteractionDelegate> {
	id<QLPreviewContentDataSource> _dataSource;	// 304 = 0x130
	id<QLPreviewContentDelegate> _delegate;	// 308 = 0x134
	BOOL _isForeground;	// 312 = 0x138
	QLAirPlayController *_airPlayController;	// 316 = 0x13c
	UITapGestureRecognizer *_tapRecognizer;	// 320 = 0x140
	UILongPressGestureRecognizer *_longPressRecognizer;	// 324 = 0x144
	UIPageViewController *_pageViewController;	// 328 = 0x148
	NSMutableDictionary *_previewViewControllerCache;	// 332 = 0x14c
	NSMutableSet *_gestureRecognizersForFullScreenDisplay;	// 336 = 0x150
	NSMutableArray *_previewViewControllerCacheOrdering;	// 340 = 0x154
	int _previewMode;	// 344 = 0x158
	int _numberOfPreviewItems;	// 348 = 0x15c
	int _currentPreviewItemIndex;	// 352 = 0x160
	NSString *_loadingTextForMissingFiles;	// 356 = 0x164
	UISegmentedControl *_customToolbarSegmentedArrowControl;	// 360 = 0x168
	UIColor *_backgroundColor;	// 364 = 0x16c
	BOOL _transitioning;	// 368 = 0x170
	BOOL _swiping;	// 369 = 0x171
	NSMutableSet *_loadingItems;	// 372 = 0x174
	NSMutableOrderedSet *_scheduledLoads;	// 376 = 0x178
	BOOL _overlayHidden;	// 380 = 0x17c
	BOOL _blockRemoteImages;	// 381 = 0x17d
	XXStruct_3Bq0WB clientContext;	// 384 = 0x180
}
@property(copy) UIColor *backgroundColor;	// G=0x2f31f0f5; S=0x2f31f109; @synthesize=_backgroundColor
@property(assign) XXStruct_3Bq0WB clientContext;	// G=0x2f31f119; S=0x2f31f13d; @synthesize
@property(assign) int currentPreviewItemIndex;	// G=0x2f31ceed; S=0x2f31cec5; converted property
@property(assign) id<QLPreviewContentDataSource> dataSource;	// G=0x2f31f09d; S=0x2f31f0b1; @synthesize=_dataSource
@property(assign) id<QLPreviewContentDelegate> delegate;	// G=0x2f31f0c9; S=0x2f31f0dd; @synthesize=_delegate
@property(assign) int previewMode;	// G=0x2f31d381; S=0x2f31d279; @synthesize=_previewMode
- (id)init;	// 0x2f31bea5
- (void)_activateAirPlayOnRemoteScreen:(id)screen;	// 0x2f31e6c1
- (void)_cachePreviewViewController:(id)controller;	// 0x2f31c989
- (id)_cachedPreviewControllerForPreviewItem:(id)previewItem withIndex:(int)index;	// 0x2f31c685
- (void)_clearPreviewViewControllerCache;	// 0x2f31c645
- (id)_copyPreviewControllerForPreview:(id)preview withIndex:(int)index;	// 0x2f31cb71
- (void)_deactivateAirPlay;	// 0x2f31e609
- (void)_dequeueScheduledLoad;	// 0x2f31ed45
- (void)_hideMenuController;	// 0x2f31d649
- (void)_leftSwipeRecognized:(id)recognized;	// 0x2f31e821
- (void)_longPressGestureRecognized:(id)recognized;	// 0x2f31d681
- (id)_previewControllerForPreviewItem:(id)previewItem createIfNeeded:(BOOL)needed withIndex:(int)index;	// 0x2f31cced
- (id)_previewViewControllerForPreviewItemIndex:(unsigned)previewItemIndex;	// 0x2f31cd69
- (void)_removeNonCachedPreviewViewControllers;	// 0x2f31c749
- (void)_rightSwipeRecognized:(id)recognized;	// 0x2f31e8b5
- (void)_scheduleAdjacentPreviewItems;	// 0x2f31eee5
- (void)_schedulePreviewViewControllerIfNeeded:(id)needed;	// 0x2f31ee35
- (void)_screenDidConnect:(id)_screen;	// 0x2f31e511
- (void)_screenDidDisconnect:(id)_screen;	// 0x2f31e525
- (void)_tapGestureRecognized:(id)recognized;	// 0x2f31d629
- (void)_updateAirPlay;	// 0x2f31e799
- (void)_updateBackgroundWithDuration:(double)duration;	// 0x2f31dcd1
- (void)_updateContentFrame;	// 0x2f31d8f9
- (void)_updateDisabledScrollingRect;	// 0x2f31e04d
- (void)_updateScreenConfiguration;	// 0x2f31e539
// declared property getter: - (id)backgroundColor;	// 0x2f31f0f5
- (void)becomeForeground;	// 0x2f31df31
- (void)beginScrubbing;	// 0x2f31d455
- (BOOL)canBecomeFirstResponder;	// 0x2f31df51
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x2f31df55
- (void)checkCurrentPreviewItem;	// 0x2f31d275
// declared property getter: - (XXStruct_3Bq0WB)clientContext;	// 0x2f31f119
- (id)clientProcessAlertViewForPreviewItem:(id)previewItem;	// 0x2f31ecf9
- (void)configureWithParameters:(id)parameters;	// 0x2f31c1c1
- (void)copy:(id)copy;	// 0x2f31dfc5
- (id)currentPreviewItem;	// 0x2f31ce95
// converted property getter: - (int)currentPreviewItemIndex;	// 0x2f31ceed
- (id)currentPreviewViewController;	// 0x2f31ce39
// declared property getter: - (id)dataSource;	// 0x2f31f09d
- (void)dealloc;	// 0x2f31c021
// declared property getter: - (id)delegate;	// 0x2f31f0c9
- (void)didReceiveMemoryWarning;	// 0x2f31c185
- (void)endScrubbing;	// 0x2f31d4cd
- (void)enterBackground;	// 0x2f31de0d
- (void)forceResignFirstResponder;	// 0x2f31c5fd
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x2f31d5a9
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x2f31d5f1
- (void)overlayWasInteractedWithOnPreviewItem:(id)onPreviewItem;	// 0x2f31e9e5
- (void)pageViewController:(id)controller didFinishAnimating:(BOOL)animating previousViewControllers:(id)controllers transitionCompleted:(BOOL)completed;	// 0x2f31e1f1
- (id)pageViewController:(id)controller viewControllerAfterViewController:(id)controller2;	// 0x2f31e1a5
- (id)pageViewController:(id)controller viewControllerBeforeViewController:(id)controller2;	// 0x2f31e159
- (void)pageViewController:(id)controller willTransitionToViewControllers:(id)viewControllers;	// 0x2f31e3a9
- (void)previewItem:(id)item receivedTapOnURL:(id)url;	// 0x2f31ec69
- (void)previewItem:(id)item requiresDisplayBundle:(id)bundle withHints:(id)hints;	// 0x2f31ea45
- (void)previewItem:(id)item setAVState:(id)state;	// 0x2f31ec89
- (void)previewItem:(id)item willEnterFullScreenWithHostedWindow:(id)hostedWindow;	// 0x2f31ecb9
- (void)previewItem:(id)item willHideOverlayWithDuration:(double)duration;	// 0x2f31e96d
- (id)previewItem:(id)item willSendRequest:(id)request;	// 0x2f31ebd5
- (void)previewItem:(id)item willShowOverlayWithDuration:(double)duration;	// 0x2f31e939
- (void)previewItemDidExitFullScreen:(id)previewItem;	// 0x2f31ecd9
- (void)previewItemDidLoad:(id)previewItem atIndex:(int)index withError:(id)error;	// 0x2f31ea49
- (void)previewItemWillLoad:(id)previewItem;	// 0x2f31ea25
// declared property getter: - (int)previewMode;	// 0x2f31d381
- (id)printPageHelper;	// 0x2f31d41d
- (id)printPageRenderer;	// 0x2f31d3e5
- (void)refreshCurrentPreviewItem;	// 0x2f31d261
- (void)refreshCurrentPreviewItem:(BOOL)item;	// 0x2f31cf01
- (void)scrubToValue:(double)value;	// 0x2f31d48d
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x2f31f109
- (void)setBlockRemoteImages:(BOOL)images;	// 0x2f31d391
// declared property setter: - (void)setClientContext:(XXStruct_3Bq0WB)context;	// 0x2f31f13d
- (void)setContentFrame:(CGRect)frame;	// 0x2f31d801
// converted property setter: - (void)setCurrentPreviewItemIndex:(int)index;	// 0x2f31cec5
// declared property setter: - (void)setDataSource:(id)source;	// 0x2f31f0b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f31f0dd
- (void)setLoadingTextForMissingFiles:(id)missingFiles;	// 0x2f31d3a1
- (void)setOverlayHidden:(BOOL)hidden duration:(double)duration;	// 0x2f31db5d
// declared property setter: - (void)setPreviewMode:(int)mode;	// 0x2f31d279
- (void)setTransitioning:(BOOL)transitioning synchronizedWithBlock:(id)block;	// 0x2f31dc31
- (void)showContentsWasTappedForPreviewItem:(id)previewItem;	// 0x2f31ea05
- (id)snapshotView;	// 0x2f31d53d
- (void)togglePlayState;	// 0x2f31d505
- (void)viewDidAppear:(BOOL)view;	// 0x2f31c5bd
- (void)viewDidLayoutSubviews;	// 0x2f31c539
- (void)viewDidLoad;	// 0x2f31c389
- (void)viewDidUpdateForPreviewItem:(id)view;	// 0x2f31e9c1
- (void)viewWasTappedOnPreviewItem:(id)item;	// 0x2f31e9a1
- (void)viewWillDisappear:(BOOL)view;	// 0x2f31c569
- (void)willChangeContentFrame;	// 0x2f31d7fd
- (void)willMoveToParentViewController:(id)parentViewController;	// 0x2f31d565
@end

