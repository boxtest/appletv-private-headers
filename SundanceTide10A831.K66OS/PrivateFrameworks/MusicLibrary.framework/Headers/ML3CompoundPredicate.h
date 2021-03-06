/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"

@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate {
	NSArray *_predicates;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *compoundOperatorJoiner;	// @dynamic
@property(retain, nonatomic) NSArray *predicates;	// G=0x305c4641; S=0x30591b59; @synthesize=_predicates
+ (id)predicateMatchingPredicates:(id)predicates;	// 0x305919f1
- (id)initWithCoder:(id)coder;	// 0x305c4359
- (id)initWithPredicates:(id)predicates;	// 0x30591af9
- (void).cxx_destruct;	// 0x30599521
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x305947bd
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x30594a25
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x305950fd
- (id)description;	// 0x305c45a9
- (void)encodeWithCoder:(id)coder;	// 0x305c43e5
- (unsigned)hash;	// 0x305c4549
- (BOOL)isDynamicForEntityClass:(Class)entityClass;	// 0x30591e61
- (BOOL)isEqual:(id)equal;	// 0x305c446d
// declared property getter: - (id)predicates;	// 0x305c4641
// declared property setter: - (void)setPredicates:(id)predicates;	// 0x30591b59
@end

