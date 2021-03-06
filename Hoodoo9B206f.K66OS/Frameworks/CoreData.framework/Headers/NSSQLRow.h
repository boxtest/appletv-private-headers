/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSExternalRefCountedData.h"

@class _CDSnapshot;

__attribute__((visibility("hidden")))
@interface NSSQLRow : NSExternalRefCountedData {
@private
	_CDSnapshot *_snapshot;	// 28 = 0x1c
}
@property(assign) NSScalarObjectID *objectID;	// G=0x363075cd; S=0x3630751d; converted property
@property(assign) long long optLock;	// G=0x36306f79; S=0x36246bad; converted property
+ (id)allocForSQLEntity:(id)sqlentity;	// 0x36306699
+ (id)allocWithZone:(NSZone *)zone;	// 0x36306069
+ (void)initialize;	// 0x36258b89
+ (unsigned)newBatchRowAllocation:(id *)allocation count:(unsigned)count forSQLEntity:(id)sqlentity withOwnedObjectIDs:(NSScalarObjectID **)ownedObjectIDs andTimestamp:(double)timestamp;	// 0x36245bf5
- (id)initWithSQLEntity:(id)sqlentity objectID:(NSScalarObjectID *)anId;	// 0x363061b5
- (id)initWithSQLEntity:(id)sqlentity ownedObjectID:(NSScalarObjectID *)anId andTimestamp:(double)timestamp;	// 0x363078ed
- (id)_snapshot_;	// 0x3624cab9
- (void)_validateToOnes;	// 0x3630731d
- (unsigned)_versionNumber;	// 0x36306f65
- (id)attributeValueForSlot:(unsigned)slot;	// 0x36306f95
- (id)copy;	// 0x363075e1
- (void)dealloc;	// 0x363078e9
- (id)description;	// 0x36306201
- (id)entity;	// 0x36307785
- (unsigned)entityID;	// 0x36307565
- (unsigned)foreignEntityKeyForSlot:(unsigned)slot;	// 0x36306109
- (long long)foreignKeyForSlot:(unsigned)slot;	// 0x36307481
- (unsigned)foreignOrderKeyForSlot:(unsigned)slot;	// 0x36306149
- (BOOL)isEqual:(id)equal;	// 0x3630617d
- (const id *)knownKeyValuesPointer;	// 0x3624be99
- (CFBitVectorRef)newCalculatedDeltaMaskFrom:(id)from;	// 0x36306715
- (NSScalarObjectID *)newObjectIDForToOne:(id)one;	// 0x363077c9
// converted property getter: - (NSScalarObjectID *)objectID;	// 0x363075cd
// converted property getter: - (long long)optLock;	// 0x36306f79
- (long long)pk64;	// 0x363075a1
- (void)setForeignEntityKeySlot:(unsigned)slot unsigned:(unsigned)anUnsigned;	// 0x3630606d
- (void)setForeignKeySlot:(unsigned)slot int64:(long long)a64;	// 0x36258c69
- (void)setForeignOrderKeySlot:(unsigned)slot unsigned:(unsigned)anUnsigned;	// 0x363060c1
// converted property setter: - (void)setObjectID:(NSScalarObjectID *)anId;	// 0x3630751d
// converted property setter: - (void)setOptLock:(long long)lock;	// 0x36246bad
- (id)valueForKey:(id)key;	// 0x36307155
@end

