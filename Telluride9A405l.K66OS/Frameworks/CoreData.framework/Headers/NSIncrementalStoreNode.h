/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {
@private
	NSManagedObjectID *_objectID;	// 4 = 0x4
	unsigned long long _versionNumber;	// 8 = 0x8
	id _propertyCache;	// 16 = 0x10
	void *_reserved1;	// 20 = 0x14
}
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x34040959; converted property
+ (void)initialize;	// 0x34040a0d
- (id)initWithObjectID:(id)objectID withValues:(id)values version:(unsigned long long)version;	// 0x34040ce9
- (id)_snapshot_;	// 0x34040981
- (unsigned)_versionNumber;	// 0x34040985
- (void)dealloc;	// 0x34040995
- (const id *)knownKeyValuesPointer;	// 0x34040ad5
// converted property getter: - (id)objectID;	// 0x34040959
- (void)updateWithValues:(id)values version:(unsigned long long)version;	// 0x34040af5
- (id)valueForPropertyDescription:(id)propertyDescription;	// 0x34040a29
- (unsigned long long)version;	// 0x34040969
@end

