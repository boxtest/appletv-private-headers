/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerSyncTaskGroup.h> // Unknown library


@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
}
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3516008d
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x351600f1
- (id)copyGetTaskWithURL:(id)url;	// 0x351601b5
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x35160169
@end

