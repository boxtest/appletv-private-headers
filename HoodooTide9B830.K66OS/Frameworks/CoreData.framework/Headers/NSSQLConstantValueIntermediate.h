/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"


__attribute__((visibility("hidden")))
@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {
@private
	unsigned _type;	// 8 = 0x8
	id _constantValue;	// 12 = 0xc
}
- (id)initWithConstantValue:(id)constantValue inScope:(id)scope;	// 0x3226dcb9
- (id)initWithConstantValue:(id)constantValue ofType:(unsigned)type inScope:(id)scope;	// 0x32305785
- (BOOL)_addBindVarForConstId:(id)constId ofType:(unsigned)type inContext:(id)context;	// 0x3226e4d5
- (BOOL)_addBindVarForConstVal1:(id)constVal1 inContext:(id)context;	// 0x3226ddad
- (void)dealloc;	// 0x3226e6f1
- (id)generateSQLStringInContext:(id)context;	// 0x3226dd21
- (id)propertyAtEndOfKeyPathExpression:(id)keyPathExpression;	// 0x3226e32d
- (unsigned)sqlTypeForProperty:(id)property;	// 0x3226e481
@end

