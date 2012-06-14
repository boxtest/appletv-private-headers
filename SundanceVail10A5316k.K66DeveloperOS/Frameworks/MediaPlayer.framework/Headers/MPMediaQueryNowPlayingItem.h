/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPAVItem.h"

@class MPMediaItem, NSDictionary;

@interface MPMediaQueryNowPlayingItem : MPAVItem {
	MPMediaItem *_mediaItem;	// 96 = 0x60
	NSDictionary *_prefetchedProperties;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) MPMediaItem *mediaItem;	// G=0x348e5331; @synthesize=_mediaItem
@property(assign) double playbackCheckpointCurrentTime;	// G=0x348e3b61; S=0x348e3c85; converted property
- (id)initWithMediaItem:(id)mediaItem;	// 0x348e2b79
- (id)_chapterTitleForTime:(double)time;	// 0x348e4899
- (void)_handlePlaybackFinishedTime:(double)time finishedByHittingEnd:(BOOL)end;	// 0x348e4969
- (id)_newTimeMarkersForChapterType:(int)chapterType;	// 0x348e4c95
- (void)_updateBookmarkTimeIfNecessary:(double)necessary;	// 0x348e51f1
- (id)album;	// 0x348e30bd
- (id)albumArtist;	// 0x348e3115
- (unsigned)albumTrackCount;	// 0x348e31ad
- (unsigned)albumTrackNumber;	// 0x348e3169
- (BOOL)allowsEQ;	// 0x348e380d
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)soundCheckEnabled forQueuedItems:(id)queuedItems currentQuery:(id)query;	// 0x348e45b1
- (id)artist;	// 0x348e30e9
- (id)artworkImageData;	// 0x348e31f1
- (id)artworkMIMEType;	// 0x348e3295
- (id)artworkTimeMarkers;	// 0x348e32a1
- (id)chapterTimeMarkers;	// 0x348e32d9
- (id)composer;	// 0x348e3311
- (int)customAVEQPreset;	// 0x348e37c1
- (void)dealloc;	// 0x348e2d5d
- (id)description;	// 0x348e2dc1
- (unsigned)discCount;	// 0x348e3381
- (unsigned)discNumber;	// 0x348e333d
- (id)displayableText;	// 0x348e33c5
- (double)durationFromExternalMetadata;	// 0x348e34c5
- (id)genre;	// 0x348e3835
- (void)handlePlaybackFinishedTime:(double)time finishedByHittingEnd:(BOOL)end;	// 0x348e3855
- (BOOL)hasAlternatesForTypes:(unsigned)types;	// 0x348e3859
- (BOOL)hasDataForItemArtwork;	// 0x348e3985
- (id)imageCacheRequestWithSize:(CGSize)size time:(double)time usePlaceholderAsFallback:(BOOL)fallback;	// 0x348e39b9
- (BOOL)isAssetURLValid;	// 0x348e3589
- (BOOL)isPlaceholderForItem:(id)item;	// 0x348e3585
- (BOOL)isStreamable;	// 0x348e36b5
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned)speed;	// 0x348e365d
- (BOOL)isValidPlayerSubstituteForItem:(id)item;	// 0x348e3509
- (void)loadAssetAndPlayerItem;	// 0x348e2e3d
- (id)mainTitle;	// 0x348e3a85
// declared property getter: - (id)mediaItem;	// 0x348e5331
- (void)notePlaybackFinishedByHittingEnd;	// 0x348e3aa5
- (unsigned long long)persistentID;	// 0x348e3b3d
// converted property getter: - (double)playbackCheckpointCurrentTime;	// 0x348e3b61
- (void)pushBookmarkingTimesToCloud;	// 0x348e3bb9
- (void)setAlternateAudioTrackID:(int)anId;	// 0x348e3bfd
// converted property setter: - (void)setPlaybackCheckpointCurrentTime:(double)time;	// 0x348e3c85
- (void)setPlaybackFinishedTime:(double)time;	// 0x348e3ccd
- (void)setPlaybackStoppedTime:(double)time;	// 0x348e3d4d
- (void)setRating:(float)rating;	// 0x348e3f11
- (void)setSubtitleTrackID:(int)anId;	// 0x348e4071
- (void)setUserEnabledSubtitles:(BOOL)subtitles;	// 0x348e40f9
- (BOOL)supportsRewindAndFastForward15Seconds;	// 0x348e4145
- (id)titlesForTime:(double)time;	// 0x348e4191
- (unsigned)type;	// 0x348e44c1
- (id)urlTimeMarkers;	// 0x348e44f1
- (BOOL)useEmbeddedChapterData;	// 0x348e4529
- (float)userRating;	// 0x348e452d
- (BOOL)wantsSubtitles;	// 0x348e4565
@end
