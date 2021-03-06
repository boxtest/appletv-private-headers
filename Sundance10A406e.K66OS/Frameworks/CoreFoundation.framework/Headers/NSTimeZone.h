/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding> {
}
+ (id)abbreviationDictionary;	// 0x33a975c5
+ (id)allocWithZone:(NSZone *)zone;	// 0x33a820ad
+ (id)defaultTimeZone;	// 0x33a44645
+ (id)knownTimeZoneNames;	// 0x33b0dd6d
+ (id)localTimeZone;	// 0x33b0dd29
+ (void)resetSystemTimeZone;	// 0x33b0dcb5
+ (void)setAbbreviationDictionary:(id)dictionary;	// 0x33b11c49
+ (void)setDefaultTimeZone:(id)zone;	// 0x33b0dcd1
+ (BOOL)supportsSecureCoding;	// 0x33b12105
+ (id)systemTimeZone;	// 0x33a81e11
+ (id)timeZoneDataVersion;	// 0x33b11c9d
+ (id)timeZoneForSecondsFromGMT:(int)gmt;	// 0x33aa171d
+ (id)timeZoneWithAbbreviation:(id)abbreviation;	// 0x33b11fbd
+ (id)timeZoneWithName:(id)name;	// 0x33a8206d
+ (id)timeZoneWithName:(id)name data:(id)data;	// 0x33b11f31
- (id)initWithCoder:(id)coder;	// 0x33b12109
- (id)initWithName:(id)name;	// 0x33b11f99
- (id)initWithName:(id)name data:(id)data;	// 0x33b11f71
- (unsigned long)_cfTypeID;	// 0x33b0dc19
- (id)abbreviation;	// 0x33b11d25
- (id)abbreviationForDate:(id)date;	// 0x33b0dbb1
- (id)copyWithZone:(NSZone *)zone;	// 0x33a6736d
- (id)data;	// 0x33b0db69
- (double)daylightSavingTimeOffset;	// 0x33b11d99
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x33b0dbf9
- (id)description;	// 0x33b11e79
- (void)encodeWithCoder:(id)coder;	// 0x33b1210d
- (unsigned)hash;	// 0x33b11e15
- (BOOL)isDaylightSavingTime;	// 0x33b11d61
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x33b0dbd5
- (BOOL)isEqual:(id)equal;	// 0x33b11e31
- (BOOL)isEqualToTimeZone:(id)timeZone;	// 0x33a96f49
- (BOOL)isNSTimeZone__;	// 0x33b0dc15
- (id)localizedName:(int)name locale:(id)locale;	// 0x33b11e11
- (id)name;	// 0x33b0db45
- (id)nextDaylightSavingTimeTransition;	// 0x33b11dd5
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x33b0dc11
- (int)secondsFromGMT;	// 0x33b11ce9
- (int)secondsFromGMTForDate:(id)date;	// 0x33b0db8d
@end

