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
@property(readonly, assign) unsigned flags;	// G=0x3199bb2d; converted property
- (id)initWithCoder:(id)coder;	// 0x31a3636d
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x3199b909
- (id)_modifierString;	// 0x31a3641d
- (void)_setOptions:(unsigned)options;	// 0x3199b951
- (id)copyWithZone:(NSZone *)zone;	// 0x31a36611
- (void)encodeWithCoder:(id)coder;	// 0x31a362c5
// converted property getter: - (unsigned)flags;	// 0x3199bb2d
- (BOOL)isEqual:(id)equal;	// 0x31a36559
- (unsigned)options;	// 0x31a36671
@end
