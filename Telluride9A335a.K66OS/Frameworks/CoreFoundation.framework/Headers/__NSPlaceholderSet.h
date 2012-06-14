/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableSet.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderSet : NSMutableSet {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x33509735
+ (id)immutablePlaceholder;	// 0x33472765
+ (void)initialize;	// 0x3347dd65
+ (id)mutablePlaceholder;	// 0x3345aba1
- (id)init;	// 0x3345abb1
- (id)initWithCapacity:(unsigned)capacity;	// 0x3345ac05
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3345de5d
- (void)addObject:(id)object;	// 0x335099a9
- (unsigned)count;	// 0x3350975d
- (void)dealloc;	// 0x33509759
- (id)member:(id)member;	// 0x33509821
- (id)objectEnumerator;	// 0x335098e5
- (oneway void)release;	// 0x3350974d
- (void)removeObject:(id)object;	// 0x33509a6d
- (id)retain;	// 0x33509749
- (unsigned)retainCount;	// 0x33509751
@end
