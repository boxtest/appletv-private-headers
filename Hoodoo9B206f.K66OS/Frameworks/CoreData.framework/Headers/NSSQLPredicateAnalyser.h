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
@property(readonly, retain) NSMutableArray *allModifierPredicates;	// G=0x3623cb3d; converted property
@property(readonly, retain) NSMutableArray *setExpressions;	// G=0x36305d59; converted property
@property(readonly, retain) NSMutableArray *subqueries;	// G=0x36305d49; converted property
- (id)init;	// 0x3623c175
// converted property getter: - (id)allModifierPredicates;	// 0x3623cb3d
- (void)dealloc;	// 0x36241861
- (id)keypaths;	// 0x36305d39
// converted property getter: - (id)setExpressions;	// 0x36305d59
// converted property getter: - (id)subqueries;	// 0x36305d49
- (void)visitPredicate:(id)predicate;	// 0x3623c33d
- (void)visitPredicateExpression:(id)expression;	// 0x3623c25d
- (void)visitPredicateOperator:(id)anOperator;	// 0x36305d35
@end
