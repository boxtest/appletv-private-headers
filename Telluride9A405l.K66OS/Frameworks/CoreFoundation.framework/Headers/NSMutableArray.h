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
+ (id)arrayWithCapacity:(unsigned)capacity;	// 0x35265f7d
- (id)initWithCapacity:(unsigned)capacity;	// 0x3530739d
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x353073c1
- (void)_mutate;	// 0x352a7a45
- (void)addObject:(id)object;	// 0x35302d29
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x35302dfd
- (void)addObjectsFromArray:(id)array;	// 0x3527a2bd
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x35302f99
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x353032c1
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x3530312d
- (void)addObjectsFromSet:(id)set;	// 0x353033b5
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x352ac769
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x35302cbd
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x35303fd9
- (void)insertObjects:(const id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x3527a881
- (void)insertObjectsFromArray:(id)array atIndex:(unsigned)index;	// 0x35303495
- (void)insertObjectsFromArray:(id)array range:(NSRange)range atIndex:(unsigned)index;	// 0x3527a52d
- (void)insertObjectsFromOrderedSet:(id)orderedSet atIndex:(unsigned)index;	// 0x35303a91
- (void)insertObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range atIndex:(unsigned)index;	// 0x3530373d
- (void)insertObjectsFromSet:(id)set atIndex:(unsigned)index;	// 0x35303d39
- (void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;	// 0x35304485
- (void)removeAllObjects;	// 0x35260ad5
- (void)removeFirstObject;	// 0x3530489d
- (void)removeLastObject;	// 0x353048e5
- (void)removeObject:(id)object;	// 0x3526b479
- (void)removeObject:(id)object inRange:(NSRange)range;	// 0x3530496d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x35302ce1
- (void)removeObjectIdenticalTo:(id)to;	// 0x3528f4f5
- (void)removeObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x35304add
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x352a741d
- (void)removeObjectsInArray:(id)array;	// 0x3529b089
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x35304db5
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x353054e9
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x35305355
- (void)removeObjectsInRange:(NSRange)range;	// 0x352ab635
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array;	// 0x35304c1d
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array range:(NSRange)range3;	// 0x3529b181
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet;	// 0x353051bd
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x35304f49
- (void)removeObjectsInRange:(NSRange)range inSet:(id)set;	// 0x353055e1
- (void)removeObjectsInSet:(id)set;	// 0x353057a1
- (void)replaceObject:(id)object;	// 0x35305a55
- (void)replaceObject:(id)object inRange:(NSRange)range;	// 0x3530587d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x35302d05
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x35305b95
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id *)objects count:(unsigned)count;	// 0x352605dd
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array;	// 0x3529d87d
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array range:(NSRange)range3;	// 0x352b0201
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet;	// 0x353063a1
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x35306041
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromSet:(id)set;	// 0x3530665d
- (void)rollObjectsInRange:(NSRange)range by:(int)by;	// 0x35306915
- (void)setArray:(id)array;	// 0x35260105
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x35306c29
- (void)setOrderedSet:(id)set;	// 0x35306d95
- (void)setSet:(id)set;	// 0x35306fa5
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x3526c6ed
- (void)sortUsingComparator:(id)comparator;	// 0x35291a85
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x3526c551
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context range:(NSRange)range;	// 0x353071e5
- (void)sortUsingSelector:(SEL)selector;	// 0x3528bac9
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x3526c629
@end
