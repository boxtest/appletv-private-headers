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
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31107655
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x3103dfcd
- (void)_proxyNonGCFinalize;	// 0x31107665
- (unsigned)count;	// 0x3103e169
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3103fe75
- (unsigned)indexOfObject:(id)object;	// 0x311076b9
- (id)objectAtIndex:(unsigned)index;	// 0x31040549
- (id)objectsAtIndexes:(id)indexes;	// 0x311076f1
@end

