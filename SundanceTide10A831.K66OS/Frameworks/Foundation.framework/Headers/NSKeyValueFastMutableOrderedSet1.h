/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableOrderedSet.h"

@class NSKeyValueNonmutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet1 : NSKeyValueFastMutableOrderedSet {
	NSKeyValueNonmutatingOrderedSetMethodSet *_nonmutatingMethods;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x3253ef0d
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x3253d05d
- (void)_proxyNonGCFinalize;	// 0x3253ee1d
- (unsigned)count;	// 0x3253d1f9
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3253e845
- (unsigned)indexOfObject:(id)object;	// 0x3253ea09
- (id)objectAtIndex:(unsigned)index;	// 0x3253eb81
- (id)objectsAtIndexes:(id)indexes;	// 0x32610425
@end
