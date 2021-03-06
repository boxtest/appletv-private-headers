/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRVideoCacheManager.h"
#import "AppleTV-Structs.h"

@class NSMutableDictionary, BRStreamingMediaAsset, BRKeyValueObservingRegistry, AVAssetCache, AVPlayerLayer, AVQueuePlayer, AVAsset, NSTimer, AVPlayerItem;
@protocol BRVideoCacheManagerDelegate;

@interface ATVVideoCacheManager : BRVideoCacheManager {
@private
	AVAssetCache *_rentalCache;	// 4 = 0x4
	AVAssetCache *_otherCache;	// 8 = 0x8
	AVAssetCache *_avFoundationPrivateCache;	// 12 = 0xc
	NSMutableDictionary *_cacheKeys;	// 16 = 0x10
	BRStreamingMediaAsset *_mediaAssetBeingCached;	// 20 = 0x14
	BRKeyValueObservingRegistry *_kvoRegistry;	// 24 = 0x18
	id<BRVideoCacheManagerDelegate> _delegate;	// 28 = 0x1c
	AVPlayerLayer *_playerLayer;	// 32 = 0x20
	AVQueuePlayer *_player;	// 36 = 0x24
	AVAsset *_avAsset;	// 40 = 0x28
	AVPlayerItem *_playerItem;	// 44 = 0x2c
	BOOL _isItemLikelyToKeepUp;	// 48 = 0x30
	BOOL _itemPrepared;	// 49 = 0x31
	double _videoStartTime;	// 52 = 0x34
	NSTimer *_bufferProgressTimer;	// 60 = 0x3c
	double _computedReadyToPlayTime;	// 64 = 0x40
	BOOL _computedReadyToPlayTimeReady;	// 72 = 0x48
}
@property(readonly, assign) double videoStartTime;	// G=0x301e096d; converted property
- (id)init;	// 0x301dfff9
- (BOOL)_assetIsLiveStreaming:(id)streaming;	// 0x301e0e21
- (void)_bufferProgressTimerFired:(id)fired;	// 0x301e0985
- (void)_cacheNotification:(BOOL)notification;	// 0x301e1355
- (long long)_clearSpaceInCache:(id)cache smallestFirst:(BOOL)first upTo:(unsigned long long)to;	// 0x301e1111
- (void)_deleteCloudCacheContents;	// 0x301e247d
- (void)_handleDiskSpaceRequest:(id)request;	// 0x301e0f25
- (void)_iTunesAccountChanged:(id)changed;	// 0x301e2539
- (void)_networkStatusChanged:(id)changed;	// 0x301e1515
- (id)_otherCache;	// 0x301e0cbd
- (void)_performTracksLoadedAction;	// 0x301e1ae5
- (void)_postItemStateChangedNotification:(ATVMediaItemRef)notification;	// 0x301e258d
- (id)_rentalCache;	// 0x301e0b59
- (void)_startCachingURL:(id)url orItem:(ATVMediaItemRef)item avAsset:(id)asset withElapsedTime:(double)elapsedTime;	// 0x301e1585
- (void)_stopCaching;	// 0x301e21f1
- (BOOL)_verifyDirectoryExists:(id)exists;	// 0x301e0e6d
- (BRTimeRange)bufferedRange;	// 0x301e2731
- (id)cacheInfoForAsset:(id)asset;	// 0x301e035d
- (id)currentPlayer;	// 0x301e0b19
- (id)currentPlayerItem;	// 0x301e0b29
- (id)currentPlayerLayer;	// 0x301e0b09
- (ATVMediaItemRef)currentlyCachingItem;	// 0x301e0b39
- (void)dealloc;	// 0x301e0209
- (void)deleteCloudCacheContents;	// 0x301e0815
- (double)duration;	// 0x301e2659
- (double)elapsedTime;	// 0x301e26c5
- (void)evictAsset:(id)asset;	// 0x301e05e5
- (void)evictURL:(id)url;	// 0x301e06ed
- (BOOL)isAssetLoading:(id)loading;	// 0x301e0825
- (BOOL)isItemLoading:(ATVMediaItemRef)loading;	// 0x301e0881
- (BOOL)isItemReadyToPlay:(ATVMediaItemRef)play;	// 0x301e08c5
- (int)playerState;	// 0x301e262d
- (void)saveCacheKey:(id)key forAsset:(id)asset;	// 0x301e0569
- (void)saveCacheKey:(id)key forURL:(id)url;	// 0x301e05b5
- (double)secondsUntilItemWillBeReadyToPlay:(ATVMediaItemRef)secondsUntilItem;	// 0x301e0a69
- (void)setDelegate:(id)delegate;	// 0x301e034d
- (void)startCachingAVAsset:(id)asset mediaItem:(ATVMediaItemRef)item withElapsedTime:(double)elapsedTime;	// 0x301e07b1
- (void)startCachingItem:(ATVMediaItemRef)item;	// 0x301e0765
- (void)startCachingItem:(ATVMediaItemRef)item withElapsedTime:(double)elapsedTime;	// 0x301e0789
- (void)startCachingURL:(id)url;	// 0x301e07d9
- (void)stopCaching;	// 0x301e0805
// converted property getter: - (double)videoStartTime;	// 0x301e096d
@end

