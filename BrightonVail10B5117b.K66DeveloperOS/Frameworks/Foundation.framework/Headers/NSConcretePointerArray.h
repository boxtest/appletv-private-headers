/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPointerArray.h"


__attribute__((visibility("hidden")))
@interface NSConcretePointerArray : NSPointerArray {
	NSSlice slice;	// 4 = 0x4
	unsigned count;	// 68 = 0x44
	unsigned capacity;	// 72 = 0x48
	unsigned options;	// 76 = 0x4c
	unsigned mutations;	// 80 = 0x50
	BOOL needsCompaction;	// 84 = 0x54
}
@property(assign) unsigned count;	// G=0x3199f441; S=0x3199f451; converted property
- (id)init;	// 0x3199e529
- (id)initWithCoder:(id)coder;	// 0x3199e781
- (id)initWithOptions:(unsigned)options;	// 0x3199e551
- (id)initWithPointerFunctions:(id)pointerFunctions;	// 0x3199e66d
- (void)_initBlock;	// 0x3199e53d
- (void)_markNeedsCompaction;	// 0x3199f33d
- (void)addPointer:(void *)pointer;	// 0x3199ee91
- (void)arrayGrow:(unsigned)grow;	// 0x3199ed19
- (Class)classForCoder;	// 0x3199e765
- (void)compact;	// 0x3199f351
- (id)copyWithZone:(NSZone *)zone;	// 0x3199f629
// converted property getter: - (unsigned)count;	// 0x3199f441
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3199ec2d
- (void)dealloc;	// 0x3199e82d
- (void)encodeWithCoder:(id)coder;	// 0x3199ead5
- (void)finalize;	// 0x3199e8d9
- (unsigned)hash;	// 0x3199e99d
- (unsigned)indexOfPointer:(void *)pointer;	// 0x3199f51d
- (void)insertPointer:(void *)pointer atIndex:(unsigned)index;	// 0x3199f09d
- (BOOL)isEqual:(id)equal;	// 0x3199e9c5
- (void *)pointerAtIndex:(unsigned)index;	// 0x3199ede1
- (id)pointerFunctions;	// 0x3199ecb5
- (void)removePointer:(void *)pointer;	// 0x3199f58d
- (void)removePointerAtIndex:(unsigned)index;	// 0x3199ef4d
- (void)replacePointerAtIndex:(unsigned)index withPointer:(void *)pointer;	// 0x3199f241
// converted property setter: - (void)setCount:(unsigned)count;	// 0x3199f451
@end
