/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVController : NSObject {
@private
	AVControllerPrivate *_priv;	// 4 = 0x4
}
@property(assign) double currentTime;	// G=0x315a7d89; S=0x315bd001; converted property
@property(assign) id delegate;	// G=0x315bb231; S=0x315a7835; converted property
@property(assign) BOOL muted;	// G=0x315bcee9; S=0x315bce49; converted property
@property(retain) id outputQTESFilePath;	// G=0x315ac399; S=0x315bcdb9; converted property
@property(retain) id queue;	// G=0x315bb1a5; S=0x315a4ed9; converted property
@property(retain) id queueFeeder;	// G=0x315bb1b9; S=0x315af9d9; converted property
@property(assign) BOOL shouldDisplayClosedCaptions;	// G=0x315bb21d; S=0x315a792d; converted property
@property(assign) BOOL vibrationEnabled;	// G=0x315bb049; S=0x315bb061; converted property
@property(retain) id vibrationPattern;	// G=0x315bb139; S=0x315bb0b9; converted property
@property(assign) OpaqueFigVisualContext *visualContext;	// G=0x315bb1f5; S=0x315bcde9; converted property
@property(assign) float volume;	// G=0x315a77d1; S=0x315afdad; converted property
+ (id)avController;	// 0x315bb381
+ (id)avControllerWithQueue:(id)queue error:(id *)error;	// 0x315bb341
+ (id)compatibleAudioRouteForRoute:(id)route;	// 0x315bb46d
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inDictionaries:(id)dictionaries;	// 0x315bb245
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x315aeb55
+ (BOOL)isSupportedFileExtension:(id)extension;	// 0x315bb3bd
+ (BOOL)isSupportedMimeType:(id)type;	// 0x315bb415
+ (void)setEnableNetworkMode:(BOOL)mode;	// 0x315afe31
- (id)init;	// 0x315a48d9
- (id)initForStreaming;	// 0x315bdb89
- (id)initWithError:(id *)error;	// 0x315a4d21
- (id)initWithQueue:(id)queue error:(id *)error;	// 0x315a48ed
- (id)initWithQueue:(id)queue fmpType:(unsigned)type error:(id *)error;	// 0x315a4921
- (id)_figPlayerNotifications;	// 0x315bc1f1
- (BOOL)activate:(id *)activate;	// 0x315bd07d
- (id)addNextFeederItemToQueue;	// 0x315a80a1
- (void)applyDesiredRepeatMode;	// 0x315bc43d
- (id)attributeForKey:(id)key;	// 0x315a6fc5
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)notification;	// 0x315a569d
- (BOOL)beginInterruption:(id *)interruption;	// 0x315bd1b5
- (BOOL)beginRepeatGap;	// 0x315b0269
- (id)bookmarkGroupIDForAVItem:(id)avitem;	// 0x315a9d05
- (double)bookmarkTimeForAVItem:(id)avitem;	// 0x315a9d29
- (BOOL)canBeginInterruption;	// 0x315bd141
- (void)cancelAllCGImageRequests;	// 0x315bca95
- (void)cancelContinueAfterRepeatGap;	// 0x315abb0d
- (void)checkQueueSpace;	// 0x315a7ff9
- (void)continueAfterRepeatGap;	// 0x315bd455
- (long)copyImageForTime:(CVBufferRef *)time time:(const XXStruct_pwHToB *)time2;	// 0x315bb19d
- (OpaqueFigPlaybackItem *)createItemWithURL:(id)url flags:(unsigned long)flags error:(int *)error;	// 0x315ac23d
- (OpaqueFigPlaybackItem *)currentFPItem;	// 0x315a7e31
- (id)currentItem;	// 0x315a7e51
- (void)currentItemHasChanged:(id)changed;	// 0x315aa4f1
- (void)currentItemWillChangeToItem:(id)currentItem oldItemCurrentTime:(double)time;	// 0x315aa085
// converted property getter: - (double)currentTime;	// 0x315a7d89
- (void)dealloc;	// 0x315b5cd1
// converted property getter: - (id)delegate;	// 0x315bb231
- (void)dequeueDeadItem;	// 0x315bbd89
- (void)dequeueFirstItem;	// 0x315aeef1
- (void)endInterruptionWithStatus:(id)status;	// 0x315bd025
- (void)ensurePlaybackQueueImmed;	// 0x315bbea1
- (int)eqPreset;	// 0x315bb1e1
- (id)errorWithDescription:(id)description code:(long)code;	// 0x315bd279
- (void)feederInvalidatedWithCurrentItemMoved:(id)currentItemMoved;	// 0x315bd469
- (void)feederRangeWasInserted:(id)inserted;	// 0x315bd8d1
- (void)feederRangeWasRemoved:(id)removed;	// 0x315bd625
- (void)figPlayerNotificationHandler:(id)handler;	// 0x315bb571
- (void)fmpEffectiveVolumeDidChange;	// 0x315bc979
- (void)fpItemNotification:(id)notification sender:(id)sender;	// 0x315aa959
- (CGImageRef)grabCGImageAtTime:(double)time withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions actualTime:(double *)time4;	// 0x315b57f9
- (BOOL)havePlayedCurrentItem;	// 0x315bb1cd
- (unsigned)indexOfCurrentQueueFeederItem;	// 0x315aec55
- (BOOL)isCurrentItemReady;	// 0x315bbec1
- (BOOL)isNewImageAvailableForTime:(const XXStruct_pwHToB *)time willNeverBeAvailable:(BOOL *)available;	// 0x315bb199
- (BOOL)isValid;	// 0x315bc34d
- (void)itemHasFinishedPlayingNotification:(id)notification;	// 0x315b01bd
- (id)lkLayer;	// 0x315bb209
- (void)logPerformanceDataForCurrentItem;	// 0x315bc079
- (void)makeCurrentItemReady;	// 0x315abb4d
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x315af999
// converted property getter: - (BOOL)muted;	// 0x315bcee9
- (BOOL)okToNotifyFromThisThread;	// 0x315aa3b9
// converted property getter: - (id)outputQTESFilePath;	// 0x315ac399
- (void)pause;	// 0x315aec41
- (BOOL)play:(id *)play;	// 0x315bd439
- (BOOL)playNextItem:(id *)item;	// 0x315aee81
- (AVControllerPrivate *)privateStorage;	// 0x315bb189
// converted property getter: - (id)queue;	// 0x315bb1a5
// converted property getter: - (id)queueFeeder;	// 0x315bb1b9
- (float)rate;	// 0x315aa651
- (void)rateDidChangeToRate:(float)rate;	// 0x315adb11
- (void)registerTimeMarkerObserver:(id)observer forItem:(id)item times:(id)times context:(id)context;	// 0x315bbf11
- (void)removeObserver:(id)observer fromTMOArray:(id)tmoarray;	// 0x315af645
- (int)repeatMode;	// 0x315af9c5
- (void)requestAsyncCGImagesAtTimes:(id)times requestIDs:(id)ids withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x315bcacd
- (void)requestAsyncCGImagesAtTimes:(id)times withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x315bcccd
- (BOOL)resumePlayback:(double)playback error:(id *)error;	// 0x315bd311
- (void)safeSubtitleCommandPosted:(void *)posted;	// 0x315bc3b5
- (void)scheduleQueueSpaceCheck;	// 0x315ab939
- (void)scheduleUpdateTimeMarkerObservations;	// 0x315aa6ad
- (void)seekToDate:(id)date;	// 0x315bcfb5
- (void)setAVItemClass:(Class)aClass;	// 0x315bb175
- (void)setApplyVideoTrackMatrix;	// 0x315bccf1
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x315a5955
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x315bd001
- (void)setCurrentTime:(double)time options:(int)options;	// 0x315afa91
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x315a7835
- (void)setEQPreset:(int)preset;	// 0x315a787d
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned)currentQueueFeederItem error:(id *)error;	// 0x315aecc1
- (void)setLayer:(id)layer;	// 0x315a7a31
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x315bce49
// converted property setter: - (void)setOutputQTESFilePath:(id)path;	// 0x315bcdb9
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x315bbdb9
// converted property setter: - (void)setQueue:(id)queue;	// 0x315a4ed9
// converted property setter: - (void)setQueueFeeder:(id)feeder;	// 0x315af9d9
- (void)setQueueFeeder:(id)feeder withIndex:(int)index;	// 0x315a7ad1
- (BOOL)setRate:(float)rate error:(id *)error;	// 0x315ab9c1
- (BOOL)setRepeatMode:(int)mode;	// 0x315a7aa1
// converted property setter: - (void)setShouldDisplayClosedCaptions:(BOOL)displayClosedCaptions;	// 0x315a792d
- (void)setSubtitleRecipient:(id)recipient;	// 0x315a78e9
// converted property setter: - (void)setVibrationEnabled:(BOOL)enabled;	// 0x315bb061
// converted property setter: - (void)setVibrationPattern:(id)pattern;	// 0x315bb0b9
// converted property setter: - (void)setVisualContext:(OpaqueFigVisualContext *)context;	// 0x315bcde9
// converted property setter: - (void)setVolume:(float)volume;	// 0x315afdad
- (BOOL)shouldBeginPlayingItem:(id)item error:(id *)error;	// 0x315ace69
// converted property getter: - (BOOL)shouldDisplayClosedCaptions;	// 0x315bb21d
- (void)stepByCount:(int)count;	// 0x315bcf85
- (void)unregisterTimeMarkerObserver:(id)observer forItem:(id)item;	// 0x315af4c1
- (long)updateActionAtEnd;	// 0x315a7941
- (void)updateTimeMarkerObservations;	// 0x315ad071
// converted property getter: - (BOOL)vibrationEnabled;	// 0x315bb049
// converted property getter: - (id)vibrationPattern;	// 0x315bb139
// converted property getter: - (OpaqueFigVisualContext *)visualContext;	// 0x315bb1f5
// converted property getter: - (float)volume;	// 0x315a77d1
@end

