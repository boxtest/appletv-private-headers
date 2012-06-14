/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"
#import "NSCopying.h"


@interface NSManagedObjectID : NSObject <NSCopying> {
}
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32b60e35
+ (void)initialize;	// 0x32b0757d
+ (int)version;	// 0x32b60e29
- (id)URIRepresentation;	// 0x32b60f01
- (BOOL)_isDeallocating;	// 0x32b60e45
- (BOOL)_isPersistentStoreAlive;	// 0x32b60e3d
- (id)_referenceData;	// 0x32b60f9d
- (long long)_referenceData64;	// 0x32b60fd1
- (id)_retainedURIString;	// 0x32b61005
- (id)_storeIdentifier;	// 0x32b60ea5
- (id)_storeInfo1;	// 0x32b60e39
- (BOOL)_tryRetain;	// 0x32b60e41
- (id)copyWithZone:(NSZone *)zone;	// 0x32b60e95
- (id)description;	// 0x32b60e49
- (id)entity;	// 0x32b60ecd
- (BOOL)isTemporaryID;	// 0x32b60f35
- (id)persistentStore;	// 0x32b60f69
@end
