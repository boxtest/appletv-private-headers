/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "NSCopying.h"

@class NSArray, NSString, NSError, AVPlayerItemInternal, NSDate;

@interface AVPlayerItem : NSObject <NSCopying> {
	AVPlayerItemInternal *_playerItem;	// 4 = 0x4
}
@property(assign, nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;	// G=0x3266eca9; S=0x3266ed5d; 
@property(readonly, assign, nonatomic, getter=_isRental) BOOL _rental;	// G=0x3266ee11; 
@property(readonly, assign, nonatomic) NSDate *_rentalExpirationDate;	// G=0x3266ef25; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackExpirationDate;	// G=0x3266f0dd; 
@property(readonly, assign, nonatomic, getter=_isRentalPlaybackStarted) BOOL _rentalPlaybackStarted;	// G=0x3266efc9; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackStartedDate;	// G=0x3266f039; 
@property(readonly, assign, nonatomic) NSDate *_rentalStartDate;	// G=0x3266ee81; 
@property(assign) BOOL alwaysMonitorsPlayability;	// G=0x3266a459; S=0x3266a605; converted property
@property(readonly, assign, nonatomic, getter=isApplicationAuthorizedForPlayback) BOOL applicationAuthorizedForPlayback;	// G=0x3266e9c9; 
@property(retain) id audioMix;	// G=0x3266b365; S=0x3266b5b9; converted property
@property(readonly, assign, nonatomic, getter=isAuthorizationRequiredForPlayback) BOOL authorizationRequiredForPlayback;	// G=0x3266e9ad; 
@property(assign) double bufferingTargetMaximum;	// G=0x3266a071; S=0x3266a205; converted property
@property(assign) double bufferingTargetMinimum;	// G=0x3266a229; S=0x3266a3bd; converted property
@property(readonly, assign, nonatomic) BOOL canDisplayExternalSubtitles;	// G=0x3266fd7d; 
@property(readonly, assign, nonatomic, getter=isContentAuthorizedForPlayback) BOOL contentAuthorizedForPlayback;	// G=0x3266ea21; 
@property(assign) BOOL continuesPlayingDuringPrerollForRateChange;	// G=0x3266b0e1; S=0x3266b28d; converted property
@property(assign) BOOL continuesPlayingDuringPrerollForSeek;	// G=0x3266adc9; S=0x3266af75; converted property
@property(copy, nonatomic) NSString *dataYouTubeID;	// G=0x3266fd39; S=0x3266fca1; 
@property(assign, nonatomic) BOOL displaysExternalSubtitles;	// G=0x3266fe95; S=0x3266fe11; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x32666a11; 
@property(assign) XXStruct_pwHToB forwardPlaybackEndTime;	// G=0x32669551; S=0x3266972d; converted property
@property(retain) id gaplessInfo;	// G=0x3266cd75; S=0x3266d131; converted property
@property(retain) id initialDate;	// G=0x32669209; S=0x3266924d; converted property
@property(retain) id initialEstimatedDate;	// G=0x3266932d; S=0x32669371; converted property
@property(assign) BOOL limitReadAhead;	// G=0x32669dd9; S=0x32669f81; converted property
@property(assign, getter=isNonForcedSubtitleDisplayEnabled) BOOL nonForcedSubtitleDisplayEnabled;	// G=0x3266e209; S=0x3266e229; converted property
@property(readonly, assign, nonatomic) NSArray *outputs;	// G=0x32670631; 
@property(assign) int playbackLikelyToKeepUpTrigger;	// G=0x3266a79d; S=0x3266a945; converted property
@property(assign) XXStruct_pwHToB reversePlaybackEndTime;	// G=0x32669949; S=0x32669b25; converted property
@property(assign) BOOL seekingWaitsForVideoCompositionRendering;	// G=0x3266bcad; S=0x3266bd4d; converted property
@property(assign) float soundCheckVolumeNormalization;	// G=0x3266d319; S=0x3266d279; converted property
@property(readonly, assign, nonatomic) int status;	// G=0x326669f1; 
@property(retain) id textStyleRules;	// G=0x3266bddd; S=0x3266bea5; converted property
@property(retain) id variableSpeedAudioProcessor;	// G=0x3266c031; S=0x3266c125; converted property
@property(retain) id videoComposition;	// G=0x3266b67d; S=0x3266b6c1; converted property
@property(assign) float volumeAdjustment;	// G=0x3266d44d; S=0x3266d3ad; converted property
@property(assign) BOOL willNeverSeekBackwardsHint;	// G=0x3266aab1; S=0x3266ac5d; converted property
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;	// 0x32663e4d
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;	// 0x32663e39
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)provider withOptions:(id)options;	// 0x3266ea79
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)session;	// 0x3266ec45
+ (BOOL)automaticallyNotifiesObserversOfAlwaysMonitorsPlayability;	// 0x3266a6d9
+ (BOOL)automaticallyNotifiesObserversOfAsset;	// 0x3266e98d
+ (BOOL)automaticallyNotifiesObserversOfAudioMix;	// 0x3266b679
+ (BOOL)automaticallyNotifiesObserversOfBufferingTargetMaximum;	// 0x3266a209
+ (BOOL)automaticallyNotifiesObserversOfBufferingTargetMinimum;	// 0x3266a3c1
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForRateChange;	// 0x3266b361
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForSeek;	// 0x3266b049
+ (BOOL)automaticallyNotifiesObserversOfForwardPlaybackEndTime;	// 0x32669845
+ (BOOL)automaticallyNotifiesObserversOfGaplessInfo;	// 0x3266d205
+ (BOOL)automaticallyNotifiesObserversOfLimitReadAhead;	// 0x3266a055
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;	// 0x3266e9a1
+ (BOOL)automaticallyNotifiesObserversOfNonForcedSubtitleDisplayEnabled;	// 0x3266e2f5
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;	// 0x3266e995
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;	// 0x3266e999
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;	// 0x3266e991
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUpTrigger;	// 0x3266aa19
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;	// 0x3266e9a5
+ (BOOL)automaticallyNotifiesObserversOfReversePlaybackEndTime;	// 0x32669c3d
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;	// 0x3266e99d
+ (BOOL)automaticallyNotifiesObserversOfSeekingWaitsForVideoCompositionRendering;	// 0x3266bdd9
+ (BOOL)automaticallyNotifiesObserversOfSoundCheckVolumeNormalization;	// 0x3266d339
+ (BOOL)automaticallyNotifiesObserversOfStatus;	// 0x3266e989
+ (BOOL)automaticallyNotifiesObserversOfTextStyleRules;	// 0x3266bf65
+ (BOOL)automaticallyNotifiesObserversOfTracks;	// 0x3266e9a9
+ (BOOL)automaticallyNotifiesObserversOfVariableSpeedAudioProcessor;	// 0x3266c28d
+ (BOOL)automaticallyNotifiesObserversOfVideoComposition;	// 0x3266b959
+ (BOOL)automaticallyNotifiesObserversOfVolumeAdjustment;	// 0x3266d46d
+ (BOOL)automaticallyNotifiesObserversOfWillNeverSeekBackwardsHint;	// 0x3266ad31
+ (void)initialize;	// 0x32663dd1
+ (id)playerItemWithAsset:(id)asset;	// 0x32663ea9
+ (id)playerItemWithURL:(id)url;	// 0x32663e61
- (id)init;	// 0x32664195
- (id)initWithAsset:(id)asset;	// 0x326643f1
- (id)initWithURL:(id)url;	// 0x326642e9
- (int)_CreateSeekID;	// 0x32668759
- (id)_URL;	// 0x326665b5
- (void)_addFPListeners;	// 0x326674c1
- (void)_addSyncLayer:(id)layer;	// 0x3266e555
- (BOOL)_alwaysMonitorsPlayability;	// 0x3266a3c5
- (void)_applyAudioMix;	// 0x3266b3a9
- (void)_applyInitialAudioMix;	// 0x3266b565
- (void)_applyMediaSelectionOptions;	// 0x3266d955
- (void)_applySeekingWaitsForVideoCompositionRendering;	// 0x3266bccd
- (void)_applyTextStyleRules;	// 0x3266be21
- (void)_applyTrackSelectionsFromAlternateTrackGroupSPI;	// 0x3266d72d
- (void)_attachOutputs;	// 0x32670245
- (void)_attachToFigPlayer;	// 0x32665bd9
- (void)_attachToPlayer:(id)player;	// 0x32665aad
- (long long)_availableFileSize;	// 0x3266fc15
- (double)_bufferingTargetMaximum;	// 0x3266a059
- (double)_bufferingTargetMinimum;	// 0x3266a211
- (void)_cacheMediaSelectionOption:(id)option forMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x3266db01
- (id)_cachedValueForKey:(id)key;	// 0x3266500d
- (BOOL)_canPlayFastForward;	// 0x32667d61
- (BOOL)_canPlayFastReverse;	// 0x32667eb5
- (BOOL)_canPlayReverse;	// 0x32668061
- (BOOL)_canPlaySlowForward;	// 0x32668155
- (BOOL)_canPlaySlowReverse;	// 0x32668249
- (BOOL)_canStepBackward;	// 0x32668435
- (BOOL)_canStepForward;	// 0x3266833d
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(id)handler;	// 0x326687b5
- (void)_changeStatusToFailedWithError:(id)error;	// 0x32666a55
- (void)_configurePlaybackItem;	// 0x326652c5
- (BOOL)_continuesPlayingDuringPrerollForRateChange;	// 0x3266b04d
- (BOOL)_continuesPlayingDuringPrerollForSeek;	// 0x3266ad35
- (OpaqueCMTimebase *)_copyTimebase;	// 0x32669c41
- (void)_createPlayerConnection:(id)connection shouldAppendItem:(BOOL)item;	// 0x32665a15
- (void)_createPlayerItemInternal;	// 0x32663ef1
- (void)_dequeueFromPlayer;	// 0x32666481
- (void)_detachOutputs;	// 0x32670345
- (void)_didAccessKVOForKey:(id)key;	// 0x32665065
- (XXStruct_pwHToB)_duration;	// 0x32666c1d
- (void)_enqueueWithPlayer:(id)player shouldAppendItem:(BOOL)item;	// 0x326663b1
- (void)_evaluateSuppression;	// 0x3266e861
- (void)_evaluateVisualContexts;	// 0x3266ffe5
- (OpaqueFigCPEProtector *)_figCPEProtector;	// 0x3266e2f9
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x32664fcd
- (long long)_fileSize;	// 0x3266fb89
- (XXStruct_pwHToB)_forwardPlaybackEndTime;	// 0x32669451
- (id)_fpNotificationNames;	// 0x32667259
- (BOOL)_hasEnabledVideoMedia;	// 0x3266e651
- (void)_informObserversAboutAvailabilityOfTracks;	// 0x32666949
- (void)_insertAfterItem:(id)item;	// 0x326664e5
- (void)_invokeReadyForEnqueueingHandlers;	// 0x326678f5
- (BOOL)_isAFileBasedItemThatsReadyToPlay;	// 0x32668009
- (BOOL)_isCurrentPlayerItem;	// 0x32665869
// declared property getter: - (BOOL)_isExternalProtectionRequiredForPlayback;	// 0x3266eca9
// declared property getter: - (BOOL)_isRental;	// 0x3266ee11
// declared property getter: - (BOOL)_isRentalPlaybackStarted;	// 0x3266efc9
- (void)_kickAssetObserversIfAppropriate;	// 0x326668ad
- (BOOL)_limitReadAhead;	// 0x32669d45
- (id)_loadedTimeRanges;	// 0x3266c9f5
- (void)_makeNewAssetWithFigPlaybackItem;	// 0x3266671d
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id)completionHandler;	// 0x32667a49
- (id)_nextItem;	// 0x326664a5
- (id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)error;	// 0x3266e5ed
- (int)_playbackLikelyToKeepUpTrigger;	// 0x3266a6dd
- (id)_playbackProperties;	// 0x3266cdb9
- (id)_player;	// 0x3266583d
- (void)_playerChangeStatusToFailedWithError:(id)error;	// 0x32666495
- (id)_playerConnection;	// 0x3266599d
- (CGSize)_presentationSize;	// 0x32668529
- (id)_previousItem;	// 0x326664c5
- (id)_propertyStorage;	// 0x32664fed
- (void)_quietlySetAlwaysMonitorsPlayability:(BOOL)playability;	// 0x3266a535
- (void)_quietlySetBufferingTargetMaximum:(double)maximum;	// 0x3266a14d
- (void)_quietlySetBufferingTargetMinimum:(double)minimum;	// 0x3266a305
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x3266b1bd
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x3266aea5
- (void)_quietlySetEQPreset:(int)preset;	// 0x3266fab9
- (void)_quietlySetFigTimePitchAlgorithm:(CFStringRef)algorithm;	// 0x3266c0d5
- (void)_quietlySetForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x32669669
- (void)_quietlySetLimitReadAhead:(BOOL)ahead;	// 0x32669eb5
- (void)_quietlySetPlaybackLikelyToKeepUpTrigger:(int)keepUpTrigger;	// 0x3266a879
- (void)_quietlySetPlaybackProperties:(id)properties;	// 0x3266ce5d
- (void)_quietlySetReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x32669a61
- (void)_quietlySetSoundCheckVolumeNormalization:(float)normalization;	// 0x3266d209
- (void)_quietlySetVolumeAdjustment:(float)adjustment;	// 0x3266d33d
- (void)_quietlySetWillNeverSeekBackwardsHint:(BOOL)_quietlySet;	// 0x3266ab8d
- (void)_removeFPListeners;	// 0x326676bd
- (void)_removeFromItems;	// 0x3266654d
- (void)_removeSyncLayer:(id)layer;	// 0x3266e50d
- (void)_renderingSuppressionDidChangeForOutput:(id)_renderingSuppression;	// 0x3266e939
// declared property getter: - (id)_rentalExpirationDate;	// 0x3266ef25
// declared property getter: - (id)_rentalPlaybackExpirationDate;	// 0x3266f0dd
// declared property getter: - (id)_rentalPlaybackStartedDate;	// 0x3266f039
// declared property getter: - (id)_rentalStartDate;	// 0x3266ee81
- (void)_respondToBecomingReadyForBasicInspection;	// 0x32667809
- (XXStruct_pwHToB)_reversePlaybackEndTime;	// 0x32669849
- (id)_seekableTimeRanges;	// 0x3266c675
- (void)_selectMediaOption:(id)option inAlternateTrackGroup:(id)alternateTrackGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x3266ddf5
- (void)_selectMediaOption:(id)option inKeyValueGroup:(id)keyValueGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x3266de79
- (void)_selectMediaOption:(id)option inMediaSelectionGroup:(id)mediaSelectionGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x3266dec9
- (void)_selectMediaOption:(id)option usingFigSelectedMediaArrayObtainedFromGroup:(id)group;	// 0x3266dbd5
- (void)_selectTrackWithID:(int)anId amongTrackIDs:(id)ids;	// 0x3266d63d
- (void)_setAsset:(id)asset;	// 0x32666615
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;	// 0x326667d5
- (void)_setAssetWithFigPlaybackItem:(id)figPlaybackItem;	// 0x3266666d
- (void)_setAudibleDRMInfo:(id)info;	// 0x3266fa19
- (void)_setEQPreset:(int)preset;	// 0x3266fb29
- (void)_setEnabledState:(BOOL)state ofTrackID:(int)trackID;	// 0x3266d5c9
// declared property setter: - (void)_setExternalProtectionRequiredForPlayback:(BOOL)playback;	// 0x3266ed5d
- (void)_setIsCurrentPlayerItem:(BOOL)item;	// 0x32665889
- (void)_setPlayerConnection:(id)connection;	// 0x326659bd
- (void)_setRampInOutInfo:(id)outInfo;	// 0x3266f979
- (void)_setSyncLayersOnFigPlaybackItem;	// 0x3266e481
- (void)_setTimebaseOnOutputs:(OpaqueCMTimebase *)outputs;	// 0x32670175
- (void)_setTimedMetadata:(id)metadata;	// 0x3266e411
- (void)_setTrackIDsForAssetWithFigPlaybackItem:(id)figPlaybackItem;	// 0x326666c5
- (void)_setURL:(id)url;	// 0x326665d5
- (void)_setVideoCompositionFrameDuration:(XXStruct_pwHToB)duration;	// 0x3266b95d
- (void)_setVideoCompositionInstructions:(id)instructions;	// 0x3266bae5
- (void)_setVideoCompositionRenderScale:(float)scale;	// 0x3266ba69
- (void)_setVideoCompositionRenderSize:(CGSize)size;	// 0x3266b9f9
- (void)_setVideoCompositor:(id)compositor;	// 0x3266bba1
- (id)_stateDispatchQueue;	// 0x32664fad
- (BOOL)_suppressionForOutputs:(id)outputs;	// 0x3266e79d
- (id)_trackWithTrackID:(int)trackID;	// 0x32667171
- (id)_tracks;	// 0x32666e15
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)seekID finished:(BOOL)finished;	// 0x3266898d
- (void)_updateTimebase;	// 0x32669cb9
- (id)_variableSpeedAudioProcessor;	// 0x3266bf69
- (id)_weakReference;	// 0x32664f8d
- (void)_willAccessKVOForKey:(id)key;	// 0x32665039
- (BOOL)_willNeverSeekBackwardsHint;	// 0x3266aa1d
- (id)accessLog;	// 0x3266f181
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x32665151
- (void)addOutput:(id)output;	// 0x32670425
// converted property getter: - (BOOL)alwaysMonitorsPlayability;	// 0x3266a459
- (id)asset;	// 0x32666bd9
// converted property getter: - (id)audioMix;	// 0x3266b365
// converted property getter: - (double)bufferingTargetMaximum;	// 0x3266a071
// converted property getter: - (double)bufferingTargetMinimum;	// 0x3266a229
// declared property getter: - (BOOL)canDisplayExternalSubtitles;	// 0x3266fd7d
- (BOOL)canPlayFastForward;	// 0x32667dd9
- (BOOL)canPlayFastReverse;	// 0x32667f2d
- (BOOL)canPlayReverse;	// 0x32668079
- (BOOL)canPlaySlowForward;	// 0x3266816d
- (BOOL)canPlaySlowReverse;	// 0x32668261
- (BOOL)canStepBackward;	// 0x3266844d
- (BOOL)canStepForward;	// 0x32668359
- (void)cancelPendingSeeks;	// 0x32669095
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForRateChange;	// 0x3266b0e1
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForSeek;	// 0x3266adc9
- (id)copyWithZone:(NSZone *)zone;	// 0x32664a11
- (id)currentDate;	// 0x326690a9
- (id)currentEstimatedDate;	// 0x326692a5
- (XXStruct_pwHToB)currentTime;	// 0x326686b1
// declared property getter: - (id)dataYouTubeID;	// 0x3266fd39
- (void)dealloc;	// 0x32664525
- (id)description;	// 0x32664e21
- (void)didChangeValueForKey:(id)key;	// 0x326650f1
- (void)displayExternalSubtitleString:(id)string forced:(BOOL)forced;	// 0x3266feb5
// declared property getter: - (BOOL)displaysExternalSubtitles;	// 0x3266fe95
- (XXStruct_pwHToB)duration;	// 0x32666cd5
// declared property getter: - (id)error;	// 0x32666a11
- (id)errorLog;	// 0x3266f249
- (void)finalize;	// 0x326648c9
// converted property getter: - (XXStruct_pwHToB)forwardPlaybackEndTime;	// 0x32669551
// converted property getter: - (id)gaplessInfo;	// 0x3266cd75
// converted property getter: - (id)initialDate;	// 0x32669209
// converted property getter: - (id)initialEstimatedDate;	// 0x3266932d
// declared property getter: - (BOOL)isApplicationAuthorizedForPlayback;	// 0x3266e9c9
// declared property getter: - (BOOL)isAuthorizationRequiredForPlayback;	// 0x3266e9ad
// declared property getter: - (BOOL)isContentAuthorizedForPlayback;	// 0x3266ea21
// converted property getter: - (BOOL)isNonForcedSubtitleDisplayEnabled;	// 0x3266e209
- (BOOL)isPlaybackBufferEmpty;	// 0x3266c481
- (BOOL)isPlaybackBufferFull;	// 0x3266c389
- (BOOL)isPlaybackLikelyToKeepUp;	// 0x3266c291
// converted property getter: - (BOOL)limitReadAhead;	// 0x32669dd9
- (id)loadedTimeRanges;	// 0x3266ccdd
// declared property getter: - (id)outputs;	// 0x32670631
- (id)playabilityMetrics;	// 0x3266c5f1
// converted property getter: - (int)playbackLikelyToKeepUpTrigger;	// 0x3266a79d
- (CGSize)presentationSize;	// 0x326685b5
- (float)progressTowardsPlaybackLikelyToKeepUp;	// 0x3266c579
- (void)removeOutput:(id)output;	// 0x3267053d
// converted property getter: - (XXStruct_pwHToB)reversePlaybackEndTime;	// 0x32669949
- (BOOL)seekToDate:(id)date;	// 0x326691f1
- (BOOL)seekToDate:(id)date completionHandler:(id)handler;	// 0x32669131
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x32668a41
- (void)seekToTime:(XXStruct_pwHToB)time completionHandler:(id)handler;	// 0x32668afd
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x32668a79
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after completionHandler:(id)handler;	// 0x32668b75
- (id)seekableTimeRanges;	// 0x3266c95d
// converted property getter: - (BOOL)seekingWaitsForVideoCompositionRendering;	// 0x3266bcad
- (void)selectMediaOption:(id)option inMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x3266df8d
- (void)selectTrackWithID:(int)anId inTrackGroup:(id)trackGroup;	// 0x3266d855
- (id)selectedMediaOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x3266dfb1
- (int)selectedTrackIDInTrackGroup:(id)trackGroup;	// 0x3266d471
// converted property setter: - (void)setAlwaysMonitorsPlayability:(BOOL)playability;	// 0x3266a605
// converted property setter: - (void)setAudioMix:(id)mix;	// 0x3266b5b9
// converted property setter: - (void)setBufferingTargetMaximum:(double)maximum;	// 0x3266a205
// converted property setter: - (void)setBufferingTargetMinimum:(double)minimum;	// 0x3266a3bd
// converted property setter: - (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x3266b28d
// converted property setter: - (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x3266af75
// declared property setter: - (void)setDataYouTubeID:(id)anId;	// 0x3266fca1
// declared property setter: - (void)setDisplaysExternalSubtitles:(BOOL)subtitles;	// 0x3266fe11
// converted property setter: - (void)setForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x3266972d
// converted property setter: - (void)setGaplessInfo:(id)info;	// 0x3266d131
// converted property setter: - (void)setInitialDate:(id)date;	// 0x3266924d
// converted property setter: - (void)setInitialEstimatedDate:(id)date;	// 0x32669371
// converted property setter: - (void)setLimitReadAhead:(BOOL)ahead;	// 0x32669f81
// converted property setter: - (void)setNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x3266e229
// converted property setter: - (void)setPlaybackLikelyToKeepUpTrigger:(int)keepUpTrigger;	// 0x3266a945
// converted property setter: - (void)setReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x32669b25
// converted property setter: - (void)setSeekingWaitsForVideoCompositionRendering:(BOOL)videoCompositionRendering;	// 0x3266bd4d
// converted property setter: - (void)setSoundCheckVolumeNormalization:(float)normalization;	// 0x3266d279
// converted property setter: - (void)setTextStyleRules:(id)rules;	// 0x3266bea5
// converted property setter: - (void)setVariableSpeedAudioProcessor:(id)processor;	// 0x3266c125
// converted property setter: - (void)setVideoComposition:(id)composition;	// 0x3266b6c1
// converted property setter: - (void)setVolumeAdjustment:(float)adjustment;	// 0x3266d3ad
// converted property setter: - (void)setWillNeverSeekBackwardsHint:(BOOL)neverSeekBackwardsHint;	// 0x3266ac5d
// converted property getter: - (float)soundCheckVolumeNormalization;	// 0x3266d319
// declared property getter: - (int)status;	// 0x326669f1
- (void)stepByCount:(int)count;	// 0x326693c9
// converted property getter: - (id)textStyleRules;	// 0x3266bddd
- (OpaqueCMTimebase *)timebase;	// 0x32669c99
- (id)timedMetadata;	// 0x3266e3cd
- (id)tracks;	// 0x326670b9
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x32664f05
// converted property getter: - (id)variableSpeedAudioProcessor;	// 0x3266c031
// converted property getter: - (id)videoComposition;	// 0x3266b67d
// converted property getter: - (float)volumeAdjustment;	// 0x3266d44d
- (void)willChangeValueForKey:(id)key;	// 0x32665091
// converted property getter: - (BOOL)willNeverSeekBackwardsHint;	// 0x3266aab1
@end
