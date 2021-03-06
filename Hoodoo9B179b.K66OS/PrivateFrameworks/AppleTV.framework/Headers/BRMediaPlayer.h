/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTransportDataProvider.h"
#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableArray;
@protocol BRPlayerDelegate;

@interface BRMediaPlayer : NSObject <BRTransportDataProvider> {
@private
	NSMutableArray *_stateStack;	// 4 = 0x4
	id<BRPlayerDelegate> _playerDelegate;	// 8 = 0x8
}
@property(assign) long chapterGroupIndex;	// G=0x30344515; S=0x30344511; converted property
@property(assign) long currentChapterIndex;	// G=0x303444fd; S=0x303444f9; converted property
@property(assign) BOOL disablePlatformFilters;	// G=0x30344559; S=0x30344555; converted property
@property(assign) double elapsedTime;	// G=0x30344479; S=0x30344475; converted property
@property(assign) BOOL isPlaylistDynamic;	// G=0x30344645; S=0x30344641; converted property
@property(assign) BOOL muted;	// G=0x30344655; S=0x30344651; converted property
@property(retain) id playbackDate;	// G=0x30344499; S=0x30344495; converted property
@property(retain, nonatomic) id<BRPlayerDelegate> playerDelegate;	// G=0x303445ad; S=0x303445bd; @synthesize=_playerDelegate
@property(retain) id playerSpecificOptions;	// G=0x30344699; S=0x30344695; converted property
@property(assign) int playlistEndAction;	// G=0x303445a5; S=0x303445a1; converted property
@property(assign) int repeatMode;	// G=0x30344631; S=0x3034462d; converted property
@property(retain) id selectedAudioOption;	// G=0x3034460d; S=0x30344609; converted property
@property(retain) id selectedMedia;	// G=0x30344619; S=0x3034461d; converted property
@property(retain) id selectedSubtitleOption;	// G=0x30344601; S=0x303445f9; converted property
@property(assign) BOOL shufflePlayback;	// G=0x30344625; S=0x30344621; converted property
@property(assign) BOOL skipExplicit;	// G=0x3034463d; S=0x30344639; converted property
@property(assign) double startTime;	// G=0x303444c1; S=0x303444bd; converted property
@property(assign) double stopTime;	// G=0x303444a9; S=0x303444a5; converted property
@property(assign) double virtualChapterMark;	// G=0x303444dd; S=0x303444d9; converted property
@property(assign) float volume;	// G=0x30344661; S=0x3034465d; converted property
+ (BOOL)allowMultiplePlayers;	// 0x303441e9
+ (id)contentTypes;	// 0x303441e5
+ (BOOL)handlesVideoForType:(id)type;	// 0x303441ed
- (id)init;	// 0x303441f1
- (void)_checkPlayerMedia:(id)media;	// 0x30344991
- (void)_invalidateAsset:(id)asset;	// 0x3034492d
- (void)appendMediaList:(id)list;	// 0x30344389
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x3034438d
- (BOOL)attemptAuthorizationWithError:(id *)error;	// 0x3034455d
- (id)audioOptions;	// 0x30344605
- (BRTimeRange)bufferedRange;	// 0x30344539
- (float)bufferingProgress;	// 0x30344549
- (id)chapterAtIndex:(long)index;	// 0x30344531
- (long)chapterCount;	// 0x3034452d
- (id)chapterGroupAtIndex:(long)index;	// 0x30344519
- (long)chapterGroupCount;	// 0x3034450d
// converted property getter: - (long)chapterGroupIndex;	// 0x30344515
- (long)chapterIndexForTime:(double)time;	// 0x30344501
- (BOOL)chapterIsPlayable:(long)playable;	// 0x30344505
- (id)chapters;	// 0x30344529
- (void)clearStack;	// 0x303448f9
- (id)collection;	// 0x30344391
- (BOOL)cueMediaWithError:(id *)error;	// 0x303443ed
// converted property getter: - (long)currentChapterIndex;	// 0x303444fd
- (long)currentInterstitialIndex;	// 0x30344521
- (id)currentVideoFrame;	// 0x303445e9
- (void)dealloc;	// 0x303442ad
- (id)debugStringForState:(int)state;	// 0x3034469d
// converted property getter: - (BOOL)disablePlatformFilters;	// 0x30344559
- (double)duration;	// 0x30344461
// converted property getter: - (double)elapsedTime;	// 0x30344479
- (void)handleFailedURLResponse:(id)response requester:(id)requester;	// 0x30344929
- (BOOL)hasRealChapters;	// 0x30344509
- (id)interstitialTimes;	// 0x3034451d
// converted property getter: - (BOOL)isPlaylistDynamic;	// 0x30344645
- (BOOL)isTrackEnabled:(int)enabled;	// 0x30344611
- (double)keyframeTimeNearTime:(double)time searchForwards:(BOOL)forwards;	// 0x303445ed
- (id)media;	// 0x30344395
- (int)mediaCount;	// 0x3034439d
- (long)mediaIndex;	// 0x303443e9
// converted property getter: - (BOOL)muted;	// 0x30344655
- (void)nextChapter;	// 0x303444f1
- (void)nextMedia;	// 0x3034464d
- (int)peekState;	// 0x30344841
// converted property getter: - (id)playbackDate;	// 0x30344499
- (id)playbackInfo;	// 0x30344551
// declared property getter: - (id)playerDelegate;	// 0x303445ad
// converted property getter: - (id)playerSpecificOptions;	// 0x30344699
- (int)playerState;	// 0x30344455
- (BOOL)playingVisualContent;	// 0x303445e1
// converted property getter: - (int)playlistEndAction;	// 0x303445a5
- (int)popState;	// 0x30344879
- (void)previousChapter;	// 0x303444f5
- (void)previousMedia;	// 0x30344649
- (void)pushState:(int)state;	// 0x30344781
- (id)qualityOfServiceInfo;	// 0x303445a9
// converted property getter: - (int)repeatMode;	// 0x30344631
- (void)resetToBeginning;	// 0x303444d5
- (BOOL)reverseTouchSwipeBehavior;	// 0x30344341
// converted property getter: - (id)selectedAudioOption;	// 0x3034460d
// converted property getter: - (id)selectedMedia;	// 0x30344619
// converted property getter: - (id)selectedSubtitleOption;	// 0x30344601
// converted property setter: - (void)setChapterGroupIndex:(long)index;	// 0x30344511
// converted property setter: - (void)setCurrentChapterIndex:(long)index;	// 0x303444f9
// converted property setter: - (void)setDisablePlatformFilters:(BOOL)filters;	// 0x30344555
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x30344475
- (void)setFailedURLDelegate:(id)delegate;	// 0x30344925
- (void)setForcedSubtitleOption;	// 0x303445fd
- (void)setForwardPlaybackEndTime:(double)time;	// 0x3034448d
// converted property setter: - (void)setIsPlaylistDynamic:(BOOL)dynamic;	// 0x30344641
- (void)setMediaAsCurrentlyPlayingAppendingTrackList:(id)list;	// 0x30344385
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x30344349
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x30344345
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x30344651
// converted property setter: - (void)setPlaybackDate:(id)date;	// 0x30344495
// declared property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x303445bd
// converted property setter: - (void)setPlayerSpecificOptions:(id)options;	// 0x30344695
// converted property setter: - (void)setPlaylistEndAction:(int)action;	// 0x303445a1
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x3034462d
- (void)setReversePlaybackEndTime:(double)time;	// 0x30344491
// converted property setter: - (void)setSelectedAudioOption:(id)option;	// 0x30344609
// converted property setter: - (void)setSelectedMedia:(id)media;	// 0x3034461d
// converted property setter: - (void)setSelectedSubtitleOption:(id)option;	// 0x303445f9
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x30344621
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x30344639
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x3034449d
// converted property setter: - (void)setStartTime:(double)time;	// 0x303444bd
- (BOOL)setState:(int)state error:(id *)error;	// 0x30344451
// converted property setter: - (void)setStopTime:(double)time;	// 0x303444a5
- (void)setTrackEnabled:(BOOL)enabled forTrackID:(int)trackID;	// 0x30344615
// converted property setter: - (void)setVirtualChapterMark:(double)mark;	// 0x303444d9
// converted property setter: - (void)setVolume:(float)volume;	// 0x3034465d
// converted property getter: - (BOOL)shufflePlayback;	// 0x30344625
// converted property getter: - (BOOL)skipExplicit;	// 0x3034463d
- (id)startDate;	// 0x303444a1
// converted property getter: - (double)startTime;	// 0x303444c1
// converted property getter: - (double)stopTime;	// 0x303444a9
- (BOOL)stopsActiveAudioPlayer;	// 0x3034433d
- (id)subtitleOptions;	// 0x303445f5
- (BOOL)supportsBufferedRange;	// 0x30344535
- (BOOL)supportsMultipleTrickSpeeds;	// 0x30344459
- (BOOL)supportsRepeatModes;	// 0x30344635
- (BOOL)supportsShufflePlayback;	// 0x30344629
- (BOOL)supportsTrickPlay;	// 0x3034445d
- (BOOL)supportsVolumeControl;	// 0x30344659
- (int)swapState:(int)state;	// 0x3034480d
- (id)trackList;	// 0x30344399
// converted property getter: - (double)virtualChapterMark;	// 0x303444dd
- (id)visuals;	// 0x303445e5
// converted property getter: - (float)volume;	// 0x30344661
@end

