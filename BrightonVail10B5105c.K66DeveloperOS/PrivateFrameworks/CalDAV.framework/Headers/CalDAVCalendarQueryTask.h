/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPropFindTask.h> // Unknown library

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask {
	BOOL _syncEvents;	// 144 = 0x90
	BOOL _syncTodos;	// 145 = 0x91
	NSDateComponents *_eventFilterStartDate;	// 148 = 0x94
	NSDateComponents *_eventFilterEndDate;	// 152 = 0x98
	NSDateComponents *_todoFilterStartDate;	// 156 = 0x9c
	NSDateComponents *_todoFilterEndDate;	// 160 = 0xa0
}
@property(retain) NSDateComponents *eventFilterEndDate;	// G=0x342342b1; S=0x342342c5; @synthesize=_eventFilterEndDate
@property(retain) NSDateComponents *eventFilterStartDate;	// G=0x3423428d; S=0x342342a1; @synthesize=_eventFilterStartDate
@property(assign) BOOL syncEvents;	// G=0x3423422d; S=0x34234245; @synthesize=_syncEvents
@property(assign) BOOL syncTodos;	// G=0x3423425d; S=0x34234275; @synthesize=_syncTodos
@property(retain) NSDateComponents *todoFilterEndDate;	// G=0x342342f9; S=0x3423430d; @synthesize=_todoFilterEndDate
@property(retain) NSDateComponents *todoFilterStartDate;	// G=0x342342d5; S=0x342342e9; @synthesize=_todoFilterStartDate
- (void)_appendComponentFiltersToXMLData:(id)xmldata;	// 0x34233d75
- (void)_appendTimeRangeFilterToXMLData:(id)xmldata startDate:(id)date endDate:(id)date3;	// 0x34233c61
- (id)_icsDateStringForNSDateComponents:(id)nsdateComponents;	// 0x34233b3d
- (void)dealloc;	// 0x34233759
- (id)description;	// 0x342337e5
// declared property getter: - (id)eventFilterEndDate;	// 0x342342b1
// declared property getter: - (id)eventFilterStartDate;	// 0x3423428d
- (id)httpMethod;	// 0x34233b31
- (id)requestBody;	// 0x34233fc9
// declared property setter: - (void)setEventFilterEndDate:(id)date;	// 0x342342c5
// declared property setter: - (void)setEventFilterStartDate:(id)date;	// 0x342342a1
// declared property setter: - (void)setSyncEvents:(BOOL)events;	// 0x34234245
// declared property setter: - (void)setSyncTodos:(BOOL)todos;	// 0x34234275
// declared property setter: - (void)setTodoFilterEndDate:(id)date;	// 0x3423430d
// declared property setter: - (void)setTodoFilterStartDate:(id)date;	// 0x342342e9
// declared property getter: - (BOOL)syncEvents;	// 0x3423422d
// declared property getter: - (BOOL)syncTodos;	// 0x3423425d
// declared property getter: - (id)todoFilterEndDate;	// 0x342342f9
// declared property getter: - (id)todoFilterStartDate;	// 0x342342d5
@end

