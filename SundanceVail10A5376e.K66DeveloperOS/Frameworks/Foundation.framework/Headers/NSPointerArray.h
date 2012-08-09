/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSCoding> {
}
@property(assign) unsigned count;	// G=0x34d7e33d; S=0x34d7e349; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x34d7e255
+ (id)pointerArrayWithOptions:(unsigned)options;	// 0x34d7e1b5
+ (id)pointerArrayWithPointerFunctions:(id)pointerFunctions;	// 0x34d7e205
+ (id)pointerArrayWithStrongObjects;	// 0x34d7e36d
+ (id)pointerArrayWithWeakObjects;	// 0x34d7e3b1
+ (id)strongObjectsPointerArray;	// 0x34d7e3f9
+ (id)weakObjectsPointerArray;	// 0x34d7e43d
- (id)init;	// 0x34d7e105
- (id)initWithCoder:(id)coder;	// 0x34d7e281
- (id)initWithOptions:(unsigned)options;	// 0x34d7e19d
- (id)initWithPointerFunctions:(id)pointerFunctions;	// 0x34d7e1a9
- (void)addPointer:(void *)pointer;	// 0x34d7e301
- (id)allObjects;	// 0x34d7e491
- (void)compact;	// 0x34d7e331
- (id)copyWithZone:(NSZone *)zone;	// 0x34d7e355
// converted property getter: - (unsigned)count;	// 0x34d7e33d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x34d7e2e9
- (void)encodeWithCoder:(id)coder;	// 0x34d7e361
- (void)insertPointer:(void *)pointer atIndex:(unsigned)index;	// 0x34d7e319
- (id)mutableArray;	// 0x34d7e485
- (void *)pointerAtIndex:(unsigned)index;	// 0x34d7e2f5
- (id)pointerFunctions;	// 0x34d7e2dd
- (void)removePointerAtIndex:(unsigned)index;	// 0x34d7e30d
- (void)replacePointerAtIndex:(unsigned)index withPointer:(void *)pointer;	// 0x34d7e325
// converted property setter: - (void)setCount:(unsigned)count;	// 0x34d7e349
@end
