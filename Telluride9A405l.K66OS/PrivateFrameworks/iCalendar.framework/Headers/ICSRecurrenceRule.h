/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <NSObject.h> // Unknown library
#import "ICSWriting.h"
#import "NSCoding.h"

@class NSMutableDictionary, ICSDateValue, NSNumber, NSArray;

@interface ICSRecurrenceRule : NSObject <NSCoding, ICSWriting> {
	int _freq;	// 4 = 0x4
	NSMutableDictionary *_parameters;	// 8 = 0x8
}
@property(retain) NSArray *byday;	// G=0x338b3421; S=0x338b3441; 
@property(retain) NSArray *byhour;	// G=0x338b33e1; S=0x338b3401; 
@property(retain) NSArray *byminute;	// G=0x338b33a1; S=0x338b33c1; 
@property(retain) NSArray *bymonth;	// G=0x338b3521; S=0x338b3541; 
@property(retain) NSArray *bymonthday;	// G=0x338b3461; S=0x338b3481; 
@property(retain) NSArray *bysecond;	// G=0x338b3361; S=0x338b3381; 
@property(retain) NSArray *bysetpos;	// G=0x338b3561; S=0x338b3581; 
@property(retain) NSArray *byweekno;	// G=0x338b34e1; S=0x338b3501; 
@property(retain) NSArray *byyearday;	// G=0x338b34a1; S=0x338b34c1; 
@property(assign) NSNumber *count;	// G=0x338b32e1; S=0x338b3301; 
@property(assign) int freq;	// G=0x338b3281; S=0x338b3291; 
@property(assign) NSNumber *interval;	// G=0x338b3321; S=0x338b3341; 
@property(retain) ICSDateValue *until;	// G=0x338b32a1; S=0x338b32c1; 
@property(assign) NSNumber *wkst;	// G=0x338b35a1; S=0x338b35c1; 
+ (id)recurrenceRuleFromICSCString:(const char *)icscstring;	// 0x3389e839
+ (id)recurrenceRuleFromICSString:(id)icsstring;	// 0x338b30e5
- (id)initWithCoder:(id)coder;	// 0x338b3661
- (id)initWithFrequency:(int)frequency;	// 0x338b3121
- (id)ICSStringWithOptions:(unsigned)options;	// 0x338b35e1
- (void)ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x338b35f1
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3388d781
// declared property getter: - (id)byday;	// 0x338b3421
// declared property getter: - (id)byhour;	// 0x338b33e1
// declared property getter: - (id)byminute;	// 0x338b33a1
// declared property getter: - (id)bymonth;	// 0x338b3521
// declared property getter: - (id)bymonthday;	// 0x338b3461
// declared property getter: - (id)bysecond;	// 0x338b3361
// declared property getter: - (id)bysetpos;	// 0x338b3561
// declared property getter: - (id)byweekno;	// 0x338b34e1
// declared property getter: - (id)byyearday;	// 0x338b34a1
- (void)cleanUpForStartDate:(id)startDate;	// 0x3389f021
// declared property getter: - (id)count;	// 0x338b32e1
- (void)dealloc;	// 0x338b3169
- (void)encodeWithCoder:(id)coder;	// 0x338b3601
// declared property getter: - (int)freq;	// 0x338b3281
// declared property getter: - (id)interval;	// 0x338b3321
- (id)occurrencesForStartDate:(id)startDate fromDate:(id)date toDate:(id)date3 inTimeZone:(id)timeZone;	// 0x338b36f9
- (id)parameterValueForName:(id)name;	// 0x338b31b5
- (void)removeParameterValueForName:(id)name;	// 0x338b3261
// declared property setter: - (void)setByday:(id)byday;	// 0x338b3441
// declared property setter: - (void)setByhour:(id)byhour;	// 0x338b3401
// declared property setter: - (void)setByminute:(id)byminute;	// 0x338b33c1
// declared property setter: - (void)setBymonth:(id)bymonth;	// 0x338b3541
// declared property setter: - (void)setBymonthday:(id)bymonthday;	// 0x338b3481
// declared property setter: - (void)setBysecond:(id)bysecond;	// 0x338b3381
// declared property setter: - (void)setBysetpos:(id)bysetpos;	// 0x338b3581
// declared property setter: - (void)setByweekno:(id)byweekno;	// 0x338b3501
// declared property setter: - (void)setByyearday:(id)byyearday;	// 0x338b34c1
// declared property setter: - (void)setCount:(id)count;	// 0x338b3301
// declared property setter: - (void)setFreq:(int)freq;	// 0x338b3291
// declared property setter: - (void)setInterval:(id)interval;	// 0x338b3341
- (void)setParameterValue:(id)value forName:(id)name;	// 0x338b31d5
// declared property setter: - (void)setUntil:(id)until;	// 0x338b32c1
// declared property setter: - (void)setWkst:(id)wkst;	// 0x338b35c1
- (void)setupProperty:(id)property withArray:(id)array;	// 0x3389ea69
- (void)setupProperty:(id)property withString:(id)string;	// 0x3389f145
// declared property getter: - (id)until;	// 0x338b32a1
// declared property getter: - (id)wkst;	// 0x338b35a1
@end

