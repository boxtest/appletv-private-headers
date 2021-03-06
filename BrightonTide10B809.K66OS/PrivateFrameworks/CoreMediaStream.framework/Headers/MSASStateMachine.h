/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSBackoffManagerDelegate.h"
#import "MSASAssetUploaderDelegate.h"
#import "MSASAssetDownloaderDelegate.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, MSBackoffManager, MSImageScalingSpecification, MSASAssetUploader, MSASAssetDownloader, MSAlbumSharingDaemon, NSMutableArray, NSString, MSASPersonModel, MSASProtocol;
@protocol OS_dispatch_queue;

@interface MSASStateMachine : NSObject <MSBackoffManagerDelegate, MSASAssetUploaderDelegate, MSASAssetDownloaderDelegate> {
	int _commandState;	// 4 = 0x4
	MSASPersonModel *_model;	// 8 = 0x8
	NSString *_currentCommand;	// 12 = 0xc
	long long _currentCommandID;	// 16 = 0x10
	NSDictionary *_currentCommandParams;	// 24 = 0x18
	MSBackoffManager *_metadataBackoffManager;	// 28 = 0x1c
	MSBackoffManager *_MMCSBackoffManager;	// 32 = 0x20
	MSASAssetUploader *_assetUploader;	// 36 = 0x24
	MSASAssetDownloader *_assetDownloader;	// 40 = 0x28
	MSAlbumSharingDaemon *_daemon;	// 44 = 0x2c
	NSString *_personID;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	int _maxMetadataRetryCount;	// 56 = 0x38
	NSDictionary *_serverSideConfiguration;	// 60 = 0x3c
	NSString *_serverSideConfigurationVersion;	// 64 = 0x40
	NSString *_focusAlbumGUID;	// 68 = 0x44
	NSString *_focusAssetCollectionGUID;	// 72 = 0x48
	BOOL _isRetryingOutstandingActivities;	// 76 = 0x4c
	NSMutableArray *_assetInfoToReauthForDownload;	// 80 = 0x50
	id _stopHandlerBlock;	// 84 = 0x54
	MSASProtocol *_protocol;	// 88 = 0x58
	MSImageScalingSpecification *_derivativeImageScalingSpecification;	// 92 = 0x5c
	MSImageScalingSpecification *_thumbnailImageScalingSpecification;	// 96 = 0x60
	BOOL _hasShutDown;	// 100 = 0x64
	NSDictionary *_metadataBackoffManagerParameters;	// 104 = 0x68
	NSDictionary *_MMCSBackoffManagerParameters;	// 108 = 0x6c
	NSObject<OS_dispatch_queue> *_serverSideConfigQueue;	// 112 = 0x70
	NSObject<OS_dispatch_queue> *_eventQueue;	// 116 = 0x74
	NSObject<OS_dispatch_queue> *_memberQueue;	// 120 = 0x78
	id _postCommandCompletionBlock;	// 124 = 0x7c
	NSObject<OS_dispatch_queue> *_workQueue;	// 128 = 0x80
}
@property(retain, nonatomic) NSDictionary *MMCSBackoffManagerParameters;	// G=0x337a7a31; S=0x337a7a41; @synthesize=_MMCSBackoffManagerParameters
@property(retain, nonatomic, setter=_setAssetInfoToReauthForDownload:) NSMutableArray *_assetInfoToReauthForDownload;	// G=0x337a78e5; S=0x337a78f5; @synthesize
@property(copy, nonatomic, setter=_setStopHandlerBlock:) id _stopHandlerBlock;	// G=0x337a791d; S=0x337a7931; @synthesize
@property(assign, nonatomic) __weak MSAlbumSharingDaemon *daemon;	// G=0x337a77f9; S=0x3377f3fd; @synthesize=_daemon
@property(assign, nonatomic) __weak id delegate;	// G=0x337a7851; S=0x337a7871; @synthesize=_delegate
@property(retain, nonatomic) MSImageScalingSpecification *derivativeImageScalingSpecification;	// G=0x337a7969; S=0x337a7979; @synthesize=_derivativeImageScalingSpecification
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;	// G=0x337a7aa1; S=0x337a7ab1; @synthesize=_eventQueue
@property(retain, nonatomic) NSString *focusAlbumGUID;	// G=0x337a78a5; S=0x3377f521; @synthesize=_focusAlbumGUID
@property(retain, nonatomic) NSString *focusAssetCollectionGUID;	// G=0x337a78b5; S=0x3377f639; @synthesize=_focusAssetCollectionGUID
@property(assign, nonatomic) BOOL hasShutDown;	// G=0x337a79d9; S=0x337a79e9; @synthesize=_hasShutDown
@property(assign, nonatomic) BOOL isRetryingOutstandingActivities;	// G=0x337a78c5; S=0x337a78d5; @synthesize=_isRetryingOutstandingActivities
@property(assign, nonatomic) int maxMetadataRetryCount;	// G=0x337a7885; S=0x337a7895; @synthesize=_maxMetadataRetryCount
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;	// G=0x337a7ad9; S=0x337a7ae9; @synthesize=_memberQueue
@property(retain, nonatomic) NSDictionary *metadataBackoffManagerParameters;	// G=0x337a79f9; S=0x337a7a09; @synthesize=_metadataBackoffManagerParameters
@property(retain, nonatomic) NSString *personID;	// G=0x337a7819; S=0x337a7829; @synthesize=_personID
@property(copy, nonatomic) id postCommandCompletionBlock;	// G=0x337a7b11; S=0x337a7b25; @synthesize=_postCommandCompletionBlock
@property(retain, nonatomic) MSASProtocol *protocol;	// G=0x3377be35; S=0x337a7941; @synthesize=_protocol
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverSideConfigQueue;	// G=0x337a7a69; S=0x337a7a79; @synthesize=_serverSideConfigQueue
@property(retain, nonatomic) NSDictionary *serverSideConfiguration;	// G=0x33780a21; S=0x33780f79; @synthesize=_serverSideConfiguration
@property(readonly, assign, nonatomic) NSString *serverSideConfigurationVersion;	// G=0x33780bf1; @synthesize=_serverSideConfigurationVersion
@property(retain, nonatomic) MSImageScalingSpecification *thumbnailImageScalingSpecification;	// G=0x337a79a1; S=0x337a79b1; @synthesize=_thumbnailImageScalingSpecification
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;	// G=0x337a7b35; S=0x337a7b45; @synthesize=_workQueue
- (id)init;	// 0x3377c2dd
- (id)initWithPersonID:(id)personID;	// 0x3377c33d
- (id)initWithPersonID:(id)personID eventQueue:(id)queue;	// 0x3377c36d
- (void).cxx_destruct;	// 0x337a7b6d
// declared property getter: - (id)MMCSBackoffManagerParameters;	// 0x337a7a31
- (void)MSASAssetDownloader:(id)downloader didFinishDownloadingAsset:(id)asset inAlbum:(id)album error:(id)error;	// 0x337a54b5
- (void)MSASAssetDownloader:(id)downloader willBeginBatchCount:(unsigned)count;	// 0x337a53e5
- (void)MSASAssetDownloaderDidFinishBatch:(id)msasassetDownloader;	// 0x337a7481
- (void)MSASAssetUploader:(id)uploader didFinishUploadingAssetCollection:(id)collection intoAlbum:(id)album error:(id)error;	// 0x337a48f9
- (void)MSBackoffManagerDidUpdateNextExpiryDate:(id)msbackoffManager;	// 0x33781fc5
- (id)_URLReauthFailureWithUnderlyingError:(id)underlyingError;	// 0x33785121
- (void)_addAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x33799ba9
- (void)_addCommentDisposition:(int)disposition params:(id)params;	// 0x337a2775
- (void)_addSharingRelationshipsDisposition:(int)disposition params:(id)params;	// 0x337a0089
- (id)_assetCollectionRejectedError;	// 0x33785ae9
- (id)_assetDownloader;	// 0x3377c0e9
// declared property getter: - (id)_assetInfoToReauthForDownload;	// 0x337a78e5
- (id)_assetUploader;	// 0x3377c0d5
- (void)_cancelOutstandingCommandsDisposition:(int)disposition params:(id)params;	// 0x3377f8f9
- (id)_canceledError;	// 0x33785949
- (void)_checkForAlbumSyncedStateDisposition:(int)albumSyncedStateDisposition params:(id)params;	// 0x33790705
- (void)_checkForAssetCollectionUpdatesDisposition:(int)assetCollectionUpdatesDisposition params:(id)params;	// 0x3378d385
- (void)_checkForChangesDisposition:(int)changesDisposition params:(id)params;	// 0x33786089
- (void)_checkForCommentChangesDisposition:(int)commentChangesDisposition params:(id)params;	// 0x3378ee01
- (void)_checkForUpdatesInAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x33787b2d
- (void)_continueAddingAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x3379aa31
- (void)_createAlbumDisposition:(int)disposition params:(id)params;	// 0x337976c9
- (id)_createHardlinkedOrCopiedAssetsInAssetCollections:(id)assetCollections;	// 0x3379944d
- (void)_deleteAlbumDisposition:(int)disposition params:(id)params;	// 0x33793f2d
- (void)_deleteAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x33794ec5
- (void)_deleteAssetFilesInAssetCollection:(id)assetCollection;	// 0x337a44d5
- (void)_deleteAssetFilesInAssetCollections:(id)assetCollections;	// 0x337a4835
- (void)_deleteCommentDisposition:(int)disposition params:(id)params;	// 0x337963c5
- (void)_didFinishCheckingUpdatesInAlbumsDisposition:(int)albumsDisposition params:(id)params;	// 0x33789665
- (void)_getAccessControlsDisposition:(int)disposition params:(id)params;	// 0x33789db1
- (void)_getAlbumURLDisposition:(int)disposition params:(id)params;	// 0x337851c9
- (id)_metadataBackoffManager;	// 0x3377c0fd
- (id)_model;	// 0x3377c0c1
- (void)_removeSharingRelationshipsDisposition:(int)disposition params:(id)params;	// 0x337a12e9
- (void)_scheduleEventDisposition:(int)disposition params:(id)params;	// 0x337a3de5
- (void)_sendGetServerSideConfigurationDisposition:(int)disposition params:(id)params;	// 0x33781385
- (void)_sendPutAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x3379dc51
- (void)_sendReauthorizeAssetsForDownloadDisposition:(int)downloadDisposition params:(id)params;	// 0x337a5a6d
- (void)_sendUploadCompleteDisposition:(int)disposition params:(id)params;	// 0x3379b8a1
- (id)_serverSideConfigDictionaryByApplyingDefaultsToDictionary:(id)dictionary;	// 0x337806d9
- (void)_setAlbumSyncedStateDisposition:(int)disposition params:(id)params;	// 0x33791bdd
- (void)_setAssetCollectionSyncedStateDisposition:(int)disposition params:(id)params;	// 0x33792f2d
// declared property setter: - (void)_setAssetInfoToReauthForDownload:(id)download;	// 0x337a78f5
// declared property setter: - (void)_setStopHandlerBlock:(id)block;	// 0x337a7931
// declared property getter: - (id)_stopHandlerBlock;	// 0x337a791d
- (id)_stoppedError;	// 0x33785a19
- (void)_subscribeToAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x3378afa1
- (void)_unsubscribeFromAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x3378bf99
- (void)_updateAlbumDisposition:(int)disposition params:(id)params;	// 0x337986b1
- (void)_workQueueEmptyFileTransferQueuesCompletionBlock:(id)block;	// 0x3377dc59
- (void)acceptInvitationWithToken:(id)token info:(id)info completionBlock:(id)block;	// 0x3378cc9d
- (void)addAssetCollections:(id)collections toAlbum:(id)album info:(id)info;	// 0x337997e1
- (void)addComments:(id)comments toAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x337a22c5
- (void)addSharingRelationships:(id)relationships toOwnedAlbum:(id)ownedAlbum info:(id)info;	// 0x3379fd69
- (int)assetsInDownloadQueueCount;	// 0x3377d72d
- (void)cancelCompletionBlock:(id)block;	// 0x3377eaad
- (void)cancelOutstandingCommandsForAlbumWithGUID:(id)guid;	// 0x3377f751
- (void)cancelOutstandingCommandsForAssetCollectionWithGUID:(id)guid;	// 0x3377f825
- (void)checkForAlbumSyncedStateChangesInAlbums:(id)albums info:(id)info;	// 0x33790331
- (void)checkForAssetCollectionUpdates:(id)assetCollectionUpdates inAlbum:(id)album info:(id)info;	// 0x3378d039
- (void)checkForChangesInfo:(id)changesInfo;	// 0x33785bb9
- (void)checkForChangesResetSync:(BOOL)changesResetSync info:(id)info;	// 0x33785bcd
- (void)checkForCommentChangesInAssetCollection:(id)assetCollection inAlbum:(id)album lastCommentID:(id)anId info:(id)info;	// 0x3378ea4d
- (void)checkForUpdatesInAlbums:(id)albums resetSync:(BOOL)sync info:(id)info;	// 0x33787605
- (void)continueAddingAssetCollections:(id)collections skipAssetCollections:(id)collections2 toAlbum:(id)album info:(id)info;	// 0x3379a40d
- (void)createAlbum:(id)album info:(id)info;	// 0x3379749d
// declared property getter: - (id)daemon;	// 0x337a77f9
- (void)dealloc;	// 0x3377d701
// declared property getter: - (id)delegate;	// 0x337a7851
- (void)deleteAlbum:(id)album info:(id)info;	// 0x33793d01
- (void)deleteAssetCollections:(id)collections inAlbum:(id)album info:(id)info;	// 0x33794c51
- (void)deleteComments:(id)comments inAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x33795f15
// declared property getter: - (id)derivativeImageScalingSpecification;	// 0x337a7969
// declared property getter: - (id)eventQueue;	// 0x337a7aa1
// declared property getter: - (id)focusAlbumGUID;	// 0x337a78a5
// declared property getter: - (id)focusAssetCollectionGUID;	// 0x337a78b5
- (void)getAccessControlsForAlbums:(id)albums info:(id)info;	// 0x337899dd
- (BOOL)hasEnqueuedActivities;	// 0x33782821
// declared property getter: - (BOOL)hasShutDown;	// 0x337a79d9
- (BOOL)isInRetryState;	// 0x33782695
// declared property getter: - (BOOL)isRetryingOutstandingActivities;	// 0x337a78c5
- (id)latestNextActivityDate;	// 0x33781a8d
// declared property getter: - (int)maxMetadataRetryCount;	// 0x337a7885
// declared property getter: - (id)memberQueue;	// 0x337a7ad9
- (id)memberQueueMetadataBackoffManager;	// 0x3377c2c9
// declared property getter: - (id)metadataBackoffManagerParameters;	// 0x337a79f9
- (id)persistentObjectForKey:(id)key;	// 0x33782501
// declared property getter: - (id)personID;	// 0x337a7819
// declared property getter: - (id)postCommandCompletionBlock;	// 0x337a7b11
// declared property getter: - (id)protocol;	// 0x3377be35
- (void)purgeEverythingCompletionBlock:(id)block;	// 0x3377e925
- (void)refreshServerSideConfig;	// 0x3378125d
- (void)removeSharingRelationships:(id)relationships fromOwnedAlbum:(id)ownedAlbum info:(id)info;	// 0x337a0fc9
- (void)retrieveAssets:(id)assets inAlbum:(id)album;	// 0x337a4f4d
- (void)retryOutstandingActivities;	// 0x337828e5
- (void)scheduleEvent:(id)event assetCollectionGUID:(id)guid albumGUID:(id)guid3 info:(id)info;	// 0x337a3a61
// declared property getter: - (id)serverSideConfigQueue;	// 0x337a7a69
// declared property getter: - (id)serverSideConfiguration;	// 0x33780a21
// declared property getter: - (id)serverSideConfigurationVersion;	// 0x33780bf1
- (id)serverSideQueueServerSideConfiguration;	// 0x33780dbd
- (void)serverSideQueueSetServerSideConfiguration:(id)configuration;	// 0x33781055
- (void)setAlbumSyncedState:(id)state forAlbum:(id)album info:(id)info;	// 0x337918a1
- (void)setAssetCollectionSyncedState:(id)state forAssetCollection:(id)assetCollection album:(id)album info:(id)info;	// 0x33792b79
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x3377f3fd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x337a7871
// declared property setter: - (void)setDerivativeImageScalingSpecification:(id)specification;	// 0x337a7979
// declared property setter: - (void)setEventQueue:(id)queue;	// 0x337a7ab1
// declared property setter: - (void)setFocusAlbumGUID:(id)guid;	// 0x3377f521
// declared property setter: - (void)setFocusAssetCollectionGUID:(id)guid;	// 0x3377f639
// declared property setter: - (void)setHasShutDown:(BOOL)down;	// 0x337a79e9
// declared property setter: - (void)setIsRetryingOutstandingActivities:(BOOL)activities;	// 0x337a78d5
// declared property setter: - (void)setMMCSBackoffManagerParameters:(id)parameters;	// 0x337a7a41
// declared property setter: - (void)setMaxMetadataRetryCount:(int)count;	// 0x337a7895
// declared property setter: - (void)setMemberQueue:(id)queue;	// 0x337a7ae9
// declared property setter: - (void)setMetadataBackoffManagerParameters:(id)parameters;	// 0x337a7a09
- (void)setPersistentObject:(id)object forKey:(id)key;	// 0x33782561
// declared property setter: - (void)setPersonID:(id)anId;	// 0x337a7829
// declared property setter: - (void)setPostCommandCompletionBlock:(id)block;	// 0x337a7b25
// declared property setter: - (void)setProtocol:(id)protocol;	// 0x337a7941
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbum:(id)album info:(id)info completionBlock:(id)block;	// 0x337a40cd
// declared property setter: - (void)setServerSideConfigQueue:(id)queue;	// 0x337a7a79
// declared property setter: - (void)setServerSideConfiguration:(id)configuration;	// 0x33780f79
// declared property setter: - (void)setThumbnailImageScalingSpecification:(id)specification;	// 0x337a79b1
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x337a7b45
- (void)shutDownCompletionBlock:(id)block;	// 0x3377dd4d
- (void)start;	// 0x3377db91
- (void)stopAssetDownloadsCompletionBlock:(id)block;	// 0x3377e975
- (void)subscribeToAlbum:(id)album info:(id)info;	// 0x3378acad
// declared property getter: - (id)thumbnailImageScalingSpecification;	// 0x337a79a1
- (void)unsubscribeFromAlbum:(id)album info:(id)info;	// 0x3378bca5
- (void)updateAlbum:(id)album updateAlbumFlags:(int)flags info:(id)info;	// 0x33798435
// declared property getter: - (id)workQueue;	// 0x337a7b35
- (void)workQueueApplyServerSideConfiguration;	// 0x3377d769
- (void)workQueueCancelAllCommandsFilteredByAlbumGUID:(id)guid assetCollectionGUID:(id)guid2;	// 0x3377eba1
- (void)workQueueCancelCompletionBlock:(id)block;	// 0x3377eecd
- (void)workQueueCheckForNextCommand;	// 0x33782a99
- (void)workQueueDidFailToFinishCommandDueToTemporaryError:(id)workQueue;	// 0x33783e11
- (void)workQueueDidFinishCommand;	// 0x33783711
- (void)workQueueDidFinishCommandByLeavingCommandInQueue;	// 0x33784069
- (void)workQueueDidFinishCommandByReplacingCurrentCommandWithCommand:(id)workQueue params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x3378396d
- (void)workQueueDidFinishCommandDueToCancellation;	// 0x33784329
- (BOOL)workQueueEndCommandWithError:(id)error command:(id)command params:(id)params albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x33784551
- (void)workQueuePerformNextCommand;	// 0x33782f69
- (void)workQueueRefreshServerSideConfig;	// 0x337812f9
- (void)workQueueRetryOutstandingActivities;	// 0x33782981
- (void)workQueueScheduleReauthForAssets:(id)assets inAlbum:(id)album;	// 0x337a5845
- (void)workQueueUpdateNextActivityDate;	// 0x33781e19
@end

