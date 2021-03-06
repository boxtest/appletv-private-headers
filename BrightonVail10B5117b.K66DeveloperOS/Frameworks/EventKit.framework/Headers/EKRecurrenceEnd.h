/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"
#import "NSCopying.h"

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying> {
	NSDate *_endDate;	// 4 = 0x4
	unsigned _occurrenceCount;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x318ebbed; @synthesize=_endDate
@property(readonly, assign, nonatomic) unsigned occurrenceCount;	// G=0x318ebbfd; @synthesize=_occurrenceCount
+ (id)recurrenceEndWithEndDate:(id)endDate;	// 0x318eb6e9
+ (id)recurrenceEndWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x318eb731
- (id)initWithCoder:(id)coder;	// 0x318eb8b5
- (id)initWithEndDate:(id)endDate;	// 0x318eb779
- (id)initWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x318eb83d
- (id)copyWithZone:(NSZone *)zone;	// 0x318ebb91
- (void)dealloc;	// 0x318ebba1
- (id)description;	// 0x318eb9c5
- (void)encodeWithCoder:(id)coder;	// 0x318eb94d
// declared property getter: - (id)endDate;	// 0x318ebbed
- (unsigned)hash;	// 0x318eba99
- (BOOL)isEqual:(id)equal;	// 0x318ebad9
// declared property getter: - (unsigned)occurrenceCount;	// 0x318ebbfd
- (BOOL)usesEndDate;	// 0x318eb9ad
@end

