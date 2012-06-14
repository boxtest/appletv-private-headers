/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CPRegularExpression : NSObject <NSCopying, NSCoding> {
@private
	NSString *_expressionString;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(readonly, retain) NSString *expressionString;	// G=0x34356915; converted property
+ (const char *)getBytesForString:(id)string lossByte:(unsigned char)byte;	// 0x34356c09
+ (void)initialize;	// 0x34356555
+ (id)regularExpressionWithString:(id)string;	// 0x34356595
- (id)init;	// 0x343567d5
- (id)initWithCoder:(id)coder;	// 0x34356b99
- (id)initWithExpressionString:(id)expressionString;	// 0x34356649
- (id)initWithExpressionString:(id)expressionString options:(unsigned)options;	// 0x3435665d
- (id)copyWithZone:(NSZone *)zone;	// 0x343567f1
- (void)dealloc;	// 0x343565d1
- (void)encodeWithCoder:(id)coder;	// 0x34356c59
// converted property getter: - (id)expressionString;	// 0x34356915
- (unsigned)hash;	// 0x343568f5
- (BOOL)isEqual:(id)equal;	// 0x3435686d
- (NSRange)matchedRangeForCString:(const char *)cstring range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x34356925
- (NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x34356a99
- (unsigned)numberOfSubexpressions;	// 0x343567c1
@end
