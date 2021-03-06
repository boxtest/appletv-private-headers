/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIViewController.h> // Unknown library
#import "QLPreviewItemInteractionDelegate.h"
#import "UIDocumentPasswordViewDelegate.h"
#import "QLProgressViewDelegate.h"
#import "QuickLook-Structs.h"

@class QLProgressView, QLDisplayBundle, NSTimer, UIDocumentPasswordView, NSString;
@protocol QLPreviewItem;

@interface QLPreviewViewController : UIViewController <QLPreviewItemInteractionDelegate, UIDocumentPasswordViewDelegate, QLProgressViewDelegate> {
	id<QLPreviewItemInteractionDelegate> _displayBundleDelegate;	// 196 = 0xc4
	id<QLPreviewItem> _previewItem;	// 200 = 0xc8
	int _index;	// 204 = 0xcc
	XXStruct_3Bq0WB _clientContext;	// 208 = 0xd0
	int _previewMode;	// 260 = 0x104
	BOOL _needsReload;	// 264 = 0x108
	BOOL _swiping;	// 265 = 0x109
	BOOL _shouldSwapDisplayBundles;	// 266 = 0x10a
	QLDisplayBundle *_displayBundle;	// 268 = 0x10c
	QLDisplayBundle *_newDisplayBundle;	// 272 = 0x110
	NSTimer *_progressTimer;	// 276 = 0x114
	QLProgressView *_progressView;	// 280 = 0x118
	BOOL _loadingProgressVisible;	// 284 = 0x11c
	NSString *_loadintTextForMissingFiles;	// 288 = 0x120
	BOOL _overlayHidden;	// 292 = 0x124
	UIDocumentPasswordView *_documentPasswordView;	// 296 = 0x128
	BOOL _loadedWithPassword;	// 300 = 0x12c
}
@property(assign) XXStruct_3Bq0WB clientContext;	// G=0x33b46149; S=0x33b46041; 
@property(readonly, assign) QLDisplayBundle *displayBundle;	// G=0x33b45fcd; 
@property(assign) id<QLPreviewItemInteractionDelegate> displayBundleDelegate;	// G=0x33b47d91; S=0x33b47da5; @synthesize=_displayBundleDelegate
@property(assign) int index;	// G=0x33b47dbd; S=0x33b47dd1; @synthesize=_index
@property(retain) id<QLPreviewItem> previewItem;	// G=0x33b45f95; S=0x33b45f39; 
@property(assign) int previewMode;	// G=0x33b461f9; S=0x33b4619d; 
- (id)init;	// 0x33b45cc1
- (void)_adjustContentOffsetForKeyboardIfNeeded;	// 0x33b469e9
- (void)_cancelScheduledShowProgressiveUI;	// 0x33b46dad
- (void)_hidePasswordView;	// 0x33b46871
- (void)_hideProgressiveUI;	// 0x33b470b1
- (void)_keyboardDidShow:(id)_keyboard;	// 0x33b46d71
- (void)_prepareDisplayBundle:(id)bundle preload:(BOOL)preload withHints:(id)hints;	// 0x33b471f9
- (void)_refreshPreviewItem:(BOOL)item withPassword:(id)password;	// 0x33b474b9
- (void)_removeDisplayBundles;	// 0x33b46429
- (void)_removeProgressiveUIAnimation:(id)animation finished:(id)finished context:(void *)context;	// 0x33b47181
- (void)_scheduleShowProgressiveUI;	// 0x33b46de9
- (void)_showGenericDisplayBundleForPreviewItem:(id)previewItem;	// 0x33b46521
- (void)_showPasswordView;	// 0x33b466e1
- (void)_showProgressUI;	// 0x33b46e71
- (void)_swapDisplayBundles;	// 0x33b46279
- (void)cancelLoadIfNeeded;	// 0x33b47791
// declared property getter: - (XXStruct_3Bq0WB)clientContext;	// 0x33b46149
- (id)clientProcessAlertViewForPreviewItem:(id)previewItem;	// 0x33b47d11
- (void)dealloc;	// 0x33b45d01
- (id)description;	// 0x33b45de9
- (void)didBeginEditingPassword:(id)password inView:(id)view;	// 0x33b468c1
- (void)didEndEditingPassword:(id)password inView:(id)view;	// 0x33b4692d
- (void)didFinishSwiping;	// 0x33b47851
// declared property getter: - (id)displayBundle;	// 0x33b45fcd
// declared property getter: - (id)displayBundleDelegate;	// 0x33b47d91
// declared property getter: - (int)index;	// 0x33b47dbd
- (void)overlayWasInteractedWithOnPreviewItem:(id)onPreviewItem;	// 0x33b478a5
- (void)preloadIfNeeded;	// 0x33b4771d
// declared property getter: - (id)previewItem;	// 0x33b45f95
- (void)previewItem:(id)item receivedTapOnURL:(id)url;	// 0x33b47cf1
- (void)previewItem:(id)item requiresDisplayBundle:(id)bundle withHints:(id)hints;	// 0x33b4795d
- (void)previewItem:(id)item setAVState:(id)state;	// 0x33b47d31
- (void)previewItem:(id)item willEnterFullScreenWithHostedWindow:(id)hostedWindow;	// 0x33b47d51
- (void)previewItem:(id)item willHideOverlayWithDuration:(double)duration;	// 0x33b478f9
- (id)previewItem:(id)item willSendRequest:(id)request;	// 0x33b47cd1
- (void)previewItem:(id)item willShowOverlayWithDuration:(double)duration;	// 0x33b478c5
- (void)previewItemDidExitFullScreen:(id)previewItem;	// 0x33b47d71
- (void)previewItemDidLoad:(id)previewItem atIndex:(int)index withError:(id)error;	// 0x33b47a7d
- (void)previewItemWillLoad:(id)previewItem;	// 0x33b4792d
// declared property getter: - (int)previewMode;	// 0x33b461f9
- (void)progressViewWasTapped:(id)tapped;	// 0x33b471bd
- (void)refreshPreviewItem;	// 0x33b47495
// declared property setter: - (void)setClientContext:(XXStruct_3Bq0WB)context;	// 0x33b46041
// declared property setter: - (void)setDisplayBundleDelegate:(id)delegate;	// 0x33b47da5
// declared property setter: - (void)setIndex:(int)index;	// 0x33b47dd1
- (void)setLoadintTextForMissingFiles:(id)missingFiles;	// 0x33b45fdd
- (void)setOverlayHidden:(BOOL)hidden duration:(double)duration;	// 0x33b46209
// declared property setter: - (void)setPreviewItem:(id)item;	// 0x33b45f39
// declared property setter: - (void)setPreviewMode:(int)mode;	// 0x33b4619d
- (void)userDidEnterPassword:(id)user forPasswordView:(id)passwordView;	// 0x33b468ad
- (void)viewDidLoad;	// 0x33b45e89
- (void)viewWasTappedOnPreviewItem:(id)item;	// 0x33b47885
- (void)willMoveToParentViewController:(id)parentViewController;	// 0x33b45ee1
- (void)willStartSwiping;	// 0x33b477d9
@end

