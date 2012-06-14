/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableSet.h> // Unknown library


@interface NSCountedSet : NSMutableSet {
@private
	id _table;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
- (id)init;	// 0x3101e125
- (id)initWithArray:(id)array;	// 0x3109ec01
- (id)initWithCapacity:(unsigned)capacity;	// 0x3101e139
- (id)initWithCoder:(id)coder;	// 0x3109e4cd
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x310378c1
- (id)initWithSet:(id)set;	// 0x3109ec2d
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x3109eb05
- (void)addObject:(id)object;	// 0x31021085
- (Class)classForCoder;	// 0x3109eae9
- (id)copyWithZone:(NSZone *)zone;	// 0x3109e115
- (unsigned)count;	// 0x31021235
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x310212e5
- (unsigned)countForObject:(id)object;	// 0x3104902d
- (void)dealloc;	// 0x31021545
- (id)descriptionWithLocale:(id)locale;	// 0x3109e7d5
- (void)encodeWithCoder:(id)coder;	// 0x3109e231
- (void)getObjects:(id *)objects count:(unsigned)count;	// 0x3109e189
- (id)member:(id)member;	// 0x31021131
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3109e151
- (id)objectEnumerator;	// 0x3109e069
- (void)removeObject:(id)object;	// 0x3102118d
@end
