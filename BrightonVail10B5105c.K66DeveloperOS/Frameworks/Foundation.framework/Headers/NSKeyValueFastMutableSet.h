/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableSet.h"

@class NSKeyValueMutatingSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {
	NSKeyValueMutatingSetMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x360f6181
- (void)_proxyNonGCFinalize;	// 0x360f61e9
- (void)addObject:(id)object;	// 0x360f6239
- (void)addObjectsFromArray:(id)array;	// 0x360f62e5
- (void)intersectSet:(id)set;	// 0x360f63a1
- (void)minusSet:(id)set;	// 0x360f6401
- (void)removeAllObjects;	// 0x360f6461
- (void)removeObject:(id)object;	// 0x360f6519
- (void)setSet:(id)set;	// 0x360f65c5
- (void)unionSet:(id)set;	// 0x360f6625
@end

