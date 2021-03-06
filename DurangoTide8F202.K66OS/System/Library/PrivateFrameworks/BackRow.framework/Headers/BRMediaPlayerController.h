/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRController.h"
#import "BRSecureResource.h"
#import "BackRow-Structs.h"
#import "BRVideoCacheManagerDelegate.h"

@class BRTextControl, BRDescriptionOverlayControl, BRResumeMenuControl, NSTimer, BRMediaPlayer, BRTransportControl, BRMediaPlayerEventHandler;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerController : BRController <BRVideoCacheManagerDelegate, BRSecureResource> {
@private
	long _state;	// 60 = 0x3c
	BRControl *_content;	// 64 = 0x40
	BRControl *_audioVisualizer;	// 68 = 0x44
	BRMediaPlayer *_player;	// 72 = 0x48
	BRMediaPlayerEventHandler *_eventHandler;	// 76 = 0x4c
	BRResumeMenuControl *_resumeMenu;	// 80 = 0x50
	BRTransportControl *_transport;	// 84 = 0x54
	BRDescriptionOverlayControl *_descriptionOverlay;	// 88 = 0x58
	BRTextControl *_explanatoryTextControl;	// 92 = 0x5c
	id _delegate;	// 96 = 0x60
	id _transitionAnimationDelegate;	// 100 = 0x64
	NSTimer *_suppressBackgroundProcessTimer;	// 104 = 0x68
	NSTimer *_explanatoryTextFadeTimer;	// 108 = 0x6c
	NSTimer *_readyToPlayTimer;	// 112 = 0x70
	NSTimer *_readyToPlayUpdateMinsTimer;	// 116 = 0x74
	float _lastBufferingProgress;	// 120 = 0x78
	unsigned _startChapterIndex;	// 124 = 0x7c
	float _startPosition;	// 128 = 0x80
	BOOL _drmAttempted;	// 132 = 0x84
	BOOL _authenticationAttempted;	// 133 = 0x85
	BOOL _playbackInitiated;	// 134 = 0x86
	BOOL _shouldRestoreVoiceOver;	// 135 = 0x87
	BOOL _alwaysStopOnPop;	// 136 = 0x88
	BOOL _transportDisabled;	// 137 = 0x89
	BOOL _resumeMenuDisabled;	// 138 = 0x8a
	BOOL _waitingForTransition;	// 139 = 0x8b
	BOOL _visualsHidden;	// 140 = 0x8c
	BOOL _inChapterMode;	// 141 = 0x8d
	BOOL _digitalExtrasMenuItemDisabled;	// 142 = 0x8e
	BOOL _itemReadyToPlay;	// 143 = 0x8f
}
@property(assign) BOOL alwaysStopPlaybackWhenPopped;	// G=0x328d5fd1; S=0x328d1d39; converted property
@property(assign) BOOL digitalExtrasMenuItemDisabled;	// G=0x328d1cb9; S=0x328d1ca9; converted property
@property(readonly, retain) BRMediaPlayer *player;	// G=0x328d1c59; converted property
@property(assign) id playerDelegate;	// G=0x328d1c69; S=0x328d6189; converted property
@property(assign) int repeatMode;	// G=0x328d60b1; S=0x328d60d1; converted property
@property(assign) BOOL resumeMenuDisabled;	// G=0x328d1c89; S=0x328d1c79; converted property
@property(assign) unsigned startChapterIndex;	// G=0x328d1cd9; S=0x328d1cc9; converted property
@property(assign) float startPosition;	// G=0x328d1d29; S=0x328d1ce9; converted property
@property(assign) BOOL transportControlDisabled;	// G=0x328d1c99; S=0x328d6135; converted property
@property(assign) BOOL visualsHidden;	// G=0x328d1d59; S=0x328d1d49; converted property
+ (id)controllerForPlayer:(id)player;	// 0x328d6231
- (id)initWithPlayer:(id)player;	// 0x328d63c5
- (void)__enterVolumeWarningState;	// 0x328d5e21
- (id)_audioVisualizer;	// 0x328d39fd
- (void)_authenticationCancelled:(id)cancelled;	// 0x328d2b7d
- (void)_authenticationFailed:(id)failed;	// 0x328d2bf5
- (void)_authenticationSucceeded:(id)succeeded;	// 0x328d2c6d
- (void)_authorizationAttemptComplete:(id)complete;	// 0x328d2ded
- (BOOL)_cycleInfoDisplay:(id)display;	// 0x328d3721
- (id)_descriptionOverlayForType:(id)type;	// 0x328d3a75
- (void)_dismissResumeMenu;	// 0x328d2669
- (BOOL)_enterAudioSubtitleChapterPicker;	// 0x328d392d
- (void)_enterAuthenticationState;	// 0x328d4305
- (void)_enterChaptersSubtitlesAndAlternateAudioPickingState;	// 0x328d4741
- (void)_enterDRMSyncState:(BOOL)state;	// 0x328d446d
- (void)_enterDownloadWaitStateWithTime:(double)time;	// 0x328d50d1
- (void)_enterErrorStateWithError:(id)error;	// 0x328d6ddd
- (void)_enterMediaCueingState;	// 0x328d6c01
- (void)_enterMediaResolutionState;	// 0x328d4d9d
- (void)_enterPINEntryState;	// 0x328d5699
- (void)_enterPlaybackStatePlaying:(BOOL)playing;	// 0x328d4635
- (void)_enterPreResumeMenuState;	// 0x328d5349
- (void)_enterResumeMenuState;	// 0x328d48d9
- (void)_enterVolumeWarningState;	// 0x328d697d
- (void)_exitChaptersSubtitlesAndAlternateAudioPickingState;	// 0x328d4685
- (void)_explanatoryTextTimerFired:(id)fired;	// 0x328d1dcd
- (BOOL)_handleContextMenuEvent:(id)event;	// 0x328d2171
- (void)_handleContextMenuSelection:(id)selection;	// 0x328d1f59
- (BOOL)_handleDownEvent:(id)event;	// 0x328d2061
- (BOOL)_handleDownloadStateEvent:(id)event;	// 0x328d1ebd
- (void)_handleHideChapterMarkers;	// 0x328d3add
- (BOOL)_handleMenuButtonEvent:(id)event;	// 0x328d21b9
- (void)_handleShowChapterMarkers;	// 0x328d3b39
- (BOOL)_handleUpDownCommandsForInfoDisplay:(id)infoDisplay;	// 0x328d1fc9
- (BOOL)_handleUpEvent:(id)event;	// 0x328d2121
- (void)_initiatePlayback;	// 0x328d4205
- (double)_keyFrameAdjustedResumeTime:(double)time;	// 0x328d26bd
- (void)_mediaResolutionComplete:(id)complete;	// 0x328d2d29
- (BOOL)_mediaSupportsSubtitles:(id)subtitles;	// 0x328d3275
- (id)_photoSet;	// 0x328d3521
- (void)_playExtraItemSelected:(id)selected;	// 0x328d24c5
- (void)_playerAssetChanged:(id)changed;	// 0x328d2ea9
- (void)_playerError:(id)error;	// 0x328d2ecd
- (void)_playerMediaCued:(id)cued;	// 0x328d2cd1
- (void)_playerPlaybackEnded:(id)ended;	// 0x328d3089
- (void)_playerStateChanged:(id)changed;	// 0x328d2f49
- (void)_playerVisualsChanged:(id)changed;	// 0x328d2f11
- (void)_preResumeItemSelected:(id)selected;	// 0x328d2565
- (void)_preResumeStartFromBeginningItemSelected:(id)beginningItemSelected;	// 0x328d252d
- (void)_readyToPlayTimerFired:(id)playTimerFired;	// 0x328d4fa1
- (void)_readyToPlayUpdateMinsTimerFired:(id)playUpdateMinsTimerFired;	// 0x328d4f29
- (void)_resumeItemSelected:(id)selected;	// 0x328d2631
- (double)_resumeTimeNearKeyframe;	// 0x328d2731
- (BOOL)_shouldRestoreVolume;	// 0x328d2965
- (BOOL)_shouldShowResumeMenu;	// 0x328d339d
- (BOOL)_shouldShowVolumeWarning;	// 0x328d2909
- (BOOL)_shouldUseMusicContextMenu;	// 0x328d30d5
- (void)_showLoadingSpinner;	// 0x328d3665
- (void)_startFromBeginningItemSelected:(id)beginningItemSelected;	// 0x328d25b1
- (void)_suppressBackgroundProcesses:(id)processes;	// 0x328d1dfd
- (void)_transitionAnimationFinished;	// 0x328d279d
- (id)_transportControlForType:(id)type;	// 0x328d3b7d
- (void)_updateExplantoryText;	// 0x328d3c55
- (void)_updatePlaybackControls;	// 0x328d3ee5
- (void)_updateReadyToPlayTime:(ATVMediaItemRef)playTime;	// 0x328d505d
- (void)_updateVoiceOverDisabling;	// 0x328d35b1
- (void)_volumeWarningDismissed:(id)dismissed;	// 0x328d27ed
// converted property getter: - (BOOL)alwaysStopPlaybackWhenPopped;	// 0x328d5fd1
- (BOOL)brEventAction:(id)action;	// 0x328c758d
- (BOOL)canBeScreenSaver;	// 0x328d1d69
- (void)clearPlayer;	// 0x328d61c1
- (void)controlWasActivated;	// 0x328d5e35
- (void)controlWasDeactivated;	// 0x328d5da9
- (void)dealloc;	// 0x328d6275
// converted property getter: - (BOOL)digitalExtrasMenuItemDisabled;	// 0x328d1cb9
- (BOOL)handleAssetFailedToLoad:(id)load;	// 0x328d5915
- (BOOL)handleAssetReadyToPlay:(id)play;	// 0x328d5999
- (void)layoutSubcontrols;	// 0x328d6779
// converted property getter: - (id)player;	// 0x328d1c59
// converted property getter: - (id)playerDelegate;	// 0x328d1c69
- (id)providersForContextMenu;	// 0x328d5a65
// converted property getter: - (int)repeatMode;	// 0x328d60b1
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x328d58b1
// converted property getter: - (BOOL)resumeMenuDisabled;	// 0x328d1c89
// converted property setter: - (void)setAlwaysStopPlaybackWhenPopped:(BOOL)popped;	// 0x328d1d39
// converted property setter: - (void)setDigitalExtrasMenuItemDisabled:(BOOL)disabled;	// 0x328d1ca9
// converted property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x328d6189
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x328d60d1
// converted property setter: - (void)setResumeMenuDisabled:(BOOL)disabled;	// 0x328d1c79
// converted property setter: - (void)setStartChapterIndex:(unsigned)index;	// 0x328d1cc9
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x328d6111
// converted property setter: - (void)setStartPosition:(float)position;	// 0x328d1ce9
// converted property setter: - (void)setTransportControlDisabled:(BOOL)disabled;	// 0x328d6135
// converted property setter: - (void)setVisualsHidden:(BOOL)hidden;	// 0x328d1d49
- (BOOL)shouldShowTrackPopup;	// 0x328d5bc5
- (BOOL)shouldTransitionIn;	// 0x328d5b2d
// converted property getter: - (unsigned)startChapterIndex;	// 0x328d1cd9
- (id)startDate;	// 0x328d60f1
// converted property getter: - (float)startPosition;	// 0x328d1d29
// converted property getter: - (BOOL)transportControlDisabled;	// 0x328d1c99
// converted property getter: - (BOOL)visualsHidden;	// 0x328d1d59
- (void)wasPopped;	// 0x328d5c5d
@end

