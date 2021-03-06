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
+ (BOOL)supportsSecureCoding;	// 0x2d297965
- (id)initWithCoder:(id)coder;	// 0x2d297969
- (id)abbreviationForDate:(id)date;	// 0x2d2977a1
- (Class)classForCoder;	// 0x2d2979b1
- (id)copyWithZone:(NSZone *)zone;	// 0x2d29792d
- (id)data;	// 0x2d297735
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x2d297811
- (id)description;	// 0x2d2978bd
- (void)encodeWithCoder:(id)coder;	// 0x2d2979ad
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x2d2977d9
- (id)localizedName:(int)name locale:(id)locale;	// 0x2d297881
- (id)name;	// 0x2d297701
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x2d297849
- (oneway void)release;	// 0x2d297921
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x2d2979cd
- (id)retain;	// 0x2d29791d
- (unsigned)retainCount;	// 0x2d297925
- (int)secondsFromGMTForDate:(id)date;	// 0x2d297769
@end

