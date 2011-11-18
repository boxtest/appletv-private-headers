/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, AVQueuePlayer, NSError, AVPlayer, AVAudioSessionMediaPlayerOnly, AVPlayerItem;

@interface MPQueuePlayer : NSObject {
@private
	AVPlayerItem *_currentItem;	// 4 = 0x4
	XXStruct_pwHToB _currentTime;	// 8 = 0x8
	BOOL _isAirPlayVideoActive;	// 32 = 0x20
	BOOL _pausedForPlaybackTransaction;	// 33 = 0x21
	id _playbackQueueCommitHandler;	// 36 = 0x24
	int _playbackQueueTransactionCount;	// 40 = 0x28
	AVQueuePlayer *_player;	// 44 = 0x2c
	NSMutableArray *_queuedOperations;	// 48 = 0x30
	float _rate;	// 52 = 0x34
	float _rateBeforePlaybackQueueTransaction;	// 56 = 0x38
	int _status;	// 60 = 0x3c
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;	// G=0x33c7209d; S=0x33c72a49; 
@property(readonly, assign, nonatomic) int _externalProtectionStatus;	// G=0x33c720dd; 
@property(readonly, assign, nonatomic) AVPlayer *_player;	// G=0x33c72349; 
@property(assign, nonatomic) int actionAtItemEnd;	// G=0x33c71d05; S=0x33c7286d; 
@property(readonly, assign, nonatomic, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;	// G=0x33c7211d; 
@property(assign, nonatomic) BOOL allowsAirPlayVideo;	// G=0x33c71d65; S=0x33c72959; 
@property(assign, nonatomic, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;	// G=0x33c7212d; S=0x33c723c9; 
@property(readonly, assign, nonatomic) AVPlayerItem *currentItem;	// G=0x33c71ff1; 
@property(readonly, assign) XXStruct_pwHToB currentTime;	// G=0x33c72029; converted property
@property(readonly, assign, nonatomic) NSError *error;	// G=0x33c720bd; 
@property(readonly, assign, nonatomic) BOOL isPlaybackQueueTransactionActive;	// G=0x33c71e8d; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x33c72151; 
@property(copy, nonatomic) id playbackQueueCommitHandler;	// G=0x33c73435; S=0x33c73445; @synthesize=_playbackQueueCommitHandler
@property(readonly, assign, nonatomic) AVAudioSessionMediaPlayerOnly *playerAVAudioSession;	// G=0x33c72c95; 
@property(assign, nonatomic) float rate;	// G=0x33c72379; S=0x33c72a69; 
@property(readonly, assign, nonatomic) int status;	// G=0x33c72c61; 
@property(assign, nonatomic) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;	// G=0x33c72c71; S=0x33c72b71; 
- (id)init;	// 0x33c7189d
- (BOOL)_CALayerDestinationIsTVOut;	// 0x33c72cb5
// declared property getter: - (id)_displaysUsedForPlayback;	// 0x33c7209d
// declared property getter: - (int)_externalProtectionStatus;	// 0x33c720dd
// declared property getter: - (id)_player;	// 0x33c72349
- (BOOL)_resumePlayback:(double)playback error:(id *)error;	// 0x33c72cd9
- (void)_setCALayerDestinationIsTVOut:(BOOL)anOut;	// 0x33c72e01
- (void)_setClientName:(id)name;	// 0x33c72ef1
// declared property setter: - (void)_setDisplaysUsedForPlayback:(id)playback;	// 0x33c72a49
- (void)_setEQPreset:(int)preset;	// 0x33c73009
- (void)_setPreferredLanguageList:(id)list;	// 0x33c730f5
- (void)_setStoppingFadeOutDuration:(float)duration;	// 0x33c7320d
- (void)_setVolume:(float)volume;	// 0x33c73305
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)inactive;	// 0x33c73325
- (float)_volume;	// 0x33c73415
// declared property getter: - (int)actionAtItemEnd;	// 0x33c71d05
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x33c71d25
- (void)advanceToNextItem;	// 0x33c71d45
// declared property getter: - (BOOL)allowsAirPlayVideo;	// 0x33c71d65
- (void)beginPlaybackQueueTransactionAndPause:(BOOL)pause;	// 0x33c71d89
- (void)commitPlaybackQueueTransaction;	// 0x33c71ea5
// declared property getter: - (id)currentItem;	// 0x33c71ff1
// converted property getter: - (XXStruct_pwHToB)currentTime;	// 0x33c72029
- (void)dealloc;	// 0x33c719f9
// declared property getter: - (id)error;	// 0x33c720bd
- (void)insertItem:(id)item afterItem:(id)item2;	// 0x33c720fd
// declared property getter: - (BOOL)isAirPlayVideoActive;	// 0x33c7211d
// declared property getter: - (BOOL)isClosedCaptionDisplayEnabled;	// 0x33c7212d
// declared property getter: - (BOOL)isPlaybackQueueTransactionActive;	// 0x33c71e8d
// declared property getter: - (id)items;	// 0x33c72151
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33c71b15
- (void)pause;	// 0x33c72171
- (void)play;	// 0x33c7225d
// declared property getter: - (id)playbackQueueCommitHandler;	// 0x33c73435
// declared property getter: - (id)playerAVAudioSession;	// 0x33c72c95
- (void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;	// 0x33c72359
// declared property getter: - (float)rate;	// 0x33c72379
- (void)removeItem:(id)item;	// 0x33c72389
- (void)removeTimeObserver:(id)observer;	// 0x33c723a9
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x33c724ed
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x33c72639
// declared property setter: - (void)setActionAtItemEnd:(int)itemEnd;	// 0x33c7286d
// declared property setter: - (void)setAllowsAirPlayVideo:(BOOL)video;	// 0x33c72959
// declared property setter: - (void)setClosedCaptionDisplayEnabled:(BOOL)enabled;	// 0x33c723c9
- (void)setCurrentPlaybackQueueTransactionDisplayTime:(XXStruct_pwHToB)time;	// 0x33c724b9
// declared property setter: - (void)setPlaybackQueueCommitHandler:(id)handler;	// 0x33c73445
// declared property setter: - (void)setRate:(float)rate;	// 0x33c72a69
// declared property setter: - (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)active;	// 0x33c72b71
// declared property getter: - (int)status;	// 0x33c72c61
// declared property getter: - (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x33c72c71
@end

