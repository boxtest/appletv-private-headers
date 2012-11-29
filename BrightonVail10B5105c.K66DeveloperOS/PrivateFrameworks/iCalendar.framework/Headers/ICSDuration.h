/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library


@interface ICSDuration : NSObject <NSCoding> {
	double _duration;	// 4 = 0x4
}
+ (id)durationFromICSString:(id)icsstring;	// 0x31b561a5
+ (id)durationFromRFC2445UTF8String:(const char *)rfc2445UTF8String;	// 0x31b55f99
+ (id)generateDurationFromICSString:(id)icsstring;	// 0x31b45839
- (id)initWithCoder:(id)coder;	// 0x31b458d5
- (id)initWithWeeks:(int)weeks days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x31b4567d
- (id)ICSStringWithOptions:(unsigned)options;	// 0x31b45855
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x31b49cc1
- (int)days;	// 0x31b45745
- (void)encodeWithCoder:(id)coder;	// 0x31b45895
- (int)hours;	// 0x31b45781
- (BOOL)isNegative;	// 0x31b45815
- (int)minutes;	// 0x31b457b9
- (int)seconds;	// 0x31b457ed
- (double)timeInterval;	// 0x31b456fd
- (int)weeks;	// 0x31b45715
@end
