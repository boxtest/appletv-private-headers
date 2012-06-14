/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSManagedObjectID.h"

@class NSEntityDescription;

__attribute__((visibility("hidden")))
@interface NSTemporaryObjectID : NSManagedObjectID {
@private
	int _cd_rc;	// 4 = 0x4
	int _counter;	// 8 = 0x8
	NSEntityDescription *_entity;	// 12 = 0xc
}
@property(readonly, retain) NSEntityDescription *entity;	// G=0x3233f611; converted property
+ (id)initWithEntity:(id)entity;	// 0x3233f7d1
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x3233f7b1
+ (void)_release_1;	// 0x3233f8ad
+ (id)_retain_1;	// 0x3233f8e9
+ (void)_storeDeallocated;	// 0x3233fbfd
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3233f535
+ (id)alloc;	// 0x3233f531
+ (id)allocWithZone:(NSZone *)zone;	// 0x3233f52d
+ (unsigned)allocateBatch:(id *)batch forEntity:(id)entity count:(unsigned)count;	// 0x3233f821
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3233f529
+ (Class)classForStore:(id)store;	// 0x3233f909
+ (void)initialize;	// 0x32284a39
+ (void)release;	// 0x3233f549
+ (id)retain;	// 0x3233f545
+ (void)setObjectStoreIdentifier:(id)identifier;	// 0x3233fbb5
+ (int)version;	// 0x3233f539
- (id)initWithEntity:(id)entity;	// 0x3233f795
- (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x3233fe3d
- (id)URIRepresentation;	// 0x3233fc51
- (BOOL)_isPersistentStoreAlive;	// 0x3233f625
- (id)_referenceData;	// 0x3233f645
- (id)_retainedURIString;	// 0x3233fc9d
- (void)_setPersistentStore:(id)store;	// 0x3233fe01
- (id)_storeIdentifier;	// 0x3233fd95
- (void)dealloc;	// 0x3233fec5
// converted property getter: - (id)entity;	// 0x3233f611
- (void)finalize;	// 0x3233fe5d
- (unsigned)hash;	// 0x3233f561
- (BOOL)isEqual:(id)equal;	// 0x3233f5c1
- (BOOL)isTemporaryID;	// 0x3233f621
- (id)persistentStore;	// 0x3233f5f5
- (void)release;	// 0x3233ff35
- (id)retain;	// 0x3233ff6d
- (unsigned)retainCount;	// 0x3233f54d
@end
