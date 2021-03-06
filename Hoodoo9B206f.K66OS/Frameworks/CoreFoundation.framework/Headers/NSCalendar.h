/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSObject.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSCalendar : NSObject <NSCopying, NSCoding> {
}
@property(assign) unsigned firstWeekday;	// G=0x31a6670d; S=0x31a666e9; converted property
@property(retain) id gregorianStartDate;	// G=0x31a6677d; S=0x31a66779; converted property
@property(retain) id locale;	// G=0x31a6667d; S=0x31a66659; converted property
@property(assign) unsigned minimumDaysInFirstWeek;	// G=0x31a66755; S=0x31a66731; converted property
@property(retain) id timeZone;	// G=0x31a666c5; S=0x31a666a1; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x319f43e9
+ (id)currentCalendar;	// 0x319f6d6d
+ (void)initialize;	// 0x319f43bd
- (id)init;	// 0x31a66415
- (id)initWithCalendarIdentifier:(id)calendarIdentifier;	// 0x31a66611
- (id)initWithCoder:(id)coder;	// 0x31a66609
- (id)AMSymbol;	// 0x31a66bcd
- (id)PMSymbol;	// 0x31a66c51
- (unsigned char)_addComponents:(double *)components :(unsigned long)arg2 :(const char *)arg3 :(void *)arg4;	// 0x31a679cd
- (unsigned long)_cfTypeID;	// 0x31a66419
- (unsigned char)_composeAbsoluteTime:(double *)time :(const char *)arg2 :(void *)arg3;	// 0x31a6758d
- (id)_copyLocale;	// 0x31a668b1
- (id)_copyTimeZone;	// 0x31a668d9
- (unsigned char)_decomposeAbsoluteTime:(double)time :(const char *)arg2 :(void *)arg3;	// 0x31a6775d
- (unsigned char)_diffComponents:(double)components :(double)arg2 :(unsigned long)arg3 :(const char *)arg4 :(void *)arg5;	// 0x31a67bc9
- (id)_gregorianStartDate;	// 0x31a66911
- (XXStruct_K5nmsA)_maximumRangeOfUnit:(unsigned)unit;	// 0x31a673d5
- (XXStruct_K5nmsA)_minimumRangeOfUnit:(unsigned)unit;	// 0x31a67389
- (long)_ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forAT:(double)at;	// 0x31a6749d
- (XXStruct_K5nmsA)_rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forAT:(double)at;	// 0x31a67421
- (unsigned char)_rangeOfUnit:(unsigned)unit startTime:(double *)time interval:(double *)interval forAT:(double)at;	// 0x31a674f1
- (void)_setGregorianStartDate:(id)date;	// 0x31a66901
- (id)calendarIdentifier;	// 0x31a66635
- (id)components:(unsigned)components fromDate:(id)date;	// 0x31a66845
- (id)components:(unsigned)components fromDate:(id)date toDate:(id)date3 options:(unsigned)options;	// 0x31a6688d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a664f1
- (id)dateByAddingComponents:(id)components toDate:(id)date options:(unsigned)options;	// 0x31a66869
- (id)dateFromComponents:(id)components;	// 0x31a66821
- (void)encodeWithCoder:(id)coder;	// 0x31a6660d
- (id)eraSymbols;	// 0x31a66939
// converted property getter: - (unsigned)firstWeekday;	// 0x31a6670d
// converted property getter: - (id)gregorianStartDate;	// 0x31a6677d
- (unsigned)hash;	// 0x31a66445
- (BOOL)isEqual:(id)equal;	// 0x31a6646d
// converted property getter: - (id)locale;	// 0x31a6667d
- (id)longEraSymbols;	// 0x31a66cd5
- (NSRange)maximumRangeOfUnit:(unsigned)unit;	// 0x31a667a9
// converted property getter: - (unsigned)minimumDaysInFirstWeek;	// 0x31a66755
- (NSRange)minimumRangeOfUnit:(unsigned)unit;	// 0x31a66781
- (id)monthSymbols;	// 0x31a669bd
- (unsigned)ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x31a667f9
- (id)quarterSymbols;	// 0x31a67179
- (NSRange)rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x31a667d1
- (BOOL)rangeOfUnit:(unsigned)unit startDate:(id *)date interval:(double *)interval forDate:(id)date4;	// 0x31a6681d
// converted property setter: - (void)setFirstWeekday:(unsigned)weekday;	// 0x31a666e9
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x31a66779
// converted property setter: - (void)setLocale:(id)locale;	// 0x31a66659
// converted property setter: - (void)setMinimumDaysInFirstWeek:(unsigned)firstWeek;	// 0x31a66731
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x31a666a1
- (id)shortMonthSymbols;	// 0x31a66a41
- (id)shortQuarterSymbols;	// 0x31a671fd
- (id)shortStandaloneMonthSymbols;	// 0x31a66e61
- (id)shortStandaloneQuarterSymbols;	// 0x31a67305
- (id)shortStandaloneWeekdaySymbols;	// 0x31a67071
- (id)shortWeekdaySymbols;	// 0x31a66b49
- (id)standaloneMonthSymbols;	// 0x31a66ddd
- (id)standaloneQuarterSymbols;	// 0x31a67281
- (id)standaloneWeekdaySymbols;	// 0x31a66fed
// converted property getter: - (id)timeZone;	// 0x31a666c5
- (id)veryShortMonthSymbols;	// 0x31a66d59
- (id)veryShortStandaloneMonthSymbols;	// 0x31a66ee5
- (id)veryShortStandaloneWeekdaySymbols;	// 0x31a670f5
- (id)veryShortWeekdaySymbols;	// 0x31a66f69
- (id)weekdaySymbols;	// 0x31a66ac5
@end

