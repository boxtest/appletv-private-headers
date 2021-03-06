/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVItem.h"
#import "MediaPlayer-Structs.h"

@class MPMediaItem;

@interface MPMediaQueryNowPlayingItem : MPAVItem {
	MPMediaItem *_mediaItem;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) MPMediaItem *mediaItem;	// G=0x3504cd29; @synthesize=_mediaItem
@property(assign) double playbackCheckpointCurrentTime;	// G=0x3504b151; S=0x3504b275; converted property
@property(assign) int subtitleTrackID;	// G=0x3504b875; S=0x3504b7a1; converted property
+ (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)soundCheckEnabled forQueuedItems:(id)queuedItems currentQuery:(id)query;	// 0x3504bca1
- (id)initWithMediaItem:(id)mediaItem;	// 0x3504a221
- (id)_chapterTitleForTime:(double)time;	// 0x3504c0b5
- (void)_handlePlaybackFinishedTime:(double)time finishedByHittingEnd:(BOOL)end;	// 0x3504c185
- (id)_newTimeMarkersForChapterType:(int)chapterType;	// 0x3504c691
- (void)_updateBookmarkTimeIfNecessary:(double)necessary;	// 0x3504cbe9
- (id)album;	// 0x3504a759
- (id)albumArtist;	// 0x3504a799
- (unsigned)albumTrackCount;	// 0x3504a7fd
- (unsigned)albumTrackNumber;	// 0x3504a7b9
- (BOOL)allowsEQ;	// 0x3504ae21
- (id)artist;	// 0x3504a779
- (id)artworkImageData;	// 0x3504a841
- (id)artworkMIMEType;	// 0x3504a8e5
- (id)artworkTimeMarkers;	// 0x3504a8f1
- (BOOL)canSeedGenius;	// 0x3504a929
- (id)chapterTimeMarkers;	// 0x3504a951
- (id)composer;	// 0x3504a989
- (int)customAVEQPreset;	// 0x3504add5
- (void)dealloc;	// 0x3504a41d
- (id)description;	// 0x3504a469
- (unsigned)discCount;	// 0x3504a9ed
- (unsigned)discNumber;	// 0x3504a9a9
- (id)displayableText;	// 0x3504aa31
- (double)durationFromExternalMetadata;	// 0x3504ab1d
- (id)genre;	// 0x3504ae49
- (void)handlePlaybackFinishedTime:(double)time finishedByHittingEnd:(BOOL)end;	// 0x3504ae69
- (BOOL)hasAlternatesForTypes:(unsigned)types;	// 0x3504ae6d
- (BOOL)hasDataForItemArtwork;	// 0x3504af99
- (id)imageCacheRequestWithSize:(CGSize)size time:(double)time usePlaceholderAsFallback:(BOOL)fallback;	// 0x3504afcd
- (BOOL)isAssetURLValid;	// 0x3504abbd
- (BOOL)isPlaceholderForItem:(id)item;	// 0x3504abb9
- (BOOL)isStreamable;	// 0x3504acc9
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned)speed;	// 0x3504ac91
- (BOOL)isValidPlayerSubstituteForItem:(id)item;	// 0x3504ab3d
- (void)loadAssetAndPlayerItem;	// 0x3504a4e5
- (id)mainTitle;	// 0x3504b099
// declared property getter: - (id)mediaItem;	// 0x3504cd29
- (void)notePlaybackFinishedByHittingEnd;	// 0x3504b0b9
- (unsigned long long)persistentID;	// 0x3504b131
// converted property getter: - (double)playbackCheckpointCurrentTime;	// 0x3504b151
- (void)pushBookmarkingTimesToCloud;	// 0x3504b1a9
- (void)setAlternateAudioTrackID:(int)anId;	// 0x3504b1ed
// converted property setter: - (void)setPlaybackCheckpointCurrentTime:(double)time;	// 0x3504b275
- (void)setPlaybackFinishedTime:(double)time;	// 0x3504b2bd
- (void)setPlaybackStoppedTime:(double)time;	// 0x3504b33d
- (void)setRating:(float)rating;	// 0x3504b641
// converted property setter: - (void)setSubtitleTrackID:(int)anId;	// 0x3504b7a1
- (void)setUserEnabledSubtitles:(BOOL)subtitles;	// 0x3504b829
// converted property getter: - (int)subtitleTrackID;	// 0x3504b875
- (BOOL)supportsRewindAndFastForward15Seconds;	// 0x3504b8bd
- (id)titlesForTime:(double)time;	// 0x3504b8ed
- (unsigned)type;	// 0x3504bbb1
- (id)urlTimeMarkers;	// 0x3504bbe1
- (BOOL)useEmbeddedChapterData;	// 0x3504bc19
- (float)userRating;	// 0x3504bc1d
- (BOOL)wantsSubtitles;	// 0x3504bc55
@end

