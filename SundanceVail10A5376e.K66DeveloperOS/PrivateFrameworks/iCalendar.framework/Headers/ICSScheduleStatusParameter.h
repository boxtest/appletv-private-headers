/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSPredefinedValue.h"


@interface ICSScheduleStatusParameter : ICSPredefinedValue {
}
+ (id)scheduleStatusParameterFromCode:(int)code;	// 0x35d89c1d
+ (id)scheduleStatusParameterFromICSString:(id)icsstring;	// 0x35d9d3c1
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x35d8cf35
@end
