/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MPMediaPlayback.h"
#import "MPMovieViewDelegate.h"
#import "MediaPlayer-Structs.h"

@class MPMovieAccessLog, MPMovieErrorLog, MPAVController, NSMutableArray, MPVideoViewController, NSMutableSet, MPMoviePlayerController, NSError, NSMutableDictionary, MPMovieView, NSArray;

@interface MPMoviePlayerControllerNew : NSObject <MPMovieViewDelegate, MPMediaPlayback> {
@private
	MPAVController *_player;	// 4 = 0x4
	MPMoviePlayerController *_moviePlayer;	// 8 = 0x8
	MPVideoViewController *_videoViewController;	// 12 = 0xc
	MPMovieView *_movieView;	// 16 = 0x10
	NSArray *_movies;	// 20 = 0x14
	NSMutableArray *_queuedThumbnailRequests;	// 24 = 0x18
	NSMutableSet *_asyncImageGenerators;	// 28 = 0x1c
	float _currentPlaybackRate;	// 32 = 0x20
	unsigned _stateBeforeSettingPlaybackTime;	// 36 = 0x24
	int _movieSourceType;	// 40 = 0x28
	int _controlStyle;	// 44 = 0x2c
	int _repeatMode;	// 48 = 0x30
	BOOL _shouldAutoplay;	// 52 = 0x34
	BOOL _useApplicationAudioSession;	// 53 = 0x35
	BOOL _setUseApplicationAudioSessionWhenPlaybackEnds;	// 54 = 0x36
	BOOL _preparedQueue;	// 55 = 0x37
	BOOL _didAppear;	// 56 = 0x38
	BOOL _ignorePlaybackStateChanges;	// 57 = 0x39
	BOOL _playWhenSourceTypeIsDetermined;	// 58 = 0x3a
	BOOL _prepareWhenSourceTypeIsDetermined;	// 59 = 0x3b
	BOOL _isChangingMoviePath;	// 60 = 0x3c
	BOOL _wasPlayingBeforeSuspended;	// 61 = 0x3d
	BOOL _canPostDidFinishNotificationOnItemChange;	// 62 = 0x3e
	BOOL _didPostDidFinishNotification;	// 63 = 0x3f
	BOOL _shouldRestartPlaybackFromBeginning;	// 64 = 0x40
	NSError *_playbackError;	// 68 = 0x44
	double _initialPlaybackTime;	// 72 = 0x48
	double _endPlaybackTime;	// 80 = 0x50
	NSMutableDictionary *_timedMetadataForUniqueKey;	// 88 = 0x58
	BOOL _isActive;	// 92 = 0x5c
	BOOL _isResigningActive;	// 93 = 0x5d
	BOOL _didResignActive;	// 94 = 0x5e
	BOOL _canShowControlsOverlayBeforeResignedActive;	// 95 = 0x5f
	double _timeWhenResignedActive;	// 96 = 0x60
	unsigned _movieIndexWhenResignedActive;	// 104 = 0x68
	MPMovieAccessLog *_cachedAccessLog;	// 108 = 0x6c
	MPMovieErrorLog *_cachedErrorLog;	// 112 = 0x70
}
@property(assign) BOOL allowsAirPlay;	// G=0x33bab0a9; S=0x33bab07d; converted property
@property(retain) id contentURL;	// G=0x33baaa4d; S=0x33baaaa5; converted property
@property(assign) int controlStyle;	// G=0x33baaef1; S=0x33baaded; converted property
@property(assign, nonatomic) float currentPlaybackRate;	// G=0x33bab53d; S=0x33bab4f1; 
@property(assign, nonatomic) double currentPlaybackTime;	// G=0x33bab4a5; S=0x33bab3c9; 
@property(assign) double endPlaybackTime;	// G=0x33babac1; S=0x33baba49; converted property
@property(assign, getter=isFullscreen) BOOL fullscreen;	// G=0x33bab105; S=0x33baaffd; converted property
@property(assign) double initialPlaybackTime;	// G=0x33bab9dd; S=0x33bab965; converted property
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;	// G=0x33bab12d; 
@property(assign) int movieSourceType;	// G=0x33bab819; S=0x33bab77d; converted property
@property(assign) int repeatMode;	// G=0x33baaf11; S=0x33baaf01; converted property
@property(assign) int scalingMode;	// G=0x33baadc1; S=0x33baad71; converted property
@property(assign) BOOL shouldAutoplay;	// G=0x33baaf71; S=0x33baaf21; converted property
- (id)init;	// 0x33baa38d
- (BOOL)_areControlsHidden;	// 0x33bad65d
- (void)_bufferingStateDidChangeNotification:(id)_bufferingState;	// 0x33bac5cd
- (void)_cacheAccessAndErrorLogs;	// 0x33badb75
- (BOOL)_canContinuePlayingWhenLocked;	// 0x33bae5ad
- (void)_clearPlaybackStateAfterTimeJumpIfNecessary;	// 0x33bae3e9
- (void)_didBecomeActiveNotification:(id)notification;	// 0x33bad469
- (void)_ensureActive;	// 0x33badf51
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x33bac1c1
- (void)_itemDidChangeNotification:(id)_item;	// 0x33bac205
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x33bac3d1
- (void)_itemPlaybackErrorNotification:(id)notification;	// 0x33bac54d
- (void)_itemReadyToPlayNotification:(id)playNotification;	// 0x33bac351
- (void)_movieDurationAvailableNotification:(id)notification;	// 0x33bad2fd
- (void)_movieNaturalSizeAvailableNotification:(id)notification;	// 0x33bad399
- (void)_moviePlayerDidBecomeActiveNotification:(id)_moviePlayer;	// 0x33baced1
- (void)_moviePlayerWillBecomeActiveNotification:(id)_moviePlayer;	// 0x33bacb6d
- (void)_movieSourceTypeAvailableNotification:(id)notification;	// 0x33bad1d9
- (id)_movieSubtitle;	// 0x33bad691
- (id)_movieTitle;	// 0x33bad705
- (void)_movieTypeAvailableNotification:(id)notification;	// 0x33bad0fd
- (id)_movies;	// 0x33bade75
- (id)_navigationBar;	// 0x33bad779
- (id)_nowPlayingMovie;	// 0x33baded5
- (void)_pausePlaybackForSuspension;	// 0x33bae351
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x33bac699
- (void)_postDidFinishNotificationWithUserInfo:(id)_post;	// 0x33bae4dd
- (void)_postNotificationName:(id)name object:(id)object;	// 0x33bae44d
- (void)_postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x33bae471
- (void)_prepareToPlayWithStartIndex:(unsigned)startIndex;	// 0x33bae03d
- (void)_resignActive;	// 0x33badfe1
- (void)_restartPlaybackFromBeginning;	// 0x33bae539
- (void)_setControlsHidden:(BOOL)hidden;	// 0x33bad821
- (void)_setControlsHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x33bad7b1
- (void)_setMovieMediaTypesOverride:(int)override;	// 0x33bad835
- (void)_setMoviePlayer:(id)player;	// 0x33badf41
- (void)_setMovieSubtitle:(id)subtitle;	// 0x33bad6c9
- (void)_setMovieTitle:(id)title;	// 0x33bad73d
- (void)_setMovies:(id)movies;	// 0x33badc8d
- (void)_setNowPlayingMovie:(id)movie;	// 0x33bade85
- (void)_setShouldEnforceHDCP:(BOOL)_set;	// 0x33bad871
- (void)_setUseApplicationAudioSession:(BOOL)session;	// 0x33bae311
- (BOOL)_shouldContinuePlaybackInBackground;	// 0x33bad891
- (BOOL)_shouldEnforceHDCP;	// 0x33bad8e9
- (void)_simpleRemoteNotification:(id)notification;	// 0x33bad591
- (void)_timeDidJumpNotification:(id)_time;	// 0x33baca4d
- (void)_timedMetadataAvailableNotification:(id)notification;	// 0x33bac789
- (void)_timedMetadataImageAvailableNotification:(id)notification;	// 0x33baca11
- (id)_videoView;	// 0x33bad90d
- (id)_videoViewController;	// 0x33bad935
- (void)_videoViewPathWillChangeNotification:(id)_videoViewPath;	// 0x33bacaf9
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x33baca79
- (void)_willResignActiveNotification:(id)notification;	// 0x33bad435
- (void)_willTerminateNotification:(id)notification;	// 0x33bad4bd
- (void)_windowOrientationChangingNotification:(id)notification;	// 0x33bad4cd
- (id)accessLog;	// 0x33baf055
// converted property getter: - (BOOL)allowsAirPlay;	// 0x33bab0a9
- (id)backgroundView;	// 0x33baacb9
- (void)beginSeekingBackward;	// 0x33bab5d1
- (void)beginSeekingForward;	// 0x33bab585
- (void)cancelAllThumbnailImageRequests;	// 0x33baefcd
// converted property getter: - (id)contentURL;	// 0x33baaa4d
// converted property getter: - (int)controlStyle;	// 0x33baaef1
// declared property getter: - (float)currentPlaybackRate;	// 0x33bab53d
// declared property getter: - (double)currentPlaybackTime;	// 0x33bab4a5
- (void)dealloc;	// 0x33baa8b1
- (double)duration;	// 0x33bab829
// converted property getter: - (double)endPlaybackTime;	// 0x33babac1
- (void)endSeeking;	// 0x33bab621
- (id)errorLog;	// 0x33baf109
// converted property getter: - (double)initialPlaybackTime;	// 0x33bab9dd
- (BOOL)isAirPlayVideoActive;	// 0x33bab0d1
// converted property getter: - (BOOL)isFullscreen;	// 0x33bab105
// declared property getter: - (BOOL)isPreparedToPlay;	// 0x33bab12d
- (int)loadState;	// 0x33baad31
- (int)movieMediaTypes;	// 0x33bab725
// converted property getter: - (int)movieSourceType;	// 0x33bab819
- (void)movieView:(id)view willMoveToWindow:(id)window;	// 0x33babb2d
- (void)movieViewDidMoveToWindow:(id)movieView;	// 0x33babbb5
- (CGSize)naturalSize;	// 0x33bab8f1
- (void)pause;	// 0x33bab289
- (void)play;	// 0x33bab1dd
- (double)playableDuration;	// 0x33bab88d
- (int)playbackState;	// 0x33baacf1
- (void)prepareToPlay;	// 0x33bab18d
// converted property getter: - (int)repeatMode;	// 0x33baaf11
- (void)requestThumbnailImagesAtTimes:(id)times timeOption:(int)option;	// 0x33bae8d1
// converted property getter: - (int)scalingMode;	// 0x33baadc1
// converted property setter: - (void)setAllowsAirPlay:(BOOL)play;	// 0x33bab07d
- (void)setBackgroundColor:(id)color;	// 0x33badb2d
// converted property setter: - (void)setContentURL:(id)url;	// 0x33baaaa5
// converted property setter: - (void)setControlStyle:(int)style;	// 0x33baaded
// declared property setter: - (void)setCurrentPlaybackRate:(float)rate;	// 0x33bab4f1
// declared property setter: - (void)setCurrentPlaybackTime:(double)time;	// 0x33bab3c9
// converted property setter: - (void)setEndPlaybackTime:(double)time;	// 0x33baba49
// converted property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x33baaffd
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x33bab011
// converted property setter: - (void)setInitialPlaybackTime:(double)time;	// 0x33bab965
- (void)setMovieControlMode:(int)mode;	// 0x33badb59
// converted property setter: - (void)setMovieSourceType:(int)type;	// 0x33bab77d
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x33baaf01
// converted property setter: - (void)setScalingMode:(int)mode;	// 0x33baad71
// converted property setter: - (void)setShouldAutoplay:(BOOL)autoplay;	// 0x33baaf21
- (void)setUseApplicationAudioSession:(BOOL)session;	// 0x33baaf81
// converted property getter: - (BOOL)shouldAutoplay;	// 0x33baaf71
- (void)skipToBeginning;	// 0x33bab69d
- (void)skipToNextItem;	// 0x33bab65d
- (void)skipToPreviousItem;	// 0x33bab6e5
- (void)stop;	// 0x33bab2e5
- (id)thumbnailImageAtTime:(double)time timeOption:(int)option;	// 0x33bae619
- (id)timedMetadata;	// 0x33baf015
- (id)timedMetadataForKey:(id)key;	// 0x33baf035
- (BOOL)videoController:(id)controller tappedButtonPart:(unsigned)part;	// 0x33bac115
- (void)videoControllerDidEnterFullscreen:(id)videoController;	// 0x33babde9
- (void)videoControllerDidExitFullscreen:(id)videoController;	// 0x33babf25
- (BOOL)videoControllerShouldAutohide:(id)videoController;	// 0x33babc95
- (void)videoControllerWillEnterFullscreen:(id)videoController;	// 0x33babcf5
- (void)videoControllerWillExitFullscreen:(id)videoController;	// 0x33babe31
- (id)view;	// 0x33baab45
- (void)viewControllerRequestsExit:(id)exit reason:(int)reason;	// 0x33babf6d
@end

