/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPostTask.h> // Unknown library

@class NSString, NSArray, CalDAVScheduleResponseItem;

@interface CalDAVScheduleTask : CoreDAVPostTask {
	NSArray *_attendees;	// 148 = 0x94
	NSString *_originator;	// 152 = 0x98
	CalDAVScheduleResponseItem *_scheduleResponse;	// 156 = 0x9c
}
@property(retain) NSArray *attendees;	// G=0x338df01d; S=0x338deff9; @synthesize=_attendees
@property(retain) NSString *originator;	// G=0x338defe1; S=0x338defbd; @synthesize=_originator
@property(retain) CalDAVScheduleResponseItem *scheduleResponse;	// G=0x338defa5; S=0x338def81; @synthesize=_scheduleResponse
- (id)initWithOriginator:(id)originator attendees:(id)attendees outboxURL:(id)url payload:(id)payload;	// 0x338df209
- (id)additionalHeaderValues;	// 0x338df109
// declared property getter: - (id)attendees;	// 0x338df01d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x338dee75
- (void)dealloc;	// 0x338def0d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x338df035
// declared property getter: - (id)originator;	// 0x338defe1
// declared property getter: - (id)scheduleResponse;	// 0x338defa5
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x338deff9
// declared property setter: - (void)setOriginator:(id)originator;	// 0x338defbd
// declared property setter: - (void)setScheduleResponse:(id)response;	// 0x338def81
@end
