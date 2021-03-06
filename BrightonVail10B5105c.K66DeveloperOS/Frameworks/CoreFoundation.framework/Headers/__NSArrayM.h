/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSArrayM : NSMutableArray {
	unsigned _used;	// 4 = 0x4
	unsigned _doHardRetain : 1;	// 8 = 0x8
	unsigned _doWeakAccess : 1;	// 8 = 0x8
	unsigned _size : 30;	// 8 = 0x8
	unsigned _hasObjects : 1;	// 12 = 0xc
	unsigned _hasStrongReferences : 1;	// 12 = 0xc
	unsigned _offset : 30;	// 12 = 0xc
	unsigned long _mutations;	// 16 = 0x10
	id *_list;	// 20 = 0x14
}
+ (id)__new:(const id *)aNew :(unsigned)arg2 :(BOOL)arg3 :(BOOL)arg4 :(BOOL)arg5;	// 0x35687415
+ (id)allocWithZone:(NSZone *)zone;	// 0x35730cf5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x35730cf1
- (BOOL)_hasObjects;	// 0x3568d921
- (BOOL)_hasStrongReferences;	// 0x35730b15
- (void)_mutate;	// 0x356886f5
- (void)addObject:(id)object;	// 0x356875a5
- (id)copyWithZone:(NSZone *)zone;	// 0x3568d939
- (unsigned)count;	// 0x356837d9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x356868e9
- (void)dealloc;	// 0x356888d1
- (void)finalize;	// 0x35730b2d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x35687b91
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x356b9e2d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x356875d9
- (id)objectAtIndex:(unsigned)index;	// 0x35688ad1
- (void)removeLastObject;	// 0x356c34b1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x35688bb9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3568870d
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x356a8141
@end

