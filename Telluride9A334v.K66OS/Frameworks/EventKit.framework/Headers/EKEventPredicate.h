/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPredicate.h"
#import "EventKit-Structs.h"

@class NSString, NSDate, NSTimeZone;

@interface EKEventPredicate : EKPredicate {
	NSDate *_startDate;	// 12 = 0xc
	NSDate *_endDate;	// 16 = 0x10
	NSString *_uuid;	// 20 = 0x14
	NSTimeZone *_timeZone;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x32792a79; 
@property(readonly, assign, nonatomic) NSString *eventUUID;	// G=0x32792a89; 
@property(readonly, assign, nonatomic) NSDate *startDate;	// G=0x32792a69; 
@property(readonly, assign, nonatomic) NSTimeZone *timeZone;	// G=0x32792a99; 
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;	// 0x3274ee01
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventUUID:(id)uuid calendars:(id)calendars;	// 0x32792911
- (id)initWithCoder:(id)coder;	// 0x32792975
- (id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;	// 0x3274ee5d
- (id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventUUID:(id)uuid calendars:(id)calendars;	// 0x3274ee8d
- (id)copyWithZone:(NSZone *)zone;	// 0x32792c2d
- (void)dealloc;	// 0x3274f8c9
- (void)encodeWithCoder:(id)coder;	// 0x3274efe5
// declared property getter: - (id)endDate;	// 0x32792a79
- (BOOL)evaluateWithObject:(id)object;	// 0x32792aa9
// declared property getter: - (id)eventUUID;	// 0x32792a89
- (BOOL)isEqual:(id)equal;	// 0x32792d45
- (id)predicateFormat;	// 0x32792c3d
// declared property getter: - (id)startDate;	// 0x32792a69
// declared property getter: - (id)timeZone;	// 0x32792a99
@end

