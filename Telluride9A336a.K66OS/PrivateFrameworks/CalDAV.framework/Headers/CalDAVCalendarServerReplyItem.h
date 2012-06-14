/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVLeafItem, NSMutableSet;

@interface CalDAVCalendarServerReplyItem : CoreDAVItem {
	CoreDAVLeafItem *_attendee;	// 24 = 0x18
	NSMutableSet *_recurrences;	// 28 = 0x1c
}
@property(retain) CoreDAVLeafItem *attendee;	// G=0x338d084d; S=0x338d0829; @synthesize=_attendee
@property(retain) NSMutableSet *recurrences;	// G=0x338d0889; S=0x338d0865; @synthesize=_recurrences
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x338d07a5
- (void)addRecurrence:(id)recurrence;	// 0x338d08a1
// declared property getter: - (id)attendee;	// 0x338d084d
- (id)copyParseRules;	// 0x338d08cd
- (void)dealloc;	// 0x338d0a91
// declared property getter: - (id)recurrences;	// 0x338d0889
// declared property setter: - (void)setAttendee:(id)attendee;	// 0x338d0829
// declared property setter: - (void)setRecurrences:(id)recurrences;	// 0x338d0865
@end
