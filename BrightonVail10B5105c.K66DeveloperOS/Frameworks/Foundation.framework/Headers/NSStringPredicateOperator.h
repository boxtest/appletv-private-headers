/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPredicateOperator.h"
#import "Foundation-Structs.h"


@interface NSStringPredicateOperator : NSPredicateOperator {
	unsigned _flags;	// 12 = 0xc
}
@property(readonly, assign) unsigned flags;	// G=0x360bfb2d; converted property
- (id)initWithCoder:(id)coder;	// 0x3615a36d
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x360bf909
- (id)_modifierString;	// 0x3615a41d
- (void)_setOptions:(unsigned)options;	// 0x360bf951
- (id)copyWithZone:(NSZone *)zone;	// 0x3615a611
- (void)encodeWithCoder:(id)coder;	// 0x3615a2c5
// converted property getter: - (unsigned)flags;	// 0x360bfb2d
- (BOOL)isEqual:(id)equal;	// 0x3615a559
- (unsigned)options;	// 0x3615a671
@end

