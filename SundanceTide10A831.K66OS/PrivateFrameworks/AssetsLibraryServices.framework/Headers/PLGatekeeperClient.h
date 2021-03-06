/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <NSObject.h> // Unknown library
#import "AssetsLibraryServices-Structs.h"

@protocol OS_xpc_object, OS_dispatch_queue;

@interface PLGatekeeperClient : NSObject {
	NSObject<OS_xpc_object> *connection;	// 4 = 0x4
}
@property(assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x338b6141; S=0x338b6151; @synthesize
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;	// G=0x338b387d; 
+ (id)sharedInstance;	// 0x338b3885
- (id)init;	// 0x338b3925
- (void)addAssetWithURL:(id)url toAlbumWithUUID:(id)uuid handler:(id)handler;	// 0x338b482d
- (void)addGroupWithName:(id)name handler:(id)handler;	// 0x338b4641
- (unsigned long long)attemptToPurgeSharedAssetsSpace:(unsigned long long)purgeSharedAssetsSpace;	// 0x338b5ea1
- (void)automaticallyDeleteEmptyAlbum:(id)album;	// 0x338b60d9
- (void)cleanupAfteriTunesSync;	// 0x338b53b9
- (void)cleanupForStoreDemoMode;	// 0x338b5c0d
- (void)cleanupModelAfteriTunesRestore;	// 0x338b55e9
- (void)clearAllBulletinsWithLastClearedRecordID:(unsigned)lastClearedRecordID;	// 0x338b5bb5
- (void)clearChangeStore;	// 0x338b57f5
// declared property getter: - (id)connection;	// 0x338b6141
- (void)createPhotoLibraryDatabase;	// 0x338b4ad5
- (void)createPhotostreamAlbumWithStreamID:(id)streamID;	// 0x338b58d5
- (void)dataMigrationWillFinish;	// 0x338b566d
- (id)emailAddressForKey:(int)key;	// 0x338b6029
- (void)enablePhotostreamsWithStreamID:(id)streamID;	// 0x338b587d
- (int)fileDescriptorForAssetURL:(id)assetURL;	// 0x338b3d0d
- (id)fileURLForAssetURL:(id)assetURL withAdjustments:(BOOL)adjustments;	// 0x338b3dd9
- (id)fileURLForNewAssetWithType:(unsigned)type extension:(id)extension;	// 0x338b4229
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)albums;	// 0x338b5319
- (int)getCurrentApplicationBadgeCount;	// 0x338b5a49
- (id)getCurrentBulletins;	// 0x338b5981
- (void)getLibrarySizes:(id)sizes;	// 0x338b4f11
- (void)getPhotosAndVideosCountWithHandler:(id)handler;	// 0x338b4c69
- (id)getThumbnailImageDataForBulletinWithRecordID:(unsigned)recordID;	// 0x338b5acd
- (id)imageDataFromAssetURL:(id)assetURL format:(int)format;	// 0x338b4555
- (void)importFileSystemAssetsWaitingForReply:(BOOL)reply;	// 0x338b4b59
- (int)keyForEmailAddress:(id)emailAddress;	// 0x338b5f75
- (void)launchAssetsd;	// 0x338b4c01
- (void)notifyAboutTerminationDueToUncaughtException:(id)uncaughtException;	// 0x338b56f1
- (unsigned long long)purgeableSharedAssetsSpace;	// 0x338b5df1
- (void)recalculateCachedAlbumCounts;	// 0x338b57b1
- (void)recoverFromCrashIfNeeded;	// 0x338b5839
- (void)repairSingletonObjects;	// 0x338b5935
// declared property getter: - (id)replyQueue;	// 0x338b387d
- (void)requestAccessWithHandler:(id)handler;	// 0x338b3a41
- (void)requestImageFromAssetURL:(id)assetURL format:(int)format handler:(id)handler;	// 0x338b4325
- (void)saveAssetWithJobDictionary:(id)jobDictionary handler:(id)handler imageSurface:(IOSurfaceRef)surface previewImageSurface:(IOSurfaceRef)surface4;	// 0x338b3ed9
- (unsigned)secondsNeededToCleanupModelAfteriTunesRestore;	// 0x338b554d
- (void)sendDaemonJob:(id)job replyHandler:(id)handler;	// 0x338b5c51
- (id)sendQueue;	// 0x338b386d
// declared property setter: - (void)setConnection:(id)connection;	// 0x338b6151
- (void)updateCameraPreviewWellImage:(id)image;	// 0x338b517d
- (void)updateModelAfterOTARestore;	// 0x338b5295
- (void)updateRestoredAssetWithUUID:(id)uuid paths:(id)paths;	// 0x338b5405
- (void)updateSharedAlbumsCachedServerConfigurationLimits;	// 0x338b5da1
- (void)updateStackedImageCacheForAlbum:(id)album;	// 0x338b5219
- (void)updateThumbnailsForPhoto:(id)photo generatePreviewImage:(BOOL)image waitForReply:(BOOL)reply;	// 0x338b5069
- (void)updateThumbnailsForPhoto:(id)photo generatePreviewImage:(BOOL)image waitForReply:(BOOL)reply assignNewIndex:(BOOL)index;	// 0x338b508d
- (void)waitUntilConnectionSendsAllMessages;	// 0x338b5d09
- (void)writeDataInBackground:(id)background toFileURL:(id)fileURL;	// 0x338b54d9
@end

