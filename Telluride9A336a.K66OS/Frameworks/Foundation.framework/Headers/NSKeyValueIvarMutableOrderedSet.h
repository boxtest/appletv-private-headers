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
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x3374e1ed
- (id)_nonNilMutableOrderedSetValueWithSelector:(SEL)selector;	// 0x3374e33d
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x3374e1fd
- (void)_proxyNonGCFinalize;	// 0x3374e255
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x3374e2d1
- (unsigned)count;	// 0x3374e295
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3374e381
- (unsigned)indexOfObject:(id)object;	// 0x3374e3b9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3374e461
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x3374e505
- (id)objectAtIndex:(unsigned)index;	// 0x3374e401
- (id)objectsAtIndexes:(id)indexes;	// 0x3374e431
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3374e681
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x3374e6b1
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3374e6e1
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x3374e715
@end
