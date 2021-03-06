/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoViewController.h"
#import "MPSwipableViewDelegate.h"


@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
	unsigned _requestExitAfterHidingControls : 1;	// 334 = 0x14e
	unsigned _rotateAfterHidingControls : 1;	// 334 = 0x14e
	unsigned _showControlsAfterRotate : 1;	// 334 = 0x14e
	unsigned _autoHidingForItemChange : 1;	// 334 = 0x14e
	unsigned _scheduledAutoHide : 1;	// 334 = 0x14e
	unsigned _orientationForStatusBarOverrideActive : 1;	// 334 = 0x14e
	int _orientationForStatusBarOverride;	// 336 = 0x150
}
@property(assign) BOOL canShowControlsOverlay;	// G=0x35cd6f39; S=0x35cd6ef1; converted property
@property(assign) BOOL inhibitOverlay;	// G=0x35cd67f9; S=0x35cd67fd; converted property
- (id)init;	// 0x35cd6629
- (void)_applicationDidBecomeActive:(id)_application;	// 0x35cd76c9
- (void)_autohideControlsOverlay;	// 0x35cd77e1
- (void)_hideOverlayWithAnimation:(BOOL)animation;	// 0x35cd781d
- (void)_hideOverlayWithAnimation:(BOOL)animation shouldUpdateAutohideFlag:(BOOL)flag;	// 0x35cd7831
- (void)_resumedEventsOnlyNotification:(id)notification;	// 0x35cd76b5
- (void)_setStatusBarVisible:(BOOL)visible duration:(float)duration;	// 0x35cd7895
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)window parentViewController:(id)controller;	// 0x35cd730d
- (int)_validInterfaceOrientation;	// 0x35cd7a51
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x35cd6805
- (BOOL)canHideOverlay:(BOOL)overlay;	// 0x35cd6c9d
// converted property getter: - (BOOL)canShowControlsOverlay;	// 0x35cd6f39
- (void)cancelControlsOverlayAutohide;	// 0x35cd7725
- (BOOL)controlsOverlayVisible;	// 0x35cd6d25
- (void)dealloc;	// 0x35cd66e9
- (void)displayVideoViewOnScreen;	// 0x35cd6b8d
- (BOOL)forceScaleToFitInPortrait;	// 0x35cd6801
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x35cd7715
// converted property getter: - (BOOL)inhibitOverlay;	// 0x35cd67f9
- (void)loadView;	// 0x35cd7055
- (id)newAlternateTracksTransition;	// 0x35cd6b39
- (int)orientationForStatusBar;	// 0x35cd68a1
- (void)overlayDidBeginScrubbing:(id)overlay;	// 0x35cd74e9
- (void)overlayDidEndScrubbing:(id)overlay;	// 0x35cd74fd
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)delay;	// 0x35cd7775
// converted property setter: - (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x35cd6ef1
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x35cd6d29
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x35cd6da1
- (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x35cd6f8d
- (void)setDisabledParts:(unsigned long long)parts;	// 0x35cd6dfd
// converted property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x35cd67fd
- (void)setItem:(id)item;	// 0x35cd682d
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x35cd68d5
- (void)setPlayer:(id)player;	// 0x35cd6add
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x35cd6e51
- (void)showOverlayAnimated:(BOOL)animated;	// 0x35cd76e5
- (void)showOverlayIfNecessary;	// 0x35cd67a5
- (int)statusBarStyle;	// 0x35cd7891
- (void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;	// 0x35cd7311
- (void)swipableViewHadActivity:(id)activity;	// 0x35cd74b9
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x35cd76e1
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned long long)part;	// 0x35cd7511
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned long long)part;	// 0x35cd752d
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x35cd6ff5
- (void)videoView_bufferingStateChangedNotification:(id)notification;	// 0x35cd7549
- (void)videoView_playbackStateChangedNotification:(id)notification;	// 0x35cd7615
- (void)viewDidAppear:(BOOL)view;	// 0x35cd71c1
- (void)viewWillAppear:(BOOL)view;	// 0x35cd7121
- (void)viewWillDisappear:(BOOL)view;	// 0x35cd729d
@end

