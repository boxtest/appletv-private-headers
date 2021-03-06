/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVQueuePlayerFeederSource.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, MPAVQueuePlayerFeeder, MPQueuePlayer, MPAVItem;
@protocol MPAVPlaylistFeeder;

@interface MPAVPlaylistManager : NSObject <MPAVQueuePlayerFeederSource> {
	NSString *_audioSessionModeOverride;	// 4 = 0x4
	MPAVItem *_currentItem;	// 8 = 0x8
	MPAVQueuePlayerFeeder *_feeder;	// 12 = 0xc
	BOOL _goToTargetIndex;	// 16 = 0x10
	int _isChangingPlaylistFeeder;	// 20 = 0x14
	int _lastSelectionDirection;	// 24 = 0x18
	MPQueuePlayer *_player;	// 28 = 0x1c
	id<MPAVPlaylistFeeder> _playlistFeeder;	// 32 = 0x20
	int _repeatMode;	// 36 = 0x24
	int _retainCount;	// 40 = 0x28
	int _targetIndex;	// 44 = 0x2c
	BOOL _updatedAudioSessionMode;	// 48 = 0x30
}
@property(retain, nonatomic) NSString *audioSessionModeOverride;	// G=0x36f590a9; S=0x36f590b9; @synthesize=_audioSessionModeOverride
@property(readonly, assign, nonatomic) BOOL canChangePlaylistFeeder;	// G=0x36f58771; 
@property(readonly, assign) int currentIndex;	// G=0x36f58695; 
@property(readonly, assign) MPAVItem *currentItem;	// G=0x36f590c9; @synthesize=_currentItem
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x36f58195; S=0x36f5821d; 
@property(readonly, assign, nonatomic) BOOL isChangingPlaylistFeeder;	// G=0x36f58759; 
@property(readonly, assign) int lastSelectionDirection;	// G=0x36f59101; @synthesize=_lastSelectionDirection
@property(assign, nonatomic) BOOL managesSystemDownloads;	// G=0x36f581b9; S=0x36f5823d; 
@property(assign, nonatomic) unsigned maxQueueDepth;	// G=0x36f581dd; S=0x36f5825d; 
@property(assign, nonatomic) unsigned minQueueDepth;	// G=0x36f581fd; S=0x36f5827d; 
@property(readonly, assign) MPQueuePlayer *player;	// G=0x36f590dd; @synthesize=_player
@property(retain, nonatomic) id<MPAVPlaylistFeeder> playlistFeeder;	// G=0x36f590f1; S=0x36f58789; @synthesize=_playlistFeeder
@property(assign) int repeatMode;	// G=0x36f586c9; S=0x36f586d9; 
- (id)init;	// 0x36f57979
- (void)_assetCancelNotification:(id)notification;	// 0x36f57e61
- (id)_audioSessionModeForMediaItem:(id)mediaItem;	// 0x36f58e9d
- (id)_feeder;	// 0x36f58e8d
- (id)_feederItemForIndex:(int)index;	// 0x36f582fd
- (BOOL)_isDeallocating;	// 0x36f5794d
- (id)_itemToFollowItemIndex:(int)followItemIndex skipUnavailableContent:(BOOL)content;	// 0x36f58c85
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)_mediaLibraryDisplayValues;	// 0x36f58049
- (void)_networkTypeDidChangeNotification:(id)_networkType;	// 0x36f580c5
- (int)_nextItemIndex:(int)index repeatMode:(int)mode;	// 0x36f58b95
- (int)_prepareToQueuePlaybackIndex:(int)queuePlaybackIndex selectionDirection:(int)direction;	// 0x36f58425
- (void)_reloadQueuedItemsIfPathBecameAvailable;	// 0x36f58911
- (BOOL)_tryRetain;	// 0x36f578fd
- (void)_updateAudioSessionMode;	// 0x36f58ef1
// declared property getter: - (id)audioSessionModeOverride;	// 0x36f590a9
// declared property getter: - (BOOL)canChangePlaylistFeeder;	// 0x36f58771
- (void)contentInvalidated;	// 0x36f58b35
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x36f58aed
- (void)contentInvalidatedWithNewIndex:(unsigned)newIndex;	// 0x36f58b55
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x36f58a25
// declared property getter: - (int)currentIndex;	// 0x36f58695
// declared property getter: - (id)currentItem;	// 0x36f590c9
- (void)dealloc;	// 0x36f57b69
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x36f58195
// declared property getter: - (BOOL)isChangingPlaylistFeeder;	// 0x36f58759
// declared property getter: - (int)lastSelectionDirection;	// 0x36f59101
// declared property getter: - (BOOL)managesSystemDownloads;	// 0x36f581b9
// declared property getter: - (unsigned)maxQueueDepth;	// 0x36f581dd
// declared property getter: - (unsigned)minQueueDepth;	// 0x36f581fd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x36f57ce9
// declared property getter: - (id)player;	// 0x36f590dd
// declared property getter: - (id)playlistFeeder;	// 0x36f590f1
- (id)queuePlayerFeeder:(id)feeder itemToFollowItem:(id)followItem;	// 0x36f58d69
- (BOOL)queuePlayerFeeder:(id)feeder willInsertItem:(id)item;	// 0x36f58da5
- (void)queuePlayerFeeder:(id)feeder willRemoveItem:(id)item;	// 0x36f58da1
- (void)queuePlayerFeederDidUpdateQueue:(id)queuePlayerFeeder queuedItems:(id)items dequeuedItems:(id)items3;	// 0x36f58da9
- (void)queuePlayerFeederFailedToQueueAnyItems:(id)queueAnyItems;	// 0x36f58e21
- (oneway void)release;	// 0x36f57875
// declared property getter: - (int)repeatMode;	// 0x36f586c9
- (id)retain;	// 0x36f5783d
- (unsigned)retainCount;	// 0x36f578e9
// declared property setter: - (void)setAudioSessionModeOverride:(id)override;	// 0x36f590b9
- (void)setCurrentIndex:(int)index selectionDirection:(int)direction;	// 0x36f585b9
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x36f5821d
// declared property setter: - (void)setManagesSystemDownloads:(BOOL)downloads;	// 0x36f5823d
// declared property setter: - (void)setMaxQueueDepth:(unsigned)depth;	// 0x36f5825d
// declared property setter: - (void)setMinQueueDepth:(unsigned)depth;	// 0x36f5827d
// declared property setter: - (void)setPlaylistFeeder:(id)feeder;	// 0x36f58789
- (BOOL)setPlaylistFeeder:(id)feeder startIndex:(int)index;	// 0x36f58879
// declared property setter: - (void)setRepeatMode:(int)mode;	// 0x36f586d9
- (void)updateForSoundCheckDefaultsChange;	// 0x36f5829d
@end

