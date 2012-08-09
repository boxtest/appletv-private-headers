/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding> {
}
@property(retain) id calendar;	// G=0x369c3d65; S=0x369c3d71; converted property
@property(assign) int day;	// G=0x369c3ee9; S=0x369c3a61; converted property
@property(assign) int era;	// G=0x369c3ea5; S=0x369c3a31; converted property
@property(assign) int hour;	// G=0x369c3ef5; S=0x369c3f01; converted property
@property(assign, getter=isLeapMonth) BOOL leapMonth;	// G=0x36a433d1; S=0x36a433f1; converted property
@property(assign) int minute;	// G=0x369c3f11; S=0x369c3f21; converted property
@property(assign) int month;	// G=0x369c3edd; S=0x369c3a51; converted property
@property(assign) int nanosecond;	// G=0x369c3f51; S=0x369c3f61; converted property
@property(assign) int quarter;	// G=0x369c3ebd; S=0x369c3ec9; converted property
@property(assign) int second;	// G=0x369c3f35; S=0x369c3f41; converted property
@property(retain) id timeZone;	// G=0x369c3e01; S=0x369c3e11; converted property
@property(assign) int week;	// G=0x369c3f71; S=0x369c3f81; converted property
@property(assign) int weekOfMonth;	// G=0x369c3fb1; S=0x369c3fc1; converted property
@property(assign) int weekOfYear;	// G=0x369c3f95; S=0x369c3fa1; converted property
@property(assign) int weekday;	// G=0x369c3ff5; S=0x369c4001; converted property
@property(assign) int weekdayOrdinal;	// G=0x369c4011; S=0x369c4021; converted property
@property(assign) int year;	// G=0x369c3eb1; S=0x369c3a41; converted property
@property(assign) int yearForWeekOfYear;	// G=0x369c3fd5; S=0x369c3fe1; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x369c39e9
+ (BOOL)supportsSecureCoding;	// 0x36a433c1
- (id)init;	// 0x369c39f1
- (id)initWithCoder:(id)coder;	// 0x36a433c5
// converted property getter: - (id)calendar;	// 0x369c3d65
- (id)copyWithZone:(NSZone *)zone;	// 0x369c3a71
- (id)date;	// 0x36a43405
// converted property getter: - (int)day;	// 0x369c3ee9
- (void)dealloc;	// 0x369c44f1
- (id)description;	// 0x36a4346d
- (void)encodeWithCoder:(id)coder;	// 0x36a433c9
// converted property getter: - (int)era;	// 0x369c3ea5
- (unsigned)hash;	// 0x36a431d9
// converted property getter: - (int)hour;	// 0x369c3ef5
- (BOOL)isEqual:(id)equal;	// 0x369c4865
// converted property getter: - (BOOL)isLeapMonth;	// 0x36a433d1
// converted property getter: - (int)minute;	// 0x369c3f11
// converted property getter: - (int)month;	// 0x369c3edd
// converted property getter: - (int)nanosecond;	// 0x369c3f51
// converted property getter: - (int)quarter;	// 0x369c3ebd
// converted property getter: - (int)second;	// 0x369c3f35
// converted property setter: - (void)setCalendar:(id)calendar;	// 0x369c3d71
// converted property setter: - (void)setDay:(int)day;	// 0x369c3a61
// converted property setter: - (void)setEra:(int)era;	// 0x369c3a31
// converted property setter: - (void)setHour:(int)hour;	// 0x369c3f01
// converted property setter: - (void)setLeapMonth:(BOOL)month;	// 0x36a433f1
// converted property setter: - (void)setMinute:(int)minute;	// 0x369c3f21
// converted property setter: - (void)setMonth:(int)month;	// 0x369c3a51
// converted property setter: - (void)setNanosecond:(int)nanosecond;	// 0x369c3f61
// converted property setter: - (void)setQuarter:(int)quarter;	// 0x369c3ec9
// converted property setter: - (void)setSecond:(int)second;	// 0x369c3f41
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x369c3e11
// converted property setter: - (void)setWeek:(int)week;	// 0x369c3f81
// converted property setter: - (void)setWeekOfMonth:(int)month;	// 0x369c3fc1
// converted property setter: - (void)setWeekOfYear:(int)year;	// 0x369c3fa1
// converted property setter: - (void)setWeekday:(int)weekday;	// 0x369c4001
// converted property setter: - (void)setWeekdayOrdinal:(int)ordinal;	// 0x369c4021
// converted property setter: - (void)setYear:(int)year;	// 0x369c3a41
// converted property setter: - (void)setYearForWeekOfYear:(int)year;	// 0x369c3fe1
// converted property getter: - (id)timeZone;	// 0x369c3e01
// converted property getter: - (int)week;	// 0x369c3f71
// converted property getter: - (int)weekOfMonth;	// 0x369c3fb1
// converted property getter: - (int)weekOfYear;	// 0x369c3f95
// converted property getter: - (int)weekday;	// 0x369c3ff5
// converted property getter: - (int)weekdayOrdinal;	// 0x369c4011
// converted property getter: - (int)year;	// 0x369c3eb1
// converted property getter: - (int)yearForWeekOfYear;	// 0x369c3fd5
@end
