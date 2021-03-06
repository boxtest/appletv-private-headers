/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSString;

@interface SFURegularExpression : NSObject <NSCopying, NSCoding> {
	NSString *_expressionString;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(readonly, retain) NSString *expressionString;	// G=0x319631d5; converted property
+ (void)initialize;	// 0x31962e01
+ (id)regularExpressionWithString:(id)string;	// 0x31962e41
- (id)init;	// 0x31963095
- (id)initWithCoder:(id)coder;	// 0x319635b5
- (id)initWithExpressionString:(id)expressionString;	// 0x31962ef5
- (id)initWithExpressionString:(id)expressionString options:(unsigned)options;	// 0x31962f09
- (id)copyWithZone:(NSZone *)zone;	// 0x319630b1
- (void)dealloc;	// 0x31962e7d
- (void)encodeWithCoder:(id)coder;	// 0x319636a1
// converted property getter: - (id)expressionString;	// 0x319631d5
- (const char *)getBytesForString:(id)string lossByte:(unsigned char)byte;	// 0x31963651
- (unsigned)hash;	// 0x319631b5
- (BOOL)isEqual:(id)equal;	// 0x3196312d
- (NSRange)matchedRangeForCString:(const char *)cstring range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x319631e5
- (NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x31963491
- (unsigned long)numberOfSubexpressions;	// 0x31963081
@end

