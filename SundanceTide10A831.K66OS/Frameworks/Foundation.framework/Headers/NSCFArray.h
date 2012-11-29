/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableArray.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSCFArray : NSMutableArray {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3255c1f5
- (BOOL)_isDeallocating;	// 0x3255c1a9
- (BOOL)_tryRetain;	// 0x3255c199
- (void)addObject:(id)object;	// 0x3255c351
- (Class)classForCoder;	// 0x3255c1f9
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x3255c69d
- (id)copyWithZone:(NSZone *)zone;	// 0x3255c231
- (unsigned)count;	// 0x3255c28d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3255c341
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x3255c7ad
- (void)finalize;	// 0x3255c1b5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3255c6f5
- (unsigned)hash;	// 0x3255c17d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3255c385
- (BOOL)isEqual:(id)equal;	// 0x3255c131
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3255c26d
- (id)objectAtIndex:(unsigned)index;	// 0x3255c291
- (oneway void)release;	// 0x3255c191
- (void)removeAllObjects;	// 0x3255c751
- (void)removeLastObject;	// 0x3255c529
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3255c561
- (void)removeObjectsInRange:(NSRange)range;	// 0x3255c5ed
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3255c459
- (void)replaceObjectsInRange:(NSRange)range withObjects:(id *)objects count:(unsigned)count;	// 0x3255c901
- (id)retain;	// 0x3255c181
- (unsigned)retainCount;	// 0x3255c195
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x3255c841
@end
