/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableViewDelegate.h"
#import "MPVideoViewController.h"


@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
	unsigned _requestExitAfterHidingControls : 1;	// 278 = 0x116
	unsigned _rotateAfterHidingControls : 1;	// 278 = 0x116
	unsigned _showControlsAfterRotate : 1;	// 278 = 0x116
	unsigned _autoHidingForItemChange : 1;	// 278 = 0x116
	unsigned _scheduledAutoHide : 1;	// 278 = 0x116
	unsigned _orientationForStatusBarOverrideActive : 1;	// 278 = 0x116
	int _orientationForStatusBarOverride;	// 280 = 0x118
}
@property(assign) BOOL canShowControlsOverlay;	// G=0x3035ca41; S=0x3035c9f5; converted property
@property(assign) BOOL inhibitOverlay;	// G=0x3035c295; S=0x3035c299; converted property
- (id)init;	// 0x3035c0e9
- (void)_autohideControlsOverlay;	// 0x3035d26d
- (void)_hideOverlayWithAnimation:(BOOL)animation;	// 0x3035d2a5
- (void)_hideOverlayWithAnimation:(BOOL)animation shouldUpdateAutohideFlag:(BOOL)flag;	// 0x3035d2b9
- (void)_resumedEventsOnlyNotification:(id)notification;	// 0x3035d155
- (void)_setStatusBarVisible:(BOOL)visible duration:(float)duration;	// 0x3035d31d
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)window parentViewController:(id)controller;	// 0x3035ce2d
- (void)_stopWatchingAVController;	// 0x3035d4d9
- (int)_validInterfaceOrientation;	// 0x3035d5a5
- (void)bufferingStateChangedNotification:(id)notification;	// 0x3035d019
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x3035c2a1
- (BOOL)canHideOverlay:(BOOL)overlay;	// 0x3035c77d
// converted property getter: - (BOOL)canShowControlsOverlay;	// 0x3035ca41
- (void)cancelControlsOverlayAutohide;	// 0x3035d1b1
- (BOOL)controlsOverlayVisible;	// 0x3035c805
- (void)dealloc;	// 0x3035c1a5
- (void)displayVideoViewOnScreen;	// 0x3035c669
- (BOOL)forceScaleToFitInPortrait;	// 0x3035c29d
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x3035d1a1
// converted property getter: - (BOOL)inhibitOverlay;	// 0x3035c295
- (void)loadView;	// 0x3035cb5d
- (id)newAlternateTracksTransition;	// 0x3035c615
- (int)orientationForStatusBar;	// 0x3035c33d
- (BOOL)phoneTVOutModeEnabled;	// 0x3035d551
- (void)playbackStateDidChangeNotification:(id)playbackState;	// 0x3035d0e1
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)delay;	// 0x3035d201
// converted property setter: - (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x3035c9f5
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x3035c809
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x3035c87d
- (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x3035ca95
- (void)setDisabledParts:(unsigned)parts;	// 0x3035c8c1
// converted property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x3035c299
- (void)setItem:(id)item;	// 0x3035c2c9
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x3035c379
- (void)setPlayer:(id)player;	// 0x3035c5bd
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x3035c999
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x3035c901
- (void)showOverlayAnimated:(BOOL)animated;	// 0x3035d16d
- (void)showOverlayIfNecessary;	// 0x3035c245
- (int)statusBarStyle;	// 0x3035d319
- (void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;	// 0x3035ce31
- (void)swipableViewHadActivity:(id)activity;	// 0x3035cfad
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x3035d169
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned)part;	// 0x3035cfe1
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned)part;	// 0x3035cffd
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x3035cb01
- (void)viewDidAppear:(BOOL)view;	// 0x3035cccd
- (void)viewWillAppear:(BOOL)view;	// 0x3035cc29
- (void)viewWillDisappear:(BOOL)view;	// 0x3035cda9
@end
