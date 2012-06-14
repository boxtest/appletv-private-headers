/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPropFindTask.h> // Unknown library

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask {
	BOOL _syncEvents;	// 128 = 0x80
	BOOL _syncTodos;	// 129 = 0x81
	NSDateComponents *_eventFilterStartDate;	// 132 = 0x84
	NSDateComponents *_eventFilterEndDate;	// 136 = 0x88
	NSDateComponents *_todoFilterStartDate;	// 140 = 0x8c
	NSDateComponents *_todoFilterEndDate;	// 144 = 0x90
}
@property(retain) NSDateComponents *eventFilterEndDate;	// G=0x35968c69; S=0x35968c45; @synthesize=_eventFilterEndDate
@property(retain) NSDateComponents *eventFilterStartDate;	// G=0x35968c2d; S=0x35968c09; @synthesize=_eventFilterStartDate
@property(assign) BOOL syncEvents;	// G=0x359686bd; S=0x359686cd; @synthesize=_syncEvents
@property(assign) BOOL syncTodos;	// G=0x3596869d; S=0x359686ad; @synthesize=_syncTodos
@property(retain) NSDateComponents *todoFilterEndDate;	// G=0x35968ce1; S=0x35968cbd; @synthesize=_todoFilterEndDate
@property(retain) NSDateComponents *todoFilterStartDate;	// G=0x35968ca5; S=0x35968c81; @synthesize=_todoFilterStartDate
- (void)_appendComponentFiltersToXMLData:(id)xmldata;	// 0x35968915
- (void)_appendTimeRangeFilterToXMLData:(id)xmldata startDate:(id)date endDate:(id)date3;	// 0x359687f1
- (id)_icsDateStringForNSDateComponents:(id)nsdateComponents;	// 0x359686dd
- (void)dealloc;	// 0x35968b81
- (id)description;	// 0x35968f65
// declared property getter: - (id)eventFilterEndDate;	// 0x35968c69
// declared property getter: - (id)eventFilterStartDate;	// 0x35968c2d
- (id)httpMethod;	// 0x35968691
- (id)requestBody;	// 0x35968cf9
// declared property setter: - (void)setEventFilterEndDate:(id)date;	// 0x35968c45
// declared property setter: - (void)setEventFilterStartDate:(id)date;	// 0x35968c09
// declared property setter: - (void)setSyncEvents:(BOOL)events;	// 0x359686cd
// declared property setter: - (void)setSyncTodos:(BOOL)todos;	// 0x359686ad
// declared property setter: - (void)setTodoFilterEndDate:(id)date;	// 0x35968cbd
// declared property setter: - (void)setTodoFilterStartDate:(id)date;	// 0x35968c81
// declared property getter: - (BOOL)syncEvents;	// 0x359686bd
// declared property getter: - (BOOL)syncTodos;	// 0x3596869d
// declared property getter: - (id)todoFilterEndDate;	// 0x35968ce1
// declared property getter: - (id)todoFilterStartDate;	// 0x35968ca5
@end
