/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPredicate.h"
#import "Foundation-Structs.h"

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {
@private
	void *_reserved2;	// 8 = 0x8
	unsigned _type;	// 12 = 0xc
	NSArray *_subpredicates;	// 16 = 0x10
}
@property(readonly, retain) NSArray *subpredicates;	// G=0x32441d69; converted property
+ (id)_operatorForType:(unsigned)type;	// 0x324cb2ed
+ (id)andPredicateWithSubpredicates:(id)subpredicates;	// 0x324cb3d1
+ (id)notPredicateWithSubpredicate:(id)subpredicate;	// 0x324cb341
+ (id)orPredicateWithSubpredicates:(id)subpredicates;	// 0x324cb399
- (id)initWithCoder:(id)coder;	// 0x324cb67d
- (id)initWithType:(unsigned)type subpredicates:(id)subpredicates;	// 0x32441c69
- (void)_acceptSubpredicates:(id)subpredicates flags:(unsigned)flags;	// 0x32442221
- (id)_predicateOperator;	// 0x324cb951
- (id)_subpredicateDescription:(id)description;	// 0x324cb245
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x324421c5
- (unsigned)compoundPredicateType;	// 0x32441d59
- (id)copyWithZone:(NSZone *)zone;	// 0x32441dc5
- (void)dealloc;	// 0x32441d79
- (void)encodeWithCoder:(id)coder;	// 0x324cb74d
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x324cb985
- (unsigned)hash;	// 0x324cb17d
- (BOOL)isEqual:(id)equal;	// 0x324cb1a1
- (id)predicateFormat;	// 0x324cb409
- (id)predicateOperator;	// 0x324cb169
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x324cb819
// converted property getter: - (id)subpredicates;	// 0x32441d69
@end
