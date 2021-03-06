/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSArray, AVPlayerItemInternal, NSString, NSError;

@interface AVPlayerItem : NSObject <NSCopying> {
	AVPlayerItemInternal *_playerItem;	// 4 = 0x4
}
@property(assign, nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;	// G=0x302ced6d; S=0x302cee21; 
@property(readonly, assign, nonatomic, getter=_isRental) BOOL _rental;	// G=0x302ceed5; 
@property(readonly, assign, nonatomic) NSDate *_rentalExpirationDate;	// G=0x302cefe9; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackExpirationDate;	// G=0x302cf1a1; 
@property(readonly, assign, nonatomic, getter=_isRentalPlaybackStarted) BOOL _rentalPlaybackStarted;	// G=0x302cf08d; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackStartedDate;	// G=0x302cf0fd; 
@property(readonly, assign, nonatomic) NSDate *_rentalStartDate;	// G=0x302cef45; 
@property(assign) BOOL alwaysMonitorsPlayability;	// G=0x302ca181; S=0x302ca32d; converted property
@property(readonly, assign, nonatomic, getter=isApplicationAuthorizedForPlayback) BOOL applicationAuthorizedForPlayback;	// G=0x302cea8d; 
@property(retain) id audioMix;	// G=0x302cb08d; S=0x302cb2e1; converted property
@property(readonly, assign, nonatomic, getter=isAuthorizationRequiredForPlayback) BOOL authorizationRequiredForPlayback;	// G=0x302cea71; 
@property(assign) double bufferingTargetMaximum;	// G=0x302c9d99; S=0x302c9f2d; converted property
@property(assign) double bufferingTargetMinimum;	// G=0x302c9f51; S=0x302ca0e5; converted property
@property(readonly, assign, nonatomic) BOOL canDisplayExternalSubtitles;	// G=0x302cfe41; 
@property(readonly, assign, nonatomic, getter=isContentAuthorizedForPlayback) BOOL contentAuthorizedForPlayback;	// G=0x302ceae5; 
@property(assign) BOOL continuesPlayingDuringPrerollForRateChange;	// G=0x302cae09; S=0x302cafb5; converted property
@property(assign) BOOL continuesPlayingDuringPrerollForSeek;	// G=0x302caaf1; S=0x302cac9d; converted property
@property(copy, nonatomic) NSString *dataYouTubeID;	// G=0x302cfdfd; S=0x302cfd65; 
@property(assign, nonatomic) BOOL displaysExternalSubtitles;	// G=0x302cff59; S=0x302cfed5; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x302c6731; 
@property(assign) XXStruct_pwHToB forwardPlaybackEndTime;	// G=0x302c9275; S=0x302c9451; converted property
@property(retain) id gaplessInfo;	// G=0x302cca9d; S=0x302cce59; converted property
@property(retain) id initialDate;	// G=0x302c8f2d; S=0x302c8f71; converted property
@property(retain) id initialEstimatedDate;	// G=0x302c9051; S=0x302c9095; converted property
@property(assign) BOOL limitReadAhead;	// G=0x302c9afd; S=0x302c9ca5; converted property
@property(assign, getter=isNonForcedSubtitleDisplayEnabled) BOOL nonForcedSubtitleDisplayEnabled;	// G=0x302cdf65; S=0x302cdf85; converted property
@property(readonly, assign, nonatomic) NSArray *outputs;	// G=0x302d06f5; 
@property(assign) int playbackLikelyToKeepUpTrigger;	// G=0x302ca4c5; S=0x302ca66d; converted property
@property(assign) XXStruct_pwHToB reversePlaybackEndTime;	// G=0x302c966d; S=0x302c9849; converted property
@property(assign) BOOL seekingWaitsForVideoCompositionRendering;	// G=0x302cb9d5; S=0x302cba75; converted property
@property(assign) float soundCheckVolumeNormalization;	// G=0x302cd041; S=0x302ccfa1; converted property
@property(readonly, assign, nonatomic) int status;	// G=0x302c6711; 
@property(retain) id textStyleRules;	// G=0x302cbb05; S=0x302cbbcd; converted property
@property(retain) id variableSpeedAudioProcessor;	// G=0x302cbd59; S=0x302cbe4d; converted property
@property(retain) id videoComposition;	// G=0x302cb3a5; S=0x302cb3e9; converted property
@property(assign) float volumeAdjustment;	// G=0x302cd175; S=0x302cd0d5; converted property
@property(assign) BOOL willNeverSeekBackwardsHint;	// G=0x302ca7d9; S=0x302ca985; converted property
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;	// 0x302c387d
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;	// 0x302c3869
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)provider withOptions:(id)options;	// 0x302ceb3d
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)session;	// 0x302ced09
+ (BOOL)automaticallyNotifiesObserversOfAlwaysMonitorsPlayability;	// 0x302ca401
+ (BOOL)automaticallyNotifiesObserversOfAsset;	// 0x302cea51
+ (BOOL)automaticallyNotifiesObserversOfAudioMix;	// 0x302cb3a1
+ (BOOL)automaticallyNotifiesObserversOfBufferingTargetMaximum;	// 0x302c9f31
+ (BOOL)automaticallyNotifiesObserversOfBufferingTargetMinimum;	// 0x302ca0e9
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForRateChange;	// 0x302cb089
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForSeek;	// 0x302cad71
+ (BOOL)automaticallyNotifiesObserversOfForwardPlaybackEndTime;	// 0x302c9569
+ (BOOL)automaticallyNotifiesObserversOfGaplessInfo;	// 0x302ccf2d
+ (BOOL)automaticallyNotifiesObserversOfLimitReadAhead;	// 0x302c9d79
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;	// 0x302cea65
+ (BOOL)automaticallyNotifiesObserversOfNonForcedSubtitleDisplayEnabled;	// 0x302ce051
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;	// 0x302cea59
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;	// 0x302cea5d
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;	// 0x302cea55
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUpTrigger;	// 0x302ca741
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;	// 0x302cea69
+ (BOOL)automaticallyNotifiesObserversOfReversePlaybackEndTime;	// 0x302c9961
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;	// 0x302cea61
+ (BOOL)automaticallyNotifiesObserversOfSeekingWaitsForVideoCompositionRendering;	// 0x302cbb01
+ (BOOL)automaticallyNotifiesObserversOfSoundCheckVolumeNormalization;	// 0x302cd061
+ (BOOL)automaticallyNotifiesObserversOfStatus;	// 0x302cea4d
+ (BOOL)automaticallyNotifiesObserversOfTextStyleRules;	// 0x302cbc8d
+ (BOOL)automaticallyNotifiesObserversOfTracks;	// 0x302cea6d
+ (BOOL)automaticallyNotifiesObserversOfVariableSpeedAudioProcessor;	// 0x302cbfb5
+ (BOOL)automaticallyNotifiesObserversOfVideoComposition;	// 0x302cb681
+ (BOOL)automaticallyNotifiesObserversOfVolumeAdjustment;	// 0x302cd195
+ (BOOL)automaticallyNotifiesObserversOfWillNeverSeekBackwardsHint;	// 0x302caa59
+ (void)initialize;	// 0x302c3801
+ (id)playerItemWithAsset:(id)asset;	// 0x302c38d9
+ (id)playerItemWithURL:(id)url;	// 0x302c3891
- (id)init;	// 0x302c3b9d
- (id)initWithAsset:(id)asset;	// 0x302c3e1d
- (id)initWithURL:(id)url;	// 0x302c3d15
- (int)_CreateSeekID;	// 0x302c847d
- (id)_URL;	// 0x302c62d5
- (void)_addFPListeners;	// 0x302c71e5
- (void)_addSyncLayer:(id)layer;	// 0x302ce459
- (BOOL)_alwaysMonitorsPlayability;	// 0x302ca0ed
- (void)_applyAudioMix;	// 0x302cb0d1
- (void)_applyInitialAudioMix;	// 0x302cb28d
- (void)_applyMediaSelectionOptions;	// 0x302cd67d
- (void)_applySeekingWaitsForVideoCompositionRendering;	// 0x302cb9f5
- (void)_applyTextStyleRules;	// 0x302cbb49
- (void)_applyTrackSelectionsFromAlternateTrackGroupSPI;	// 0x302cd455
- (void)_attachOutputs;	// 0x302d0309
- (void)_attachToFigPlayer;	// 0x302c5889
- (void)_attachToPlayer:(id)player;	// 0x302c575d
- (long long)_availableFileSize;	// 0x302cfcd9
- (double)_bufferingTargetMaximum;	// 0x302c9d81
- (double)_bufferingTargetMinimum;	// 0x302c9f39
- (void)_cacheMediaSelectionOption:(id)option forMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x302cd829
- (id)_cachedValueForKey:(id)key;	// 0x302c4a6d
- (BOOL)_canPlayFastForward;	// 0x302c7a85
- (BOOL)_canPlayFastReverse;	// 0x302c7bd9
- (BOOL)_canPlayReverse;	// 0x302c7d85
- (BOOL)_canPlaySlowForward;	// 0x302c7e79
- (BOOL)_canPlaySlowReverse;	// 0x302c7f6d
- (BOOL)_canStepBackward;	// 0x302c8159
- (BOOL)_canStepForward;	// 0x302c8061
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(id)handler;	// 0x302c84d9
- (void)_changeStatusToFailedWithError:(id)error;	// 0x302c6775
- (void)_configurePlaybackItem;	// 0x302c4d25
- (BOOL)_continuesPlayingDuringPrerollForRateChange;	// 0x302cad75
- (BOOL)_continuesPlayingDuringPrerollForSeek;	// 0x302caa5d
- (OpaqueCMTimebase *)_copyTimebase;	// 0x302c9965
- (void)_createPlayerConnection:(id)connection shouldAppendItem:(BOOL)item;	// 0x302c56c5
- (void)_createPlayerItemInternal;	// 0x302c3921
- (void)_dequeueFromPlayer;	// 0x302c61a1
- (void)_detachOutputs;	// 0x302d0409
- (void)_didAccessKVOForKey:(id)key;	// 0x302c4ac5
- (XXStruct_pwHToB)_duration;	// 0x302c693d
- (void)_enqueueWithPlayer:(id)player shouldAppendItem:(BOOL)item;	// 0x302c60d1
- (void)_evaluateSuppression;	// 0x302ce925
- (void)_evaluateVisualContexts;	// 0x302d00a9
- (OpaqueFigCPEProtector *)_figCPEProtector;	// 0x302ce055
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x302c4a2d
- (long long)_fileSize;	// 0x302cfc4d
- (XXStruct_pwHToB)_forwardPlaybackEndTime;	// 0x302c9175
- (id)_fpNotificationNames;	// 0x302c6f7d
- (BOOL)_hasEnabledVideoMedia;	// 0x302ce715
- (void)_informObserversAboutAvailabilityOfTracks;	// 0x302c6669
- (void)_insertAfterItem:(id)item;	// 0x302c6205
- (void)_invokeReadyForEnqueueingHandlers;	// 0x302c7619
- (BOOL)_isAFileBasedItemThatsReadyToPlay;	// 0x302c7d2d
- (BOOL)_isCurrentPlayerItem;	// 0x302c5519
// declared property getter: - (BOOL)_isExternalProtectionRequiredForPlayback;	// 0x302ced6d
// declared property getter: - (BOOL)_isRental;	// 0x302ceed5
// declared property getter: - (BOOL)_isRentalPlaybackStarted;	// 0x302cf08d
- (void)_kickAssetObserversIfAppropriate;	// 0x302c65cd
- (BOOL)_limitReadAhead;	// 0x302c9a69
- (id)_loadedTimeRanges;	// 0x302cc71d
- (void)_makeNewAssetWithFigPlaybackItem;	// 0x302c643d
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id)completionHandler;	// 0x302c776d
- (id)_nextItem;	// 0x302c61c5
- (id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)error;	// 0x302ce6b1
- (int)_playbackLikelyToKeepUpTrigger;	// 0x302ca405
- (id)_playbackProperties;	// 0x302ccae1
- (id)_player;	// 0x302c54ed
- (void)_playerChangeStatusToFailedWithError:(id)error;	// 0x302c61b5
- (id)_playerConnection;	// 0x302c564d
- (CGSize)_presentationSize;	// 0x302c824d
- (id)_previousItem;	// 0x302c61e5
- (id)_propertyStorage;	// 0x302c4a4d
- (void)_quietlySetAlwaysMonitorsPlayability:(BOOL)playability;	// 0x302ca25d
- (void)_quietlySetBufferingTargetMaximum:(double)maximum;	// 0x302c9e75
- (void)_quietlySetBufferingTargetMinimum:(double)minimum;	// 0x302ca02d
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x302caee5
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x302cabcd
- (void)_quietlySetEQPreset:(int)preset;	// 0x302cfb7d
- (void)_quietlySetFigTimePitchAlgorithm:(CFStringRef)algorithm;	// 0x302cbdfd
- (void)_quietlySetForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x302c938d
- (void)_quietlySetLimitReadAhead:(BOOL)ahead;	// 0x302c9bd9
- (void)_quietlySetPlaybackLikelyToKeepUpTrigger:(int)keepUpTrigger;	// 0x302ca5a1
- (void)_quietlySetPlaybackProperties:(id)properties;	// 0x302ccb85
- (void)_quietlySetReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x302c9785
- (void)_quietlySetSoundCheckVolumeNormalization:(float)normalization;	// 0x302ccf31
- (void)_quietlySetVolumeAdjustment:(float)adjustment;	// 0x302cd065
- (void)_quietlySetWillNeverSeekBackwardsHint:(BOOL)_quietlySet;	// 0x302ca8b5
- (void)_removeFPListeners;	// 0x302c73e1
- (void)_removeFromItems;	// 0x302c626d
- (void)_removeSyncLayer:(id)layer;	// 0x302ce24d
- (void)_renderingSuppressionDidChangeForOutput:(id)_renderingSuppression;	// 0x302ce9fd
// declared property getter: - (id)_rentalExpirationDate;	// 0x302cefe9
// declared property getter: - (id)_rentalPlaybackExpirationDate;	// 0x302cf1a1
// declared property getter: - (id)_rentalPlaybackStartedDate;	// 0x302cf0fd
// declared property getter: - (id)_rentalStartDate;	// 0x302cef45
- (void)_respondToBecomingReadyForBasicInspection;	// 0x302c752d
- (XXStruct_pwHToB)_reversePlaybackEndTime;	// 0x302c956d
- (id)_seekableTimeRanges;	// 0x302cc39d
- (void)_selectMediaOption:(id)option inAlternateTrackGroup:(id)alternateTrackGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x302cdb1d
- (void)_selectMediaOption:(id)option inKeyValueGroup:(id)keyValueGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x302cdba1
- (void)_selectMediaOption:(id)option inMediaSelectionGroup:(id)mediaSelectionGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x302cdc25
- (void)_selectMediaOption:(id)option usingFigSelectedMediaArrayObtainedFromGroup:(id)group;	// 0x302cd8fd
- (void)_selectTrackWithID:(int)anId amongTrackIDs:(id)ids;	// 0x302cd365
- (void)_setAsset:(id)asset;	// 0x302c6335
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;	// 0x302c64f5
- (void)_setAssetWithFigPlaybackItem:(id)figPlaybackItem;	// 0x302c638d
- (void)_setAudibleDRMInfo:(id)info;	// 0x302cfadd
- (void)_setEQPreset:(int)preset;	// 0x302cfbed
- (void)_setEnabledState:(BOOL)state ofTrackID:(int)trackID;	// 0x302cd2f1
// declared property setter: - (void)_setExternalProtectionRequiredForPlayback:(BOOL)playback;	// 0x302cee21
- (void)_setIsCurrentPlayerItem:(BOOL)item;	// 0x302c5539
- (void)_setPlayerConnection:(id)connection;	// 0x302c566d
- (void)_setRampInOutInfo:(id)outInfo;	// 0x302cfa3d
- (void)_setSyncLayersOnFigPlaybackItem:(id)item;	// 0x302ce1dd
- (void)_setTimebaseOnOutputs:(OpaqueCMTimebase *)outputs;	// 0x302d0239
- (void)_setTimedMetadata:(id)metadata;	// 0x302ce16d
- (void)_setTrackIDsForAssetWithFigPlaybackItem:(id)figPlaybackItem;	// 0x302c63e5
- (void)_setURL:(id)url;	// 0x302c62f5
- (void)_setVideoCompositionFrameDuration:(XXStruct_pwHToB)duration;	// 0x302cb685
- (void)_setVideoCompositionInstructions:(id)instructions;	// 0x302cb80d
- (void)_setVideoCompositionRenderScale:(float)scale;	// 0x302cb791
- (void)_setVideoCompositionRenderSize:(CGSize)size;	// 0x302cb721
- (void)_setVideoCompositor:(id)compositor;	// 0x302cb8c9
- (id)_stateDispatchQueue;	// 0x302c4a0d
- (BOOL)_suppressionForOutputs:(id)outputs;	// 0x302ce861
- (id)_trackWithTrackID:(int)trackID;	// 0x302c6e95
- (id)_tracks;	// 0x302c6b39
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)seekID finished:(BOOL)finished;	// 0x302c86b1
- (void)_updateTimebase;	// 0x302c99dd
- (id)_variableSpeedAudioProcessor;	// 0x302cbc91
- (id)_weakReference;	// 0x302c49ed
- (void)_willAccessKVOForKey:(id)key;	// 0x302c4a99
- (BOOL)_willNeverSeekBackwardsHint;	// 0x302ca745
- (id)accessLog;	// 0x302cf245
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x302c4bb1
- (void)addOutput:(id)output;	// 0x302d04e9
// converted property getter: - (BOOL)alwaysMonitorsPlayability;	// 0x302ca181
- (id)asset;	// 0x302c68f9
// converted property getter: - (id)audioMix;	// 0x302cb08d
// converted property getter: - (double)bufferingTargetMaximum;	// 0x302c9d99
// converted property getter: - (double)bufferingTargetMinimum;	// 0x302c9f51
// declared property getter: - (BOOL)canDisplayExternalSubtitles;	// 0x302cfe41
- (BOOL)canPlayFastForward;	// 0x302c7afd
- (BOOL)canPlayFastReverse;	// 0x302c7c51
- (BOOL)canPlayReverse;	// 0x302c7d9d
- (BOOL)canPlaySlowForward;	// 0x302c7e91
- (BOOL)canPlaySlowReverse;	// 0x302c7f85
- (BOOL)canStepBackward;	// 0x302c8171
- (BOOL)canStepForward;	// 0x302c807d
- (void)cancelPendingSeeks;	// 0x302c8db9
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForRateChange;	// 0x302cae09
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForSeek;	// 0x302caaf1
- (id)copyWithZone:(NSZone *)zone;	// 0x302c4471
- (id)currentDate;	// 0x302c8dcd
- (id)currentEstimatedDate;	// 0x302c8fc9
- (XXStruct_pwHToB)currentTime;	// 0x302c83d5
// declared property getter: - (id)dataYouTubeID;	// 0x302cfdfd
- (void)dealloc;	// 0x302c3f51
- (id)description;	// 0x302c4881
- (void)didChangeValueForKey:(id)key;	// 0x302c4b51
- (void)displayExternalSubtitleString:(id)string forced:(BOOL)forced;	// 0x302cff79
// declared property getter: - (BOOL)displaysExternalSubtitles;	// 0x302cff59
- (XXStruct_pwHToB)duration;	// 0x302c69f5
// declared property getter: - (id)error;	// 0x302c6731
- (id)errorLog;	// 0x302cf30d
- (void)finalize;	// 0x302c430d
// converted property getter: - (XXStruct_pwHToB)forwardPlaybackEndTime;	// 0x302c9275
// converted property getter: - (id)gaplessInfo;	// 0x302cca9d
// converted property getter: - (id)initialDate;	// 0x302c8f2d
// converted property getter: - (id)initialEstimatedDate;	// 0x302c9051
// declared property getter: - (BOOL)isApplicationAuthorizedForPlayback;	// 0x302cea8d
// declared property getter: - (BOOL)isAuthorizationRequiredForPlayback;	// 0x302cea71
// declared property getter: - (BOOL)isContentAuthorizedForPlayback;	// 0x302ceae5
// converted property getter: - (BOOL)isNonForcedSubtitleDisplayEnabled;	// 0x302cdf65
- (BOOL)isPlaybackBufferEmpty;	// 0x302cc1a9
- (BOOL)isPlaybackBufferFull;	// 0x302cc0b1
- (BOOL)isPlaybackLikelyToKeepUp;	// 0x302cbfb9
// converted property getter: - (BOOL)limitReadAhead;	// 0x302c9afd
- (id)loadedTimeRanges;	// 0x302cca05
// declared property getter: - (id)outputs;	// 0x302d06f5
- (id)playabilityMetrics;	// 0x302cc319
// converted property getter: - (int)playbackLikelyToKeepUpTrigger;	// 0x302ca4c5
- (CGSize)presentationSize;	// 0x302c82d9
- (float)progressTowardsPlaybackLikelyToKeepUp;	// 0x302cc2a1
- (void)removeOutput:(id)output;	// 0x302d0601
// converted property getter: - (XXStruct_pwHToB)reversePlaybackEndTime;	// 0x302c966d
- (BOOL)seekToDate:(id)date;	// 0x302c8f15
- (BOOL)seekToDate:(id)date completionHandler:(id)handler;	// 0x302c8e55
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x302c8765
- (void)seekToTime:(XXStruct_pwHToB)time completionHandler:(id)handler;	// 0x302c8821
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x302c879d
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after completionHandler:(id)handler;	// 0x302c8899
- (id)seekableTimeRanges;	// 0x302cc685
// converted property getter: - (BOOL)seekingWaitsForVideoCompositionRendering;	// 0x302cb9d5
- (void)selectMediaOption:(id)option inMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x302cdce9
- (void)selectTrackWithID:(int)anId inTrackGroup:(id)trackGroup;	// 0x302cd57d
- (id)selectedMediaOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x302cdd0d
- (int)selectedTrackIDInTrackGroup:(id)trackGroup;	// 0x302cd199
// converted property setter: - (void)setAlwaysMonitorsPlayability:(BOOL)playability;	// 0x302ca32d
// converted property setter: - (void)setAudioMix:(id)mix;	// 0x302cb2e1
// converted property setter: - (void)setBufferingTargetMaximum:(double)maximum;	// 0x302c9f2d
// converted property setter: - (void)setBufferingTargetMinimum:(double)minimum;	// 0x302ca0e5
// converted property setter: - (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x302cafb5
// converted property setter: - (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x302cac9d
// declared property setter: - (void)setDataYouTubeID:(id)anId;	// 0x302cfd65
// declared property setter: - (void)setDisplaysExternalSubtitles:(BOOL)subtitles;	// 0x302cfed5
// converted property setter: - (void)setForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x302c9451
// converted property setter: - (void)setGaplessInfo:(id)info;	// 0x302cce59
// converted property setter: - (void)setInitialDate:(id)date;	// 0x302c8f71
// converted property setter: - (void)setInitialEstimatedDate:(id)date;	// 0x302c9095
// converted property setter: - (void)setLimitReadAhead:(BOOL)ahead;	// 0x302c9ca5
// converted property setter: - (void)setNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x302cdf85
// converted property setter: - (void)setPlaybackLikelyToKeepUpTrigger:(int)keepUpTrigger;	// 0x302ca66d
// converted property setter: - (void)setReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x302c9849
// converted property setter: - (void)setSeekingWaitsForVideoCompositionRendering:(BOOL)videoCompositionRendering;	// 0x302cba75
// converted property setter: - (void)setSoundCheckVolumeNormalization:(float)normalization;	// 0x302ccfa1
// converted property setter: - (void)setTextStyleRules:(id)rules;	// 0x302cbbcd
// converted property setter: - (void)setVariableSpeedAudioProcessor:(id)processor;	// 0x302cbe4d
// converted property setter: - (void)setVideoComposition:(id)composition;	// 0x302cb3e9
// converted property setter: - (void)setVolumeAdjustment:(float)adjustment;	// 0x302cd0d5
// converted property setter: - (void)setWillNeverSeekBackwardsHint:(BOOL)neverSeekBackwardsHint;	// 0x302ca985
// converted property getter: - (float)soundCheckVolumeNormalization;	// 0x302cd041
// declared property getter: - (int)status;	// 0x302c6711
- (void)stepByCount:(int)count;	// 0x302c90ed
// converted property getter: - (id)textStyleRules;	// 0x302cbb05
- (OpaqueCMTimebase *)timebase;	// 0x302c99bd
- (id)timedMetadata;	// 0x302ce129
- (id)tracks;	// 0x302c6ddd
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x302c4965
// converted property getter: - (id)variableSpeedAudioProcessor;	// 0x302cbd59
// converted property getter: - (id)videoComposition;	// 0x302cb3a5
// converted property getter: - (float)volumeAdjustment;	// 0x302cd175
- (void)willChangeValueForKey:(id)key;	// 0x302c4af1
// converted property getter: - (BOOL)willNeverSeekBackwardsHint;	// 0x302ca7d9
@end

