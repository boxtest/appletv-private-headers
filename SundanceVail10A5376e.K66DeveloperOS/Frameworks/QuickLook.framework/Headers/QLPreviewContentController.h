/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QLPreviewContentControllerProtocol.h"
#import "QuickLook-Structs.h"
#import "QLPreviewItemInteractionDelegate.h"
#import <UIViewController.h> // Unknown library

@class NSMutableSet, NSMutableDictionary, UISegmentedControl, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPageViewController, NSMutableOrderedSet, NSString, NSMutableArray;
@protocol QLPreviewContentDataSource, QLPreviewContentDelegate;

@interface QLPreviewContentController : UIViewController <QLPreviewContentControllerProtocol, QLPreviewItemInteractionDelegate> {
	id<QLPreviewContentDataSource> _dataSource;	// 196 = 0xc4
	id<QLPreviewContentDelegate> _delegate;	// 200 = 0xc8
	UITapGestureRecognizer *_tapRecognizer;	// 204 = 0xcc
	UILongPressGestureRecognizer *_longPressRecognizer;	// 208 = 0xd0
	UIPageViewController *_pageViewController;	// 212 = 0xd4
	NSMutableDictionary *_previewViewControllerCache;	// 216 = 0xd8
	NSMutableArray *_previewViewControllerCacheOrdering;	// 220 = 0xdc
	int _previewMode;	// 224 = 0xe0
	int _numberOfPreviewItems;	// 228 = 0xe4
	int _currentPreviewItemIndex;	// 232 = 0xe8
	NSString *_loadintTextForMissingFiles;	// 236 = 0xec
	UISegmentedControl *_customToolbarSegmentedArrowControl;	// 240 = 0xf0
	BOOL _swiping;	// 244 = 0xf4
	NSMutableSet *_loadingItems;	// 248 = 0xf8
	NSMutableOrderedSet *_scheduledLoads;	// 252 = 0xfc
	BOOL _waitingForRemoteInstantiation;	// 256 = 0x100
	BOOL _overlayHidden;	// 257 = 0x101
	BOOL _blockRemoteImages;	// 258 = 0x102
	XXStruct_3Bq0WB clientContext;	// 260 = 0x104
}
@property(assign) XXStruct_3Bq0WB clientContext;	// G=0x32c6f6b1; S=0x32c6f6d5; @synthesize
@property(assign) int currentPreviewItemIndex;	// G=0x32c6dbc9; S=0x32c6dba1; converted property
@property(assign) id<QLPreviewContentDataSource> dataSource;	// G=0x32c6f659; S=0x32c6f66d; @synthesize=_dataSource
@property(assign) id<QLPreviewContentDelegate> delegate;	// G=0x32c6f685; S=0x32c6f699; @synthesize=_delegate
@property(assign) int previewMode;	// G=0x32c6e265; S=0x32c6e149; @synthesize=_previewMode
- (id)init;	// 0x32c6cfe9
- (void)_cachePreviewViewController:(id)controller;	// 0x32c6d62d
- (id)_cachedPreviewControllerForPreviewItem:(id)previewItem;	// 0x32c6d3a9
- (id)_copyPreviewControllerForPreview:(id)preview;	// 0x32c6d881
- (void)_dequeueScheduledLoad;	// 0x32c6f301
- (void)_hideMenuController;	// 0x32c6e535
- (void)_longPressGestureRecognized:(id)recognized;	// 0x32c6e56d
- (id)_previewControllerForPreviewItem:(id)previewItem createIfNeeded:(BOOL)needed withIndex:(int)index;	// 0x32c6d9e9
- (id)_previewViewControllerForPreviewItemIndex:(unsigned)previewItemIndex;	// 0x32c6da81
- (void)_removeNonCachedPreviewViewControllers;	// 0x32c6d3e5
- (void)_scheduleAdjacentPreviewItems;	// 0x32c6f4a1
- (void)_schedulePreviewViewControllerIfNeeded:(id)needed;	// 0x32c6f3f1
- (void)_tapGestureRecognized:(id)recognized;	// 0x32c6e515
- (void)_updateDisabledScrollingRect;	// 0x32c6eaf9
- (void)_updateTapRecognizer;	// 0x32c6d819
- (void)beginScrubbing;	// 0x32c6e371
- (BOOL)canBecomeFirstResponder;	// 0x32c6ea01
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x32c6ea05
// declared property getter: - (XXStruct_3Bq0WB)clientContext;	// 0x32c6f6b1
- (id)clientProcessAlertViewForPreviewItem:(id)previewItem;	// 0x32c6f2b5
- (void)configureWithParameters:(id)parameters;	// 0x32c6d1d5
- (void)copy:(id)copy;	// 0x32c6ea75
- (id)currentPreviewItem;	// 0x32c6db71
// converted property getter: - (int)currentPreviewItemIndex;	// 0x32c6dbc9
- (id)currentPreviewViewController;	// 0x32c6db19
// declared property getter: - (id)dataSource;	// 0x32c6f659
- (void)dealloc;	// 0x32c6d0b9
// declared property getter: - (id)delegate;	// 0x32c6f685
- (void)didReceiveMemoryWarning;	// 0x32c6d181
- (void)endScrubbing;	// 0x32c6e3e9
- (void)enterBackground;	// 0x32c6e901
- (void)forceResignFirstResponder;	// 0x32c6d361
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x32c6e49d
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x32c6e4dd
- (void)overlayWasInteractedWithOnPreviewItem:(id)onPreviewItem;	// 0x32c6efbd
- (void)pageViewController:(id)controller didFinishAnimating:(BOOL)animating previousViewControllers:(id)controllers transitionCompleted:(BOOL)completed;	// 0x32c6ec7d
- (id)pageViewController:(id)controller viewControllerAfterViewController:(id)controller2;	// 0x32c6ec31
- (id)pageViewController:(id)controller viewControllerBeforeViewController:(id)controller2;	// 0x32c6ebe9
- (void)pageViewController:(id)controller willTransitionToViewControllers:(id)viewControllers;	// 0x32c6ee11
- (id)pdfPreviewData;	// 0x32c6e2c9
- (void)previewItem:(id)item receivedTapOnURL:(id)url;	// 0x32c6f225
- (void)previewItem:(id)item requiresDisplayBundle:(id)bundle withHints:(id)hints;	// 0x32c6effd
- (void)previewItem:(id)item setAVState:(id)state;	// 0x32c6f245
- (void)previewItem:(id)item willEnterFullScreenWithHostedWindow:(id)hostedWindow;	// 0x32c6f275
- (void)previewItem:(id)item willHideOverlayWithDuration:(double)duration;	// 0x32c6ef69
- (id)previewItem:(id)item willSendRequest:(id)request;	// 0x32c6f191
- (void)previewItem:(id)item willShowOverlayWithDuration:(double)duration;	// 0x32c6ef35
- (void)previewItemDidExitFullScreen:(id)previewItem;	// 0x32c6f295
- (void)previewItemDidLoad:(id)previewItem atIndex:(int)index withError:(id)error;	// 0x32c6f001
- (void)previewItemWillLoad:(id)previewItem;	// 0x32c6efdd
// declared property getter: - (int)previewMode;	// 0x32c6e265
- (id)printPageHelper;	// 0x32c6e339
- (id)printPageRenderer;	// 0x32c6e301
- (void)refreshCurrentPreviewItem;	// 0x32c6e135
- (void)refreshCurrentPreviewItem:(BOOL)item;	// 0x32c6dbd9
- (void)reloadData;	// 0x32c6e0bd
- (void)scrubToValue:(double)value;	// 0x32c6e3a9
- (void)setBlockRemoteImages:(BOOL)images;	// 0x32c6e275
// declared property setter: - (void)setClientContext:(XXStruct_3Bq0WB)context;	// 0x32c6f6d5
- (void)setContentFrame:(CGRect)frame;	// 0x32c6e6e5
// converted property setter: - (void)setCurrentPreviewItemIndex:(int)index;	// 0x32c6dba1
// declared property setter: - (void)setDataSource:(id)source;	// 0x32c6f66d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32c6f699
- (void)setLoadintTextForMissingFiles:(id)missingFiles;	// 0x32c6e285
- (void)setOverlayHidden:(BOOL)hidden duration:(double)duration;	// 0x32c6e8b9
// declared property setter: - (void)setPreviewMode:(int)mode;	// 0x32c6e149
- (void)togglePlayState;	// 0x32c6e421
- (void)viewDidLayoutSubviews;	// 0x32c6d311
- (void)viewWasTappedOnPreviewItem:(id)item;	// 0x32c6ef9d
- (void)viewWillDisappear:(BOOL)view;	// 0x32c6d321
- (void)willMoveToParentViewController:(id)parentViewController;	// 0x32c6e459
@end

