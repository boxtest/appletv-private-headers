/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAbstractFullScreenVideoViewController.h"
#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"

@class MPFullScreenVideoOverlay;

@interface MPFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate> {
	MPFullScreenVideoOverlay *_overlayView;	// 336 = 0x150
	int _autorotationState;	// 340 = 0x154
	BOOL _inhibitOverlay;	// 344 = 0x158
}
@property(assign) BOOL allowsDetailScrubbing;	// G=0x34faaf61; S=0x34faaf85; converted property
@property(assign, nonatomic) int autorotationState;	// G=0x34fac31d; S=0x34fac32d; @synthesize=_autorotationState
@property(assign) BOOL inhibitOverlay;	// G=0x34fac30d; S=0x34fabb6d; converted property
@property(readonly, assign, nonatomic) MPFullScreenVideoOverlay *overlayView;	// G=0x34fab4f5; 
- (id)init;	// 0x34faa70d
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x34fac081
- (void)_reallyRemoveOverlay;	// 0x34fac2a5
- (void)_rotationAnimationFinished:(id)finished;	// 0x34fac1b5
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x34faaf61
// declared property getter: - (int)autorotationState;	// 0x34fac31d
- (BOOL)controlsOverlayVisible;	// 0x34faaf35
- (id)createChapterFlipTransition;	// 0x34faad71
- (void)dealloc;	// 0x34faa769
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x34fab871
// converted property getter: - (BOOL)inhibitOverlay;	// 0x34fac30d
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x34faa93d
- (void)overlayTappedBackButton:(id)button;	// 0x34fabecd
- (void)overlayTappedScaleModeButton:(id)button;	// 0x34fabfa9
// declared property getter: - (id)overlayView;	// 0x34fab4f5
- (void)removeChildViewController:(id)controller;	// 0x34faaa05
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x34faaf85
// declared property setter: - (void)setAutorotationState:(int)state;	// 0x34fac32d
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x34faab51
- (void)setDisabledParts:(unsigned long long)parts;	// 0x34faac69
// converted property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x34fabb6d
- (void)setItem:(id)item;	// 0x34faaacd
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x34faacf1
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x34faabd5
- (void)showChaptersController;	// 0x34faaeb5
- (void)showOverlayAnimated:(BOOL)animated;	// 0x34fab72d
- (void)startTicking;	// 0x34faa8dd
- (void)stopTicking;	// 0x34faa91d
- (id)swipableView:(id)view overrideHitTest:(CGPoint)test withEvent:(id)event;	// 0x34fabfd5
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x34faafa5
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x34fabbd5
- (id)videoOverlayView;	// 0x34fab70d
- (id)videoOverlayViewIfLoaded;	// 0x34fab71d
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x34fabac5
- (void)videoView_playbackStateChangedNotification:(id)notification;	// 0x34fab9b1
- (void)viewDidAppear:(BOOL)view;	// 0x34faa7f5
- (void)viewDidDisappear:(BOOL)view;	// 0x34faa899
@end
