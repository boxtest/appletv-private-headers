/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "MZKeyValueStoreControllerDelegate.h"
#import <NSObject.h> // Unknown library
#import "MZKeyValueStoreTransactionProcessing.h"

@class MZUPPBagContext, NSMutableDictionary, NSString, MZKeyValueStoreController, NSError, MZKeyValueStoreTransaction;
@protocol MZUniversalPlaybackPositionDataSource, MZUniversalPlaybackPositionTransactionContext, OS_dispatch_queue;

@interface MZUniversalPlaybackPositionSyncHandler : NSObject <MZKeyValueStoreControllerDelegate, MZKeyValueStoreTransactionProcessing> {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_syncOperationQueue;	// 8 = 0x8
	MZUPPBagContext *_bagContext;	// 12 = 0xc
	BOOL _canceled;	// 16 = 0x10
	NSMutableDictionary *_metadataItemsFromDataSource;	// 20 = 0x14
	id<MZUniversalPlaybackPositionDataSource> _dataSource;	// 24 = 0x18
	NSError *_fatalSyncError;	// 28 = 0x1c
	NSMutableDictionary *_metadataItemsFromKVSStorage;	// 32 = 0x20
	MZKeyValueStoreTransaction *_currentKVSTransaction;	// 36 = 0x24
	id<MZUniversalPlaybackPositionTransactionContext> _dataSourceTransactionContext;	// 40 = 0x28
	BOOL _syncInProgress;	// 44 = 0x2c
	NSString *_responseDomainVersion;	// 48 = 0x30
	NSMutableDictionary *_reportedItemVersionForIdentifier;	// 52 = 0x34
	NSMutableDictionary *_metadataItemsToCommitToDataSource;	// 56 = 0x38
	MZKeyValueStoreController *_kvsController;	// 60 = 0x3c
	NSMutableDictionary *_metadataItemsToCommitToKVSStorage;	// 64 = 0x40
}
@property(retain) MZUPPBagContext *bagContext;	// G=0x356745dd; S=0x356745f1; @synthesize=_bagContext
@property(assign) BOOL canceled;	// G=0x35674601; S=0x35674619; @synthesize=_canceled
@property(retain) MZKeyValueStoreTransaction *currentKVSTransaction;	// G=0x356746c1; S=0x356746d5; @synthesize=_currentKVSTransaction
@property(retain) id<MZUniversalPlaybackPositionDataSource> dataSource;	// G=0x35674655; S=0x35674669; @synthesize=_dataSource
@property(retain) id<MZUniversalPlaybackPositionTransactionContext> dataSourceTransactionContext;	// G=0x356746e5; S=0x356746f9; @synthesize=_dataSourceTransactionContext
@property(retain) NSError *fatalSyncError;	// G=0x35674679; S=0x3567468d; @synthesize=_fatalSyncError
@property(retain) MZKeyValueStoreController *kvsController;	// G=0x356747a5; S=0x356747b9; @synthesize=_kvsController
@property(retain) NSMutableDictionary *metadataItemsFromDataSource;	// G=0x35674631; S=0x35674645; @synthesize=_metadataItemsFromDataSource
@property(retain) NSMutableDictionary *metadataItemsFromKVSStorage;	// G=0x3567469d; S=0x356746b1; @synthesize=_metadataItemsFromKVSStorage
@property(retain) NSMutableDictionary *metadataItemsToCommitToDataSource;	// G=0x35674781; S=0x35674795; @synthesize=_metadataItemsToCommitToDataSource
@property(retain) NSMutableDictionary *metadataItemsToCommitToKVSStorage;	// G=0x356747c9; S=0x356747dd; @synthesize=_metadataItemsToCommitToKVSStorage
@property(retain) NSMutableDictionary *reportedItemVersionForIdentifier;	// G=0x3567475d; S=0x35674771; @synthesize=_reportedItemVersionForIdentifier
@property(retain) NSString *responseDomainVersion;	// G=0x35674739; S=0x3567474d; @synthesize=_responseDomainVersion
@property(assign) BOOL syncInProgress;	// G=0x35674709; S=0x35674721; @synthesize=_syncInProgress
- (id)initWithDataSource:(id)dataSource bagContext:(id)context;	// 0x35672081
- (void)_dataSourceCancelTransaction;	// 0x356724c5
- (int)_mergeMetadataItemFromSetResponse:(id)setResponse;	// 0x35673621
- (void)_mergeMetadataItemsFromGetResponse;	// 0x3567383d
- (void)_resetState;	// 0x356723f9
- (BOOL)_shouldStop;	// 0x35673119
- (void)_signalKVSTransactionCompletion:(id)completion;	// 0x35673e61
- (void)_signalKVSTransactionCompletion:(id)completion withError:(id)error;	// 0x35673eb1
- (BOOL)_synchronize:(id *)synchronize;	// 0x35672539
- (id)_synchronouslyRunKVSTransaction:(id)transaction;	// 0x35673d65
// declared property getter: - (id)bagContext;	// 0x356745dd
- (void)cancel;	// 0x3567336d
- (void)cancelWithError:(id)error;	// 0x35673215
// declared property getter: - (BOOL)canceled;	// 0x35674601
// declared property getter: - (id)currentKVSTransaction;	// 0x356746c1
- (id)dataForSetTransaction:(id)setTransaction key:(id)key version:(id *)version;	// 0x35674251
// declared property getter: - (id)dataSource;	// 0x35674655
// declared property getter: - (id)dataSourceTransactionContext;	// 0x356746e5
- (void)dealloc;	// 0x356722b1
// declared property getter: - (id)fatalSyncError;	// 0x35674679
- (BOOL)keyValueStoreController:(id)controller shouldScheduleTransaction:(id)transaction;	// 0x35673fb1
- (void)keyValueStoreController:(id)controller transaction:(id)transaction didCancelWithError:(id)error;	// 0x356741a1
- (BOOL)keyValueStoreController:(id)controller transaction:(id)transaction didFailWithError:(id)error;	// 0x35674031
- (void)keyValueStoreController:(id)controller transactionDidFinish:(id)transaction;	// 0x356741b9
- (id)keysForTransaction:(id)transaction;	// 0x3567458d
// declared property getter: - (id)kvsController;	// 0x356747a5
// declared property getter: - (id)metadataItemsFromDataSource;	// 0x35674631
// declared property getter: - (id)metadataItemsFromKVSStorage;	// 0x3567469d
// declared property getter: - (id)metadataItemsToCommitToDataSource;	// 0x35674781
// declared property getter: - (id)metadataItemsToCommitToKVSStorage;	// 0x356747c9
- (id)newKVSGetAllTransactionSinceDomainVersion:(id)version;	// 0x35673d1d
- (id)newKVSPutAllTransactionWithMetadataItems:(id)metadataItems;	// 0x35673cdd
- (id)newKVSTransactionWithType:(int)type keys:(id)keys;	// 0x35673bdd
// declared property getter: - (id)reportedItemVersionForIdentifier;	// 0x3567475d
// declared property getter: - (id)responseDomainVersion;	// 0x35674739
// declared property setter: - (void)setBagContext:(id)context;	// 0x356745f1
// declared property setter: - (void)setCanceled:(BOOL)canceled;	// 0x35674619
// declared property setter: - (void)setCurrentKVSTransaction:(id)transaction;	// 0x356746d5
// declared property setter: - (void)setDataSource:(id)source;	// 0x35674669
// declared property setter: - (void)setDataSourceTransactionContext:(id)context;	// 0x356746f9
// declared property setter: - (void)setFatalSyncError:(id)error;	// 0x3567468d
// declared property setter: - (void)setKvsController:(id)controller;	// 0x356747b9
// declared property setter: - (void)setMetadataItemsFromDataSource:(id)dataSource;	// 0x35674645
// declared property setter: - (void)setMetadataItemsFromKVSStorage:(id)kvsstorage;	// 0x356746b1
// declared property setter: - (void)setMetadataItemsToCommitToDataSource:(id)dataSource;	// 0x35674795
// declared property setter: - (void)setMetadataItemsToCommitToKVSStorage:(id)kvsstorage;	// 0x356747dd
// declared property setter: - (void)setReportedItemVersionForIdentifier:(id)identifier;	// 0x35674771
// declared property setter: - (void)setResponseDomainVersion:(id)version;	// 0x3567474d
// declared property setter: - (void)setSyncInProgress:(BOOL)progress;	// 0x35674721
- (id)sinceDomainVersionForTransaction:(id)transaction;	// 0x356745b5
// declared property getter: - (BOOL)syncInProgress;	// 0x35674709
- (void)synchronizeWithCompletionHandler:(id)completionHandler;	// 0x35673381
- (void)timeout;	// 0x35673319
- (void)transaction:(id)transaction didProcessResponseWithDomainVersion:(id)domainVersion;	// 0x3567436d
- (void)transaction:(id)transaction mergeData:(id)data forKey:(id)key domainVersion:(id)version version:(id)version5 mismatch:(BOOL)mismatch finishedBlock:(id)block;	// 0x35674371
- (void)transaction:(id)transaction willProcessResponseWithDomainVersion:(id)domainVersion;	// 0x356742b1
- (id)versionForGetTransaction:(id)getTransaction key:(id)key;	// 0x3567424d
@end
