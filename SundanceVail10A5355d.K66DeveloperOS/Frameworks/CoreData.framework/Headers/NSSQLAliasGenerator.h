/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface NSSQLAliasGenerator : NSObject {
	unsigned _nextTableAlias;	// 4 = 0x4
	unsigned _nextVariableAlias;	// 8 = 0x8
	NSString *_tableBase;	// 12 = 0xc
	NSString *_variableBase;	// 16 = 0x10
}
- (id)init;	// 0x33519339
- (id)initWithNestingLevel:(unsigned)nestingLevel;	// 0x33487c01
- (void)dealloc;	// 0x3348df55
- (id)generateSubqueryVariableAlias;	// 0x3351934d
- (id)generateTableAlias;	// 0x33489789
@end

