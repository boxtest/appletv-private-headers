/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSKnownKeysDictionary.h"

@class NSKnownKeysMappingStrategy;

__attribute__((visibility("hidden")))
@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
@private
	int _cd_rc;	// 4 = 0x4
	int _count;	// 8 = 0x8
	NSKnownKeysMappingStrategy *_keySearch;	// 12 = 0xc
	id _values[0];	// 16 = 0x10
}
+ (id)init;	// 0x32360781
+ (id)initForKeys:(id)keys;	// 0x322fe495
+ (id)initWithCapacity:(unsigned)capacity;	// 0x32360721
+ (id)initWithCoder:(id)coder;	// 0x323604b5
+ (id)initWithDictionary:(id)dictionary;	// 0x3236013d
+ (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x32360151
+ (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x322f5c41
+ (id)initWithSearchStrategy:(id)searchStrategy;	// 0x322f6705
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3235fb21
+ (id)alloc;	// 0x3235fb19
+ (id)allocWithZone:(NSZone *)zone;	// 0x3235fb1d
- (unsigned)_countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count forKeys:(BOOL)keys;	// 0x323008b9
- (BOOL)_isDeallocating;	// 0x32361501
- (void)_recount;	// 0x322f6875
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x32361015
- (BOOL)_tryRetain;	// 0x32361529
- (unsigned)_valueCountByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32360f31
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x3236085d
- (id)allKeys;	// 0x32360dfd
- (id)allValues;	// 0x322f9231
- (Class)classForCoder;	// 0x32360121
- (id)copyWithZone:(NSZone *)zone;	// 0x323611dd
- (unsigned)count;	// 0x322f6841
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32300895
- (void)dealloc;	// 0x32301a95
- (void)encodeWithCoder:(id)coder;	// 0x32361289
- (void)getKeys:(id *)keys;	// 0x32360cc1
- (void)getObjects:(id *)objects;	// 0x323013b1
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x32360d3d
- (BOOL)isEqualToDictionary:(id)dictionary;	// 0x32360c81
- (id)keyEnumerator;	// 0x32360f55
- (const id *)knownKeyValuesPointer;	// 0x3235fb39
- (const id)mapping;	// 0x322f90a9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x323611cd
- (id)objectEnumerator;	// 0x32360be9
- (id)objectForKey:(id)key;	// 0x3230096d
- (oneway void)release;	// 0x32301a15
- (void)removeAllObjects;	// 0x323607e1
- (void)removeObjectForKey:(id)key;	// 0x32360e9d
- (id)retain;	// 0x32361585
- (unsigned)retainCount;	// 0x3235fb25
- (void)setObject:(id)object forKey:(id)key;	// 0x322fe985
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x323610f1
- (void)setValues:(id *)values;	// 0x32361001
- (id)valueAtIndex:(unsigned)index;	// 0x3235fb49
- (const id *)values;	// 0x322f6831
@end
