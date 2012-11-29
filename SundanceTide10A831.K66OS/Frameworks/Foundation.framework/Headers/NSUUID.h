/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "Foundation-Structs.h"


@interface NSUUID : NSObject <NSCopying, NSSecureCoding> {
}
+ (id)UUID;	// 0x32661685
+ (id)allocWithZone:(NSZone *)zone;	// 0x326615fd
+ (BOOL)supportsSecureCoding;	// 0x326618a5
- (id)init;	// 0x326616c1
- (id)initWithCoder:(id)coder;	// 0x32661969
- (id)initWithUUIDBytes:(unsigned char [16])uuidbytes;	// 0x326616f1
- (id)initWithUUIDString:(id)uuidstring;	// 0x326616ed
- (id)UUIDString;	// 0x326617f5
- (unsigned long)_cfTypeID;	// 0x326616bd
- (CFStringRef)_cfUUIDString;	// 0x32661801
- (id)copyWithZone:(NSZone *)zone;	// 0x32661825
- (void)encodeWithCoder:(id)coder;	// 0x326618a9
- (void)getUUIDBytes:(unsigned char [16])bytes;	// 0x326617e9
- (unsigned)hash;	// 0x326616f5
- (BOOL)isEqual:(id)equal;	// 0x32661739
@end
