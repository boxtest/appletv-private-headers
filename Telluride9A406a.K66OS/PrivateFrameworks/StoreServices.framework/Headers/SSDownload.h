/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "SSEntity.h"

@class NSArray, SSNetworkConstraints, SSDownloadMetadata, SSXPCConnection, NSMutableDictionary, SSDownloadStatus, NSNumber;

@interface SSDownload : SSEntity <SSXPCCoding> {
@private
	NSMutableDictionary *_localAssets;	// 28 = 0x1c
	SSDownloadMetadata *_metadata;	// 32 = 0x20
	NSNumber *_prioritizeAboveDownload;	// 36 = 0x24
	SSDownloadStatus *_status;	// 40 = 0x28
}
@property(readonly, assign, getter=_XPCConnection) SSXPCConnection *_XPCConnection;	// G=0x3153ed65; 
@property(retain, nonatomic) NSArray *assets;	// G=0x3153e511; S=0x3153e635; 
@property(readonly, assign, getter=isCancelable) BOOL cancelable;	// G=0x3153c6cd; 
@property(readonly, assign, nonatomic) id downloadIdentifier;	// G=0x3153e515; 
@property(readonly, assign, nonatomic, getter=isExternal) BOOL external;	// G=0x3153e55d; 
@property(copy, nonatomic) SSDownloadMetadata *metadata;	// G=0x3153e5cd; S=0x3153e639; 
@property(copy) SSNetworkConstraints *networkConstraints;	// G=0x3153cac1; S=0x3153db45; 
@property(readonly, assign) long long persistentIdentifier;	// G=0x3153cdd5; 
@property(retain, nonatomic) SSDownloadStatus *status;	// G=0x3153e699; S=0x3153e695; 
+ (long long)_existsMessage;	// 0x3153dc3d
+ (long long)_getExternalValuesMessage;	// 0x3153dc45
+ (long long)_getValueMessage;	// 0x3153dc4d
+ (long long)_setExternalValuesMessage;	// 0x3153dc55
+ (long long)_setValuesMessage;	// 0x3153dc5d
+ (void)loadThumbnailImageDataForDownloadID:(long long)downloadID connection:(id)connection completionBlock:(id)block;	// 0x3153e0b9
- (id)initWithDownloadMetadata:(id)downloadMetadata;	// 0x3153e2f9
- (id)initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x3153ba8d
// declared property getter: - (id)_XPCConnection;	// 0x3153ed65
- (void)_addCachedExternalValues:(id)values;	// 0x3153dc65
- (void)_addCachedPropertyValues:(id)values;	// 0x3153ddc5
- (void)_applyPhase:(id)phase toStatus:(id)status;	// 0x3153ed79
- (id)_errorWithData:(id)data;	// 0x3153ee2d
- (id)_errorWithXPCReply:(void *)xpcreply;	// 0x3153eedd
- (id)_initWithLocalPropertyValues:(void *)localPropertyValues;	// 0x3153bb41
- (void)_legacyLoadArtworkData;	// 0x3153ef9d
- (void)_resetLocalIVars;	// 0x3153e041
- (void)_resetStatus;	// 0x3153ec21
- (id)_thumbnailImageURL;	// 0x3153f1e5
- (BOOL)addAsset:(id)asset forType:(id)type;	// 0x3153bdd9
// declared property getter: - (id)assets;	// 0x3153e511
- (id)assetsForType:(id)type;	// 0x3153c0d9
- (long long)bytesDownloaded;	// 0x3153c5c5
- (long long)bytesTotal;	// 0x3153c5fd
- (void *)copyXPCEncoding;	// 0x3153e3e1
- (void)dealloc;	// 0x3153bd31
// declared property getter: - (id)downloadIdentifier;	// 0x3153e515
- (id)downloadPhaseIdentifier;	// 0x3153c635
- (double)estimatedSecondsRemaining;	// 0x3153c651
- (id)failureError;	// 0x3153c691
- (void)handleWithDownloadHandler:(id)downloadHandler completionBlock:(id)block;	// 0x3153e54d
// declared property getter: - (BOOL)isCancelable;	// 0x3153c6cd
- (BOOL)isEligibleForRestore:(id *)restore;	// 0x3153c7ed
// declared property getter: - (BOOL)isExternal;	// 0x3153e55d
- (BOOL)loadThumbnailImageData;	// 0x3153e589
- (void)loadThumbnailImageDataWithCompletionBlock:(id)completionBlock;	// 0x3153c851
// declared property getter: - (id)metadata;	// 0x3153e5cd
// declared property getter: - (id)networkConstraints;	// 0x3153cac1
- (void)pause;	// 0x3153cb25
- (double)percentComplete;	// 0x3153cda1
// declared property getter: - (long long)persistentIdentifier;	// 0x3153cdd5
- (void)prioritizeAboveDownload:(id)download completionBlock:(id)block;	// 0x3153cdf1
- (BOOL)removeAsset:(id)asset;	// 0x3153d27d
- (void)resume;	// 0x3153d49d
// declared property setter: - (void)setAssets:(id)assets;	// 0x3153e635
- (void)setDownloadHandler:(id)handler completionBlock:(id)block;	// 0x3153d711
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3153e639
// declared property setter: - (void)setNetworkConstraints:(id)constraints;	// 0x3153db45
// declared property setter: - (void)setStatus:(id)status;	// 0x3153e695
- (void)setValuesWithStoreDownloadMetadata:(id)storeDownloadMetadata;	// 0x3153dbf9
// declared property getter: - (id)status;	// 0x3153e699
- (id)thumbnailImageData;	// 0x3153ebd9
@end
