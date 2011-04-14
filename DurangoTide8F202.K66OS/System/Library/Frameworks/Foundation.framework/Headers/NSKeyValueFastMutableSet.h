/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableSet.h"

@class NSKeyValueMutatingSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {
@private
	NSKeyValueMutatingSetMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x3247b9c9
- (void)_proxyNonGCFinalize;	// 0x3247b97d
- (void)addObject:(id)object;	// 0x3247bfcd
- (void)addObjectsFromArray:(id)array;	// 0x3247bf1d
- (void)intersectSet:(id)set;	// 0x3247bebd
- (void)minusSet:(id)set;	// 0x3247be5d
- (void)removeAllObjects;	// 0x3247bdb1
- (void)removeObject:(id)object;	// 0x3247bd09
- (void)setSet:(id)set;	// 0x3247bca9
- (void)unionSet:(id)set;	// 0x3247bc49
@end
