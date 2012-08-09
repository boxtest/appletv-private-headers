/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"


__attribute__((visibility("hidden")))
@interface NSAggregateExpression : NSExpression {
	id _collection;	// 12 = 0xc
}
@property(readonly, retain) id collection;	// G=0x34e0ef09; converted property
- (id)initWithCoder:(id)coder;	// 0x34e0eba9
- (id)initWithCollection:(id)collection;	// 0x34e0e9fd
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x34e0f1d1
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x34e0f0c5
// converted property getter: - (id)collection;	// 0x34e0ef09
- (id)constantValue;	// 0x34e0eef9
- (id)copyWithZone:(NSZone *)zone;	// 0x34e0ec69
- (void)dealloc;	// 0x34e0ee01
- (void)encodeWithCoder:(id)coder;	// 0x34e0eb01
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x34e0efa1
- (unsigned)hash;	// 0x34e0ef81
- (BOOL)isEqual:(id)equal;	// 0x34e0ef19
- (id)predicateFormat;	// 0x34e0ee4d
@end
