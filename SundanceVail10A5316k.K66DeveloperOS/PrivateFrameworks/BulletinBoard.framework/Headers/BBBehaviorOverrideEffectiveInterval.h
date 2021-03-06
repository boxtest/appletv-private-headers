/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "BulletinBoard-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDateComponents, NSCalendar, NSString;

@interface BBBehaviorOverrideEffectiveInterval : NSObject <NSCopying, NSCoding> {
@private
	NSDateComponents *_startComponents;	// 4 = 0x4
	NSDateComponents *_endComponents;	// 8 = 0x8
	NSString *_calendarIdentifier;	// 12 = 0xc
	NSCalendar *_calendar;	// 16 = 0x10
	unsigned _repeatInterval;	// 20 = 0x14
}
@property(copy, nonatomic) NSCalendar *calendar;	// G=0x36b8087d; S=0x36b80891; @synthesize=_calendar
@property(copy, nonatomic) NSString *calendarIdentifier;	// G=0x36b80859; S=0x36b8086d; @synthesize=_calendarIdentifier
@property(copy, nonatomic) NSDateComponents *endComponents;	// G=0x36b80835; S=0x36b80849; @synthesize=_endComponents
@property(assign, nonatomic) unsigned repeatInterval;	// G=0x36b808a1; S=0x36b808b1; @synthesize=_repeatInterval
@property(copy, nonatomic) NSDateComponents *startComponents;	// G=0x36b80811; S=0x36b80825; @synthesize=_startComponents
+ (int)_dateComponentWithProvidedComponent:(int)providedComponent andBaseComponent:(int)component;	// 0x36b80361
+ (id)adjustComponentsForRepeatInterval:(unsigned)repeatInterval earlier:(BOOL)earlier;	// 0x36b8024d
+ (id)dateWithComponents:(id)components closestToDate:(id)date earlierThanDate:(BOOL)date3 calendar:(id)calendar repeatInterval:(unsigned)interval;	// 0x36b80375
+ (id)dateWithComponents:(id)components immediatelyFollowingDate:(id)date calendar:(id)calendar repeatInterval:(unsigned)interval;	// 0x36b80581
+ (id)dateWithComponents:(id)components immediatelyPriorToDate:(id)date calendar:(id)calendar repeatInterval:(unsigned)interval;	// 0x36b8054d
+ (unsigned)relevantUnitsForRepeatInterval:(unsigned)repeatInterval;	// 0x36b80199
- (id)initWithCoder:(id)coder;	// 0x36b7fe71
- (id)initWithStartComponents:(id)startComponents endComponents:(id)components calendarIdentifier:(id)identifier repeatInterval:(unsigned)interval;	// 0x36b7fc11
- (id)_configuredCalendarWithIdentifier:(id)identifier;	// 0x36b7fb95
- (void)_synchronizeTimeZone;	// 0x36b805b5
// declared property getter: - (id)calendar;	// 0x36b8087d
// declared property getter: - (id)calendarIdentifier;	// 0x36b80859
- (BOOL)containsDate:(id)date;	// 0x36b80601
- (id)copyWithZone:(NSZone *)zone;	// 0x36b800bd
- (void)dealloc;	// 0x36b7fd45
- (id)description;	// 0x36b7fdc5
- (void)encodeWithCoder:(id)coder;	// 0x36b80001
// declared property getter: - (id)endComponents;	// 0x36b80835
- (id)nextTransitionDateAfterDate:(id)date;	// 0x36b80729
// declared property getter: - (unsigned)repeatInterval;	// 0x36b808a1
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x36b80891
// declared property setter: - (void)setCalendarIdentifier:(id)identifier;	// 0x36b8086d
// declared property setter: - (void)setEndComponents:(id)components;	// 0x36b80849
// declared property setter: - (void)setRepeatInterval:(unsigned)interval;	// 0x36b808b1
// declared property setter: - (void)setStartComponents:(id)components;	// 0x36b80825
// declared property getter: - (id)startComponents;	// 0x36b80811
@end

