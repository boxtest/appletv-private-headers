/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPServerObject.h"
#import "MPMusicPlayerController.h"

@class NSMutableArray, MPVideoViewController, MPMusicPlayerControllerServer, NSMutableDictionary;
@protocol MPMusicPlayerControllerServerDelegate;

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController> {
@private
	id<MPMusicPlayerControllerServerDelegate> _delegate;	// 12 = 0xc
	MPMusicPlayerControllerServer *_musicPlayerServer;	// 16 = 0x10
	NSMutableArray *_clientPorts;	// 20 = 0x14
	NSMutableDictionary *_clientPortsForPIDs;	// 24 = 0x18
	NSMutableDictionary *_clientStateForPIDs;	// 28 = 0x1c
	MPVideoViewController *_videoViewController;	// 32 = 0x20
	int _activeClientPID;	// 36 = 0x24
	int _extendedModeNotifyToken;	// 40 = 0x28
	unsigned _queuePrepared : 1;	// 44 = 0x2c
}
@property(retain) id allowsRemoteUIAccess;	// G=0x34e3212d; S=0x34e32175; converted property
@property(retain) id currentChapterIndex;	// G=0x34e31eb5; S=0x34e31f59; converted property
@property(retain) id currentPlaybackTime;	// G=0x34e31081; S=0x34e310cd; converted property
@property(retain) id nowPlayingItem;	// G=0x34e30dc5; S=0x34e30d79; converted property
@property(retain) id playbackSpeed;	// G=0x34e31d09; S=0x34e31cbd; converted property
@property(retain) id repeatMode;	// G=0x34e312b9; S=0x34e31345; converted property
@property(retain) id shuffleMode;	// G=0x34e311bd; S=0x34e31249; converted property
+ (BOOL)_canSeedGeniusWithItem:(id)item;	// 0x34e33ddd
- (id)init;	// 0x34e30c61
- (void)_applicationStateChangedNotification:(id)notification;	// 0x34e322e9
- (id)_avController;	// 0x34e333ad
- (id)_avControllerForClientPID:(int)clientPID;	// 0x34e333dd
- (id)_avControllerForClientPID:(int)clientPID ignoreExtendedMode:(BOOL)mode;	// 0x34e333f1
- (BOOL)_clientPIDHasPermissionToPlay:(int)play;	// 0x34e33199
- (void)_clientPortInvalidated:(id)invalidated;	// 0x34e32ef5
- (void)_clientPortInvalidatedNotification:(id)notification;	// 0x34e32275
- (id)_clientState;	// 0x34e33121
- (id)_clientStateForPID:(int)pid;	// 0x34e33151
- (BOOL)_currentClientPIDHasPermissionToPlay;	// 0x34e331e9
- (void)_endPlayback;	// 0x34e33c5d
- (void)_endPlaybackForClientIfNecessary:(int)clientIfNecessary;	// 0x34e33a11
- (void)_itemDidChangeNotification:(id)_item;	// 0x34e325ad
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x34e32745
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x34e32401
- (void)_prepareQueueIfNecessary;	// 0x34e33575
- (void)_registerClientPort:(unsigned)port forProcessID:(int)processID hasAudioBackgroundMode:(BOOL)mode;	// 0x34e3285d
- (void)_setQueueWithQuery:(id)query;	// 0x34e334bd
- (void)_tearDownVideoView;	// 0x34e33d41
- (void)_tvOutCapabilityDidChangeNotification:(id)_tvOutCapability;	// 0x34e32835
// converted property getter: - (id)allowsRemoteUIAccess;	// 0x34e3212d
- (void)beginSeekingBackward;	// 0x34e31409
- (void)beginSeekingForward;	// 0x34e313b5
// converted property getter: - (id)currentChapterIndex;	// 0x34e31eb5
// converted property getter: - (id)currentPlaybackTime;	// 0x34e31081
- (void)dealloc;	// 0x34e30cb1
- (void)endSeeking;	// 0x34e3145d
- (id)indexOfNowPlayingItem;	// 0x34e31d5d
- (id)isGeniusAvailable;	// 0x34e31579
- (id)isNowPlayingItemFromGeniusMix;	// 0x34e31e05
// converted property getter: - (id)nowPlayingItem;	// 0x34e30dc5
- (id)nowPlayingItemAtIndex:(id)index;	// 0x34e31b1d
- (id)numberOfItems;	// 0x34e31175
- (void)pause;	// 0x34e31049
- (void)pauseWithFadeoutDuration:(id)fadeoutDuration;	// 0x34e31c71
- (void)play;	// 0x34e30f4d
- (void)playItem:(id)item;	// 0x34e31bb9
// converted property getter: - (id)playbackSpeed;	// 0x34e31d09
- (id)playbackState;	// 0x34e31129
- (void)prepareQueueForPlayback;	// 0x34e32009
- (id)queueAsQuery;	// 0x34e31ac9
- (void)registerForServerDiedNotifications;	// 0x34e32039
// converted property getter: - (id)repeatMode;	// 0x34e312b9
- (id)serverIsAlive;	// 0x34e32019
// converted property setter: - (void)setAllowsRemoteUIAccess:(id)access;	// 0x34e32175
// converted property setter: - (void)setCurrentChapterIndex:(id)index;	// 0x34e31f59
// converted property setter: - (void)setCurrentPlaybackTime:(id)time;	// 0x34e310cd
// converted property setter: - (void)setNowPlayingItem:(id)item;	// 0x34e30d79
// converted property setter: - (void)setPlaybackSpeed:(id)speed;	// 0x34e31cbd
- (void)setQueueWithGeniusMixPlaylist:(id)geniusMixPlaylist;	// 0x34e321c1
- (void)setQueueWithItemCollection:(id)itemCollection;	// 0x34e30ed1
- (void)setQueueWithQuery:(id)query;	// 0x34e30e75
- (void)setQueueWithQuery:(id)query firstItem:(id)item;	// 0x34e31a85
- (id)setQueueWithSeedItems:(id)seedItems;	// 0x34e315fd
// converted property setter: - (void)setRepeatMode:(id)mode;	// 0x34e31345
// converted property setter: - (void)setShuffleMode:(id)mode;	// 0x34e31249
- (void)setUseApplicationSpecificQueue:(id)queue;	// 0x34e32065
- (void)shuffle;	// 0x34e30f8d
// converted property getter: - (id)shuffleMode;	// 0x34e311bd
- (void)skipToBeginning;	// 0x34e314d9
- (void)skipToBeginningOrPreviousItem;	// 0x34e31545
- (void)skipToNextChapter;	// 0x34e31e59
- (void)skipToNextItem;	// 0x34e314ad
- (void)skipToPreviousChapter;	// 0x34e31e85
- (void)skipToPreviousItem;	// 0x34e31511
- (void)stop;	// 0x34e31071
- (id)unshuffledIndexOfNowPlayingItem;	// 0x34e31db1
- (BOOL)useApplicationSpecificQueue;	// 0x34e3203d
@end

