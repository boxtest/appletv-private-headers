/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CalDAVCalendarServerReplyItem, CalDAVCalendarServerUpdateItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerCancelItem;

@interface CalDAVCalendarServerActionItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_create;	// 28 = 0x1c
	CalDAVCalendarServerUpdateItem *_update;	// 32 = 0x20
	CalDAVCalendarServerCancelItem *_cancel;	// 36 = 0x24
	CalDAVCalendarServerReplyItem *_reply;	// 40 = 0x28
}
@property(retain) CalDAVCalendarServerCancelItem *cancel;	// G=0x337fe8a5; S=0x337fe8b9; @synthesize=_cancel
@property(retain) CoreDAVItemWithNoChildren *create;	// G=0x337fe839; S=0x337fe84d; @synthesize=_create
@property(retain) CalDAVCalendarServerReplyItem *reply;	// G=0x337fe881; S=0x337fe895; @synthesize=_reply
@property(retain) CalDAVCalendarServerUpdateItem *update;	// G=0x337fe85d; S=0x337fe871; @synthesize=_update
- (id)init;	// 0x337fe431
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x337fe45d
// declared property getter: - (id)cancel;	// 0x337fe8a5
- (id)copyParseRules;	// 0x337fe58d
// declared property getter: - (id)create;	// 0x337fe839
- (void)dealloc;	// 0x337fe4e1
- (id)description;	// 0x337fe561
// declared property getter: - (id)reply;	// 0x337fe881
// declared property setter: - (void)setCancel:(id)cancel;	// 0x337fe8b9
// declared property setter: - (void)setCreate:(id)create;	// 0x337fe84d
// declared property setter: - (void)setReply:(id)reply;	// 0x337fe895
// declared property setter: - (void)setUpdate:(id)update;	// 0x337fe871
// declared property getter: - (id)update;	// 0x337fe85d
@end
