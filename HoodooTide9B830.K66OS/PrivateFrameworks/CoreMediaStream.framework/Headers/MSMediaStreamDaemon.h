/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@protocol MSMediaStreamDaemonDelegate;

@interface MSMediaStreamDaemon : NSObject {
@private
	id<MSMediaStreamDaemonDelegate> _delegate;	// 4 = 0x4
	int _busyCount;	// 8 = 0x8
	int _UIBusyCount;	// 12 = 0xc
}
@property(assign, nonatomic) id<MSMediaStreamDaemonDelegate> delegate;	// G=0x30e4c915; S=0x30e4c925; @synthesize=_delegate
- (id)_boundDeleterForPersonID:(id)personID;	// 0x30e4aca1
- (id)_boundPublisherForPersonID:(id)personID;	// 0x30e4aa3d
- (id)_boundServerSideConfigManagerForPersonID:(id)personID;	// 0x30e4ad95
- (id)_boundSharingManagerForPersonID:(id)personID;	// 0x30e4abc9
- (id)_boundSubscriberForPersonID:(id)personID;	// 0x30e4aaf1
- (id)_findShareWithPersonID:(id)personID inArray:(id)array;	// 0x30e4bb95
- (void)_removeShareWithPersonID:(id)personID inArray:(id)array;	// 0x30e4bc4d
- (void)_setShares:(id)shares forPersonID:(id)personID;	// 0x30e4b621
- (void)abortAllActivityForPersonID:(id)personID;	// 0x30e4b06d
- (void)computeHashForAsset:(id)asset personID:(id)anId;	// 0x30e4b579
// declared property getter: - (id)delegate;	// 0x30e4c915
- (void)deleteAssetCollections:(id)collections forPersonID:(id)personID;	// 0x30e4c3e9
- (void)didExceedPublishQuotaForPersonID:(id)personID retryDate:(id)date;	// 0x30e4c8e9
- (void)didReceiveAuthenticationFailureForPersonID:(id)personID;	// 0x30e4c899
- (void)didReceiveAuthenticationSuccessForPersonID:(id)personID;	// 0x30e4c8c1
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)personID;	// 0x30e4c355
- (void)didReceiveNewShareState:(id)state oldShareState:(id)state2 forPersonID:(id)personID;	// 0x30e4c891
- (void)didReceiveServerSideConfigurationVersion:(id)version forPersonID:(id)personID;	// 0x30e4c275
- (BOOL)enqueueAssetCollection:(id)collection personID:(id)anId outError:(id *)error;	// 0x30e4b321
- (void)forgetPersonID:(id)anId;	// 0x30e4b1c9
- (BOOL)hasOutstandingActivity;	// 0x30e4a97d
- (id)invitationFromPushNotificationUserInfo:(id)pushNotificationUserInfo outSourcePersonID:(id *)anId outTargetPersonID:(id *)anId3;	// 0x30e4b651
- (id)invitationStringsFromInvitation:(id)invitation targetPersonID:(id)anId;	// 0x30e4b681
- (BOOL)isBusy;	// 0x30e4a799
- (BOOL)isInRetryState;	// 0x30e4a9d5
- (void)modifyShare:(id)share forPersonID:(id)personID;	// 0x30e4badd
- (id)nextActivityDate;	// 0x30e4a8e9
- (id)notificationStringsForShareStateTransitionOldShares:(id)shareStateTransitionOldShares newShares:(id)shares;	// 0x30e4bcd1
- (id)ownSubscribedStreamForPersonID:(id)personID;	// 0x30e4b5d1
- (BOOL)personIDHasOutstandingPublications:(id)publications;	// 0x30e4a99d
- (BOOL)personIDIsAcceptingInvitations:(id)invitations;	// 0x30e4bb3d
- (void)pollForSubscriptionUpdatesForPersonID:(id)personID;	// 0x30e4b3ad
- (void)pollForSubscriptionUpdatesTriggeredByPushNotification;	// 0x30e4b419
- (void)refreshServerSideConfigurationForPersonID:(id)personID;	// 0x30e4c32d
- (void)refreshShareStatesForPersonID:(id)personID;	// 0x30e4bb6d
- (void)releaseBusy;	// 0x30e4a6e9
- (void)releasePowerAssertion;	// 0x30e4c88d
- (void)releaseUIBusy;	// 0x30e4a84d
- (void)removeShare:(id)share forPersonID:(id)personID;	// 0x30e4bb0d
- (void)resetSubscriberSyncForPersonID:(id)personID;	// 0x30e4b551
- (void)respondToInvitation:(id)invitation forPersonID:(id)personID accept:(BOOL)accept;	// 0x30e4baad
- (void)retainBusy;	// 0x30e4a63d
- (void)retainPowerAssertion;	// 0x30e4c889
- (void)retainUIBusy;	// 0x30e4a7b1
- (void)retryOutstandingActivities;	// 0x30e4add1
- (void)sendInvitations:(id)invitations forPersonID:(id)personID;	// 0x30e4ba7d
- (id)serverSideConfigurationForPersonID:(id)personID;	// 0x30e4c24d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30e4c925
- (id)sharesForPersonID:(id)personID;	// 0x30e4b5f9
- (void)showInvitationFailureAlertForPersonID:(id)personID failures:(id)failures;	// 0x30e4c895
- (void)start;	// 0x30e4c441
- (void)stop;	// 0x30e4c4a1
- (void)stopAllActivities;	// 0x30e4b151
- (id)subscribedStreamsForPersonID:(id)personID;	// 0x30e4b5a9
@end
