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
@private
	NSKeyValueNonmutatingOrderedSetMethodSet *_nonmutatingMethods;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31670655
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x315a6fcd
- (void)_proxyNonGCFinalize;	// 0x31670665
- (unsigned)count;	// 0x315a7169
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x315a8e75
- (unsigned)indexOfObject:(id)object;	// 0x316706b9
- (id)objectAtIndex:(unsigned)index;	// 0x315a9549
- (id)objectsAtIndexes:(id)indexes;	// 0x316706f1
@end

