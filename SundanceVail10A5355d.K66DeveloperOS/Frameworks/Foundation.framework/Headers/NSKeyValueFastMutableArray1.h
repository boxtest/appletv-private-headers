/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableArray.h"

@class NSKeyValueNonmutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray1 : NSKeyValueFastMutableArray {
	NSKeyValueNonmutatingArrayMethodSet *_nonmutatingMethods;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x346ba945
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x346ba955
- (void)_proxyNonGCFinalize;	// 0x346ba9bd
- (unsigned)count;	// 0x346baa0d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x346baa3d
- (id)objectAtIndex:(unsigned)index;	// 0x346baab5
- (id)objectsAtIndexes:(id)indexes;	// 0x346bab79
@end
