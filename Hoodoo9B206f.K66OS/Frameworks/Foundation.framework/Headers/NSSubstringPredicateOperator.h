/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSStringPredicateOperator.h"


@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
@private
	unsigned _position;	// 16 = 0x10
}
@property(readonly, assign) unsigned position;	// G=0x31dc94d9; converted property
- (id)initWithCoder:(id)coder;	// 0x31dc9429
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant position:(unsigned)position;	// 0x31d2b175
- (void)encodeWithCoder:(id)coder;	// 0x31dc9381
- (BOOL)isEqual:(id)equal;	// 0x31dc94e9
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x31d2b269
// converted property getter: - (unsigned)position;	// 0x31dc94d9
- (SEL)selector;	// 0x31dc9371
- (id)symbol;	// 0x31dc95c1
@end

