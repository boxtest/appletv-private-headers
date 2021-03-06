/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSDaemon.h"

@class NSMutableDictionary, MSASDaemonModel;
@protocol MSAlbumSharingDaemonDelegate;

@interface MSAlbumSharingDaemon : MSDaemon {
@private
	id<MSAlbumSharingDaemonDelegate> _delegate;	// 20 = 0x14
	NSMutableDictionary *_personIDToStateMachineMap;	// 24 = 0x18
	NSMutableDictionary *_personIDToDelegateMap;	// 28 = 0x1c
	MSASDaemonModel *_daemonModel;	// 32 = 0x20
	int _busyCount;	// 36 = 0x24
}
@property(assign, nonatomic) __weak id<MSAlbumSharingDaemonDelegate> delegate;	// G=0x339b3aa5; S=0x339b3ac5; @synthesize=_delegate
- (id)init;	// 0x339b15b1
- (void).cxx_destruct;	// 0x339b3ad9
- (id)_boundDeleterStateMachineForPersonID:(id)personID;	// 0x339b3a6d
- (id)_boundPublisherStateMachineForPersonID:(id)personID;	// 0x339b3a89
- (id)_boundSubscriberStateMachineForPersonID:(id)personID;	// 0x339b3a51
- (id)_delegateForPersonID:(id)personID;	// 0x339b36b9
- (void)acceptInvitationWithGUID:(id)guid personID:(id)anId;	// 0x339b28bd
- (void)acceptInvitationWithToken:(id)token personID:(id)anId completionBlock:(id)block;	// 0x339b2851
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x339b2975
- (void)addAlbum:(id)album personID:(id)anId;	// 0x339b2629
- (BOOL)addAssetCollectionIsPendingGUID:(id)guid forPersonID:(id)personID;	// 0x339b3585
- (void)addAssetCollections:(id)collections toAlbum:(id)album forPersonID:(id)personID;	// 0x339b34bd
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x339b2ab1
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x339b2be5
- (void)addSharingRelationships:(id)relationships toOwnedAlbum:(id)ownedAlbum forPersonID:(id)personID;	// 0x339b35e1
- (BOOL)albumUpdateIsPendingGUID:(id)guid forPersonID:(id)personID;	// 0x339b3115
- (BOOL)assetRetrievalIsPendingGUID:(id)guid forPersonID:(id)personID;	// 0x339b3171
- (int)assetsInDownloadQueueCountForPersonID:(id)personID;	// 0x339b23f5
- (id)boundStateMachineForPersonID:(id)personID delegateProtocol:(id)protocol;	// 0x339b381d
- (void)cancelActivitiesForPersonID:(id)personID;	// 0x339b1dd9
- (void)checkForAlbumListUpdatesForPersonID:(id)personID;	// 0x339b2f11
- (void)checkForAlbumListUpdatesForPersonID:(id)personID resetSync:(BOOL)sync;	// 0x339b2f49
- (void)checkForAssetCollectionUpdates:(id)assetCollectionUpdates inAlbum:(id)album forPersonID:(id)personID;	// 0x339b303d
- (void)checkForUpdatesInAlbum:(id)album forPersonID:(id)personID;	// 0x339b2f85
- (void)checkForUpdatesInAlbum:(id)album forPersonID:(id)personID resetSync:(BOOL)sync;	// 0x339b2fe1
- (void)createAlbum:(id)album forPersonID:(id)personID;	// 0x339b3405
// declared property getter: - (id)delegate;	// 0x339b3aa5
- (void)deleteAlbum:(id)album forPersonID:(id)personID;	// 0x339b3285
- (BOOL)deleteAlbumIsPendingGUID:(id)guid forPersonID:(id)personID;	// 0x339b334d
- (void)deleteAlbumWithGUID:(id)guid personID:(id)anId;	// 0x339b26e1
- (BOOL)deleteAssetCollectionIsPendingGUID:(id)guid forPersonID:(id)personID;	// 0x339b33a9
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x339b2b1d
- (void)deleteAssetCollections:(id)collections inAlbum:(id)album forPersonID:(id)personID;	// 0x339b32e1
- (void)deleteCommentWithGUID:(id)guid personID:(id)anId;	// 0x339b2c51
- (void)didCreateStateMachineForPersonID:(id)personID;	// 0x339b198d
- (void)didDestroyStateMachineForPersonID:(id)personID;	// 0x339b1995
- (void)didIdle;	// 0x339b17ad
- (void)didReceiveAuthFailureForPersonID:(id)personID;	// 0x339b1aad
- (void)didReceiveAuthSuccessForPersonID:(id)personID;	// 0x339b1ab1
- (void)didReceivePushNotificationForPersonID:(id)personID;	// 0x339b1999
- (void)didUnidle;	// 0x339b1869
- (void)forgetEverythingAboutPersonID:(id)anId;	// 0x339b2d19
- (void)forgetPersonID:(id)anId;	// 0x339b1ea5
- (BOOL)isInRetryState;	// 0x339b199d
- (BOOL)isWaitingForAuth;	// 0x339b1ab5
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId;	// 0x339b273d
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId;	// 0x339b2b79
- (id)modelForPersonID:(id)personID;	// 0x339b2431
- (void)modifyAlbumMetadata:(id)metadata personID:(id)anId;	// 0x339b2685
- (id)nextActivityDate;	// 0x339b178d
- (id)persistentObjectForKey:(id)key personID:(id)anId;	// 0x339b2e39
- (id)personIDsListeningToPushNotification;	// 0x339b20c5
- (void)pollForSubscriptionUpdatesTriggeredByPushNotification;	// 0x339b215d
- (void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId;	// 0x339b2571
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x339b25cd
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x339b2515
- (void)refreshResetSync:(BOOL)sync personID:(id)anId;	// 0x339b24d5
- (void)refreshServerSideConfigurationForPersonID:(id)personID;	// 0x339b2e01
- (void)rejectInvitationWithGUID:(id)guid personID:(id)anId;	// 0x339b2919
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId;	// 0x339b29e1
- (void)removeSharingRelationships:(id)relationships fromOwnedAlbum:(id)ownedAlbum forPersonID:(id)personID;	// 0x339b364d
- (void)retrieveAssets:(id)assets inAlbum:(id)album forPersonID:(id)personID;	// 0x339b30a9
- (void)retrieveAssets:(id)assets inAlbumWithGUID:(id)guid personID:(id)anId;	// 0x339b2cad
- (void)retryOutstandingActivities;	// 0x339b1ab9
- (void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)sendServerSideConfiguration;	// 0x339b2365
- (id)serverSideConfigurationForPersonID:(id)personID;	// 0x339b2db9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x339b3ac5
- (void)setFocusAlbum:(id)album forPersonID:(id)personID;	// 0x339b1925
- (void)setNextActivityDate:(id)date forPersonID:(id)personID;	// 0x339b2345
- (void)setPersistentObject:(id)object forKey:(id)key personID:(id)anId;	// 0x339b2ea5
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId completionBlock:(id)block;	// 0x339b2a3d
- (void)shutDown;	// 0x339b1699
- (void)start;	// 0x339b1689
- (id)statusForPersonID:(id)personID;	// 0x339b2d65
- (void)stopActivities;	// 0x339b1bb9
- (void)stopAssetDownloadsForPersonID:(id)personID;	// 0x339b1d05
- (void)subscribeToAlbum:(id)album forPersonID:(id)personID;	// 0x339b31cd
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId;	// 0x339b2799
- (void)unsubscribeFromAlbum:(id)album forPersonID:(id)personID;	// 0x339b3229
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId;	// 0x339b27f5
- (void)updateAlbum:(id)album updateAlbumFlags:(int)flags forPersonID:(id)personID;	// 0x339b3461
- (BOOL)updateAlbumIsPendingGUID:(id)guid forPersonID:(id)personID;	// 0x339b3529
- (void)willDestroyStateMachineForPersonID:(id)personID;	// 0x339b1991
@end

