/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"

@class NSSet, NSPersistentStoreMap;

__attribute__((visibility("hidden")))
@interface NSMappedObjectStore : NSPersistentStore {
@private
	NSPersistentStoreMap *_theMap;	// 44 = 0x2c
	NSSet *_entitiesToFetch;	// 48 = 0x30
}
@property(retain) id metadata;	// G=0x322ea471; S=0x322ea61d; converted property
- (id)init;	// 0x322ea491
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x322eb99d
- (void)_addObject:(id)object objectIDMap:(id)map;	// 0x322ea3a1
- (id)_pathFromURI:(id)uri;	// 0x322ea065
- (id)_rawMetadata__;	// 0x322ea451
- (void)_removeObject:(id)object objectIDMap:(id)map;	// 0x322ea3d1
- (void)_setMap:(id)map;	// 0x322e9ff9
- (id)_theMap;	// 0x322e9fe1
- (void)_updateObject:(id)object objectIDMap:(id)map;	// 0x322ea401
- (id)dataForKey:(id)key;	// 0x322ea041
- (void)dealloc;	// 0x322eb8f5
- (id)executeCountRequest:(id)request withContext:(id)context;	// 0x322ea105
- (id)executeFetchRequest:(id)request withContext:(id)context;	// 0x322ead4d
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x322ea4ed
- (id)executeSaveChangesRequest:(id)request withContext:(id)context;	// 0x322ea779
- (id)getNewIDForObject:(id)object;	// 0x322ea2dd
- (id)identifier;	// 0x322ea431
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x322e9ff1
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x322e9ff5
// converted property getter: - (id)metadata;	// 0x322ea471
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x322ea25d
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x322ea209
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x322ea665
- (void)save;	// 0x322ea0c1
- (void)saveDocumentToPath:(id)path;	// 0x322eb8c1
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x322ea61d
@end
