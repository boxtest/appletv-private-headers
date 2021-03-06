/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRResponder.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVPhotoPlayerSwapView, BRTransportControl, BRMediaPlayer, BRMediaPlayerEventHandler, NSTimer, ATVPhotoSwapView;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVPhotoPlayerSwapViewController : XXUnknownSuperclass <BRResponder> {
	BOOL _transportEnabled;	// 4 = 0x4
	ATVPhotoSwapView *_swapView;	// 8 = 0x8
	id<BRMediaAsset> _mediaAsset;	// 12 = 0xc
	BRMediaPlayer *_player;	// 16 = 0x10
	BRMediaPlayerEventHandler *_playerEventHandler;	// 20 = 0x14
	BRTransportControl *_transportControl;	// 24 = 0x18
	ATVPhotoPlayerSwapView *_playerSwapView;	// 28 = 0x1c
	NSTimer *_beginPlaybackTimer;	// 32 = 0x20
	NSTimer *_spinnerTimer;	// 36 = 0x24
}
@property(assign, nonatomic) __weak NSTimer *beginPlaybackTimer;	// G=0x4eff19; S=0x4eff39; @synthesize=_beginPlaybackTimer
@property(retain, nonatomic) id<BRMediaAsset> mediaAsset;	// G=0x4efe05; S=0x4efe15; @synthesize=_mediaAsset
@property(retain, nonatomic) BRMediaPlayer *player;	// G=0x4efe39; S=0x4efe49; @synthesize=_player
@property(retain, nonatomic) BRMediaPlayerEventHandler *playerEventHandler;	// G=0x4efe71; S=0x4efe81; @synthesize=_playerEventHandler
@property(retain, nonatomic) ATVPhotoPlayerSwapView *playerSwapView;	// G=0x4efee1; S=0x4efef1; @synthesize=_playerSwapView
@property(assign, nonatomic) __weak NSTimer *spinnerTimer;	// G=0x4eff4d; S=0x4eff6d; @synthesize=_spinnerTimer
@property(retain, nonatomic) ATVPhotoSwapView *swapView;	// G=0x4efdf5; S=0x4edeed; @synthesize=_swapView
@property(retain, nonatomic) BRTransportControl *transportControl;	// G=0x4efea9; S=0x4efeb9; @synthesize=_transportControl
@property(assign, nonatomic) BOOL transportEnabled;	// G=0x4efe29; S=0x4ee041; @synthesize=_transportEnabled
- (void).cxx_destruct;	// 0x4eff81
- (void)_beginDelayedPlayback;	// 0x4efc19
- (void)_beginPlayback;	// 0x4ef2a1
- (void)_beginPlaybackTimerHandler:(id)handler;	// 0x4efd99
- (void)_cueMedia;	// 0x4eea9d
- (id)_imageControlForSwapView:(id)swapView;	// 0x4efa91
- (BOOL)_isPlayerReadyToBeSwappedBack;	// 0x4eef25
- (BOOL)_isPlayerSeeking;	// 0x4efda9
- (void)_playerDidStartLoading;	// 0x4eec19
- (void)_playerDidTogglePlaying;	// 0x4eec51
- (void)_playerMediaCued:(id)cued;	// 0x4ee6d5
- (void)_playerMediaCuedError:(id)error;	// 0x4ee925
- (void)_playerProgressChanged:(id)changed;	// 0x4eea65
- (void)_playerStateChanged:(id)changed;	// 0x4ee97d
- (XXStruct_qlg9jA)_shadowWidthForSwapView:(id)swapView;	// 0x4efba9
- (void)_showDelayedSpinner;	// 0x4ef1f9
- (void)_showError;	// 0x4eed2d
- (void)_showSpinner:(BOOL)spinner;	// 0x4ef015
- (void)_spinnerTimerHandler:(id)handler;	// 0x4ef28d
- (void)_teardown;	// 0x4eed3d
// declared property getter: - (id)beginPlaybackTimer;	// 0x4eff19
- (BOOL)brEventAction:(id)action;	// 0x4ee3d5
- (BOOL)brKeyEvent:(id)event;	// 0x4ee6d1
- (void)dealloc;	// 0x4edead
// declared property getter: - (id)mediaAsset;	// 0x4efe05
// declared property getter: - (id)player;	// 0x4efe39
// declared property getter: - (id)playerEventHandler;	// 0x4efe71
// declared property getter: - (id)playerSwapView;	// 0x4efee1
// declared property setter: - (void)setBeginPlaybackTimer:(id)timer;	// 0x4eff39
// declared property setter: - (void)setMediaAsset:(id)asset;	// 0x4efe15
// declared property setter: - (void)setPlayer:(id)player;	// 0x4efe49
// declared property setter: - (void)setPlayerEventHandler:(id)handler;	// 0x4efe81
// declared property setter: - (void)setPlayerSwapView:(id)view;	// 0x4efef1
// declared property setter: - (void)setSpinnerTimer:(id)timer;	// 0x4eff6d
// declared property setter: - (void)setSwapView:(id)view;	// 0x4edeed
// declared property setter: - (void)setTransportControl:(id)control;	// 0x4efeb9
// declared property setter: - (void)setTransportEnabled:(BOOL)enabled;	// 0x4ee041
// declared property getter: - (id)spinnerTimer;	// 0x4eff4d
- (void)stop;	// 0x4ee3c5
// declared property getter: - (id)swapView;	// 0x4efdf5
- (void)switchToMediaAsset:(id)mediaAsset swapView:(id)view;	// 0x4ee23d
// declared property getter: - (id)transportControl;	// 0x4efea9
// declared property getter: - (BOOL)transportEnabled;	// 0x4efe29
@end

