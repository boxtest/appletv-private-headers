/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString, ICSDateValue;

@interface ICSAttendeeComment : ICSProperty {
}
@property(retain) NSString *x_calendarserver_attendee_ref;	// G=0x35dad66d; S=0x35dad64d; 
@property(retain) ICSDateValue *x_calendarserver_dtstamp;	// G=0x35dad6ad; S=0x35dad68d; 
- (id)initWithComment:(id)comment;	// 0x35dad609
- (void)setComment:(id)comment;	// 0x35dad639
// declared property setter: - (void)setX_calendarserver_attendee_ref:(id)ref;	// 0x35dad64d
// declared property setter: - (void)setX_calendarserver_dtstamp:(id)dtstamp;	// 0x35dad68d
// declared property getter: - (id)x_calendarserver_attendee_ref;	// 0x35dad66d
// declared property getter: - (id)x_calendarserver_dtstamp;	// 0x35dad6ad
@end

