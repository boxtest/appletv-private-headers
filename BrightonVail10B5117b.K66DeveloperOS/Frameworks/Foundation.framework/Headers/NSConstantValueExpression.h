/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"


@interface NSConstantValueExpression : NSExpression {
	id constantValue;	// 12 = 0xc
}
@property(readonly, retain) id constantValue;	// G=0x319864dd; converted property
- (id)initWithCoder:(id)coder;	// 0x31a2f4f5
- (id)initWithObject:(id)object;	// 0x31986261
// converted property getter: - (id)constantValue;	// 0x319864dd
- (id)copyWithZone:(NSZone *)zone;	// 0x3199c5e5
- (void)dealloc;	// 0x31986a89
- (void)encodeWithCoder:(id)coder;	// 0x31a2f3f9
- (id)expressionValueWithObject:(id)object;	// 0x31a2f7ad
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x31989241
- (unsigned)hash;	// 0x31a2f785
- (BOOL)isEqual:(id)equal;	// 0x31a2f6f9
- (id)predicateFormat;	// 0x31a2f5dd
@end
