/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVOperation.h"

@class NSError, NSString;
@protocol CalDAVCalendar, CalDAVCalendarSyncDelegate;

@interface CalDAVCalendarSyncOperation : CalDAVOperation {
	BOOL _getScheduleTags;	// 56 = 0x38
	BOOL _getScheduleChanges;	// 57 = 0x39
	NSError *_savedError;	// 60 = 0x3c
	NSString *_nextCtag;	// 64 = 0x40
	id<CalDAVCalendar> _calendar;	// 68 = 0x44
}
@property(assign, nonatomic) id<CalDAVCalendarSyncDelegate> delegate;	// @dynamic
@property(assign) BOOL getScheduleChanges;	// G=0x32ed1531; S=0x32ed1549; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x32ed1501; S=0x32ed1519; @synthesize=_getScheduleTags
- (id)initWithPrincipal:(id)principal calendar:(id)calendar nextCtag:(id)ctag;	// 0x32ed0141
- (id)_distantFutureEndDate;	// 0x32ed02a9
- (void)_finishWithError:(id)error;	// 0x32ed021d
- (void)_processAddedOrModified:(id)modified removed:(id)removed;	// 0x32ed0a25
- (void)_reallySyncCalendar;	// 0x32ed03b5
- (void)_syncEventsForMerge;	// 0x32ed0a65
- (void)containerSyncTask:(id)task completedWithNewCTag:(id)newCTag newSyncToken:(id)token addedOrModified:(id)modified removed:(id)removed error:(id)error;	// 0x32ed1109
- (void)containerSyncTask:(id)task retrievedAddedOrModifiedActions:(id)actions removed:(id)removed;	// 0x32ed10f1
- (id)copyAllLocalURLsInFolderWithURL:(id)url;	// 0x32ed0d29
- (id)copyLocalETagsForURLs:(id)urls inFolderWithURL:(id)url;	// 0x32ed0c29
- (void)dealloc;	// 0x32ed01b9
// declared property getter: - (BOOL)getScheduleChanges;	// 0x32ed1531
// declared property getter: - (BOOL)getScheduleTags;	// 0x32ed1501
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x32ed1549
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x32ed1519
- (BOOL)setLocalETag:(id)tag forItemWithURL:(id)url inFolderWithURL:(id)url3;	// 0x32ed0e25
- (BOOL)setLocalScheduleTag:(id)tag forItemWithURL:(id)url inFolderWithURL:(id)url3;	// 0x32ed0f19
- (void)syncCalendar;	// 0x32ed07e1
- (BOOL)syncDeleteTask:(id)task error:(id)error;	// 0x32ed1081
- (BOOL)syncPutTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x32ed100d
@end
