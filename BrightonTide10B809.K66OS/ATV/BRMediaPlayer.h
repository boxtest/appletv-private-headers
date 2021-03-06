/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTransportDataProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableArray;
@protocol BRPlayerDelegate;

__attribute__((visibility("hidden")))
@interface BRMediaPlayer : XXUnknownSuperclass <BRTransportDataProvider> {
	NSMutableArray *_stateStack;	// 4 = 0x4
	id<BRPlayerDelegate> _playerDelegate;	// 8 = 0x8
}
@property(assign) long chapterGroupIndex;	// G=0x38bedd; S=0x38bed9; converted property
@property(assign) long currentChapterIndex;	// G=0x38bec5; S=0x38bec1; converted property
@property(assign) BOOL disablePlatformFilters;	// G=0x38bf21; S=0x38bf1d; converted property
@property(assign) double elapsedTime;	// G=0x38be29; S=0x38be21; converted property
@property(assign) BOOL isPlaylistDynamic;	// G=0x38c009; S=0x38c005; converted property
@property(assign) BOOL isPresentable;	// G=0x38bf99; S=0x38bf95; converted property
@property(assign) BOOL muted;	// G=0x38c019; S=0x38c015; converted property
@property(retain) id playbackDate;	// G=0x38be4d; S=0x38be49; converted property
@property(retain, nonatomic) id<BRPlayerDelegate> playerDelegate;	// G=0x38bf75; S=0x38bf85; @synthesize=_playerDelegate
@property(retain) id playerSpecificOptions;	// G=0x38c05d; S=0x38c059; converted property
@property(assign) int playlistEndAction;	// G=0x38bf6d; S=0x38bf69; converted property
@property(assign) int repeatMode;	// G=0x38bff5; S=0x38bff1; converted property
@property(retain) id selectedAudioOption;	// G=0x38bfd1; S=0x38bfcd; converted property
@property(retain) id selectedMedia;	// G=0x38bfdd; S=0x38bfe1; converted property
@property(retain) id selectedSubtitleOption;	// G=0x38bfc5; S=0x38bfb5; converted property
@property(assign) BOOL shufflePlayback;	// G=0x38bfe9; S=0x38bfe5; converted property
@property(assign) BOOL skipExplicit;	// G=0x38c001; S=0x38bffd; converted property
@property(assign) float startPosition;	// G=0x38be1d; S=0x38be19; converted property
@property(assign) double startTime;	// G=0x38be81; S=0x38be79; converted property
@property(assign) double stopTime;	// G=0x38be61; S=0x38be59; converted property
@property(assign) double virtualChapterMark;	// G=0x38bea1; S=0x38be9d; converted property
@property(assign) float volume;	// G=0x38c025; S=0x38c021; converted property
+ (BOOL)allowMultiplePlayers;	// 0x38bc75
+ (id)contentTypes;	// 0x38bc71
+ (BOOL)handlesVideoForType:(id)type;	// 0x38bc79
- (void)appendMediaList:(id)list;	// 0x38bd29
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x38bd2d
- (BOOL)attemptAuthorizationWithError:(id *)error;	// 0x38bf25
- (id)audioOptions;	// 0x38bfc9
- (BRTimeRange)bufferedRange;	// 0x38bf01
- (float)bufferingProgress;	// 0x38bf0d
- (id)chapterAtIndex:(long)index;	// 0x38bef9
- (long)chapterCount;	// 0x38bef5
- (id)chapterGroupAtIndex:(long)index;	// 0x38bee1
- (long)chapterGroupCount;	// 0x38bed5
// converted property getter: - (long)chapterGroupIndex;	// 0x38bedd
- (long)chapterIndexForTime:(double)time;	// 0x38bec9
- (BOOL)chapterIsPlayable:(long)playable;	// 0x38becd
- (id)chapters;	// 0x38bef1
- (void)clearStack;	// 0x38c2b5
- (id)collection;	// 0x38bd39
- (BOOL)cueMediaWithError:(id *)error;	// 0x38bd89
// converted property getter: - (long)currentChapterIndex;	// 0x38bec5
- (long)currentInterstitialIndex;	// 0x38bee9
- (id)currentVideoFrame;	// 0x38bfa5
- (void)dealloc;	// 0x38bc7d
- (id)debugStringForState:(int)state;	// 0x38c061
// converted property getter: - (BOOL)disablePlatformFilters;	// 0x38bf21
- (double)duration;	// 0x38be01
// converted property getter: - (double)elapsedTime;	// 0x38be29
- (BOOL)hasClosedCaptions;	// 0x38bfbd
- (BOOL)hasRealChapters;	// 0x38bed1
- (void)insertMedia:(id)media atIndex:(long)index;	// 0x38bd31
- (id)interstitialTimes;	// 0x38bee5
- (BOOL)isAssetReadyToPlay:(id)play;	// 0x38bf15
// converted property getter: - (BOOL)isPlaylistDynamic;	// 0x38c009
// converted property getter: - (BOOL)isPresentable;	// 0x38bf99
- (BOOL)isTrackEnabled:(int)enabled;	// 0x38bfd5
- (double)keyframeTimeNearTime:(double)time searchForwards:(BOOL)forwards;	// 0x38bfa9
- (id)media;	// 0x38bd3d
- (int)mediaCount;	// 0x38bd45
- (long)mediaIndex;	// 0x38bd85
// converted property getter: - (BOOL)muted;	// 0x38c019
- (void)nextChapter;	// 0x38beb9
- (void)nextMedia;	// 0x38c011
- (int)peekState;	// 0x38c205
// converted property getter: - (id)playbackDate;	// 0x38be4d
- (id)playbackInfo;	// 0x38bf19
// declared property getter: - (id)playerDelegate;	// 0x38bf75
// converted property getter: - (id)playerSpecificOptions;	// 0x38c05d
- (int)playerState;	// 0x38bdf1
- (BOOL)playingVisualContent;	// 0x38bf9d
// converted property getter: - (int)playlistEndAction;	// 0x38bf6d
- (int)popState;	// 0x38c23d
- (void)previousChapter;	// 0x38bebd
- (void)previousMedia;	// 0x38c00d
- (void)purgeTrackList;	// 0x38bd35
- (void)pushState:(int)state;	// 0x38c145
- (id)qualityOfServiceInfo;	// 0x38bf71
// converted property getter: - (int)repeatMode;	// 0x38bff5
- (void)resetToBeginning;	// 0x38be99
- (BOOL)reverseTouchSwipeBehavior;	// 0x38bce1
// converted property getter: - (id)selectedAudioOption;	// 0x38bfd1
// converted property getter: - (id)selectedMedia;	// 0x38bfdd
// converted property getter: - (id)selectedSubtitleOption;	// 0x38bfc5
// converted property setter: - (void)setChapterGroupIndex:(long)index;	// 0x38bed9
// converted property setter: - (void)setCurrentChapterIndex:(long)index;	// 0x38bec1
// converted property setter: - (void)setDisablePlatformFilters:(BOOL)filters;	// 0x38bf1d
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x38be21
- (void)setFailedURLDelegate:(id)delegate;	// 0x38c2e1
- (void)setForcedSubtitleOption;	// 0x38bfc1
- (void)setForwardPlaybackEndTime:(double)time;	// 0x38be41
// converted property setter: - (void)setIsPlaylistDynamic:(BOOL)dynamic;	// 0x38c005
// converted property setter: - (void)setIsPresentable:(BOOL)presentable;	// 0x38bf95
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x38bd25
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x38bce9
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x38bce5
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x38c015
// converted property setter: - (void)setPlaybackDate:(id)date;	// 0x38be49
// declared property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x38bf85
// converted property setter: - (void)setPlayerSpecificOptions:(id)options;	// 0x38c059
// converted property setter: - (void)setPlaylistEndAction:(int)action;	// 0x38bf69
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x38bff1
- (void)setReversePlaybackEndTime:(double)time;	// 0x38be45
// converted property setter: - (void)setSelectedAudioOption:(id)option;	// 0x38bfcd
- (void)setSelectedClosedCaptionsEnabled:(BOOL)enabled;	// 0x38bfb9
// converted property setter: - (void)setSelectedMedia:(id)media;	// 0x38bfe1
// converted property setter: - (void)setSelectedSubtitleOption:(id)option;	// 0x38bfb5
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x38bfe5
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x38bffd
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x38be51
// converted property setter: - (void)setStartPosition:(float)position;	// 0x38be19
// converted property setter: - (void)setStartTime:(double)time;	// 0x38be79
- (BOOL)setState:(int)state error:(id *)error;	// 0x38bded
// converted property setter: - (void)setStopTime:(double)time;	// 0x38be59
- (void)setTrackEnabled:(BOOL)enabled forTrackID:(int)trackID;	// 0x38bfd9
// converted property setter: - (void)setVirtualChapterMark:(double)mark;	// 0x38be9d
// converted property setter: - (void)setVolume:(float)volume;	// 0x38c021
// converted property getter: - (BOOL)shufflePlayback;	// 0x38bfe9
// converted property getter: - (BOOL)skipExplicit;	// 0x38c001
- (id)startDate;	// 0x38be55
// converted property getter: - (float)startPosition;	// 0x38be1d
// converted property getter: - (double)startTime;	// 0x38be81
// converted property getter: - (double)stopTime;	// 0x38be61
- (BOOL)stopsActiveAudioPlayer;	// 0x38bcdd
- (id)subtitleOptions;	// 0x38bfb1
- (BOOL)supportsBufferedRange;	// 0x38befd
- (BOOL)supportsMultipleTrickSpeeds;	// 0x38bdf5
- (BOOL)supportsRepeatModes;	// 0x38bff9
- (BOOL)supportsShufflePlayback;	// 0x38bfed
- (BOOL)supportsTrickPlay;	// 0x38bdf9
- (BOOL)supportsVolumeControl;	// 0x38c01d
- (int)swapState:(int)state;	// 0x38c1d1
- (id)trackList;	// 0x38bd41
// converted property getter: - (double)virtualChapterMark;	// 0x38bea1
- (id)visuals;	// 0x38bfa1
// converted property getter: - (float)volume;	// 0x38c025
@end

