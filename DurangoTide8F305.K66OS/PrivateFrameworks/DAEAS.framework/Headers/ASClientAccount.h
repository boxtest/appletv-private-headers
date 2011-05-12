/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASAccount.h"

@class NSMutableSet;

@interface ASClientAccount : ASAccount {
	NSMutableSet *_daemonMonitoredFolders;	// 96 = 0x60
	NSMutableSet *_foldersToRetryForMonitoring;	// 100 = 0x64
	NSMutableSet *_folderIDsOnRemoteHold;	// 104 = 0x68
}
- (id)initWithProperties:(id)properties;	// 0x30309981
- (void)_addFoldersToDaemonMonitoring:(id)daemonMonitoring;	// 0x303096c9
- (id)_copySetFlagsCommandForRequest:(id)request;	// 0x303091b9
- (void)_daemonDied;	// 0x3030a8d1
- (void)_folderHierarchyChanged;	// 0x303097c1
- (void)_foldersThatExternalClientsCareAboutChanged;	// 0x30309725
- (void)_foldersUpdated:(id)updated;	// 0x3030a9a5
- (void)_logStatus:(id)status;	// 0x3030a889
- (id)_newPolicyManager;	// 0x30309881
- (void)_removeFoldersFromDaemonMonitoring:(id)daemonMonitoring;	// 0x3030a5bd
- (void)_reportFolderItemSyncSuccess:(BOOL)success forFolderWithID:(id)anId;	// 0x303090e1
- (void)_retryMonitoring;	// 0x303095fd
- (void)_sync:(id)sync withConsumer:(id)consumer;	// 0x30309435
- (void)clearFolderHierarchyCache;	// 0x3030985d
- (void)dealloc;	// 0x303098d1
- (id)mailboxes;	// 0x3030ae0d
- (void)monitorFoldersForUpdates:(id)updates;	// 0x3030ab75
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x30309239
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x30309fc9
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x30309141
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x303099f5
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x3030a2bd
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x3030acdd
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x3030a669
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x303093d5
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x303094d1
- (void)stopMonitoringAllFolders;	// 0x30309551
- (void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x3030959d
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x3030a755
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x3030a7e1
@end
