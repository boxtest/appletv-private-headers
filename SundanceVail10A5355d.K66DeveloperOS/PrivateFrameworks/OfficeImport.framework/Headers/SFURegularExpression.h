/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface SFURegularExpression : NSObject <NSCopying, NSCoding> {
	NSString *_expressionString;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(readonly, retain) NSString *expressionString;	// G=0x31e4ea49; converted property
+ (void)initialize;	// 0x31e4e669
+ (id)regularExpressionWithString:(id)string;	// 0x31e4e6a9
- (id)init;	// 0x31e4e909
- (id)initWithCoder:(id)coder;	// 0x31e4ece5
- (id)initWithExpressionString:(id)expressionString;	// 0x31e4e75d
- (id)initWithExpressionString:(id)expressionString options:(unsigned)options;	// 0x31e4e771
- (id)copyWithZone:(NSZone *)zone;	// 0x31e4e925
- (void)dealloc;	// 0x31e4e6e5
- (void)encodeWithCoder:(id)coder;	// 0x31e4edd1
// converted property getter: - (id)expressionString;	// 0x31e4ea49
- (const char *)getBytesForString:(id)string lossByte:(unsigned char)byte;	// 0x31e4ed81
- (unsigned)hash;	// 0x31e4ea29
- (BOOL)isEqual:(id)equal;	// 0x31e4e9a1
- (NSRange)matchedRangeForCString:(const char *)cstring range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x31e4ea59
- (NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x31e4ebc5
- (unsigned)numberOfSubexpressions;	// 0x31e4e8f5
@end

