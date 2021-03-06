/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"


@interface NSSetExpression : NSExpression {
@private
	NSExpression *_left;	// 12 = 0xc
	NSExpression *_right;	// 16 = 0x10
}
- (id)initWithCoder:(id)coder;	// 0x31644415
- (id)initWithType:(unsigned)type leftExpression:(id)expression rightExpression:(id)expression3;	// 0x31644251
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x31644815
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x31644779
- (id)copyWithZone:(NSZone *)zone;	// 0x31644509
- (void)dealloc;	// 0x316442c9
- (void)encodeWithCoder:(id)coder;	// 0x31644341
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x31644909
- (BOOL)isEqual:(id)equal;	// 0x316445c1
- (id)leftExpression;	// 0x31644759
- (id)predicateFormat;	// 0x31644699
- (id)rightExpression;	// 0x31644769
@end

