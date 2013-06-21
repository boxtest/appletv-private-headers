/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASAccount.h"

@class NSMutableSet;

@interface ASClientAccount : ASAccount {
	NSMutableSet *_daemonMonitoredFolders;	// 88 = 0x58
	NSMutableSet *_foldersToRetryForMonitoring;	// 92 = 0x5c
	NSMutableSet *_folderIDsOnRemoteHold;	// 96 = 0x60
}
- (id)initWithProperties:(id)properties;	// 0x339f83b9
- (void)_addFoldersToDaemonMonitoring:(id)daemonMonitoring;	// 0x339f8acd
- (id)_copySetFlagsActionForRequest:(id)request;	// 0x339f9ddd
- (void)_daemonDied;	// 0x339f897d
- (void)_folderHierarchyChanged;	// 0x339f8525
- (void)_foldersThatExternalClientsCareAboutChanged;	// 0x339f85c5
- (void)_foldersUpdated:(id)updated;	// 0x339f8775
- (void)_logStatus:(id)status;	// 0x339f8a71
- (id)_newPolicyManager;	// 0x339f8381
- (void)_removeFoldersFromDaemonMonitoring:(id)daemonMonitoring;	// 0x339f8b39
- (void)_reportFolderItemSyncSuccess:(BOOL)success forFolderWithID:(id)anId;	// 0x339fa525
- (void)_retryMonitoring;	// 0x339f8c01
- (void)_sync:(id)sync withConsumer:(id)consumer;	// 0x339f9341
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x339f901d
- (void)clearFolderHierarchyCache;	// 0x339f84fd
- (void)dealloc;	// 0x339f8439
- (id)delegateeInvitationICSRepresentationForMetaData:(id)metaData inFolderWithId:(id)anId outSummary:(id *)summary;	// 0x339f8f65
- (id)mailboxes;	// 0x339fa3f9
- (void)monitorFoldersForUpdates:(id)updates;	// 0x339f8cd9
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x339f9779
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x339f9915
- (void)performFolderChange:(id)change;	// 0x339f9d79
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x339fa381
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x339f9e85
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x339f9445
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x339f9ca9
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x339f8ea9
- (void)resolveRecipientsTask:(id)task completedWithStatus:(int)status error:(id)error queriedEmailAddressToRecpient:(id)recpient;	// 0x339f9c5d
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x339f8665
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x339f93e1
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x339f9225
- (void)stopMonitoringAllFolders;	// 0x339f8e55
- (void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x339f8df1
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x339f92ad
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x339f9139
@end
