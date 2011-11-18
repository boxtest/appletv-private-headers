/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVCalendar.h"


@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar {
}
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal title:(id)title;	// 0x3023ca9d
- (void *)_copyEventActionWithURL:(id)url;	// 0x3023cc39
- (BOOL)_removeInvitationWithURL:(id)url;	// 0x3023d4c5
- (id)allEventURLs;	// 0x3023cb01
- (BOOL)deleteResourcesAtURLs:(id)urls;	// 0x3023d5e9
- (id)etagForInvitationWithURL:(id)url;	// 0x3023d01d
- (id)etagsForEventURLs:(id)eventURLs;	// 0x3023d061
- (BOOL)isScheduleInbox;	// 0x3023cafd
- (void)removeInvitationWithURL:(id)url;	// 0x3023ccc9
- (void)setETag:(id)tag forInvitationAtURL:(id)url uniqueIdentifier:(id)identifier;	// 0x3023cd85
- (BOOL)updateResourcesFromServer:(id)server;	// 0x3023d1e1
@end

