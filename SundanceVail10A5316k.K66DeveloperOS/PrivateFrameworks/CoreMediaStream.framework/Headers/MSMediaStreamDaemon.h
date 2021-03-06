/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSDaemon.h"

@class NSCountedSet;
@protocol MSMediaStreamDaemonDelegate;

@interface MSMediaStreamDaemon : MSDaemon {
@private
	id<MSMediaStreamDaemonDelegate> _delegate;	// 20 = 0x14
	NSCountedSet *_retainedObjects;	// 24 = 0x18
}
@property(assign, nonatomic) id<MSMediaStreamDaemonDelegate> delegate;	// G=0x33985e19; S=0x33985e29; @synthesize=_delegate
- (id)init;	// 0x33983289
- (void).cxx_destruct;	// 0x33985e39
- (id)_boundDeleterForPersonID:(id)personID;	// 0x339838cd
- (id)_boundPublisherForPersonID:(id)personID;	// 0x33983559
- (id)_boundServerSideConfigManagerForPersonID:(id)personID;	// 0x33983a3d
- (id)_boundSharingManagerForPersonID:(id)personID;	// 0x3398379d
- (id)_boundSubscriberForPersonID:(id)personID;	// 0x3398366d
- (id)_findShareWithPersonID:(id)personID inArray:(id)array;	// 0x33984cd5
- (void)_removeShareWithPersonID:(id)personID inArray:(id)array;	// 0x33984df9
- (void)_setShares:(id)shares forPersonID:(id)personID;	// 0x3398453d
- (void)abortAllActivityForPersonID:(id)personID;	// 0x33983d85
- (void)computeHashForAsset:(id)asset personID:(id)anId;	// 0x33984409
// declared property getter: - (id)delegate;	// 0x33985e19
- (void)deleteAssetCollections:(id)collections forPersonID:(id)personID;	// 0x339857bd
- (void)didExceedPublishQuotaForPersonID:(id)personID retryDate:(id)date;	// 0x33985dd1
- (void)didIdle;	// 0x339834d9
- (void)didReceiveAuthenticationFailureForPersonID:(id)personID;	// 0x33985d69
- (void)didReceiveAuthenticationSuccessForPersonID:(id)personID;	// 0x33985d9d
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)personID;	// 0x339856f9
- (void)didReceiveNewShareState:(id)state oldShareState:(id)state2 forPersonID:(id)personID;	// 0x33985d61
- (void)didReceiveServerSideConfigurationVersion:(id)version forPersonID:(id)personID;	// 0x339855cd
- (void)didUnidle;	// 0x33983519
- (BOOL)enqueueAssetCollection:(id)collection personID:(id)anId outError:(id *)error;	// 0x33984119
- (void)forgetPersonID:(id)anId;	// 0x33983f3d
- (BOOL)hasOutstandingActivity;	// 0x339833e1
- (id)invitationFromPushNotificationUserInfo:(id)pushNotificationUserInfo outSourcePersonID:(id *)anId outTargetPersonID:(id *)anId3;	// 0x33984599
- (id)invitationStringsFromInvitation:(id)invitation targetPersonID:(id)anId;	// 0x339845c9
- (BOOL)isInRetryState;	// 0x33983471
- (void)modifyShare:(id)share forPersonID:(id)personID;	// 0x33984b95
- (id)nextActivityDate;	// 0x33983301
- (id)notificationStringsForShareStateTransitionOldShares:(id)shareStateTransitionOldShares newShares:(id)shares;	// 0x33984ecd
- (id)ownSubscribedStreamForPersonID:(id)personID;	// 0x339844ad
- (BOOL)personIDHasOutstandingPublications:(id)publications;	// 0x3398340d
- (BOOL)personIDIsAcceptingInvitations:(id)invitations;	// 0x33984c4d
- (void)pollForSubscriptionUpdatesForPersonID:(id)personID;	// 0x339841d5
- (void)pollForSubscriptionUpdatesTriggeredByPushNotification;	// 0x33984261
- (void)refreshServerSideConfigurationForPersonID:(id)personID;	// 0x339856c1
- (void)refreshShareStatesForPersonID:(id)personID;	// 0x33984c9d
- (void)removeShare:(id)share forPersonID:(id)personID;	// 0x33984bf1
- (void)resetSubscriberSyncForPersonID:(id)personID;	// 0x339843d1
- (void)respondToInvitation:(id)invitation forPersonID:(id)personID accept:(BOOL)accept;	// 0x33984b39
- (void)retryOutstandingActivities;	// 0x33983a85
- (void)sendInvitations:(id)invitations forPersonID:(id)personID;	// 0x33984add
- (id)serverSideConfigurationForPersonID:(id)personID;	// 0x33985585
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33985e29
- (id)sharesForPersonID:(id)personID;	// 0x339844f5
- (void)showInvitationFailureAlertForPersonID:(id)personID failures:(id)failures;	// 0x33985d65
- (void)start;	// 0x3398584d
- (void)stop;	// 0x339858ad
- (void)stopAllActivities;	// 0x33983ec1
- (id)subscribedStreamsForPersonID:(id)personID;	// 0x33984465
@end

