/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library
#import "BRTransportDataProvider.h"

@class NSMutableArray;
@protocol BRPlayerDelegate;

@interface BRMediaPlayer : NSObject <BRTransportDataProvider> {
@private
	NSMutableArray *_stateStack;	// 4 = 0x4
	id<BRPlayerDelegate> _playerDelegate;	// 8 = 0x8
}
@property(assign) long chapterGroupIndex;	// G=0x3311e9e1; S=0x3311e9dd; converted property
@property(assign) long currentChapterIndex;	// G=0x3311e9c9; S=0x3311e9c5; converted property
@property(assign) BOOL disablePlatformFilters;	// G=0x3311ea25; S=0x3311ea21; converted property
@property(assign) double elapsedTime;	// G=0x3311e945; S=0x3311e941; converted property
@property(assign) BOOL isPlaylistDynamic;	// G=0x3311eb0d; S=0x3311eb09; converted property
@property(assign) BOOL muted;	// G=0x3311eb1d; S=0x3311eb19; converted property
@property(retain) id playbackDate;	// G=0x3311e965; S=0x3311e961; converted property
@property(retain, nonatomic) id<BRPlayerDelegate> playerDelegate;	// G=0x3311ea79; S=0x3311ea89; @synthesize=_playerDelegate
@property(retain) id playerSpecificOptions;	// G=0x3311eb61; S=0x3311eb5d; converted property
@property(assign) int playlistEndAction;	// G=0x3311ea71; S=0x3311ea6d; converted property
@property(assign) int repeatMode;	// G=0x3311eaf9; S=0x3311eaf5; converted property
@property(retain) id selectedAudioOption;	// G=0x3311ead5; S=0x3311ead1; converted property
@property(retain) id selectedMedia;	// G=0x3311eae1; S=0x3311eae5; converted property
@property(retain) id selectedSubtitleOption;	// G=0x3311eac9; S=0x3311eac5; converted property
@property(assign) BOOL shufflePlayback;	// G=0x3311eaed; S=0x3311eae9; converted property
@property(assign) BOOL skipExplicit;	// G=0x3311eb05; S=0x3311eb01; converted property
@property(assign) double startTime;	// G=0x3311e98d; S=0x3311e989; converted property
@property(assign) double stopTime;	// G=0x3311e975; S=0x3311e971; converted property
@property(assign) double virtualChapterMark;	// G=0x3311e9a9; S=0x3311e9a5; converted property
@property(assign) float volume;	// G=0x3311eb29; S=0x3311eb25; converted property
+ (BOOL)allowMultiplePlayers;	// 0x3311e6b5
+ (id)contentTypes;	// 0x3311e6b1
+ (BOOL)handlesVideoForType:(id)type;	// 0x3311e6b9
- (id)init;	// 0x3311e6bd
- (void)_checkPlayerMedia:(id)media;	// 0x3311ee59
- (void)_invalidateAsset:(id)asset;	// 0x3311edf5
- (void)appendMediaList:(id)list;	// 0x3311e855
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x3311e859
- (BOOL)attemptAuthorizationWithError:(id *)error;	// 0x3311ea29
- (id)audioOptions;	// 0x3311eacd
- (BRTimeRange)bufferedRange;	// 0x3311ea05
- (float)bufferingProgress;	// 0x3311ea15
- (id)chapterAtIndex:(long)index;	// 0x3311e9fd
- (long)chapterCount;	// 0x3311e9f9
- (id)chapterGroupAtIndex:(long)index;	// 0x3311e9e5
- (long)chapterGroupCount;	// 0x3311e9d9
// converted property getter: - (long)chapterGroupIndex;	// 0x3311e9e1
- (long)chapterIndexForTime:(double)time;	// 0x3311e9cd
- (BOOL)chapterIsPlayable:(long)playable;	// 0x3311e9d1
- (id)chapters;	// 0x3311e9f5
- (void)clearStack;	// 0x3311edc1
- (id)collection;	// 0x3311e85d
- (BOOL)cueMediaWithError:(id *)error;	// 0x3311e8b9
// converted property getter: - (long)currentChapterIndex;	// 0x3311e9c9
- (long)currentInterstitialIndex;	// 0x3311e9ed
- (id)currentVideoFrame;	// 0x3311eab5
- (void)dealloc;	// 0x3311e779
- (id)debugStringForState:(int)state;	// 0x3311eb65
// converted property getter: - (BOOL)disablePlatformFilters;	// 0x3311ea25
- (double)duration;	// 0x3311e92d
// converted property getter: - (double)elapsedTime;	// 0x3311e945
- (void)handleFailedURLResponse:(id)response requester:(id)requester;	// 0x3311edf1
- (BOOL)hasRealChapters;	// 0x3311e9d5
- (id)interstitialTimes;	// 0x3311e9e9
// converted property getter: - (BOOL)isPlaylistDynamic;	// 0x3311eb0d
- (BOOL)isTrackEnabled:(int)enabled;	// 0x3311ead9
- (double)keyframeTimeNearTime:(double)time searchForwards:(BOOL)forwards;	// 0x3311eab9
- (id)media;	// 0x3311e861
- (int)mediaCount;	// 0x3311e869
- (long)mediaIndex;	// 0x3311e8b5
// converted property getter: - (BOOL)muted;	// 0x3311eb1d
- (void)nextChapter;	// 0x3311e9bd
- (void)nextMedia;	// 0x3311eb15
- (int)peekState;	// 0x3311ed09
// converted property getter: - (id)playbackDate;	// 0x3311e965
- (id)playbackInfo;	// 0x3311ea1d
// declared property getter: - (id)playerDelegate;	// 0x3311ea79
// converted property getter: - (id)playerSpecificOptions;	// 0x3311eb61
- (int)playerState;	// 0x3311e921
- (BOOL)playingVisualContent;	// 0x3311eaad
// converted property getter: - (int)playlistEndAction;	// 0x3311ea71
- (int)popState;	// 0x3311ed41
- (void)previousChapter;	// 0x3311e9c1
- (void)previousMedia;	// 0x3311eb11
- (void)pushState:(int)state;	// 0x3311ec49
- (id)qualityOfServiceInfo;	// 0x3311ea75
// converted property getter: - (int)repeatMode;	// 0x3311eaf9
- (void)resetToBeginning;	// 0x3311e9a1
- (BOOL)reverseTouchSwipeBehavior;	// 0x3311e80d
// converted property getter: - (id)selectedAudioOption;	// 0x3311ead5
// converted property getter: - (id)selectedMedia;	// 0x3311eae1
// converted property getter: - (id)selectedSubtitleOption;	// 0x3311eac9
// converted property setter: - (void)setChapterGroupIndex:(long)index;	// 0x3311e9dd
// converted property setter: - (void)setCurrentChapterIndex:(long)index;	// 0x3311e9c5
// converted property setter: - (void)setDisablePlatformFilters:(BOOL)filters;	// 0x3311ea21
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x3311e941
- (void)setFailedURLDelegate:(id)delegate;	// 0x3311eded
- (void)setForwardPlaybackEndTime:(double)time;	// 0x3311e959
// converted property setter: - (void)setIsPlaylistDynamic:(BOOL)dynamic;	// 0x3311eb09
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x3311e851
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x3311e815
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x3311e811
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x3311eb19
// converted property setter: - (void)setPlaybackDate:(id)date;	// 0x3311e961
// declared property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x3311ea89
// converted property setter: - (void)setPlayerSpecificOptions:(id)options;	// 0x3311eb5d
// converted property setter: - (void)setPlaylistEndAction:(int)action;	// 0x3311ea6d
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x3311eaf5
- (void)setReversePlaybackEndTime:(double)time;	// 0x3311e95d
// converted property setter: - (void)setSelectedAudioOption:(id)option;	// 0x3311ead1
// converted property setter: - (void)setSelectedMedia:(id)media;	// 0x3311eae5
// converted property setter: - (void)setSelectedSubtitleOption:(id)option;	// 0x3311eac5
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x3311eae9
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x3311eb01
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x3311e969
// converted property setter: - (void)setStartTime:(double)time;	// 0x3311e989
- (BOOL)setState:(int)state error:(id *)error;	// 0x3311e91d
// converted property setter: - (void)setStopTime:(double)time;	// 0x3311e971
- (void)setTrackEnabled:(BOOL)enabled forTrackID:(int)trackID;	// 0x3311eadd
// converted property setter: - (void)setVirtualChapterMark:(double)mark;	// 0x3311e9a5
// converted property setter: - (void)setVolume:(float)volume;	// 0x3311eb25
// converted property getter: - (BOOL)shufflePlayback;	// 0x3311eaed
// converted property getter: - (BOOL)skipExplicit;	// 0x3311eb05
- (id)startDate;	// 0x3311e96d
// converted property getter: - (double)startTime;	// 0x3311e98d
// converted property getter: - (double)stopTime;	// 0x3311e975
- (BOOL)stopsActiveAudioPlayer;	// 0x3311e809
- (id)subtitleOptions;	// 0x3311eac1
- (BOOL)supportsBufferedRange;	// 0x3311ea01
- (BOOL)supportsMultipleTrickSpeeds;	// 0x3311e925
- (BOOL)supportsRepeatModes;	// 0x3311eafd
- (BOOL)supportsShufflePlayback;	// 0x3311eaf1
- (BOOL)supportsTrickPlay;	// 0x3311e929
- (BOOL)supportsVolumeControl;	// 0x3311eb21
- (int)swapState:(int)state;	// 0x3311ecd5
- (id)trackList;	// 0x3311e865
// converted property getter: - (double)virtualChapterMark;	// 0x3311e9a9
- (id)visuals;	// 0x3311eab1
// converted property getter: - (float)volume;	// 0x3311eb29
@end

