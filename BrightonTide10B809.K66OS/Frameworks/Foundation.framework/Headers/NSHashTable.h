/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {
}
+ (id)alloc;	// 0x318b1c9d
+ (id)allocWithZone:(NSZone *)zone;	// 0x319244bd
+ (id)hashTableWithOptions:(unsigned)options;	// 0x31924531
+ (id)hashTableWithWeakObjects;	// 0x319244e9
+ (id)weakObjectsHashTable;	// 0x318fc015
- (id)init;	// 0x31924671
- (id)initWithCoder:(id)coder;	// 0x3192457d
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x319245d9
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x31924729
- (void)addObject:(id)object;	// 0x319246e1
- (id)allObjects;	// 0x319246b9
- (id)anyObject;	// 0x31924751
- (BOOL)containsObject:(id)object;	// 0x318b2351
- (id)copy;	// 0x31924705
- (id)copyWithZone:(NSZone *)zone;	// 0x31924f51
- (unsigned)count;	// 0x319246ad
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x319246a1
- (id)description;	// 0x3192467d
- (void)encodeWithCoder:(id)coder;	// 0x31924695
- (void *)getItem:(const void *)item;	// 0x319246d5
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x3192471d
- (void)insertKnownAbsentItem:(const void *)item;	// 0x319246ed
- (void)intersectHashTable:(id)table;	// 0x31924a1d
- (BOOL)intersectsHashTable:(id)table;	// 0x319247ad
- (BOOL)isEqualToHashTable:(id)hashTable;	// 0x3192486d
- (BOOL)isSubsetOfHashTable:(id)hashTable;	// 0x3192495d
- (id)member:(id)member;	// 0x318b0c19
- (void)minusHashTable:(id)table;	// 0x31924cd9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31924f61
- (id)mutableSet;	// 0x31924da9
- (id)objectEnumerator;	// 0x31924689
- (id)pointerFunctions;	// 0x31924735
- (void)removeAllItems;	// 0x31924711
- (void)removeAllObjects;	// 0x31924741
- (void)removeItem:(const void *)item;	// 0x319246f9
- (void)removeObject:(id)object;	// 0x318b2289
- (id)setRepresentation;	// 0x31924e7d
- (void)unionHashTable:(id)table;	// 0x31924c1d
- (unsigned)weakCount;	// 0x319246c5
@end
