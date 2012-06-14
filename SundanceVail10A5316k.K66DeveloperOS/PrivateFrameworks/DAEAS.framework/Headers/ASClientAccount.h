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
- (id)initWithProperties:(id)properties;	// 0x30969699
- (void)_addFoldersToDaemonMonitoring:(id)daemonMonitoring;	// 0x30969dad
- (id)_copySetFlagsActionForRequest:(id)request;	// 0x3096b0bd
- (void)_daemonDied;	// 0x30969c5d
- (void)_folderHierarchyChanged;	// 0x30969805
- (void)_foldersThatExternalClientsCareAboutChanged;	// 0x309698a5
- (void)_foldersUpdated:(id)updated;	// 0x30969a55
- (void)_logStatus:(id)status;	// 0x30969d51
- (id)_newPolicyManager;	// 0x30969661
- (void)_removeFoldersFromDaemonMonitoring:(id)daemonMonitoring;	// 0x30969e19
- (void)_reportFolderItemSyncSuccess:(BOOL)success forFolderWithID:(id)anId;	// 0x3096b805
- (void)_retryMonitoring;	// 0x30969ee1
- (void)_sync:(id)sync withConsumer:(id)consumer;	// 0x3096a621
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x3096a2fd
- (void)clearFolderHierarchyCache;	// 0x309697dd
- (void)dealloc;	// 0x30969719
- (id)delegateeInvitationICSRepresentationForMetaData:(id)metaData inFolderWithId:(id)anId outSummary:(id *)summary;	// 0x3096a245
- (id)mailboxes;	// 0x3096b6d9
- (void)monitorFoldersForUpdates:(id)updates;	// 0x30969fb9
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x3096aa59
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x3096abf5
- (void)performFolderChange:(id)change;	// 0x3096b059
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x3096b661
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x3096b165
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x3096a725
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x3096af89
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x3096a189
- (void)resolveRecipientsTask:(id)task completedWithStatus:(int)status error:(id)error queriedEmailAddressToRecpient:(id)recpient;	// 0x3096af3d
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x30969945
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x3096a6c1
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x3096a505
- (void)stopMonitoringAllFolders;	// 0x3096a135
- (void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x3096a0d1
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x3096a58d
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x3096a419
@end
