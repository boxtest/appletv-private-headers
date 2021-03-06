/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "MIME-Structs.h"


@interface MFByteSet : NSObject <NSCopying, NSMutableCopying> {
	BOOL mySet[32];	// 4 = 0x4
}
+ (id)ASCIIByteSet;	// 0x346dcc81
+ (id)asciiWhitespaceSet;	// 0x346dcc31
+ (id)nonASCIIByteSet;	// 0x346dcccd
+ (id)suspiciousCodepage1252ByteSet;	// 0x346dcd19
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x346dce9d
- (id)initWithCString:(const char *)cstring;	// 0x346dce75
- (id)initWithRange:(NSRange)range;	// 0x346dcdc9
- (id)_initWithSet:(const char *)set;	// 0x346dcef1
- (BOOL)byteIsMember:(BOOL)member;	// 0x346dcd65
- (id)copyWithZone:(NSZone *)zone;	// 0x346dcf2d
- (id)invertedSet;	// 0x346dcd8d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x346dcf71
@end

