/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMusicPlayerController.h"
#import "MPServerObject.h"

@class NSMutableArray, NSMutableDictionary, MPMusicPlayerControllerServer, MPVideoViewController;
@protocol MPMusicPlayerControllerServerDelegate;

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController> {
	id<MPMusicPlayerControllerServerDelegate> _delegate;	// 12 = 0xc
	MPMusicPlayerControllerServer *_musicPlayerServer;	// 16 = 0x10
	int _activeClientPID;	// 20 = 0x14
	NSMutableArray *_clientPorts;	// 24 = 0x18
	NSMutableDictionary *_clientPortsForPIDs;	// 28 = 0x1c
	NSMutableDictionary *_clientStateForPIDs;	// 32 = 0x20
	MPVideoViewController *_videoViewController;	// 36 = 0x24
	unsigned _queuePrepared : 1;	// 40 = 0x28
}
@property(retain) id allowsBackgroundVideo;	// G=0x2e2c9c31; S=0x2e2c9c99; converted property
@property(retain) id currentChapterIndex;	// G=0x2e2c986d; S=0x2e2c9959; converted property
@property(retain) id currentPlaybackRate;	// G=0x2e2c7dd1; S=0x2e2c7e41; converted property
@property(retain) id currentPlaybackTime;	// G=0x2e2c7ed9; S=0x2e2c7f41; converted property
@property(retain) id nowPlayingItem;	// G=0x2e2c78fd; S=0x2e2c7861; converted property
@property(retain) id playbackSpeed;	// G=0x2e2c94d9; S=0x2e2c9435; converted property
@property(retain) id repeatMode;	// G=0x2e2c8275; S=0x2e2c8345; converted property
@property(retain) id shuffleMode;	// G=0x2e2c80d1; S=0x2e2c81a1; converted property
+ (BOOL)_canSeedGeniusWithItem:(id)item;	// 0x2e2cc461
- (id)init;	// 0x2e2c7765
- (void).cxx_destruct;	// 0x2e2cc52d
- (void)_applicationStateChangedNotification:(id)notification;	// 0x2e2c9fd1
- (id)_avController;	// 0x2e2cb65d
- (id)_avControllerForClientPID:(int)clientPID;	// 0x2e2cb68d
- (BOOL)_clientPIDHasPermissionToPlay:(int)play;	// 0x2e2cb421
- (void)_clientPortInvalidated:(id)invalidated;	// 0x2e2cb131
- (void)_clientPortInvalidatedNotification:(id)notification;	// 0x2e2c9ef9
- (id)_clientState;	// 0x2e2cb38d
- (id)_clientStateForPID:(int)pid;	// 0x2e2cb3bd
- (BOOL)_currentClientPIDHasPermissionToPlay;	// 0x2e2cb479
- (void)_endPlayback;	// 0x2e2cc265
- (void)_endPlaybackForClientIfNecessary:(int)clientIfNecessary;	// 0x2e2cbf61
- (void)_itemDidChangeNotification:(id)_item;	// 0x2e2ca415
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x2e2ca681
- (unsigned)_numberOfItems;	// 0x2e2cc4d1
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x2e2ca189
- (void)_prepareQueueIfNecessary;	// 0x2e2cb969
- (void)_registerClientPort:(unsigned)port forProcessID:(int)processID hasAudioBackgroundMode:(BOOL)mode;	// 0x2e2ca855
- (void)_setQueuePrepared:(BOOL)prepared;	// 0x2e2cb725
- (void)_setQueueWithQuery:(id)query;	// 0x2e2cb865
- (void)_tearDownVideoView;	// 0x2e2cc389
- (void)_tvOutCapabilityDidChangeNotification:(id)_tvOutCapability;	// 0x2e2ca801
// converted property getter: - (id)allowsBackgroundVideo;	// 0x2e2c9c31
- (void)beginSeekingBackward;	// 0x2e2c84b1
- (void)beginSeekingForward;	// 0x2e2c8419
// converted property getter: - (id)currentChapterIndex;	// 0x2e2c986d
// converted property getter: - (id)currentPlaybackRate;	// 0x2e2c7dd1
// converted property getter: - (id)currentPlaybackTime;	// 0x2e2c7ed9
- (void)dealloc;	// 0x2e2c77bd
- (void)endSeeking;	// 0x2e2c854d
- (id)indexOfNowPlayingItem;	// 0x2e2c954d
- (id)isGeniusAvailable;	// 0x2e2c87f9
- (id)isGeniusAvailableForSeedItems:(id)seedItems;	// 0x2e2c88bd
- (id)isNowPlayingItemFromGeniusMix;	// 0x2e2c9641
// converted property getter: - (id)nowPlayingItem;	// 0x2e2c78fd
- (id)nowPlayingItemAtIndex:(id)index;	// 0x2e2c90d9
- (id)nowPlayingRadioTrackID;	// 0x2e2c91d5
- (id)numberOfItems;	// 0x2e2c8099
- (void)pause;	// 0x2e2c7d29
- (void)pauseWithFadeoutDuration:(id)fadeoutDuration;	// 0x2e2c9391
- (void)play;	// 0x2e2c7b51
- (void)playItem:(id)item;	// 0x2e2c9281
// converted property getter: - (id)playbackSpeed;	// 0x2e2c94d9
- (id)playbackState;	// 0x2e2c802d
- (void)prepareQueueForPlayback;	// 0x2e2c9a8d
- (void)prepareToPlay;	// 0x2e2c7bc5
- (id)queueAsQuery;	// 0x2e2c9001
- (id)queueAsRadioStation;	// 0x2e2c906d
- (void)registerForServerDiedNotifications;	// 0x2e2c9af1
// converted property getter: - (id)repeatMode;	// 0x2e2c8275
- (id)serverIsAlive;	// 0x2e2c9ad1
// converted property setter: - (void)setAllowsBackgroundVideo:(id)video;	// 0x2e2c9c99
// converted property setter: - (void)setCurrentChapterIndex:(id)index;	// 0x2e2c9959
// converted property setter: - (void)setCurrentPlaybackRate:(id)rate;	// 0x2e2c7e41
// converted property setter: - (void)setCurrentPlaybackTime:(id)time;	// 0x2e2c7f41
// converted property setter: - (void)setNowPlayingItem:(id)item;	// 0x2e2c7861
// converted property setter: - (void)setPlaybackSpeed:(id)speed;	// 0x2e2c9435
- (void)setQueueWithGeniusMixPlaylist:(id)geniusMixPlaylist;	// 0x2e2c9d35
- (void)setQueueWithItemCollection:(id)itemCollection;	// 0x2e2c7a7d
- (void)setQueueWithQuery:(id)query;	// 0x2e2c79d1
- (void)setQueueWithQuery:(id)query firstItem:(id)item;	// 0x2e2c8f55
- (void)setQueueWithRadioStation:(id)radioStation;	// 0x2e2c9e4d
- (id)setQueueWithSeedItems:(id)seedItems;	// 0x2e2c89cd
// converted property setter: - (void)setRepeatMode:(id)mode;	// 0x2e2c8345
// converted property setter: - (void)setShuffleMode:(id)mode;	// 0x2e2c81a1
- (void)setUseApplicationSpecificQueue:(id)queue;	// 0x2e2c9b59
- (void)shuffle;	// 0x2e2c7c09
// converted property getter: - (id)shuffleMode;	// 0x2e2c80d1
- (id)skipInDirection:(id)direction;	// 0x2e2c96b5
- (void)skipToBeginning;	// 0x2e2c8651
- (void)skipToBeginningOrPreviousItem;	// 0x2e2c8789
- (void)skipToNextChapter;	// 0x2e2c979d
- (void)skipToNextItem;	// 0x2e2c85e5
- (void)skipToPreviousChapter;	// 0x2e2c9805
- (void)skipToPreviousItem;	// 0x2e2c8719
- (void)stop;	// 0x2e2c7d8d
- (id)unshuffledIndexOfNowPlayingItem;	// 0x2e2c95cd
- (BOOL)useApplicationSpecificQueue;	// 0x2e2c9b1d
@end

