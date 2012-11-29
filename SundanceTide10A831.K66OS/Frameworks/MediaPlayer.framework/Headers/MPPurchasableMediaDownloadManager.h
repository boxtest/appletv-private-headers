/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "SSDownloadHandlerDelegate.h"
#import "MediaPlayer-Structs.h"
#import "SSDownloadManagerObserver.h"

@class NSMutableSet, MPPurchasableMediaDownloadOperationQueue, SSDownloadManager, SSDownloadHandler, NSMutableDictionary, NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

@interface MPPurchasableMediaDownloadManager : NSObject <SSDownloadManagerObserver, SSDownloadHandlerDelegate> {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 4 = 0x4
	NSMutableSet *_alertViews;	// 8 = 0x8
	NSMutableDictionary *_downloadByDownloadIdentifier;	// 12 = 0xc
	NSMutableDictionary *_downloadByMediaItemPersistentID;	// 16 = 0x10
	SSDownloadHandler *_downloadHandler;	// 20 = 0x14
	SSDownloadManager *_downloadManager;	// 24 = 0x18
	MPPurchasableMediaDownloadOperationQueue *_downloadOperationQueue;	// 28 = 0x1c
	NSMutableArray *_downloads;	// 32 = 0x20
	NSObject<OS_dispatch_queue> *_downloadSessionQueue;	// 36 = 0x24
	NSMutableArray *_downloadSessions;	// 40 = 0x28
	CFDictionaryRef _groupDownloadsByDownload;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSArray *downloadingItemPIDs;	// G=0x36f98689; 
@property(readonly, assign, nonatomic) NSArray *downloads;	// G=0x36f984c5; @synthesize=_downloads
+ (BOOL)hasProperNetworkConditionsToPlayMedia;	// 0x36f97b99
+ (id)sharedManager;	// 0x36f97c09
- (id)init;	// 0x36f97cb9
- (void)_addDownloadsForMediaItems:(id)mediaItems purchaseReason:(int)reason shouldStartPuchaseOperation:(BOOL)operation withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x36f9c065
- (void)_cancelAndCleanUpPurchasableDownload:(id)download;	// 0x36f9b7c9
- (void)_cancelPurchasesBatchedWithDownload:(id)download;	// 0x36f9b6e1
- (void)_cleanUpPurchasableDownload:(id)download;	// 0x36f9bce5
- (void)_closeSessionForAsset:(id)asset;	// 0x36f9caf9
- (int)_downloadOptionsForPurchaseReason:(int)purchaseReason;	// 0x36f9d0ad
- (id)_downloadSessionForAVAsset:(id)avasset;	// 0x36f9ce31
- (id)_downloadSessionWithID:(id)anId;	// 0x36f9d115
- (BOOL)_isNetworkSufficientForPlayback;	// 0x36f9d3b9
- (BOOL)_isSessionRequiredToPlayMediaItem:(id)playMediaItem hasDownloadIdentifier:(BOOL *)identifier;	// 0x36f9d42d
- (id)_mediaItemForDownloadIdentifier:(long long)downloadIdentifier;	// 0x36f9d749
- (id)_mediaItemForSSDownload:(id)ssdownload;	// 0x36f9d839
- (id)_newDownloadObserverForPurchasableMediaDownload:(id)purchasableMediaDownload purchaseHandler:(id)handler completionHandler:(id)handler3;	// 0x36f9dae9
- (id)_newPurchasableMediaDownloadFromSSDownload:(id)ssdownload;	// 0x36f9d8f9
- (id)_openSessionWithProperties:(id)properties;	// 0x36f9db25
- (id)_openSessionWithProperties:(id)properties style:(int *)style;	// 0x36f9e119
- (void)_purchasableDownload:(id)download didChangeMediaItem:(id)item previousMediaItem:(id)item3;	// 0x36f9be89
- (BOOL)_showCellularRestrictedDialogForMediaItem:(id)mediaItem;	// 0x36f9e63d
- (BOOL)_showNoNetworkDialogForMediaItem:(id)mediaItem;	// 0x36f9e95d
- (void)addDownloadForMediaItem:(id)mediaItem purchaseReason:(int)reason;	// 0x36f98915
- (void)addDownloadForMediaItem:(id)mediaItem purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x36f9893d
- (void)addDownloadsForMediaEntity:(id)mediaEntity purchaseReason:(int)reason;	// 0x36f98851
- (void)addDownloadsForMediaEntity:(id)mediaEntity purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x36f98879
- (void)addDownloadsForMediaItemCollection:(id)mediaItemCollection purchaseReason:(int)reason;	// 0x36f9897d
- (void)addDownloadsForMediaItemCollection:(id)mediaItemCollection purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x36f989a5
- (void)addDownloadsForMediaItems:(id)mediaItems purchaseReason:(int)reason;	// 0x36f98c65
- (void)addDownloadsForMediaItems:(id)mediaItems purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x36f98c8d
- (void)addDownloadsForMediaQuery:(id)mediaQuery purchaseReason:(int)reason;	// 0x36f98cc1
- (void)addDownloadsForMediaQuery:(id)mediaQuery purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x36f98ce9
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x36f9b62d
- (BOOL)canOpenSessionWithMediaItem:(id)mediaItem;	// 0x36f98e7d
- (void)cancelDownloadForMediaItem:(id)mediaItem;	// 0x36f98e09
- (void)dealloc;	// 0x36f9835d
- (id)downloadForDownloadIdentifier:(unsigned long long)downloadIdentifier;	// 0x36f98fe9
- (id)downloadForFirstDownloadingMediaItemInCollection:(id)collection;	// 0x36f991d1
- (id)downloadForMediaItem:(id)mediaItem;	// 0x36f992a1
- (id)downloadForMediaItemPersistentID:(unsigned long long)mediaItemPersistentID;	// 0x36f992d5
- (void)downloadHandler:(id)handler cancelSession:(id)session;	// 0x36f9b0fd
- (void)downloadHandler:(id)handler handleSession:(id)session;	// 0x36f9b351
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x36f9a549
// declared property getter: - (id)downloadingItemPIDs;	// 0x36f98689
// declared property getter: - (id)downloads;	// 0x36f984c5
- (id)downloadsBatchedWithDownload:(id)download;	// 0x36f9977d
- (BOOL)isSessionRequiredToPlayMediaItem:(id)playMediaItem;	// 0x36f99945
- (id)openSessionWithMediaItem:(id)mediaItem;	// 0x36f9995d
- (void)purchaseOperation:(id)operation didFinishWithPurchase:(id)purchase error:(id)error;	// 0x36f9a089
- (void)purchaseOperationDidCancel:(id)purchaseOperation;	// 0x36f9a38d
- (BOOL)showNetworkConstraintDialogForMediaItem:(id)mediaItem;	// 0x36f99ed1
@end
