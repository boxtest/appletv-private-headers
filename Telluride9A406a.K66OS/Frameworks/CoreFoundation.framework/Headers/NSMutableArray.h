/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSArray.h"
#import "CoreFoundation-Structs.h"


@interface NSMutableArray : NSArray {
}
+ (id)arrayWithCapacity:(unsigned)capacity;	// 0x34037f7d
- (id)initWithCapacity:(unsigned)capacity;	// 0x340d939d
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x340d93c1
- (void)_mutate;	// 0x34079a45
- (void)addObject:(id)object;	// 0x340d4d29
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x340d4dfd
- (void)addObjectsFromArray:(id)array;	// 0x3404c2bd
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x340d4f99
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x340d52c1
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x340d512d
- (void)addObjectsFromSet:(id)set;	// 0x340d53b5
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x3407e769
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x340d4cbd
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x340d5fd9
- (void)insertObjects:(const id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x3404c881
- (void)insertObjectsFromArray:(id)array atIndex:(unsigned)index;	// 0x340d5495
- (void)insertObjectsFromArray:(id)array range:(NSRange)range atIndex:(unsigned)index;	// 0x3404c52d
- (void)insertObjectsFromOrderedSet:(id)orderedSet atIndex:(unsigned)index;	// 0x340d5a91
- (void)insertObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range atIndex:(unsigned)index;	// 0x340d573d
- (void)insertObjectsFromSet:(id)set atIndex:(unsigned)index;	// 0x340d5d39
- (void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;	// 0x340d6485
- (void)removeAllObjects;	// 0x34032ad5
- (void)removeFirstObject;	// 0x340d689d
- (void)removeLastObject;	// 0x340d68e5
- (void)removeObject:(id)object;	// 0x3403d479
- (void)removeObject:(id)object inRange:(NSRange)range;	// 0x340d696d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x340d4ce1
- (void)removeObjectIdenticalTo:(id)to;	// 0x340614f5
- (void)removeObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x340d6add
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x3407941d
- (void)removeObjectsInArray:(id)array;	// 0x3406d089
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x340d6db5
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x340d74e9
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x340d7355
- (void)removeObjectsInRange:(NSRange)range;	// 0x3407d635
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array;	// 0x340d6c1d
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array range:(NSRange)range3;	// 0x3406d181
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet;	// 0x340d71bd
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x340d6f49
- (void)removeObjectsInRange:(NSRange)range inSet:(id)set;	// 0x340d75e1
- (void)removeObjectsInSet:(id)set;	// 0x340d77a1
- (void)replaceObject:(id)object;	// 0x340d7a55
- (void)replaceObject:(id)object inRange:(NSRange)range;	// 0x340d787d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x340d4d05
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x340d7b95
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id *)objects count:(unsigned)count;	// 0x340325dd
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array;	// 0x3406f87d
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array range:(NSRange)range3;	// 0x34082201
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet;	// 0x340d83a1
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x340d8041
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromSet:(id)set;	// 0x340d865d
- (void)rollObjectsInRange:(NSRange)range by:(int)by;	// 0x340d8915
- (void)setArray:(id)array;	// 0x34032105
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x340d8c29
- (void)setOrderedSet:(id)set;	// 0x340d8d95
- (void)setSet:(id)set;	// 0x340d8fa5
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x3403e6ed
- (void)sortUsingComparator:(id)comparator;	// 0x34063a85
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x3403e551
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context range:(NSRange)range;	// 0x340d91e5
- (void)sortUsingSelector:(SEL)selector;	// 0x3405dac9
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x3403e629
@end

