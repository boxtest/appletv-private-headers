/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSHashTable.h"


__attribute__((visibility("hidden")))
@interface NSConcreteHashTable : NSHashTable {
	NSSlice slice;	// 4 = 0x4
	unsigned count;	// 68 = 0x44
	unsigned capacity;	// 72 = 0x48
	unsigned options;	// 76 = 0x4c
	unsigned mutations;	// 80 = 0x50
}
@property(readonly, assign) unsigned count;	// G=0x32534dc1; converted property
- (id)init;	// 0x32579769
- (id)initWithCoder:(id)coder;	// 0x32579951
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x325064c1
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x3251ca85
- (void)_initBlock;	// 0x325065ed
- (void)addObject:(id)object;	// 0x325055bd
- (id)allObjects;	// 0x32579f4d
- (void)assign:(unsigned)assign key:(const void *)key;	// 0x32505631
- (Class)classForCoder;	// 0x32579935
- (id)copy;	// 0x3257977d
// converted property getter: - (unsigned)count;	// 0x32534dc1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32525dd1
- (void)dealloc;	// 0x325076a1
- (id)description;	// 0x3257a0e9
- (void)encodeWithCoder:(id)coder;	// 0x325799e5
- (void)finalize;	// 0x3257a095
- (void *)getItem:(const void *)item;	// 0x32505421
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x3257a021
- (unsigned)hash;	// 0x32579bc5
- (void)hashGrow;	// 0x32506979
- (void)insertItem:(const void *)item;	// 0x32579dd1
- (void)insertKnownAbsentItem:(const void *)item;	// 0x32579e45
- (BOOL)isEqual:(id)equal;	// 0x32579bed
- (id)objectEnumerator;	// 0x3257a1c1
- (id)pointerFunctions;	// 0x32579b61
- (void)raiseCountUnderflowException;	// 0x32579d1d
- (void)rehash;	// 0x32579d61
- (unsigned)rehashAround:(unsigned)around;	// 0x325074f1
- (void)removeAllItems;	// 0x32579f01
- (void)removeItem:(const void *)item;	// 0x32506a91
@end
