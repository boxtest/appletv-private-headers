/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderArray : NSMutableArray {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x352ff375
+ (id)immutablePlaceholder;	// 0x3525e991
+ (void)initialize;	// 0x35283161
+ (id)mutablePlaceholder;	// 0x35262dd9
- (id)init;	// 0x3526b549
- (id)initWithCapacity:(unsigned)capacity;	// 0x35265fb9
- (id)initWithContentsOfFile:(id)file;	// 0x352a7775
- (id)initWithContentsOfURL:(id)url;	// 0x352ff29d
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3525e9a1
- (unsigned)count;	// 0x352ff39d
- (void)dealloc;	// 0x352ff399
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x352ff525
- (id)objectAtIndex:(unsigned)index;	// 0x352ff461
- (oneway void)release;	// 0x352ff38d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x352ff5e9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x352ff6ad
- (id)retain;	// 0x352ff389
- (unsigned)retainCount;	// 0x352ff391
@end

