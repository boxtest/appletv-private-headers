/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSPredicateVisitor.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {
@private
	BOOL _compoundPredicate;	// 4 = 0x4
	NSMutableArray *_keys;	// 8 = 0x8
	NSMutableArray *_allModifierPredicates;	// 12 = 0xc
	NSMutableArray *_setExpressions;	// 16 = 0x10
	NSMutableArray *_subqueries;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *allModifierPredicates;	// G=0x330df2b1; converted property
@property(readonly, retain) NSMutableArray *setExpressions;	// G=0x3318e7b9; converted property
@property(readonly, retain) NSMutableArray *subqueries;	// G=0x3318e7a9; converted property
- (id)init;	// 0x330df08d
// converted property getter: - (id)allModifierPredicates;	// 0x330df2b1
- (void)dealloc;	// 0x330e13e5
- (id)keypaths;	// 0x3318e799
// converted property getter: - (id)setExpressions;	// 0x3318e7b9
// converted property getter: - (id)subqueries;	// 0x3318e7a9
- (void)visitPredicate:(id)predicate;	// 0x330df241
- (void)visitPredicateExpression:(id)expression;	// 0x330df165
- (void)visitPredicateOperator:(id)anOperator;	// 0x3318e795
@end

