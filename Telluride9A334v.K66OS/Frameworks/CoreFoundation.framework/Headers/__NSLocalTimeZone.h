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
- (id)initWithCoder:(id)coder;	// 0x34911e85
- (id)abbreviationForDate:(id)date;	// 0x34911cc1
- (Class)classForCoder;	// 0x34911ecd
- (id)copyWithZone:(NSZone *)zone;	// 0x34911e4d
- (id)data;	// 0x34911c55
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x34911d31
- (id)description;	// 0x34911ddd
- (void)encodeWithCoder:(id)coder;	// 0x34911ec9
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x34911cf9
- (id)localizedName:(int)name locale:(id)locale;	// 0x34911da1
- (id)name;	// 0x34911c21
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x34911d69
- (oneway void)release;	// 0x34911e41
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x34911ee9
- (id)retain;	// 0x34911e3d
- (unsigned)retainCount;	// 0x34911e45
- (int)secondsFromGMTForDate:(id)date;	// 0x34911c89
@end

