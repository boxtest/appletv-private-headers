/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicate.h"

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {
	void *_reserved2;	// 8 = 0x8
	unsigned _type;	// 12 = 0xc
	NSArray *_subpredicates;	// 16 = 0x10
}
@property(readonly, retain) NSArray *subpredicates;	// G=0x37340625; converted property
+ (id)_operatorForType:(unsigned)type;	// 0x3734057d
+ (id)andPredicateWithSubpredicates:(id)subpredicates;	// 0x37340405
+ (id)notPredicateWithSubpredicate:(id)subpredicate;	// 0x373e13c1
+ (id)orPredicateWithSubpredicates:(id)subpredicates;	// 0x37341069
- (id)initWithCoder:(id)coder;	// 0x373e1501
- (id)initWithType:(unsigned)type subpredicates:(id)subpredicates;	// 0x37340445
- (void)_acceptSubpredicates:(id)subpredicates flags:(unsigned)flags;	// 0x37340709
- (id)_predicateOperator;	// 0x37340535
- (id)_subpredicateDescription:(id)description;	// 0x373e15e9
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x3734069d
- (unsigned)compoundPredicateType;	// 0x3734056d
- (id)copyWithZone:(NSZone *)zone;	// 0x37345519
- (void)dealloc;	// 0x37340ea9
- (void)encodeWithCoder:(id)coder;	// 0x373e1421
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x37341f65
- (id)generateMetadataDescription;	// 0x3735e319
- (unsigned)hash;	// 0x373e1a55
- (BOOL)isEqual:(id)equal;	// 0x373e19a9
- (id)predicateFormat;	// 0x373e169d
- (id)predicateOperator;	// 0x37340525
- (id)predicateWithSubstitutionVariables:(id)substitutionVariables;	// 0x373e1a7d
// converted property getter: - (id)subpredicates;	// 0x37340625
@end

