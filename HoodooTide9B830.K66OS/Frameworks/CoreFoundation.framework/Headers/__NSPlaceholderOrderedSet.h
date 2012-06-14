/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableOrderedSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x327b214d
+ (id)immutablePlaceholder;	// 0x327288ed
+ (void)initialize;	// 0x327287e9
+ (id)mutablePlaceholder;	// 0x32729311
- (id)init;	// 0x327288fd
- (id)initWithCapacity:(unsigned)capacity;	// 0x32729d29
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x32728951
- (unsigned)count;	// 0x327b2175
- (void)dealloc;	// 0x327b2171
- (unsigned)indexOfObject:(id)object;	// 0x327b2239
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x327b23c1
- (id)objectAtIndex:(unsigned)index;	// 0x327b22fd
- (oneway void)release;	// 0x327b2165
- (void)removeObjectAtIndex:(unsigned)index;	// 0x327b2485
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x327b2549
- (id)retain;	// 0x327b2161
- (unsigned)retainCount;	// 0x327b2169
@end
