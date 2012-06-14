/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASAccountActorMessages.h"
#import <AKActor.h> // Unknown library


@interface ASAccountActor : AKActor <ASAccountActorMessages> {
}
- (id)initWithDAAccount:(id)daaccount;	// 0x345e8b99
- (oneway void)_accountPasswordChanged;	// 0x34601e89
- (oneway void)_daemonDiedNotification:(id)notification;	// 0x34601c11
- (oneway void)_folderHierarchyChanged;	// 0x34601d89
- (oneway void)_folderUpdatedNotification:(id)notification;	// 0x34601c8d
- (oneway void)_foldersThatExternalClientsCareAboutChanged;	// 0x34601e09
- (oneway void)_newASPolicyKeyNotification:(id)notification;	// 0x34601d09
- (oneway void)cancelAllSearchQueries;	// 0x3460199d
- (oneway void)cancelSearchQuery:(id)query;	// 0x34601921
- (oneway void)cancelTaskWithID:(int)anId;	// 0x34601829
- (id)deletedItemsFolder;	// 0x345e8f59
- (id)encryptionIdentityPersistentReference;	// 0x34600ec1
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)dataclasses withTag:(id *)tag;	// 0x346012ad
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)tag;	// 0x3460122d
- (id)foldersTag;	// 0x346011ad
- (BOOL)generatesBulletins;	// 0x34600cc9
- (id)inboxFolder;	// 0x345e8e59
- (BOOL)isHotmailAccount;	// 0x34601a99
- (int)mailNumberOfPastDaysToSync;	// 0x34600b49
- (id)mailboxes;	// 0x345e8c9d
- (oneway void)monitorFoldersForUpdates:(id)updates;	// 0x34601039
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x3460162d
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x346016ad
- (void)performFolderChange:(id)change;	// 0x346017ad
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x346014ad
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x3460152d
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x346015ad
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x3460172d
- (oneway void)performSearchQuery:(id)query;	// 0x346018a5
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x346013ad
- (BOOL)searchQueriesRunning;	// 0x34601a19
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x3460142d
- (id)sentItemsFolder;	// 0x345e8ed9
- (oneway void)setAccount:(id)account;	// 0x34601b19
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x34600f41
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x3460132d
- (oneway void)setGeneratesBulletins:(BOOL)bulletins;	// 0x34600d49
- (oneway void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x34600fbd
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x34600e45
- (oneway void)shutdown;	// 0x34601b95
- (id)signingIdentityPersistentReference;	// 0x34600dc5
- (oneway void)startup;	// 0x345e8c21
- (oneway void)stopMonitoringAllFolders;	// 0x34601131
- (oneway void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x346010b5
- (int)supportsEmailFlagging;	// 0x34600c49
- (int)supportsMailboxSearch;	// 0x34600bc9
@end
