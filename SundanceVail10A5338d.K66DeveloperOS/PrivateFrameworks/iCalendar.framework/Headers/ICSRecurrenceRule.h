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
@property(retain) NSArray *byday;	// G=0x36561205; S=0x36561225; 
@property(retain) NSArray *byhour;	// G=0x365611c5; S=0x365611e5; 
@property(retain) NSArray *byminute;	// G=0x36561185; S=0x365611a5; 
@property(retain) NSArray *bymonth;	// G=0x36561305; S=0x36561325; 
@property(retain) NSArray *bymonthday;	// G=0x36561245; S=0x36561265; 
@property(retain) NSArray *bysecond;	// G=0x36561145; S=0x36561165; 
@property(retain) NSArray *bysetpos;	// G=0x36561345; S=0x36561365; 
@property(retain) NSArray *byweekno;	// G=0x365612c5; S=0x365612e5; 
@property(retain) NSArray *byyearday;	// G=0x36561285; S=0x365612a5; 
@property(assign) NSNumber *count;	// G=0x365610c5; S=0x365610e5; 
@property(assign) int freq;	// G=0x36561065; S=0x36561075; 
@property(assign) NSNumber *interval;	// G=0x36561105; S=0x36561125; 
@property(retain) ICSDateValue *until;	// G=0x36561085; S=0x365610a5; 
@property(assign) NSNumber *wkst;	// G=0x36561385; S=0x365613a5; 
+ (id)recurrenceRuleFromICSCString:(const char *)icscstring;	// 0x3654cb21
+ (id)recurrenceRuleFromICSString:(id)icsstring;	// 0x36560ec5
- (id)initWithCoder:(id)coder;	// 0x36561445
- (id)initWithFrequency:(int)frequency;	// 0x36560f01
- (id)ICSStringWithOptions:(unsigned)options;	// 0x365613c5
- (void)ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x365613d5
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3653c585
// declared property getter: - (id)byday;	// 0x36561205
// declared property getter: - (id)byhour;	// 0x365611c5
// declared property getter: - (id)byminute;	// 0x36561185
// declared property getter: - (id)bymonth;	// 0x36561305
// declared property getter: - (id)bymonthday;	// 0x36561245
// declared property getter: - (id)bysecond;	// 0x36561145
// declared property getter: - (id)bysetpos;	// 0x36561345
// declared property getter: - (id)byweekno;	// 0x365612c5
// declared property getter: - (id)byyearday;	// 0x36561285
- (void)cleanUpForStartDate:(id)startDate;	// 0x3654d2e5
// declared property getter: - (id)count;	// 0x365610c5
- (void)dealloc;	// 0x36560f49
- (void)encodeWithCoder:(id)coder;	// 0x365613e5
// declared property getter: - (int)freq;	// 0x36561065
// declared property getter: - (id)interval;	// 0x36561105
- (id)occurrencesForStartDate:(id)startDate fromDate:(id)date toDate:(id)date3 inTimeZone:(id)timeZone;	// 0x365614dd
- (id)parameterValueForName:(id)name;	// 0x36560f95
- (void)removeParameterValueForName:(id)name;	// 0x36561045
// declared property setter: - (void)setByday:(id)byday;	// 0x36561225
// declared property setter: - (void)setByhour:(id)byhour;	// 0x365611e5
// declared property setter: - (void)setByminute:(id)byminute;	// 0x365611a5
// declared property setter: - (void)setBymonth:(id)bymonth;	// 0x36561325
// declared property setter: - (void)setBymonthday:(id)bymonthday;	// 0x36561265
// declared property setter: - (void)setBysecond:(id)bysecond;	// 0x36561165
// declared property setter: - (void)setBysetpos:(id)bysetpos;	// 0x36561365
// declared property setter: - (void)setByweekno:(id)byweekno;	// 0x365612e5
// declared property setter: - (void)setByyearday:(id)byyearday;	// 0x365612a5
// declared property setter: - (void)setCount:(id)count;	// 0x365610e5
// declared property setter: - (void)setFreq:(int)freq;	// 0x36561075
// declared property setter: - (void)setInterval:(id)interval;	// 0x36561125
- (void)setParameterValue:(id)value forName:(id)name;	// 0x36560fb5
// declared property setter: - (void)setUntil:(id)until;	// 0x365610a5
// declared property setter: - (void)setWkst:(id)wkst;	// 0x365613a5
- (void)setupProperty:(id)property withArray:(id)array;	// 0x3654cd05
- (void)setupProperty:(id)property withString:(id)string;	// 0x3654d40d
// declared property getter: - (id)until;	// 0x36561085
// declared property getter: - (id)wkst;	// 0x36561385
@end
