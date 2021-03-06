/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"
#import "NSFastEnumeration.h"


@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d1bed29
+ (id)array;	// 0x2d1beced
+ (id)arrayWithArray:(id)array;	// 0x2d1d2559
+ (id)arrayWithArray:(id)array copyItems:(BOOL)items;	// 0x2d274001
+ (id)arrayWithArray:(id)array range:(NSRange)range;	// 0x2d273fb5
+ (id)arrayWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x2d273f69
+ (id)arrayWithObject:(id)object;	// 0x2d1bf5ed
+ (id)arrayWithObjects:(id)objects;	// 0x2d1dbd71
+ (id)arrayWithObjects:(const id *)objects count:(unsigned)count;	// 0x2d1ccc25
+ (id)arrayWithOrderedSet:(id)orderedSet;	// 0x2d274555
+ (id)arrayWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x2d2744ed
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x2d2744a1
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x2d274455
+ (id)arrayWithSet:(id)set;	// 0x2d274891
+ (id)arrayWithSet:(id)set copyItems:(BOOL)items;	// 0x2d274851
+ (id)newArrayWithObjects:(const id *)objects count:(unsigned)count;	// 0x2d1e9a79
+ (BOOL)supportsSecureCoding;	// 0x2d27493d
- (id)initWithArray:(id)array;	// 0x2d1efcd5
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x2d1c5295
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x2d273f41
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x2d1c4b1d
- (id)initWithCoder:(id)coder;	// 0x2d274941
- (id)initWithObject:(id)object;	// 0x2d273f1d
- (id)initWithObjects:(id)objects;	// 0x2d1cfee5
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x2d273ef9
- (id)initWithOrderedSet:(id)orderedSet;	// 0x2d274419
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x2d2743d1
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x2d2743ad
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x2d274069
- (id)initWithSet:(id)set;	// 0x2d27483d
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x2d2745b5
- (unsigned long)_cfTypeID;	// 0x2d1ddbed
- (BOOL)_hasObjects;	// 0x2d1c2939
- (BOOL)_hasStrongReferences;	// 0x2d271afd
- (id)allObjects;	// 0x2d21bd4d
- (id)arrayByAddingObject:(id)object;	// 0x2d208409
- (id)arrayByAddingObjectsFromArray:(id)array;	// 0x2d1dbf8d
- (id)arrayByApplyingSelector:(SEL)selector;	// 0x2d206441
- (id)arrayByExcludingObjectsInArray:(id)array;	// 0x2d1f8599
- (id)arrayByExcludingToObjectsInArray:(id)array;	// 0x2d274949
- (id)componentsJoinedByString:(id)string;	// 0x2d207be9
- (BOOL)containsObject:(id)object;	// 0x2d1d03bd
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x2d271b01
- (BOOL)containsObjectIdenticalTo:(id)to;	// 0x2d271d3d
- (BOOL)containsObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x2d271c45
- (id)copyWithZone:(NSZone *)zone;	// 0x2d2748d1
- (unsigned)count;	// 0x2d271ab5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x2d2085fd
- (unsigned)countForObject:(id)object;	// 0x2d271f2d
- (unsigned)countForObject:(id)object inRange:(NSRange)range;	// 0x2d271ded
- (id)description;	// 0x2d273ee5
- (id)descriptionWithLocale:(id)locale;	// 0x2d2003f9
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x2d200411
- (void)encodeWithCoder:(id)coder;	// 0x2d274945
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x2d272019
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x2d1f18ad
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x2d1cb21d
- (id)firstObject;	// 0x2d2725c9
- (id)firstObjectCommonWithArray:(id)array;	// 0x2d272601
- (void)getObjects:(id *)objects;	// 0x2d1f9781
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x2d208715
- (unsigned)hash;	// 0x2d2057d1
- (unsigned)indexOfObject:(id)object;	// 0x2d1c2841
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x2d272791
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x2d272d11
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x2d273031
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x2d1ef0e1
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x2d20afdd
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x2d207dd9
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d207e65
- (id)indexesOfObject:(id)object;	// 0x2d272a81
- (id)indexesOfObject:(id)object inRange:(NSRange)range;	// 0x2d2728dd
- (id)indexesOfObjectIdenticalTo:(id)to;	// 0x2d272c9d
- (id)indexesOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x2d272b3d
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x2d27349d
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x2d1c5aed
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d1c5b79
- (BOOL)isEqual:(id)equal;	// 0x2d1c4fed
- (BOOL)isEqualToArray:(id)array;	// 0x2d1c5041
- (BOOL)isNSArray__;	// 0x2d1c5039
- (id)lastObject;	// 0x2d1c27b5
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x2d1f76e5
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x2d1fb84d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x2d1c4ac5
- (id)objectAtIndex:(unsigned)index;	// 0x2d271ad9
- (id)objectAtIndexedSubscript:(unsigned)indexedSubscript;	// 0x2d20dcd5
- (id)objectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x2d2739a5
- (id)objectEnumerator;	// 0x2d205105
- (id)objectPassingTest:(id)test;	// 0x2d273b81
- (id)objectWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d273ad5
- (id)objectsAtIndexes:(id)indexes;	// 0x2d1f5ffd
- (id)objectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x2d273c0d
- (id)objectsPassingTest:(id)test;	// 0x2d273dc9
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d273d29
- (id)reverseObjectEnumerator;	// 0x2d1f17b5
- (id)reversedArray;	// 0x2d273e55
- (id)sortedArrayFromRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x2d1f645d
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x2d1f63b5
- (id)sortedArrayUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x2d20586d
- (id)sortedArrayUsingSelector:(SEL)selector;	// 0x2d208045
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x2d20592d
- (id)subarrayWithRange:(NSRange)range;	// 0x2d203139
@end

