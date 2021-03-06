/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet {
@private
	unsigned char _cfinfo[4];	// 4 = 0x4
	unsigned _bits[4];	// 8 = 0x8
	void *_callbacks;	// 24 = 0x18
	id *_values;	// 28 = 0x1c
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x35314c7d
- (BOOL)_isDeallocating;	// 0x35314c29
- (unsigned)_trueCount;	// 0x35314c81
- (BOOL)_tryRetain;	// 0x35314c15
- (void)addObject:(id)object;	// 0x35264d6d
- (Class)classForCoder;	// 0x3529e989
- (id)copyWithZone:(NSZone *)zone;	// 0x35292061
- (unsigned)count;	// 0x352620ad
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35262229
- (void)finalize;	// 0x35314c39
- (void)getObjects:(id *)objects;	// 0x3529e9c9
- (unsigned)hash;	// 0x352b26ad
- (BOOL)isEqual:(id)equal;	// 0x3529cc5d
- (id)member:(id)member;	// 0x3527a0f1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x352650ad
- (id)objectEnumerator;	// 0x352a93f5
- (oneway void)release;	// 0x35262295
- (void)removeAllObjects;	// 0x35264a4d
- (void)removeObject:(id)object;	// 0x3526525d
- (id)retain;	// 0x35279775
- (unsigned)retainCount;	// 0x35314c35
@end

