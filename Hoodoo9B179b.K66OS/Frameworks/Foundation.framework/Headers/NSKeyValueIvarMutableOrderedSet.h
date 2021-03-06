/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableOrderedSet.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableOrderedSet : NSKeyValueMutableOrderedSet {
@private
	objc_ivar *_ivar;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x311081dd
- (id)_nonNilMutableOrderedSetValueWithSelector:(SEL)selector;	// 0x3110832d
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x311081ed
- (void)_proxyNonGCFinalize;	// 0x31108245
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x311082c1
- (unsigned)count;	// 0x31108285
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31108371
- (unsigned)indexOfObject:(id)object;	// 0x311083a9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x31108451
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x311084f5
- (id)objectAtIndex:(unsigned)index;	// 0x311083f1
- (id)objectsAtIndexes:(id)indexes;	// 0x31108421
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31108671
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x311086a1
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x311086d1
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x31108705
@end

