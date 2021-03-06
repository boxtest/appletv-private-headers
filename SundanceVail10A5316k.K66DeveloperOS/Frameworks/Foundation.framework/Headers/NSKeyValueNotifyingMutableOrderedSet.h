/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableOrderedSet.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableOrderedSet : NSKeyValueMutableOrderedSet {
@private
	NSMutableOrderedSet *_mutableOrderedSet;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31aee8a9
+ (id)_proxyShare;	// 0x31aee8b9
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31aee8e9
- (void)_proxyNonGCFinalize;	// 0x31aee965
- (unsigned)count;	// 0x31aee9b5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31aee9d5
- (unsigned)indexOfObject:(id)object;	// 0x31aeea09
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x31aeea69
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x31aeeb39
- (id)objectAtIndex:(unsigned)index;	// 0x31aeea29
- (id)objectsAtIndexes:(id)indexes;	// 0x31aeea49
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31aeebc5
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x31aeec91
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31aeed19
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x31aeede9
@end

