/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerSyncTaskGroup.h> // Unknown library

@class NSDateComponents;
@protocol CalDAVCalendar;

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
	id<CalDAVCalendar> _calendar;	// 140 = 0x8c
	BOOL _getScheduleTags;	// 144 = 0x90
	BOOL _getScheduleChanges;	// 145 = 0x91
	BOOL _syncEvents;	// 146 = 0x92
	BOOL _syncTodos;	// 147 = 0x93
	BOOL _supportsExtendedCalendarQuery;	// 148 = 0x94
	BOOL _fallbackOnMultiGetError;	// 149 = 0x95
	int _fetchingEtagState;	// 152 = 0x98
	NSDateComponents *_eventFilterStartDate;	// 156 = 0x9c
	NSDateComponents *_eventFilterEndDate;	// 160 = 0xa0
	NSDateComponents *_todoFilterStartDate;	// 164 = 0xa4
	NSDateComponents *_todoFilterEndDate;	// 168 = 0xa8
}
@property(retain) id<CalDAVCalendar> calendar;	// G=0x3358a875; S=0x3358a889; @synthesize=_calendar
@property(retain) NSDateComponents *eventFilterEndDate;	// G=0x3358a9ad; S=0x3358a9c1; @synthesize=_eventFilterEndDate
@property(retain) NSDateComponents *eventFilterStartDate;	// G=0x3358a989; S=0x3358a99d; @synthesize=_eventFilterStartDate
@property(assign) BOOL fallbackOnMultiGetError;	// G=0x3358aa19; S=0x3358aa31; @synthesize=_fallbackOnMultiGetError
@property(assign) BOOL getScheduleChanges;	// G=0x3358a8c9; S=0x3358a8e1; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x3358a899; S=0x3358a8b1; @synthesize=_getScheduleTags
@property(assign) BOOL supportsExtendedCalendarQuery;	// G=0x3358a959; S=0x3358a971; @synthesize=_supportsExtendedCalendarQuery
@property(assign) BOOL syncEvents;	// G=0x3358a8f9; S=0x3358a911; @synthesize=_syncEvents
@property(assign) BOOL syncTodos;	// G=0x3358a929; S=0x3358a941; @synthesize=_syncTodos
@property(retain) NSDateComponents *todoFilterEndDate;	// G=0x3358a9f5; S=0x3358aa09; @synthesize=_todoFilterEndDate
@property(retain) NSDateComponents *todoFilterStartDate;	// G=0x3358a9d1; S=0x3358a9e5; @synthesize=_todoFilterStartDate
- (id)initWithCalendar:(id)calendar accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x33589835
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions accountInfoProvider:(id)provider taskManager:(id)manager appSpecificCalendarItemClass:(Class)aClass;	// 0x3358979d
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes accountInfoProvider:(id)provider taskManager:(id)manager appSpecificCalendarItemClass:(Class)aClass;	// 0x3358a7ad
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3358a811
- (BOOL)_shouldFetchEventsForState:(int)state;	// 0x3358a051
- (BOOL)_shouldFetchTodosForState:(int)state;	// 0x3358a081
- (void)applyAdditionalPropertiesFromPostTask:(id)postTask;	// 0x33589f61
- (void)applyAdditionalPropertiesFromPutTask:(id)putTask;	// 0x33589ea5
// declared property getter: - (id)calendar;	// 0x3358a875
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x3358a6e9
- (id)copyGetEtagTaskWithPropertiesToFind:(id)find;	// 0x3358a0b1
- (id)copyGetTaskWithURL:(id)url;	// 0x33589d5d
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x33589a65
- (id)copyPutTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x33589dc5
- (id)dataContentType;	// 0x3358a5ad
- (void)dealloc;	// 0x335899a5
// declared property getter: - (id)eventFilterEndDate;	// 0x3358a9ad
// declared property getter: - (id)eventFilterStartDate;	// 0x3358a989
// declared property getter: - (BOOL)fallbackOnMultiGetError;	// 0x3358aa19
// declared property getter: - (BOOL)getScheduleChanges;	// 0x3358a8c9
// declared property getter: - (BOOL)getScheduleTags;	// 0x3358a899
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x3358a889
// declared property setter: - (void)setEventFilterEndDate:(id)date;	// 0x3358a9c1
// declared property setter: - (void)setEventFilterStartDate:(id)date;	// 0x3358a99d
// declared property setter: - (void)setFallbackOnMultiGetError:(BOOL)error;	// 0x3358aa31
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x3358a8e1
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x3358a8b1
// declared property setter: - (void)setSupportsExtendedCalendarQuery:(BOOL)query;	// 0x3358a971
// declared property setter: - (void)setSyncEvents:(BOOL)events;	// 0x3358a911
// declared property setter: - (void)setSyncTodos:(BOOL)todos;	// 0x3358a941
// declared property setter: - (void)setTodoFilterEndDate:(id)date;	// 0x3358aa09
// declared property setter: - (void)setTodoFilterStartDate:(id)date;	// 0x3358a9e5
- (BOOL)shouldFetchMoreETags;	// 0x3358a01d
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x3358a5b9
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x3358a959
// declared property getter: - (BOOL)syncEvents;	// 0x3358a8f9
// declared property getter: - (BOOL)syncTodos;	// 0x3358a929
// declared property getter: - (id)todoFilterEndDate;	// 0x3358a9f5
// declared property getter: - (id)todoFilterStartDate;	// 0x3358a9d1
@end

