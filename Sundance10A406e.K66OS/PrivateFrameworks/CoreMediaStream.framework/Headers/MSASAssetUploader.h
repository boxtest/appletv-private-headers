/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASAssetTransferer.h"

@class NSMutableArray, NSMutableDictionary;
@protocol MSASAssetUploaderDelegate;

@interface MSASAssetUploader : MSASAssetTransferer {
	int _state;	// 64 = 0x40
	NSMutableArray *_itemsInFlight;	// 68 = 0x44
	NSMutableDictionary *_assetCollectionsToItemInFlightMap;	// 72 = 0x48
	NSMutableDictionary *_assetToAssetCollectionMap;	// 76 = 0x4c
	NSMutableArray *_finishedAssetCollections;	// 80 = 0x50
	BOOL _didEncounterNetworkConditionError;	// 84 = 0x54
}
@property(retain, nonatomic) NSMutableDictionary *assetCollectionsToItemInFlightMap;	// G=0x371ac7cd; S=0x371ac7dd; @synthesize=_assetCollectionsToItemInFlightMap
@property(retain, nonatomic) NSMutableDictionary *assetToAssetCollectionMap;	// G=0x371ac805; S=0x371ac815; @synthesize=_assetToAssetCollectionMap
@property(assign, nonatomic) __weak id<MSASAssetUploaderDelegate> delegate;	// @dynamic
@property(assign, nonatomic) BOOL didEncounterNetworkConditionError;	// G=0x371ac875; S=0x371ac885; @synthesize=_didEncounterNetworkConditionError
@property(retain, nonatomic) NSMutableArray *finishedAssetCollections;	// G=0x371ac83d; S=0x371ac84d; @synthesize=_finishedAssetCollections
@property(retain, nonatomic) NSMutableArray *itemsInFlight;	// G=0x371ac795; S=0x371ac7a5; @synthesize=_itemsInFlight
@property(assign, nonatomic) int state;	// G=0x371ac775; S=0x371ac785; @synthesize=_state
- (void).cxx_destruct;	// 0x371ac895
- (void)MMCSEngine:(id)engine didFinishGettingAllAssetsContext:(id)context;	// 0x371ac6b1
- (void)MMCSEngine:(id)engine didFinishGettingAsset:(id)asset path:(id)path context:(id)context error:(id)error;	// 0x371ac529
- (void)MMCSEngine:(id)engine didFinishPuttingAllAssetsContext:(id)context;	// 0x371ac0d1
- (void)MMCSEngine:(id)engine didFinishPuttingAsset:(id)asset context:(id)context putReceipt:(id)receipt error:(id)error;	// 0x371aada9
- (void)MMCSEngine:(id)engine didMakeGetProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;	// 0x371ac5ed
- (void)MMCSEngine:(id)engine didMakePutProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;	// 0x371abd9d
- (id)_orphanedAssetCollectionError;	// 0x371a8e2d
- (id)_pathForPersonID:(id)personID;	// 0x371a85c5
- (void)_workQueueStop;	// 0x371a8905
// declared property getter: - (id)assetCollectionsToItemInFlightMap;	// 0x371ac7cd
// declared property getter: - (id)assetToAssetCollectionMap;	// 0x371ac805
// declared property getter: - (BOOL)didEncounterNetworkConditionError;	// 0x371ac875
// declared property getter: - (id)finishedAssetCollections;	// 0x371ac83d
// declared property getter: - (id)itemsInFlight;	// 0x371ac795
- (void)registerAssetCollections:(id)collections completionBlock:(id)block;	// 0x371aa49d
// declared property setter: - (void)setAssetCollectionsToItemInFlightMap:(id)flightMap;	// 0x371ac7dd
// declared property setter: - (void)setAssetToAssetCollectionMap:(id)assetCollectionMap;	// 0x371ac815
// declared property setter: - (void)setDidEncounterNetworkConditionError:(BOOL)encounterNetworkConditionError;	// 0x371ac885
// declared property setter: - (void)setFinishedAssetCollections:(id)collections;	// 0x371ac84d
// declared property setter: - (void)setItemsInFlight:(id)flight;	// 0x371ac7a5
// declared property setter: - (void)setState:(int)state;	// 0x371ac785
// declared property getter: - (int)state;	// 0x371ac775
- (void)unregisterAssetCollections:(id)collections;	// 0x371aa76d
- (void)unregisterAssetCollections:(id)collections completionBlock:(id)block;	// 0x371aa781
- (void)workQueueCancel;	// 0x371a8aa5
- (void)workQueueDidFinishWithItem:(id)workQueue error:(id)error;	// 0x371aab79
- (void)workQueueGoIdle;	// 0x371a87c9
- (void)workQueueRegisterAssetCollections:(id)collections index:(unsigned)index results:(id)results completionBlock:(id)block;	// 0x371aa135
- (void)workQueueRegisterAssets:(id)assets index:(unsigned)index completionBlock:(id)block;	// 0x371a9e8d
- (void)workQueueRetryOutstandingActivities;	// 0x371a85cd
- (void)workQueueShutDownCompletionBlock:(id)block;	// 0x371a8a51
- (void)workQueueStop;	// 0x371a8969
- (void)workQueueStopTrackingItem:(id)item;	// 0x371aaa1d
- (void)workQueueUploadNextBatch;	// 0x371a8ef9
@end
