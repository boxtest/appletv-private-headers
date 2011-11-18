/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying> {
@private
	NSDate *_endDate;	// 4 = 0x4
	unsigned _occurrenceCount;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x331e0acd; @synthesize=_endDate
@property(readonly, assign, nonatomic) unsigned occurrenceCount;	// G=0x331e0abd; @synthesize=_occurrenceCount
+ (id)recurrenceEndWithEndDate:(id)endDate;	// 0x33219695
+ (id)recurrenceEndWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x332196dd
- (id)initWithCoder:(id)coder;	// 0x3321979d
- (id)initWithEndDate:(id)endDate;	// 0x331e09f9
- (id)initWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x33219725
- (id)copyWithZone:(NSZone *)zone;	// 0x33219a89
- (void)dealloc;	// 0x331e20e1
- (id)description;	// 0x332198ad
- (void)encodeWithCoder:(id)coder;	// 0x33219835
// declared property getter: - (id)endDate;	// 0x331e0acd
- (unsigned)hash;	// 0x33219981
- (BOOL)isEqual:(id)equal;	// 0x332199c1
// declared property getter: - (unsigned)occurrenceCount;	// 0x331e0abd
- (BOOL)usesEndDate;	// 0x33219895
@end

