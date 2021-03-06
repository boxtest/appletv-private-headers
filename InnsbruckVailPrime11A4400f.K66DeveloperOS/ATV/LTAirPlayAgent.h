/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "AirPlayReceiverUIDelegate.h"
#import "BRFailedURLHandling.h"

@class BRMediaPlayer, LTAirPlayPINControl, NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface LTAirPlayAgent : BRSingleton <AirPlayReceiverUIDelegate, BRFailedURLHandling> {
	BOOL _audioStarted;	// 4 = 0x4
	NSMutableDictionary *_failedURLRequests;	// 8 = 0x8
	BOOL _playerStateObserving;	// 12 = 0xc
	BOOL _videoPlaybackEnded;	// 13 = 0xd
	BRMediaPlayer *_videoPlayer;	// 16 = 0x10
	BOOL _videoStarted;	// 20 = 0x14
	BOOL _isAudioPlaybackSession;	// 21 = 0x15
	int _cloudAvailabilityNotifyToken;	// 24 = 0x18
	BOOL _hasCloudAvailabilityNotifyToken;	// 28 = 0x1c
	LTAirPlayPINControl *_dialog;	// 32 = 0x20
	NSTimer *_dialogTimer;	// 36 = 0x24
	id _currentRequestToken;	// 40 = 0x28
	NSMutableDictionary *_sessionPlaybackMetaData;	// 44 = 0x2c
	NSMutableDictionary *_sessionXmlPlaybackMetaData;	// 48 = 0x30
}
@property(retain, nonatomic) id currentRequestToken;	// G=0x41a1fd; S=0x41a20d; @synthesize=_currentRequestToken
@property(retain, nonatomic) NSMutableDictionary *sessionPlaybackMetaData;	// G=0x41a221; S=0x41a231; @synthesize=_sessionPlaybackMetaData
@property(retain, nonatomic) NSMutableDictionary *sessionXmlPlaybackMetaData;	// G=0x41a259; S=0x41a269; @synthesize=_sessionXmlPlaybackMetaData
+ (id)_dataItemForParameters:(id)parameters error:(id *)error;	// 0x41fa61
+ (id)_offerForParameters:(id)parameters error:(id *)error;	// 0x41f15d
+ (id)_playbackMetadataForParameters:(id)parameters error:(id *)error;	// 0x41ffb5
+ (id)_playbackOptionsForParameters:(id)parameters error:(id *)error;	// 0x420401
+ (id)_vodka2InfoForParameters:(id)parameters error:(id *)error;	// 0x41f575
+ (void)setSingleton:(id)singleton;	// 0x41a089
+ (id)singleton;	// 0x41a079
- (id)init;	// 0x41a0ad
- (void).cxx_destruct;	// 0x41a291
- (long)_allowInterruption:(id *)interruption;	// 0x420b0d
- (id)_assetForParameters:(id)parameters error:(id *)error;	// 0x41eb79
- (void)_autoDismissOnScreenCode:(id)code;	// 0x421249
- (void)_dismissOnScreenCode:(id)code;	// 0x42125d
- (id)_errorToDictionary:(id)dictionary;	// 0x420b71
- (void)_internetAvailabilityChanged:(id)changed;	// 0x422411
- (BOOL)_isFinancialTransactionInProgress;	// 0x420d09
- (void)_playerStateChanged:(id)changed;	// 0x420da5
- (void)_playlistItemHitEnd:(id)end;	// 0x422045
- (void)_requestedImageWritten:(id)written;	// 0x41b521
- (long)_setVideoPosition:(float)position;	// 0x420eb9
- (long)_setVideoRate:(float)rate;	// 0x420fe1
- (void)_showPIN:(id)pin;	// 0x421331
- (void)_startVideoPlaybackWithPlayer:(id)player options:(id)options;	// 0x41e805
- (id)_timedMetadataFromAVTimedMetadata:(id)avtimedMetadata;	// 0x421605
- (void)_updatePlayerStateObserving;	// 0x421929
- (void)_updateVideoPlayerMetadata;	// 0x41b671
- (void)_videoAccessLogChanged:(id)changed;	// 0x421a29
- (void)_videoContentAcquisitionError:(id)error;	// 0x421b7d
- (void)_videoMetadataChanged:(id)changed;	// 0x421ad5
- (void)_videoPlaybackEnded:(id)ended;	// 0x421ae5
- (void)_videoPlaybackError:(id)error;	// 0x421c29
- (void)_videoPlaybackTimeSkipped:(id)skipped;	// 0x421d4d
- (void)_videoPlayerCurrentAssetChanged:(id)changed;	// 0x422249
- (void)_videoPlayerItemRemoved:(id)removed;	// 0x422139
- (void)_videoPlayerStateChanged:(id)changed;	// 0x421df9
- (void)airplayUIActivity;	// 0x41d0b5
- (id)airplayUIGetProperty:(id)property qualifier:(id)qualifier error:(int *)error;	// 0x41a325
- (long)airplayUIHideProgress;	// 0x41cff5
- (long)airplayUIPerform:(id)perform inputParams:(id)params outputParams:(id *)params3;	// 0x41ba7d
- (long)airplayUISetProperty:(id)property qualifier:(id)qualifier value:(id)value;	// 0x41a68d
- (long)airplayUIShowProgress;	// 0x41cf35
- (long)airplayUIStartAudio:(id)audio outputParams:(id *)params;	// 0x41d161
- (long)airplayUIStartPresentation:(id)presentation outputParams:(id *)params;	// 0x41cae1
- (long)airplayUIStartVideo:(id)video outputParams:(id *)params;	// 0x41d509
- (long)airplayUIStopAudio:(id)audio;	// 0x41d369
- (long)airplayUIStopPresentation:(id)presentation;	// 0x41ce65
- (long)airplayUIStopVideo:(id)video;	// 0x41e319
- (long)airplayUIUpdateAudioMetaData:(id)data;	// 0x41d411
- (long)airplayUIUpdateAudioProgress:(double)progress duration:(double)duration;	// 0x41d489
// declared property getter: - (id)currentRequestToken;	// 0x41a1fd
- (void)dealloc;	// 0x41a191
- (BOOL)handleFailedURLRequest:(id)request;	// 0x41e721
// declared property getter: - (id)sessionPlaybackMetaData;	// 0x41a221
// declared property getter: - (id)sessionXmlPlaybackMetaData;	// 0x41a259
// declared property setter: - (void)setCurrentRequestToken:(id)token;	// 0x41a20d
// declared property setter: - (void)setSessionPlaybackMetaData:(id)data;	// 0x41a231
// declared property setter: - (void)setSessionXmlPlaybackMetaData:(id)data;	// 0x41a269
@end

