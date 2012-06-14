/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSHashTable.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcreteHashTable : NSHashTable {
@private
	NSSlice slice;	// 4 = 0x4
	unsigned count;	// 68 = 0x44
	unsigned capacity;	// 72 = 0x48
	unsigned options;	// 76 = 0x4c
	unsigned mutations;	// 80 = 0x50
}
@property(readonly, assign) unsigned count;	// G=0x33693dd1; converted property
- (id)init;	// 0x336bb86d
- (id)initWithCoder:(id)coder;	// 0x336bb89d
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x3364f81d
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x33683e15
- (void)_initBlock;	// 0x3364f94d
- (void)addObject:(id)object;	// 0x3364fc71
- (id)allObjects;	// 0x336bbddd
- (void)assign:(unsigned)assign key:(const void *)key;	// 0x3364fe3d
- (Class)classForCoder;	// 0x336bb881
- (id)copy;	// 0x3368842d
// converted property getter: - (unsigned)count;	// 0x33693dd1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33665dc1
- (void)dealloc;	// 0x336508a5
- (id)description;	// 0x336bbf59
- (void)encodeWithCoder:(id)coder;	// 0x336bb931
- (void)finalize;	// 0x336bbf05
- (void *)getItem:(const void *)item;	// 0x33650099
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x336bbe95
- (unsigned)hash;	// 0x336bbaf1
- (void)hashGrow;	// 0x3364fe99
- (void)insertItem:(const void *)item;	// 0x336885a5
- (void)insertKnownAbsentItem:(const void *)item;	// 0x336bbcd9
- (BOOL)isEqual:(id)equal;	// 0x336bbb15
- (id)objectEnumerator;	// 0x336bc035
- (id)pointerFunctions;	// 0x336bba8d
- (void)raiseCountUnderflowException;	// 0x336bbc25
- (void)rehash;	// 0x336bbc69
- (unsigned)rehashAround:(unsigned)around;	// 0x33650705
- (void)removeAllItems;	// 0x336bbd91
- (void)removeItem:(const void *)item;	// 0x3364ffcd
@end
