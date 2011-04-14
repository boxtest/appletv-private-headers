/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSArray.h> // Unknown library

@class NSFetchRequest, _PFArray, NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _PFBatchFaultingArray : NSArray {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	_PFArray *_array;	// 12 = 0xc
	unsigned *_entryFlags;	// 16 = 0x10
	NSManagedObjectContext *_moc;	// 20 = 0x14
	NSFetchRequest *_request;	// 24 = 0x18
	unsigned _batchSize;	// 28 = 0x1c
	unsigned *_LRUBatches;	// 32 = 0x20
	PFBatchFaultingArrayFlags _flags;	// 36 = 0x24
}
@property(readonly, assign) unsigned count;	// G=0x330ddf31; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3311a499
+ (id)alloc;	// 0x33100edd
+ (id)allocWithZone:(NSZone *)zone;	// 0x3311b3c9
+ (void)initialize;	// 0x33100ebd
- (id)initWithPFArray:(id)pfarray andRequest:(id)request andContext:(id)context;	// 0x33100ee9
- (id)_newSubArrayInRange:(NSRange)range asMutable:(BOOL)aMutable;	// 0x3311c885
- (id)arrayFromObjectIDs;	// 0x3310a825
- (id)copyWithZone:(NSZone *)zone;	// 0x3311a765
// converted property getter: - (unsigned)count;	// 0x330ddf31
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x330dde75
- (void)dealloc;	// 0x33107109
- (id)description;	// 0x3311b345
- (void)getObjects:(id *)objects;	// 0x3311bdb5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3311bf49
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x3311cd49
- (unsigned)indexOfObject:(id)object;	// 0x3311bde1
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x3311be0d
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x3311be41
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x3311cb9d
- (BOOL)isEqualToArray:(id)array;	// 0x3311c025
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x3311cea5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3311bd85
- (id)newArrayFromObjectIDs;	// 0x3310a849
- (id)objectAtIndex:(unsigned)index;	// 0x330ddf41
- (void)release;	// 0x33101151
- (id)retain;	// 0x33101135
- (unsigned)retainCount;	// 0x3311a49d
- (id)subarrayWithRange:(NSRange)range;	// 0x3311a709
@end
