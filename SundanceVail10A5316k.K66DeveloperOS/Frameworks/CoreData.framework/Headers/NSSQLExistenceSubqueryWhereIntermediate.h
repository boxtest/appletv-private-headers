/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSString, NSSQLProperty, NSSQLEntity, NSExpression;

__attribute__((visibility("hidden")))
@interface NSSQLExistenceSubqueryWhereIntermediate : NSSQLWhereIntermediate {
@private
	NSExpression *_subqueryExpression;	// 12 = 0xc
	NSExpression *_variableExpression;	// 16 = 0x10
	NSString *_variableAlias;	// 20 = 0x14
	NSSQLProperty *_collectionProperty;	// 24 = 0x18
	NSSQLEntity *_governingEntityForVariable;	// 28 = 0x1c
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope;	// 0x32e023f9
- (id)_generateSQLForVariableExpression:(id)variableExpression inContext:(id)context;	// 0x32e02685
- (BOOL)_isKeypathScopedToSubquery:(id)subquery;	// 0x32e024b1
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x32e02571
- (id)generateSQLStringInContext:(id)context;	// 0x32e02789
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x32e02629
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x32e025cd
- (BOOL)isExistenceScoped;	// 0x32e024ad
@end
