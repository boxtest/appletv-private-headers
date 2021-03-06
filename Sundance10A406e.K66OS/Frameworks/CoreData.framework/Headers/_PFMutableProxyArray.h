/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableArray.h> // Unknown library
#import "CoreData-Structs.h"

@class _PFArray;

@interface _PFMutableProxyArray : NSMutableArray {
	int _cd_rc;	// 4 = 0x4
	unsigned _editCount;	// 8 = 0x8
	unsigned _offset;	// 12 = 0xc
	unsigned _limit;	// 16 = 0x10
	_PFArray *_originalArray;	// 20 = 0x14
	NSMutableArray *_updatedObjectsArray;	// 24 = 0x18
	CFArrayRef _indicesVeneer;	// 28 = 0x1c
}
- (id)initWithPFArray:(id)pfarray;	// 0x33cf07d5
- (id)initWithPFArray:(id)pfarray inRange:(NSRange)range;	// 0x33cf06dd
- (BOOL)_isDeallocating;	// 0x33cf0b01
- (void)_rehash;	// 0x33cf0b41
- (BOOL)_tryRetain;	// 0x33cf0ab1
- (void)addObject:(id)object;	// 0x33cf10f5
- (id)arrayFromObjectIDs;	// 0x33cf0fe1
- (unsigned)count;	// 0x33cf0b2d
- (void)dealloc;	// 0x33cf0931
- (void)finalize;	// 0x33cf09a9
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x33cf0f59
- (unsigned)indexOfObject:(id)object;	// 0x33cf0e25
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x33cf0e5d
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x33cf0e95
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x33cf0ecd
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x33cf11fd
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x33cf0d99
- (id)newArrayFromObjectIDs;	// 0x33cf1009
- (id)objectAtIndex:(unsigned)index;	// 0x33cf0d25
- (oneway void)release;	// 0x33cf0a25
- (void)removeLastObject;	// 0x33cf1155
- (void)removeObjectAtIndex:(unsigned)index;	// 0x33cf1261
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x33cf12f5
- (id)retain;	// 0x33cf09ed
- (unsigned)retainCount;	// 0x33cf0a9d
- (id)subarrayWithRange:(NSRange)range;	// 0x33cf080d
@end

