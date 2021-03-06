/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSMutableArray, NSExpression;

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
	NSMutableArray *_comparisonPredicateScopedItem;	// 12 = 0xc
	NSExpression *_effectiveLeftExpression;	// 16 = 0x10
	NSExpression *_effectiveRightExpression;	// 20 = 0x14
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope;	// 0x33cd5a11
- (long)_cfStringOptionsFromPredicateOptions:(unsigned)predicateOptions;	// 0x33d937f1
- (id)_generateSQLBeginsWithStringInContext:(id)context;	// 0x33d94789
- (id)_generateSQLBetweenStringInContext:(id)context;	// 0x33d95919
- (id)_generateSQLContainmentStringInContext:(id)context;	// 0x33d95001
- (id)_generateSQLEndsWithStringInContext:(id)context;	// 0x33d94a29
- (id)_generateSQLForConst:(id)aConst inAttribute:(id)attribute expression:(id)expression inContext:(id)context;	// 0x33d94e51
- (id)_generateSQLForConst:(id)aConst inManyToMany:(id)many expression:(id)expression inContext:(id)context;	// 0x33d94a49
- (id)_generateSQLForConst:(id)aConst inToMany:(id)many inContext:(id)context;	// 0x33d94c29
- (id)_generateSQLForMatchingOperator:(id)matchingOperator inContext:(id)context;	// 0x33d93b39
- (id)_generateSQLForString:(id)string expressionPath:(id)path wildStart:(BOOL)start wildEnd:(BOOL)end allowToMany:(BOOL)many inContext:(id)context;	// 0x33d94069
- (id)_generateSQLForWildSubStringForGlob:(id)glob wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x33d93f2d
- (id)_generateSQLSubstringWildStart:(BOOL)start wildEnd:(BOOL)end inContext:(id)context;	// 0x33d942f1
- (id)_generateSQLType1InContext:(id)context;	// 0x33d93505
- (id)_generateSQLType2InContext:(id)context;	// 0x33cd6da9
- (id)_generateSQLType3InContext:(id)context;	// 0x33d93821
- (BOOL)_isNilExpression:(id)expression;	// 0x33cd6d45
- (id)_lastScopedItem;	// 0x33cd8bf1
- (id)_sqlTokenForPredicateOperator:(unsigned)predicateOperator inContext:(id)context;	// 0x33cd900d
- (id)_upperBoundSearchStringForString:(id)string context:(id)context;	// 0x33d94479
- (void)dealloc;	// 0x33cd9881
- (id)generateSQLStringInContext:(id)context;	// 0x33cd6a05
@end

