/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSSet, NSTimeZone, NSDictionary, NSString;

@interface CalDAVCollectionProperties : NSObject {
	NSString *_path;	// 4 = 0x4
	NSString *_displayName;	// 8 = 0x8
	NSString *_calendarDescription;	// 12 = 0xc
	NSString *_ctag;	// 16 = 0x10
	unsigned _calendarOrder;	// 20 = 0x14
	BOOL _isCalendar;	// 24 = 0x18
	BOOL _isEventContainer;	// 25 = 0x19
	BOOL _isTaskContainer;	// 26 = 0x1a
	BOOL _isScheduleOpaque;	// 27 = 0x1b
	unsigned _sharingStatus;	// 28 = 0x1c
	NSSet *_privileges;	// 32 = 0x20
	NSTimeZone *_timeZone;	// 36 = 0x24
	NSString *_pushKey;	// 40 = 0x28
	NSString *_owner;	// 44 = 0x2c
	NSDictionary *_bulkRequests;	// 48 = 0x30
	NSString *_calendarColor;	// 52 = 0x34
}
@property(retain) NSDictionary *bulkRequests;	// G=0x32ceafe5; S=0x32ceb475; @synthesize=_bulkRequests
@property(retain) NSString *calendarColor;	// G=0x32ceaf6d; S=0x32ceb399; @synthesize=_calendarColor
@property(retain) NSString *calendarDescription;	// G=0x32ceaf3d; S=0x32ceb341; @synthesize=_calendarDescription
@property(assign) unsigned calendarOrder;	// G=0x32cea999; S=0x32cea9a9; @synthesize=_calendarOrder
@property(retain) NSString *ctag;	// G=0x32ceaf55; S=0x32ceb36d; @synthesize=_ctag
@property(retain) NSString *displayName;	// G=0x32ceaf25; S=0x32ceb315; @synthesize=_displayName
@property(assign) BOOL isCalendar;	// G=0x32cea979; S=0x32cea989; @synthesize=_isCalendar
@property(assign) BOOL isEventContainer;	// G=0x32cea959; S=0x32cea969; @synthesize=_isEventContainer
@property(assign) BOOL isScheduleOpaque;	// G=0x32cea919; S=0x32cea929; @synthesize=_isScheduleOpaque
@property(assign) BOOL isTaskContainer;	// G=0x32cea939; S=0x32cea949; @synthesize=_isTaskContainer
@property(retain) NSString *owner;	// G=0x32ceafcd; S=0x32ceb449; @synthesize=_owner
@property(retain) NSString *path;	// G=0x32ceaf0d; S=0x32ceb2e9; @synthesize=_path
@property(retain) NSSet *privileges;	// G=0x32ceaf85; S=0x32ceb3c5; @synthesize=_privileges
@property(retain) NSString *pushKey;	// G=0x32ceafb5; S=0x32ceb41d; @synthesize=_pushKey
@property(assign) unsigned sharingStatus;	// G=0x32cea8f9; S=0x32cea909; @synthesize=_sharingStatus
@property(retain) NSTimeZone *timeZone;	// G=0x32ceaf9d; S=0x32ceb3f1; @synthesize=_timeZone
- (id)init;	// 0x32cead4d
// declared property getter: - (id)bulkRequests;	// 0x32ceafe5
// declared property getter: - (id)calendarColor;	// 0x32ceaf6d
// declared property getter: - (id)calendarDescription;	// 0x32ceaf3d
// declared property getter: - (unsigned)calendarOrder;	// 0x32cea999
// declared property getter: - (id)ctag;	// 0x32ceaf55
- (void)dealloc;	// 0x32ceac6d
// declared property getter: - (id)displayName;	// 0x32ceaf25
// declared property getter: - (BOOL)isCalendar;	// 0x32cea979
// declared property getter: - (BOOL)isEventContainer;	// 0x32cea959
// declared property getter: - (BOOL)isScheduleOpaque;	// 0x32cea919
// declared property getter: - (BOOL)isTaskContainer;	// 0x32cea939
// declared property getter: - (id)owner;	// 0x32ceafcd
// declared property getter: - (id)path;	// 0x32ceaf0d
// declared property getter: - (id)privileges;	// 0x32ceaf85
// declared property getter: - (id)pushKey;	// 0x32ceafb5
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x32ceb475
// declared property setter: - (void)setCalendarColor:(id)color;	// 0x32ceb399
// declared property setter: - (void)setCalendarDescription:(id)description;	// 0x32ceb341
// declared property setter: - (void)setCalendarOrder:(unsigned)order;	// 0x32cea9a9
// declared property setter: - (void)setCtag:(id)ctag;	// 0x32ceb36d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x32ceb315
// declared property setter: - (void)setIsCalendar:(BOOL)calendar;	// 0x32cea989
// declared property setter: - (void)setIsEventContainer:(BOOL)container;	// 0x32cea969
// declared property setter: - (void)setIsScheduleOpaque:(BOOL)opaque;	// 0x32cea929
// declared property setter: - (void)setIsTaskContainer:(BOOL)container;	// 0x32cea949
// declared property setter: - (void)setOwner:(id)owner;	// 0x32ceb449
// declared property setter: - (void)setPath:(id)path;	// 0x32ceb2e9
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x32ceb3c5
// declared property setter: - (void)setPushKey:(id)key;	// 0x32ceb41d
// declared property setter: - (void)setSharingStatus:(unsigned)status;	// 0x32cea909
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x32ceb3f1
// declared property getter: - (unsigned)sharingStatus;	// 0x32cea8f9
// declared property getter: - (id)timeZone;	// 0x32ceaf9d
@end
