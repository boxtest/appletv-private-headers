/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSExternalRefCountedData.h"
#import "CoreData-Structs.h"

@class _CDSnapshot;

__attribute__((visibility("hidden")))
@interface NSSQLRow : NSExternalRefCountedData {
@private
	_CDSnapshot *_snapshot;	// 28 = 0x1c
}
@property(assign) NSScalarObjectID *objectID;	// G=0x34013881; S=0x340137d1; converted property
@property(assign) long long optLock;	// G=0x3401322d; S=0x33f558f1; converted property
+ (id)allocForSQLEntity:(id)sqlentity;	// 0x3401294d
+ (id)allocWithZone:(NSZone *)zone;	// 0x3401231d
+ (void)initialize;	// 0x33f67989
+ (unsigned)newBatchRowAllocation:(id *)allocation count:(unsigned)count forSQLEntity:(id)sqlentity withOwnedObjectIDs:(NSScalarObjectID **)ownedObjectIDs andTimestamp:(double)timestamp;	// 0x33f54939
- (id)initWithSQLEntity:(id)sqlentity objectID:(NSScalarObjectID *)anId;	// 0x34012469
- (id)initWithSQLEntity:(id)sqlentity ownedObjectID:(NSScalarObjectID *)anId andTimestamp:(double)timestamp;	// 0x34013ba1
- (id)_snapshot_;	// 0x33f5b7f9
- (void)_validateToOnes;	// 0x340135d1
- (unsigned)_versionNumber;	// 0x34013219
- (id)attributeValueForSlot:(unsigned)slot;	// 0x34013249
- (id)copy;	// 0x34013895
- (void)dealloc;	// 0x34013b9d
- (id)description;	// 0x340124b5
- (id)entity;	// 0x34013a39
- (unsigned)entityID;	// 0x34013819
- (unsigned)foreignEntityKeyForSlot:(unsigned)slot;	// 0x340123bd
- (long long)foreignKeyForSlot:(unsigned)slot;	// 0x34013735
- (unsigned)foreignOrderKeyForSlot:(unsigned)slot;	// 0x340123fd
- (BOOL)isEqual:(id)equal;	// 0x34012431
- (const id *)knownKeyValuesPointer;	// 0x33f5abd5
- (CFBitVectorRef)newCalculatedDeltaMaskFrom:(id)from;	// 0x340129c9
- (NSScalarObjectID *)newObjectIDForToOne:(id)one;	// 0x34013a7d
// converted property getter: - (NSScalarObjectID *)objectID;	// 0x34013881
// converted property getter: - (long long)optLock;	// 0x3401322d
- (long long)pk64;	// 0x34013855
- (void)setForeignEntityKeySlot:(unsigned)slot unsigned:(unsigned)anUnsigned;	// 0x34012321
- (void)setForeignKeySlot:(unsigned)slot int64:(long long)a64;	// 0x33f67a69
- (void)setForeignOrderKeySlot:(unsigned)slot unsigned:(unsigned)anUnsigned;	// 0x34012375
// converted property setter: - (void)setObjectID:(NSScalarObjectID *)anId;	// 0x340137d1
// converted property setter: - (void)setOptLock:(long long)lock;	// 0x33f558f1
- (id)valueForKey:(id)key;	// 0x34013409
@end

