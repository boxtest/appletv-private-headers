/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSSQLitePredicate.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface SSSQLiteCompoundPredicate : SSSQLitePredicate <NSCopying> {
	NSString *_combinationOperation;	// 4 = 0x4
	NSArray *_predicates;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *predicates;	// G=0x356e7819; @synthesize=_predicates
+ (id)predicateMatchingAllPredicates:(id)predicates;	// 0x356e7125
+ (id)predicateMatchingAnyPredicates:(id)predicates;	// 0x356e71ad
+ (id)predicateWithProperty:(id)property values:(id)values comparisonType:(int)type;	// 0x356e7235
- (id)SQLForEntityClass:(Class)entityClass;	// 0x356e7579
- (id)SQLJoinClausesForEntityClass:(Class)entityClass;	// 0x356e7709
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x356e7381
- (id)copyWithZone:(NSZone *)zone;	// 0x356e7371
- (void)dealloc;	// 0x356e70c1
- (unsigned)hash;	// 0x356e744d
- (BOOL)isEqual:(id)equal;	// 0x356e74bd
// declared property getter: - (id)predicates;	// 0x356e7819
@end

