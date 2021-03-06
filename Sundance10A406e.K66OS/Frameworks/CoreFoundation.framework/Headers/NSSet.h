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


@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x33a45561
+ (id)newSetWithObjects:(const id *)objects count:(unsigned)count;	// 0x33b0256d
+ (id)set;	// 0x33a54301
+ (id)setWithArray:(id)array;	// 0x33a614cd
+ (id)setWithArray:(id)array copyItems:(BOOL)items;	// 0x33b027dd
+ (id)setWithArray:(id)array range:(NSRange)range;	// 0x33b02791
+ (id)setWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x33a53879
+ (id)setWithObject:(id)object;	// 0x33a90ef9
+ (id)setWithObjects:(id)objects;	// 0x33a826d9
+ (id)setWithObjects:(const id *)objects count:(unsigned)count;	// 0x33a97f55
+ (id)setWithOrderedSet:(id)orderedSet;	// 0x33b02d25
+ (id)setWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x33b02cbd
+ (id)setWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x33b02c71
+ (id)setWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x33b02c25
+ (id)setWithSet:(id)set;	// 0x33a98445
+ (id)setWithSet:(id)set copyItems:(BOOL)items;	// 0x33b02d85
+ (BOOL)supportsSecureCoding;	// 0x33b02e09
- (id)initWithArray:(id)array;	// 0x33a7a70d
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x33b02749
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x33b02725
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x33a538d5
- (id)initWithCoder:(id)coder;	// 0x33b02e0d
- (id)initWithObject:(id)object;	// 0x33b0254d
- (id)initWithObjects:(id)objects;	// 0x33a5e035
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x33b02529
- (id)initWithOrderedSet:(id)orderedSet;	// 0x33b02be9
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x33b02ba1
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x33b02b7d
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x33b02845
- (id)initWithSet:(id)set;	// 0x33a92a01
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x33a549e1
- (void)__applyValues:(/*function-pointer*/ void *)values context:(void *)context;	// 0x33aa074d
- (BOOL)__getValue:(id *)value forObj:(id)obj;	// 0x33b02125
- (unsigned long)_cfTypeID;	// 0x33b0108d
- (id)allObjects;	// 0x33a54399
- (id)anyObject;	// 0x33a5433d
- (BOOL)containsObject:(id)object;	// 0x33a53f29
- (id)copyWithZone:(NSZone *)zone;	// 0x33b02dc5
- (unsigned)count;	// 0x33b01021
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33b01091
- (unsigned)countForObject:(id)object;	// 0x33a61a41
- (id)description;	// 0x33b02515
- (id)descriptionWithLocale:(id)locale;	// 0x33b02501
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x33b021ad
- (void)encodeWithCoder:(id)coder;	// 0x33b02e11
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x33a9c50d
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x33a9c599
- (void)getObjects:(id *)objects;	// 0x33a93679
- (void)getObjects:(id *)objects count:(unsigned)count;	// 0x33a9bed5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x33b0214d
- (unsigned)hash;	// 0x33a9375d
- (BOOL)intersectsOrderedSet:(id)set;	// 0x33b014d9
- (BOOL)intersectsSet:(id)set;	// 0x33a9e17d
- (BOOL)isEqual:(id)equal;	// 0x33a9205d
- (BOOL)isEqualToSet:(id)set;	// 0x33a8291d
- (BOOL)isNSSet__;	// 0x33a45e4d
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x33b01675
- (BOOL)isSubsetOfSet:(id)set;	// 0x33b017f1
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x33a9c43d
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x33aa048d
- (id)member:(id)member;	// 0x33b01045
- (id)members:(id)members notFoundMarker:(id)marker;	// 0x33b01ab5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33a549a5
- (id)objectEnumerator;	// 0x33b01069
- (id)objectsPassingTest:(id)test;	// 0x33a9bd3d
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x33a9bdc9
- (id)setByAddingObject:(id)object;	// 0x33a97d69
- (id)setByAddingObjectsFromArray:(id)array;	// 0x33b02e15
- (id)setByAddingObjectsFromSet:(id)set;	// 0x33a97f95
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x33b02099
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x33b01dc9
@end

