/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSComparisonPredicateOperator : NSPredicateOperator {
	unsigned _variant;	// 12 = 0xc
	unsigned _options;	// 16 = 0x10
}
@property(readonly, assign) unsigned options;	// G=0x3553bb95; converted property
@property(readonly, assign) unsigned variant;	// G=0x355e862d; converted property
- (id)initWithCoder:(id)coder;	// 0x355e83c1
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x3553b821
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant options:(unsigned)options;	// 0x3553b7ed
- (id)copyWithZone:(NSZone *)zone;	// 0x355e8495
- (void)encodeWithCoder:(id)coder;	// 0x355e82f5
- (BOOL)isEqual:(id)equal;	// 0x355e863d
// converted property getter: - (unsigned)options;	// 0x3553bb95
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x355e8719
- (id)predicateFormat;	// 0x355e8515
// converted property getter: - (unsigned)variant;	// 0x355e862d
@end

