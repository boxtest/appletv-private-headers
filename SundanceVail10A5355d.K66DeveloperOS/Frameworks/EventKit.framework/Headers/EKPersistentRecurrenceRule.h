/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EKPersistentObject.h"
#import "EventKit-Structs.h"

@class NSArray, EKPersistentCalendarItem, EKRecurrenceEnd, NSDate, NSString;

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying> {
	id _helper;	// 32 = 0x20
	EKRecurrenceEnd *_recurrenceEnd;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31fd9925; 
@property(readonly, assign, nonatomic) NSDate *cachedEndDate;	// G=0x31fd9cfd; 
@property(readonly, assign, nonatomic) NSString *calendarIdentifier;	// G=0x31fd9cc5; 
@property(assign, nonatomic) unsigned count;	// G=0x31f73f41; S=0x31f70af5; 
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x31f74259; S=0x31f70891; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x31f73fcd; S=0x31f70051; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x31f7418d; S=0x31f7096d; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x31f73f25; S=0x31f706bd; 
@property(assign, nonatomic) int firstDayOfTheWeek;	// G=0x31f74145; S=0x31fd9d19; 
@property(assign, nonatomic) int frequency;	// G=0x31f740d1; S=0x31f6c159; 
@property(assign, nonatomic) int interval;	// G=0x31f74055; S=0x31f6c271; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x31f73f89; S=0x31f706d9; 
@property(retain, nonatomic) EKPersistentCalendarItem *owner;	// G=0x31f7205d; S=0x31f70a49; 
@property(copy, nonatomic) NSArray *setPositions;	// G=0x31f741d1; S=0x31f705e1; 
@property(readonly, assign, nonatomic) BOOL shouldPinMonthDays;	// G=0x31fd9941; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x31f74215; S=0x31f707b5; 
+ (id)relations;	// 0x31f70a65
- (id)init;	// 0x31f6c0c5
// declared property getter: - (id)UUID;	// 0x31fd9925
- (id)_helper;	// 0x31f7007d
// declared property getter: - (id)cachedEndDate;	// 0x31fd9cfd
// declared property getter: - (id)calendarIdentifier;	// 0x31fd9cc5
- (id)copyWithZone:(NSZone *)zone;	// 0x31fd9a7d
// declared property getter: - (unsigned)count;	// 0x31f73f41
// declared property getter: - (id)daysOfTheMonth;	// 0x31f74259
// declared property getter: - (id)daysOfTheWeek;	// 0x31f73fcd
// declared property getter: - (id)daysOfTheYear;	// 0x31f7418d
- (void)dealloc;	// 0x31f7593d
- (id)description;	// 0x31fd9999
// declared property getter: - (id)endDate;	// 0x31f73f25
- (int)entityType;	// 0x31f7004d
// declared property getter: - (int)firstDayOfTheWeek;	// 0x31f74145
// declared property getter: - (int)frequency;	// 0x31f740d1
- (XXStruct_mY3THC)gregorianUnits;	// 0x31fd9c35
// declared property getter: - (int)interval;	// 0x31f74055
- (BOOL)isDirty;	// 0x31fd9bdd
// declared property getter: - (id)monthsOfTheYear;	// 0x31f73f89
// declared property getter: - (id)owner;	// 0x31f7205d
// declared property setter: - (void)setCount:(unsigned)count;	// 0x31f70af5
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x31f70891
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x31f70051
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x31f7096d
// declared property setter: - (void)setEndDate:(id)date;	// 0x31f706bd
// declared property setter: - (void)setFirstDayOfTheWeek:(int)theWeek;	// 0x31fd9d19
// declared property setter: - (void)setFrequency:(int)frequency;	// 0x31f6c159
// declared property setter: - (void)setInterval:(int)interval;	// 0x31f6c271
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x31f706d9
// declared property setter: - (void)setOwner:(id)owner;	// 0x31f70a49
// declared property getter: - (id)setPositions;	// 0x31f741d1
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x31f705e1
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x31f707b5
// declared property getter: - (BOOL)shouldPinMonthDays;	// 0x31fd9941
- (BOOL)validate:(id *)validate;	// 0x31f71fad
// declared property getter: - (id)weeksOfTheYear;	// 0x31f74215
@end

