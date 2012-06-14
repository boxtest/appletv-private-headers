/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLAliasGenerator : NSObject {
@private
	unsigned _nextTableAlias;	// 4 = 0x4
	unsigned _nextVariableAlias;	// 8 = 0x8
	NSString *_tableBase;	// 12 = 0xc
	NSString *_variableBase;	// 16 = 0x10
}
- (id)init;	// 0x33168a8d
- (id)initWithNestingLevel:(unsigned)nestingLevel;	// 0x330ce7f5
- (void)dealloc;	// 0x330d50e5
- (id)generateSubqueryVariableAlias;	// 0x33168aa1
- (id)generateTableAlias;	// 0x330d0719
@end
