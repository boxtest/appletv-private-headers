/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSMutableArray, NSString, NSMutableDictionary, BRAsyncTaskContext;

@interface BRImageManager : NSObject {
@private
	unsigned long long _maxCacheSize;	// 4 = 0x4
	unsigned long long _cacheSize;	// 12 = 0xc
	unsigned long long _maxCacheCount;	// 20 = 0x14
	unsigned long long _cacheCount;	// 28 = 0x1c
	unsigned long long _cacheSizePurgeThreshhold;	// 36 = 0x24
	BOOL _cachePurging;	// 44 = 0x2c
	BOOL _purgeCacheOnLoadAndQuit;	// 45 = 0x2d
	BOOL _disableAccessDateUpdates;	// 46 = 0x2e
	NSString *_imageCachePath;	// 48 = 0x30
	NSMutableDictionary *_images;	// 52 = 0x34
	NSMutableDictionary *_remoteImageRequests;	// 56 = 0x38
	NSLock *_remoteImageLock;	// 60 = 0x3c
	NSMutableArray *_jobQueue;	// 64 = 0x40
	NSMutableDictionary *_pendingCachedImagesToFlush;	// 68 = 0x44
	BOOL _processJobs;	// 72 = 0x48
	BRAsyncTaskContext *_loadTaskContext;	// 76 = 0x4c
	BRAsyncTaskContext *_writeTaskContext;	// 80 = 0x50
	NSMutableArray *_activeDelegates;	// 84 = 0x54
	int _pruneCount;	// 88 = 0x58
}
+ (id)fullScreenImageResizingOptions;	// 0x3313cdb1
+ (id)generalPurposeManager;	// 0x3313d595
+ (id)screenSaverManager;	// 0x3313d6f1
+ (id)trickPlayManager;	// 0x3313d801
- (id)initWithCachePath:(id)cachePath purgeCacheOnLoadAndQuit:(BOOL)quit maxCacheSizeInMB:(unsigned long long)mb maxCacheCount:(unsigned long long)count cacheSizePurgeThreshholdInMB:(unsigned long long)mb5 pruneCount:(int)count6 disableAccessDateUpdates:(BOOL)updates;	// 0x3313ce41
- (void)_ATVDataImageAvailable:(id)available;	// 0x3314210d
- (void)_addLoadJobToQueue:(id)queue;	// 0x3313fe49
- (void)_addWriteJobToQueue:(id)queue withImageID:(id)imageID height:(int)height width:(int)width cropped:(BOOL)cropped;	// 0x3313f8fd
- (id)_cachedCroppedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x33141f31
- (id)_cachedCroppedImagePathForImageID:(id)imageID forSize:(CGSize)size;	// 0x33141e15
- (id)_cachedOriginalImagePathForImageID:(id)imageID;	// 0x33141cbd
- (id)_cachedResizedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x33141ed1
- (id)_cachedResizedImagePathForImageID:(id)imageID forSize:(CGSize)size;	// 0x33141d59
- (void)_checkCache;	// 0x33141865
- (void)_decrementCacheSize:(unsigned long long)size;	// 0x3314181d
- (id)_defaultResizingImageOptions;	// 0x33140c4d
- (id)_extensionForImageID:(id)imageID;	// 0x33142079
- (id)_imageFromWriteQueue:(id)writeQueue;	// 0x33141f91
- (void)_imageLoadFailed:(id)failed;	// 0x331414d9
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x3314116d
- (void)_incrementCacheSize:(unsigned long long)size;	// 0x331417c1
- (BOOL)_isLoadJobQueued:(id)queued;	// 0x331419dd
- (void)_maintainImageCache;	// 0x33140e65
- (void)_performLoadJob:(id)job;	// 0x3314012d
- (void)_performWriteJob:(id)job;	// 0x3313fca5
- (void)_postUnavailableImageNotification:(id)notification;	// 0x33141621
- (void)_postUpdateNotification:(id)notification;	// 0x331415e9
- (void)_postWriteCompletedNotification:(id)notification size:(CGSize)size cropped:(BOOL)cropped;	// 0x3314168d
- (void)_purgeRemoveDirectory:(BOOL)directory;	// 0x331422ed
- (id)_queuedLoadJobWithName:(id)name;	// 0x33141a85
- (void)_removeCacheFile:(id)file;	// 0x33140e29
- (void)_removeLoadJobFromQueue:(id)queue;	// 0x33140009
- (void)_removeRemoteImageRequestNamed:(id)named;	// 0x33140cdd
- (void)_removeWriteJobFromQueue:(id)queue;	// 0x3313fbc1
- (void)_scheduleMaintainCache;	// 0x33141969
- (void)_startLoadJob:(id)job;	// 0x3313ff79
- (void)_startWriteJob:(id)job;	// 0x3313fb29
- (void)_terminateNotification:(id)notification;	// 0x33141be1
- (BOOL)_updateExistingImageRecord:(id)record;	// 0x33140559
- (id)_writeIDForImageID:(id)imageID cropped:(BOOL)cropped size:(CGSize)size;	// 0x33141c49
- (void)_writeImage:(id)image named:(id)named forSize:(CGSize)size cropped:(BOOL)cropped;	// 0x3314067d
- (id)absolutePathForImageID:(id)imageID;	// 0x3313f899
- (id)cachePath;	// 0x3313f8d1
- (float)cacheSize;	// 0x3313f8e1
- (void)cancelWriteForImageWithURL:(id)url imageID:(id)anId;	// 0x3313dd1d
- (void)dealloc;	// 0x3313d479
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x3313eb69
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk original:(BOOL)original rotate:(BOOL)rotate;	// 0x3313eb9d
- (BOOL)hasRemoteImageBeenRequestedForMediaID:(id)mediaID;	// 0x3313f5ed
- (id)imageNameFromURL:(id)url;	// 0x3313da81
- (id)imageNamed:(id)named;	// 0x3313e921
- (id)imageNamed:(id)named croppedToSize:(CGSize)size create:(BOOL)create;	// 0x3313e3ed
- (id)imageNamed:(id)named scaledToSize:(CGSize)size;	// 0x3313e8e5
- (BOOL)isImageAvailable:(id)available;	// 0x3313d905
- (BOOL)isImageAvailable:(id)available croppedToSize:(CGSize)size;	// 0x3313da45
- (BOOL)isImageAvailable:(id)available scaledToSize:(CGSize)size;	// 0x3313da09
- (BOOL)isImageWritten:(id)written;	// 0x3313d9f1
- (id)loadImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x3313dd85
- (void)moveImageFromPath:(id)path imageID:(id)anId;	// 0x3313e059
- (void)purge;	// 0x3313f8bd
- (void)purgeAndRemoveDirectory;	// 0x3313f8a9
- (void)purgeRemoteRequest;	// 0x3313f751
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId;	// 0x3313f2ad
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId withResizingOptions:(id)resizingOptions;	// 0x3313f2e9
- (void)receivedRemoteITunesImage:(id)image forID:(id)anId;	// 0x3313f155
- (void)receivedRemoteImage:(id)image forID:(id)anId;	// 0x3313f48d
- (void)remoteImageRequestForMediaID:(id)mediaID;	// 0x3313efa1
- (void)writeCroppedImage:(id)image named:(id)named;	// 0x3313dfe5
- (id)writeEncryptedImageFromURL:(id)url;	// 0x3313db39
- (void)writeImage:(id)image named:(id)named;	// 0x3313debd
- (void)writeImage:(id)image named:(id)named asynchronous:(BOOL)asynchronous;	// 0x3313dee1
- (id)writeImageFromImageProxy:(id)imageProxy;	// 0x3313dab1
- (id)writeImageFromURL:(id)url;	// 0x3313db19
- (id)writeImageFromURL:(id)url decryptionAgent:(id)agent;	// 0x3313db8d
- (id)writeImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x3313dbb1
- (id)writeImageFromURL:(id)url imageID:(id)anId headerFields:(id)fields decryptionAgent:(id)agent;	// 0x3313dbd5
- (void)writeScaledImage:(id)image named:(id)named withSize:(CGSize)size;	// 0x3313df39
@end
