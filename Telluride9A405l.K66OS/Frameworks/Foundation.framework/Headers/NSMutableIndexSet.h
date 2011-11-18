/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSIndexSet.h"


@interface NSMutableIndexSet : NSIndexSet {
	void *_reserved;	// 16 = 0x10
}
- (void)_addRangeToArray:(NSRange)array;	// 0x302714c5
- (void)_ensureRangeCapacity:(unsigned)capacity;	// 0x30271585
- (void)_incrementBy:(unsigned)by startingAtIndex:(unsigned)index;	// 0x302c80b9
- (void)_insertRange:(NSRange)range inArrayAtIndex:(unsigned)index;	// 0x30298d11
- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned)index;	// 0x30271685
- (void)_removeAndDecrementBy:(unsigned)by startingAtIndex:(unsigned)index;	// 0x302c8295
- (void)_removeRangeInArrayAtIndex:(unsigned)index;	// 0x30298fb1
- (void)_replaceRangeInArrayAtIndex:(unsigned)index withRange:(NSRange)range;	// 0x302777f1
- (void)addIndex:(unsigned)index;	// 0x30271231
- (void)addIndexes:(id)indexes;	// 0x3029201d
- (void)addIndexes:(unsigned *)indexes count:(unsigned)count;	// 0x302c7e85
- (void)addIndexesFromIndexSet:(id)indexSet;	// 0x302c7e75
- (void)addIndexesInRange:(NSRange)range;	// 0x30271245
- (Class)classForCoder;	// 0x302c7e65
- (void)removeAllIndexes;	// 0x30291fc5
- (void)removeIndex:(unsigned)index;	// 0x30298e3d
- (void)removeIndexes:(id)indexes;	// 0x302c7f59
- (void)removeIndexesFromIndexSet:(id)indexSet;	// 0x302c80a9
- (void)removeIndexesInRange:(NSRange)range;	// 0x30298e51
- (void)shiftIndexesStartingAtIndex:(unsigned)index by:(int)by;	// 0x302c8405
@end

