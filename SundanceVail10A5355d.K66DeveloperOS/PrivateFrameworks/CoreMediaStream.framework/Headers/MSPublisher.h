/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSCupidStateMachine.h"
#import "NSObject.h"
#import "MSPublisher.h"
#import "MSPublishStreamsProtocolDelegate.h"
#import "MSPublishStorageProtocolDelegate.h"

@class NSMutableArray, MSMediaStreamDaemon, NSMutableDictionary, NSURL, MSPublishStreamsProtocol, MSObjectQueue;
@protocol MSPublishStorageProtocol, MSPublisherDelegate;

@protocol MSPublisher <NSObject>
@property(assign, nonatomic) id<MSPublisherDelegate> delegate;
@property(assign, nonatomic) int publishBatchSize;
- (void)abort;
// declared property getter: - (id)delegate;
- (void)publish;
// declared property getter: - (int)publishBatchSize;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setPublishBatchSize:(int)size;
- (void)stop;
- (void)submitAssetCollectionsForPublication:(id)publication;
- (void)submitAssetCollectionsForPublication:(id)publication skipAssetCollections:(id)collections;
@end

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate> {
	id<MSPublisherDelegate> _delegate;	// 24 = 0x18
	MSMediaStreamDaemon *_daemon;	// 28 = 0x1c
	int _state;	// 32 = 0x20
	MSObjectQueue *_uploadQueue;	// 36 = 0x24
	NSMutableArray *_requestAuthQueue;	// 40 = 0x28
	unsigned _sendingQueueCount;	// 44 = 0x2c
	NSMutableArray *_sendingQueue;	// 48 = 0x30
	NSMutableDictionary *_fileHashToAssetMap;	// 52 = 0x34
	MSPublishStreamsProtocol *_protocol;	// 56 = 0x38
	id<MSPublishStorageProtocol> _storageProtocol;	// 60 = 0x3c
	NSURL *_storageProtocolURL;	// 64 = 0x40
	NSMutableArray *_tempFiles;	// 68 = 0x44
	NSMutableDictionary *_maxSizeByUTI;	// 72 = 0x48
	long long _publishTargetByteCount;	// 76 = 0x4c
	int _publishBatchSize;	// 84 = 0x54
	int _maxErrorCount;	// 88 = 0x58
}
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x33879fa9; S=0x33879fb9; @synthesize=_daemon
@property(assign, nonatomic) id<MSPublisherDelegate> delegate;	// G=0x33879f89; S=0x33879f99; @synthesize=_delegate
@property(assign, nonatomic) int publishBatchSize;	// G=0x3387a02d; S=0x3387a03d; @synthesize=_publishBatchSize
@property(assign, nonatomic) long long publishTargetByteCount;	// G=0x3387a001; S=0x3387a019; @synthesize=_publishTargetByteCount
@property(retain, nonatomic) NSURL *storageProtocolURL;	// G=0x33879fc9; S=0x33879fd9; @synthesize=_storageProtocolURL
+ (id)_clearInstantiatedPublishersByPersonID;	// 0x338736bd
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x3387373d
+ (id)existingPublisherForPersonID:(id)personID;	// 0x338736a1
+ (void)forgetPersonID:(id)anId;	// 0x338736d1
+ (BOOL)isInRetryState;	// 0x33873d11
+ (id)nextActivityDate;	// 0x33873a91
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x33873ba5
+ (id)personIDsWithOutstandingActivities;	// 0x33873bf5
+ (id)publisherForPersonID:(id)personID;	// 0x33873585
+ (void)stopAllActivities;	// 0x33873c31
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x33873e01
- (void).cxx_destruct;	// 0x3387a04d
- (void)_abort;	// 0x33879d81
- (id)_abortedError;	// 0x33879d21
- (void)_addAssetToFileHashMap:(id)fileHashMap;	// 0x338753d1
- (void)_categorizeError:(id)error setOutIsIgnorable:(BOOL *)ignorable setOutIsCounted:(BOOL *)counted setOutIsFatal:(BOOL *)fatal setOutNeedsBackoff:(BOOL *)backoff setOutIsTemporary:(BOOL *)temporary setOutIsTokenAuth:(BOOL *)auth setOutIsAuthError:(BOOL *)error8;	// 0x338786dd
- (void)_didFinishUsingAssetCollections:(id)collections;	// 0x338757a5
- (void)_forget;	// 0x33879f0d
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)error;	// 0x338768a5
- (BOOL)_isAllowedToUpload;	// 0x33874d45
- (BOOL)_isInRetryState;	// 0x33879f61
- (void)_refreshServerSideConfiguredParameters;	// 0x338745c5
- (void)_removeAssetFromFileHashMap:(id)fileHashMap;	// 0x338754bd
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)assetMap;	// 0x3387558d
- (void)_requestDerivatives;	// 0x33874fc9
- (void)_sendFilesToMMCS;	// 0x33877e89
- (void)_sendMetadataToStreams;	// 0x338764a9
- (void)_sendUploadComplete;	// 0x3387953d
- (void)_serverSideConfigurationDidChange:(id)_serverSideConfiguration;	// 0x33874ba1
- (int)_stop;	// 0x33879c55
- (void)_updateMasterManifest;	// 0x33874295
- (void)abort;	// 0x33879f41
- (void)computeHashForAsset:(id)asset;	// 0x338745a5
// declared property getter: - (id)daemon;	// 0x33879fa9
- (void)deactivate;	// 0x338740cd
- (void)dealloc;	// 0x33874255
// declared property getter: - (id)delegate;	// 0x33879f89
- (BOOL)enqueueAssetCollections:(id)collections outError:(id *)error;	// 0x33874341
- (void)publish;	// 0x33874e4d
// declared property getter: - (int)publishBatchSize;	// 0x3387a02d
- (void)publishStorageProtocol:(id)protocol didFinishUploadingAsset:(id)asset error:(id)error;	// 0x338782ed
- (void)publishStorageProtocol:(id)protocol didFinishUsingFD:(int)fd forAsset:(id)asset;	// 0x33878659
- (int)publishStorageProtocol:(id)protocol didRequestFDForAsset:(id)asset;	// 0x338783b9
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)publishStorageProtocol;	// 0x33878805
- (void)publishStreamsProtocol:(id)protocol didFinishSendingUploadCompleteError:(id)error;	// 0x338795b5
- (void)publishStreamsProtocol:(id)protocol didFinishUploadingMetadataResponse:(id)response error:(id)error;	// 0x33876945
- (void)publishStreamsProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x33877da9
// declared property getter: - (long long)publishTargetByteCount;	// 0x3387a001
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x33879fb9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33879f99
// declared property setter: - (void)setPublishBatchSize:(int)size;	// 0x3387a03d
// declared property setter: - (void)setPublishTargetByteCount:(long long)count;	// 0x3387a019
// declared property setter: - (void)setStorageProtocolURL:(id)url;	// 0x33879fd9
- (void)stop;	// 0x33879f51
// declared property getter: - (id)storageProtocolURL;	// 0x33879fc9
- (void)submitAssetCollectionsForPublication:(id)publication;	// 0x33875929
- (void)submitAssetCollectionsForPublication:(id)publication skipAssetCollections:(id)collections;	// 0x3387593d
@end
