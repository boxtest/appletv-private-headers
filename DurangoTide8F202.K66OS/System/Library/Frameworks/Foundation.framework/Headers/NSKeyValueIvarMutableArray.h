/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableArray.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableArray : NSKeyValueMutableArray {
@private
	objc_ivar *_ivar;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x32478f5d
- (id)_nonNilMutableArrayValueWithSelector:(SEL)selector;	// 0x3247ae95
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x32479791
- (void)_proxyNonGCFinalize;	// 0x32478f75
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x3247a4f5
- (void)addObject:(id)object;	// 0x3247ae25
- (unsigned)count;	// 0x3247aed5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3247974d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3247ad8d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x3247ac05
- (id)objectAtIndex:(unsigned)index;	// 0x32479721
- (id)objectsAtIndexes:(id)indexes;	// 0x324796f5
- (void)removeLastObject;	// 0x324796d1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x324796a5
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x32479679
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32479649
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x32479619
@end
