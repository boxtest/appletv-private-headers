/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSymbolicExpression : NSExpression {
	NSString *_token;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x31a329a1
- (id)initWithString:(id)string;	// 0x31a3284d
- (id)constantValue;	// 0x31a32aed
- (id)copyWithZone:(NSZone *)zone;	// 0x31a32a55
- (void)dealloc;	// 0x31a32a91
- (void)encodeWithCoder:(id)coder;	// 0x31a328f9
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x31a32b85
- (unsigned)hash;	// 0x31a32b65
- (BOOL)isEqual:(id)equal;	// 0x31a32afd
- (id)predicateFormat;	// 0x31a32add
@end
