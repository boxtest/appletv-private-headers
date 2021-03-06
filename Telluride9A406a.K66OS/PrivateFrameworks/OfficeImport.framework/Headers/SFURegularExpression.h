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

__attribute__((visibility("hidden")))
@interface SFURegularExpression : NSObject <NSCopying, NSCoding> {
@private
	NSString *_expressionString;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(readonly, retain) NSString *expressionString;	// G=0x32aff2b5; converted property
+ (void)initialize;	// 0x32aff431
+ (id)regularExpressionWithString:(id)string;	// 0x32aff3f5
- (id)init;	// 0x32aff2d9
- (id)initWithCoder:(id)coder;	// 0x32aff4e9
- (id)initWithExpressionString:(id)expressionString;	// 0x32aff2c5
- (id)initWithExpressionString:(id)expressionString options:(unsigned)options;	// 0x32aff771
- (id)copyWithZone:(NSZone *)zone;	// 0x32aff2f5
- (void)dealloc;	// 0x32aff8ed
- (void)encodeWithCoder:(id)coder;	// 0x32aff471
// converted property getter: - (id)expressionString;	// 0x32aff2b5
- (const char *)getBytesForString:(id)string lossByte:(unsigned char)byte;	// 0x32aff499
- (unsigned)hash;	// 0x32aff751
- (BOOL)isEqual:(id)equal;	// 0x32aff369
- (NSRange)matchedRangeForCString:(const char *)cstring range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x32aff5f9
- (NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x32aff585
- (unsigned)numberOfSubexpressions;	// 0x32aff2a1
@end

