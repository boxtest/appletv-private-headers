/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSArray;

@interface NSBlockExpression : NSExpression {
	id _block;	// 12 = 0xc
	NSArray *_arguments;	// 16 = 0x10
}
@property(readonly, retain) NSArray *arguments;	// G=0x3615d159; converted property
- (id)initWithCoder:(id)coder;	// 0x3615d10d
- (id)initWithType:(unsigned)type block:(id)block arguments:(id)arguments;	// 0x3615cf71
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x3615d41d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x3615d5d5
// converted property getter: - (id)arguments;	// 0x3615d159
- (id)copyWithZone:(NSZone *)zone;	// 0x3615d061
- (void)dealloc;	// 0x3615cfe9
- (void)encodeWithCoder:(id)coder;	// 0x3615d0d1
- (id)expressionBlock;	// 0x3615d149
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x3615d169
- (id)predicateFormat;	// 0x3615d3c9
@end
