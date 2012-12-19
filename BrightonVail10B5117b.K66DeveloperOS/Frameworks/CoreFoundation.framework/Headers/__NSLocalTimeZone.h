/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSTimeZone.h"


__attribute__((visibility("hidden")))
@interface __NSLocalTimeZone : NSTimeZone {
}
+ (BOOL)supportsSecureCoding;	// 0x3116d375
- (id)initWithCoder:(id)coder;	// 0x3116d379
- (id)abbreviationForDate:(id)date;	// 0x3116d1b1
- (Class)classForCoder;	// 0x3116d3c1
- (id)copyWithZone:(NSZone *)zone;	// 0x3116d33d
- (id)data;	// 0x3116d145
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x3116d221
- (id)description;	// 0x3116d2cd
- (void)encodeWithCoder:(id)coder;	// 0x3116d3bd
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x3116d1e9
- (id)localizedName:(int)name locale:(id)locale;	// 0x3116d291
- (id)name;	// 0x3116d111
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x3116d259
- (oneway void)release;	// 0x3116d331
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x3116d3dd
- (id)retain;	// 0x3116d32d
- (unsigned)retainCount;	// 0x3116d335
- (int)secondsFromGMTForDate:(id)date;	// 0x3116d179
@end
