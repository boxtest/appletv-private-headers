/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSSQLOrderIntermediate : NSSQLIntermediate {
@private
	NSArray *_sortDescriptors;	// 8 = 0x8
}
- (id)initWithSortDescriptors:(id)sortDescriptors inScope:(id)scope;	// 0x32d1b569
- (id)_generateSQLForOrderedManyToManyInverse:(id)manyInverse inContext:(id)context;	// 0x32dd3eb5
- (id)_generateSQLForOrderedToManyInverse:(id)manyInverse inContext:(id)context;	// 0x32dd4059
- (void)dealloc;	// 0x32d1f0f1
- (id)generateSQLStringInContext:(id)context;	// 0x32d1e425
@end
