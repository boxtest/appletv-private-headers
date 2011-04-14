/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSKnownKeysMappingStrategy.h"


__attribute__((visibility("hidden")))
@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
@private
	int _cd_rc;	// 4 = 0x4
	void *_table;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	id _reserved1;	// 16 = 0x10
	id *_keys;	// 20 = 0x14
}
@property(readonly, assign) unsigned length;	// G=0x330e246d; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33133c95
+ (id)alloc;	// 0x33135915
+ (id)allocWithZone:(NSZone *)zone;	// 0x33135909
+ (void)initialize;	// 0x330ebc2d
- (id)initForKeys:(id)keys;	// 0x330e68cd
- (id)initForKeys:(const id *)keys count:(unsigned)count;	// 0x330e6abd
- (id)initWithCoder:(id)coder;	// 0x33134dd9
- (void)_coreCreationForKeys:(const id *)keys count:(unsigned long)count;	// 0x330e6b05
- (void)_coreDealloc:(BOOL)dealloc;	// 0x330e7c9d
- (CFArrayRef)_makeBranchTableForKeys:(const char **)keys count:(unsigned long)count;	// 0x330e6ee1
- (id)allKeys;	// 0x3313511d
- (Class)classForCoder;	// 0x33135015
- (id)copyWithZone:(NSZone *)zone;	// 0x33134d0d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33133cb9
- (void)dealloc;	// 0x330e7c85
- (void)encodeWithCoder:(id)coder;	// 0x33134d21
- (unsigned)fastIndexForKnownKey:(id)knownKey;	// 0x330f3221
- (unsigned)hash;	// 0x33135035
- (unsigned)indexForKey:(id)key;	// 0x330dbe79
- (BOOL)isEqual:(id)equal;	// 0x33135071
- (const id *)keys;	// 0x330ed7e9
// converted property getter: - (unsigned)length;	// 0x330e246d
- (void)release;	// 0x330e7c51
- (id)retain;	// 0x330f08ad
- (unsigned)retainCount;	// 0x33133c99
@end
