/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableSet.h"

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
	NSKeyValueGetter *_valueGetter;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x3738ade5
- (id)_nonNilSetValueWithSelector:(SEL)selector;	// 0x3738aead
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x3738adf5
- (void)_proxyNonGCFinalize;	// 0x3738ae5d
- (unsigned)count;	// 0x3738af41
- (id)member:(id)member;	// 0x3738af6d
- (id)objectEnumerator;	// 0x3738af9d
@end
