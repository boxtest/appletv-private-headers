/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSOrderedSet.h"


@interface NSMutableOrderedSet : NSOrderedSet {
}
+ (id)orderedSetWithCapacity:(unsigned)capacity;	// 0x355f9209
- (id)initWithCapacity:(unsigned)capacity;	// 0x3568d391
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3568d3b5
- (void)_mutate;	// 0x35686d85
- (void)addObject:(id)object;	// 0x355f9329
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x35686d89
- (void)addObjectsFromArray:(id)array;	// 0x35608cc5
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x35686ef1
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x35687249
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x3568709d
- (void)addObjectsFromSet:(id)set;	// 0x3568734d
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x3568743d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x35686d19
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x35688175
- (void)insertObjects:(const id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x356090f9
- (void)insertObjectsFromArray:(id)array atIndex:(unsigned)index;	// 0x35687621
- (void)insertObjectsFromArray:(id)array range:(NSRange)range atIndex:(unsigned)index;	// 0x35608dc9
- (void)insertObjectsFromOrderedSet:(id)orderedSet atIndex:(unsigned)index;	// 0x35687c09
- (void)insertObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range atIndex:(unsigned)index;	// 0x356878d9
- (void)insertObjectsFromSet:(id)set atIndex:(unsigned)index;	// 0x35687ec1
- (void)intersectOrderedSet:(id)set;	// 0x35688579
- (void)intersectSet:(id)set;	// 0x35688869
- (void)minusOrderedSet:(id)set;	// 0x35688f19
- (void)minusSet:(id)set;	// 0x356890cd
- (void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;	// 0x35688b4d
- (void)removeAllObjects;	// 0x35689269
- (void)removeFirstObject;	// 0x356892bd
- (void)removeLastObject;	// 0x35689305
- (void)removeObject:(id)object;	// 0x35604f29
- (void)removeObject:(id)object inRange:(NSRange)range;	// 0x35689449
- (void)removeObjectAtIndex:(unsigned)index;	// 0x35686d3d
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x35689565
- (void)removeObjectsInArray:(id)array;	// 0x35689e25
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x35689c3d
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x3568a6cd
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x3568a51d
- (void)removeObjectsInRange:(NSRange)range;	// 0x3568934d
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array;	// 0x356899dd
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array range:(NSRange)range3;	// 0x35689775
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet;	// 0x3568a369
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x35689fb5
- (void)removeObjectsInRange:(NSRange)range inSet:(id)set;	// 0x3568a7d9
- (void)removeObjectsInSet:(id)set;	// 0x3568aa39
- (void)replaceObject:(id)object;	// 0x3568ad59
- (void)replaceObject:(id)object inRange:(NSRange)range;	// 0x3568abc9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x35686d61
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x3568b0bd
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id *)objects count:(unsigned)count;	// 0x3568ae1d
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array;	// 0x3568b85d
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array range:(NSRange)range3;	// 0x3568b519
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet;	// 0x3568be95
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x3568bb51
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromSet:(id)set;	// 0x3568c189
- (void)rollObjectsInRange:(NSRange)range by:(int)by;	// 0x3568c475
- (void)setArray:(id)array;	// 0x3568ca1d
- (void)setObject:(id)object;	// 0x3568c93d
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x3568c7b5
- (void)setObject:(id)object atIndexedSubscript:(unsigned)indexedSubscript;	// 0x3568c92d
- (void)setOrderedSet:(id)set;	// 0x3568cb11
- (void)setSet:(id)set;	// 0x3568cc09
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x3568ccfd
- (void)sortUsingComparator:(id)comparator;	// 0x3568d13d
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x3568d079
- (void)unionOrderedSet:(id)set;	// 0x35609741
- (void)unionSet:(id)set;	// 0x3568d1f5
@end

