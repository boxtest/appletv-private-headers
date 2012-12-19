/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSDate;

@interface SACalendarRecurrence : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int endCount;	// G=0x35599af1; S=0x35599b61; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x35599ba5; S=0x35599bc1; 
@property(assign, nonatomic) int frequency;	// G=0x35599c11; S=0x35599c39; 
@property(assign, nonatomic) int interval;	// G=0x35599c69; S=0x35599cd9; 
+ (id)recurrence;	// 0x35599a61
+ (id)recurrenceWithDictionary:(id)dictionary context:(id)context;	// 0x35599aa5
- (id)encodedClassName;	// 0x35599a55
// declared property getter: - (int)endCount;	// 0x35599af1
// declared property getter: - (id)endDate;	// 0x35599ba5
// declared property getter: - (int)frequency;	// 0x35599c11
- (id)groupIdentifier;	// 0x35599a45
// declared property getter: - (int)interval;	// 0x35599c69
// declared property setter: - (void)setEndCount:(int)count;	// 0x35599b61
// declared property setter: - (void)setEndDate:(id)date;	// 0x35599bc1
// declared property setter: - (void)setFrequency:(int)frequency;	// 0x35599c39
// declared property setter: - (void)setInterval:(int)interval;	// 0x35599cd9
@end
