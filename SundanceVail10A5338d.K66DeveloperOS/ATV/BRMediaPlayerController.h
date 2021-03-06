/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"
#import "ATVVideoCacheManagerDelegate.h"
#import "BRSecureResource.h"

@class BRResumeMenuControl, BRDescriptionOverlayControl, BRTransportControl, BRAudioVisualizerControl, NSTimer, BRMediaPlayer, BRMediaPlayerEventHandler, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerController : BRController <ATVVideoCacheManagerDelegate, BRSecureResource> {
	long _state;	// 96 = 0x60
	BRControl *_content;	// 100 = 0x64
	BRAudioVisualizerControl *_audioVisualizer;	// 104 = 0x68
	BRMediaPlayer *_player;	// 108 = 0x6c
	BRMediaPlayerEventHandler *_eventHandler;	// 112 = 0x70
	BRResumeMenuControl *_resumeMenu;	// 116 = 0x74
	BRTransportControl *_transport;	// 120 = 0x78
	BRControl *_javascriptOverlay;	// 124 = 0x7c
	BRDescriptionOverlayControl *_descriptionOverlay;	// 128 = 0x80
	BRTextControl *_explanatoryTextControl;	// 132 = 0x84
	id _delegate;	// 136 = 0x88
	id _transitionAnimationDelegate;	// 140 = 0x8c
	NSTimer *_suppressBackgroundProcessTimer;	// 144 = 0x90
	NSTimer *_explanatoryTextFadeTimer;	// 148 = 0x94
	NSTimer *_readyToPlayTimer;	// 152 = 0x98
	NSTimer *_readyToPlayUpdateMinsTimer;	// 156 = 0x9c
	NSTimer *_readyToPlayBandwidthHintTimer;	// 160 = 0xa0
	NSTimer *_loadingSpinnerDelayTimer;	// 164 = 0xa4
	float _lastBufferingProgress;	// 168 = 0xa8
	unsigned _startChapterIndex;	// 172 = 0xac
	float _startPosition;	// 176 = 0xb0
	double _bandwidthHintReadyToPlayMaxTimeInSeconds;	// 180 = 0xb4
	BOOL _drmAttempted;	// 188 = 0xbc
	BOOL _authenticationAttempted;	// 189 = 0xbd
	BOOL _playbackInitiated;	// 190 = 0xbe
	BOOL _shouldBeginPlaybackImmediately;	// 191 = 0xbf
	BOOL _shouldRestoreVoiceOver;	// 192 = 0xc0
	BOOL _alwaysStopOnPop;	// 193 = 0xc1
	BOOL _transportDisabled;	// 194 = 0xc2
	BOOL _resumeMenuDisabled;	// 195 = 0xc3
	BOOL _waitingForTransition;	// 196 = 0xc4
	BOOL _visualsHidden;	// 197 = 0xc5
	BOOL _inChapterMode;	// 198 = 0xc6
	BOOL _digitalExtrasMenuItemDisabled;	// 199 = 0xc7
	BOOL _itemReadyToPlay;	// 200 = 0xc8
	BOOL _supportsBandwidthHints;	// 201 = 0xc9
	BOOL _supportsPreviewBandwidthHints;	// 202 = 0xca
}
@property(assign) BOOL alwaysStopPlaybackWhenPopped;	// G=0x269089; S=0x269079; converted property
@property(assign) BOOL digitalExtrasMenuItemDisabled;	// G=0x268f79; S=0x268f69; converted property
@property(readonly, retain) BRControl *javascriptOverlay;	// G=0x269c1d; converted property
@property(readonly, retain) BRMediaPlayer *player;	// G=0x268db9; converted property
@property(assign) id playerDelegate;	// G=0x268ec9; S=0x268e8d; converted property
@property(assign) int repeatMode;	// G=0x269059; S=0x269039; converted property
@property(assign) BOOL resumeMenuDisabled;	// G=0x268ee9; S=0x268ed9; converted property
@property(assign) BOOL shouldBeginPlaybackImmediately;	// G=0x269c7d; S=0x269c6d; converted property
@property(assign) unsigned startChapterIndex;	// G=0x268f99; S=0x268f89; converted property
@property(assign) float startPosition;	// G=0x268fe9; S=0x268fa9; converted property
@property(assign) BOOL transportControlDisabled;	// G=0x268f59; S=0x268ef9; converted property
@property(assign) BOOL visualsHidden;	// G=0x269185; S=0x269175; converted property
+ (id)controllerForPlayer:(id)player;	// 0x268dc9
- (id)initWithPlayer:(id)player;	// 0x268745
- (id)_audioVisualizerForMediaAsset:(id)mediaAsset;	// 0x26c4a9
- (void)_authenticationCancelled:(id)cancelled;	// 0x26d579
- (void)_authenticationFailed:(id)failed;	// 0x26d4f5
- (void)_authenticationSucceeded:(id)succeeded;	// 0x26d485
- (void)_authorizationAttemptComplete:(id)complete;	// 0x26d18d
- (id)_bandwidthHintReadyToPlayMaxTimeInSeconds;	// 0x26df5d
- (BOOL)_cycleInfoDisplay:(id)display;	// 0x26c5ed
- (id)_descriptionOverlayForType:(id)type;	// 0x26c439
- (void)_dismissResumeMenu;	// 0x26d6b9
- (BOOL)_enterAudioSubtitleChapterPicker;	// 0x26c525
- (void)_enterAuthenticationState;	// 0x26b7ed
- (void)_enterChaptersSubtitlesAndAlternateAudioPickingState;	// 0x26b0b5
- (void)_enterDRMSyncState;	// 0x26b3a5
- (void)_enterDownloadWaitStateWithTime:(double)time;	// 0x26a961
- (void)_enterErrorStateWithError:(id)error;	// 0x26b551
- (void)_enterMediaCueingState;	// 0x26af65
- (void)_enterMediaResolutionState;	// 0x26a0a9
- (void)_enterPINEntryState;	// 0x269e75
- (void)_enterPlaybackStatePlaying:(BOOL)playing;	// 0x26b345
- (void)_enterPostResumeMenuStateAtTime:(double)time;	// 0x26a621
- (void)_enterResumeMenuState;	// 0x26a2b1
- (void)_exitChaptersSubtitlesAndAlternateAudioPickingState;	// 0x26b271
- (void)_explanatoryTextTimerFired:(id)fired;	// 0x26df2d
- (BOOL)_handleContextMenuEvent:(id)event;	// 0x26db05
- (void)_handleContextMenuSelection:(id)selection;	// 0x26dd35
- (BOOL)_handleDownEvent:(id)event;	// 0x26dba9
- (BOOL)_handleDownloadStateEvent:(id)event;	// 0x26ddb1
- (void)_handleHideChapterMarkers;	// 0x26c399
- (BOOL)_handleMenuButtonEvent:(id)event;	// 0x26d7b9
- (void)_handleShowChapterMarkers;	// 0x26c34d
- (BOOL)_handleUpDownCommandsForInfoDisplay:(id)infoDisplay;	// 0x26dca9
- (BOOL)_handleUpEvent:(id)event;	// 0x26db51
- (void)_initiatePlayback;	// 0x26b959
- (id)_javascriptOverlay;	// 0x26c30d
- (id)_photoSet;	// 0x26ca15
- (void)_playerAssetChanged:(id)changed;	// 0x26d03d
- (void)_playerError:(id)error;	// 0x26cfed
- (void)_playerIsReadyToPlay:(id)play;	// 0x26d329
- (void)_playerMediaCued:(id)cued;	// 0x26d3ad
- (void)_playerPlaybackEnded:(id)ended;	// 0x26ce29
- (void)_playerStateChanged:(id)changed;	// 0x26ce7d
- (void)_playerTimeSkipped:(id)skipped;	// 0x26d061
- (void)_playerVisualsChanged:(id)changed;	// 0x26cfa9
- (id)_previewBandwidthHintPromptTime;	// 0x26ba91
- (void)_readyToPlayBandwidthHintTimerFired:(id)playBandwidthHintTimerFired;	// 0x26ae45
- (void)_readyToPlayTimerFired:(id)playTimerFired;	// 0x26ace9
- (void)_readyToPlayUpdateMinsTimerFired:(id)playUpdateMinsTimerFired;	// 0x26adc1
- (BOOL)_requiresLeaseForAsset:(id)asset;	// 0x26ba6d
- (void)_restoreVoiceOverIfNeeded;	// 0x26c9a5
- (void)_resumeItemSelected:(id)selected;	// 0x26d715
- (double)_resumeTime;	// 0x26d661
- (BOOL)_shouldShowResumeMenu;	// 0x26caad
- (BOOL)_shouldUseMusicContextMenu;	// 0x26cc41
- (void)_showLoadingSpinner;	// 0x26c7f9
- (void)_showTransport:(id)transport;	// 0x26c405
- (void)_spinnerDelayTimerFired:(id)fired;	// 0x26c9f5
- (void)_startFromBeginningItemSelected:(id)beginningItemSelected;	// 0x26d769
- (void)_suppressBackgroundProcesses:(id)processes;	// 0x26de51
- (void)_transitionAnimationFinished;	// 0x26d5fd
- (id)_transportControlForType:(id)type;	// 0x26c1a9
- (void)_updateExplantoryText;	// 0x26bee1
- (void)_updatePlaybackControls;	// 0x26bb29
- (void)_updateReadyToPlayTime:(id)playTime;	// 0x26ac19
- (void)_updateVoiceOverDisabling;	// 0x26c8d1
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x2699c9
// converted property getter: - (BOOL)alwaysStopPlaybackWhenPopped;	// 0x269089
- (BOOL)brEventAction:(id)action;	// 0x2695ed
- (BOOL)canBeScreenSaver;	// 0x269195
- (void)clearPlayer;	// 0x268e15
- (void)controlWasActivated;	// 0x2691c5
- (void)controlWasDeactivated;	// 0x269399
- (void)dealloc;	// 0x268c31
// converted property getter: - (BOOL)digitalExtrasMenuItemDisabled;	// 0x268f79
- (BOOL)handleAssetFailedToLoad:(id)load;	// 0x269d69
- (BOOL)handleAssetReadyToPlay:(id)play;	// 0x269c8d
// converted property getter: - (id)javascriptOverlay;	// 0x269c1d
- (void)layoutSubcontrols;	// 0x269779
// converted property getter: - (id)player;	// 0x268db9
// converted property getter: - (id)playerDelegate;	// 0x268ec9
- (id)providersForContextMenu;	// 0x269b41
// converted property getter: - (int)repeatMode;	// 0x269059
// converted property getter: - (BOOL)resumeMenuDisabled;	// 0x268ee9
- (id)secureResourceAuthenticator;	// 0x269e0d
// converted property setter: - (void)setAlwaysStopPlaybackWhenPopped:(BOOL)popped;	// 0x269079
// converted property setter: - (void)setDigitalExtrasMenuItemDisabled:(BOOL)disabled;	// 0x268f69
- (void)setFailedURLDelegate:(id)delegate;	// 0x269b21
- (void)setForwardPlaybackEndTime:(double)time;	// 0x269c2d
// converted property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x268e8d
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x269039
// converted property setter: - (void)setResumeMenuDisabled:(BOOL)disabled;	// 0x268ed9
- (void)setReversePlaybackEndTime:(double)time;	// 0x269c4d
// converted property setter: - (void)setShouldBeginPlaybackImmediately:(BOOL)beginPlaybackImmediately;	// 0x269c6d
// converted property setter: - (void)setStartChapterIndex:(unsigned)index;	// 0x268f89
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x268ff9
// converted property setter: - (void)setStartPosition:(float)position;	// 0x268fa9
// converted property setter: - (void)setTransportControlDisabled:(BOOL)disabled;	// 0x268ef9
// converted property setter: - (void)setVisualsHidden:(BOOL)hidden;	// 0x269175
// converted property getter: - (BOOL)shouldBeginPlaybackImmediately;	// 0x269c7d
- (BOOL)shouldShowTrackPopup;	// 0x2699cd
- (BOOL)shouldTransitionIn;	// 0x269a79
// converted property getter: - (unsigned)startChapterIndex;	// 0x268f99
- (id)startDate;	// 0x269019
// converted property getter: - (float)startPosition;	// 0x268fe9
// converted property getter: - (BOOL)transportControlDisabled;	// 0x268f59
// converted property getter: - (BOOL)visualsHidden;	// 0x269185
- (void)wasPopped;	// 0x269499
- (void)wasPushed;	// 0x26942d
@end

