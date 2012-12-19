/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSCompoundPredicateOperator : NSPredicateOperator {
}
+ (id)andPredicateOperator;	// 0x319870f5
+ (id)notPredicateOperator;	// 0x31a348bd
+ (id)orPredicateOperator;	// 0x31987a9d
- (id)initWithCoder:(id)coder;	// 0x31a34985
- (id)copyWithZone:(NSZone *)zone;	// 0x31a34a05
- (void)encodeWithCoder:(id)coder;	// 0x31a34905
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object;	// 0x31a34aad
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object substitutionVariables:(id)variables;	// 0x319886cd
- (id)predicateFormat;	// 0x31a34a15
- (id)symbol;	// 0x31a34a25
@end
