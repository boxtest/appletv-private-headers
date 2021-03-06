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
- (id)init;	// 0x30614135
- (id)initWithArray:(id)array;	// 0x30694c11
- (id)initWithCapacity:(unsigned)capacity;	// 0x30614149
- (id)initWithCoder:(id)coder;	// 0x306944dd
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x3062d8d1
- (id)initWithSet:(id)set;	// 0x30694c3d
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x30694b15
- (void)addObject:(id)object;	// 0x30617095
- (Class)classForCoder;	// 0x30694af9
- (id)copyWithZone:(NSZone *)zone;	// 0x30694125
- (unsigned)count;	// 0x30617245
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x306172f5
- (unsigned)countForObject:(id)object;	// 0x3063f03d
- (void)dealloc;	// 0x30617555
- (id)descriptionWithLocale:(id)locale;	// 0x306947e5
- (void)encodeWithCoder:(id)coder;	// 0x30694241
- (void)getObjects:(id *)objects count:(unsigned)count;	// 0x30694199
- (id)member:(id)member;	// 0x30617141
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30694161
- (id)objectEnumerator;	// 0x30694079
- (void)removeObject:(id)object;	// 0x3061719d
@end

