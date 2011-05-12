/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSKnownKeysDictionary.h"
#import "CoreData-Structs.h"

@class NSKnownKeysMappingStrategy;

__attribute__((visibility("hidden")))
@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
@private
	int _cd_rc;	// 4 = 0x4
	int _count;	// 8 = 0x8
	NSKnownKeysMappingStrategy *_keySearch;	// 12 = 0xc
	id *_values;	// 16 = 0x10
}
+ (id)init;	// 0x342fd985
+ (id)initForKeys:(id)keys;	// 0x342b8159
+ (id)initWithCapacity:(unsigned)capacity;	// 0x342fd921
+ (id)initWithCoder:(id)coder;	// 0x342fd9e9
+ (id)initWithDictionary:(id)dictionary;	// 0x342fc6dd
+ (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x342fc6f5
+ (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x342c30a5
+ (id)initWithSearchStrategy:(id)searchStrategy;	// 0x342b8835
+ (BOOL)accessInstanceVariablesDirectly;	// 0x342fbd51
+ (id)alloc;	// 0x342fbd49
+ (id)allocWithZone:(NSZone *)zone;	// 0x342fbd4d
- (unsigned)_countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count forKeys:(BOOL)keys;	// 0x342c6151
- (void)_recount;	// 0x342b5471
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x342b54e5
- (unsigned)_valueCountByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x342fc2b1
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x342fd389
- (id)allKeys;	// 0x342fc20d
- (id)allValues;	// 0x342aa3d9
- (Class)classForCoder;	// 0x342fc6bd
- (id)copyWithZone:(NSZone *)zone;	// 0x342fc2f1
- (unsigned)count;	// 0x342aa47d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x342c6125
- (void)dealloc;	// 0x342bc929
- (void)encodeWithCoder:(id)coder;	// 0x342fc39d
- (void)getKeys:(id *)keys;	// 0x342fc0ed
- (void)getObjects:(id *)objects;	// 0x342fc0a1
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x342fc15d
- (BOOL)isEqualToDictionary:(id)dictionary;	// 0x342fd1dd
- (id)keyEnumerator;	// 0x342fde95
- (const id *)knownKeyValuesPointer;	// 0x342fbd65
- (const id)mapping;	// 0x342b54c5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x342fc2dd
- (id)objectEnumerator;	// 0x342fc015
- (id)objectForKey:(id)key;	// 0x34294185
- (void)release;	// 0x342bc8f5
- (void)removeAllObjects;	// 0x342fbf95
- (void)removeObjectForKey:(id)key;	// 0x342fe005
- (id)retain;	// 0x342fe091
- (unsigned)retainCount;	// 0x342fbd55
- (void)setObject:(id)object forKey:(id)key;	// 0x342b8c51
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x342fdf35
- (void)setValues:(id *)values;	// 0x342b5809
- (id)valueAtIndex:(unsigned)index;	// 0x342fbd75
- (const id *)values;	// 0x342b57f9
@end
