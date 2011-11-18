/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStoreMap.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSDictionaryStoreMap : NSPersistentStoreMap {
@private
	NSMutableDictionary *_theMap;	// 28 = 0x1c
}
+ (void)initialize;	// 0x33f8c6c1
- (id)initWithStore:(id)store;	// 0x33f8c279
- (id)initWithStore:(id)store fromArchivedData:(id)archivedData;	// 0x33f8d539
- (id)initWithStore:(id)store fromPath:(id)path;	// 0x33f8d91d
- (id)_archivedData;	// 0x33f8c4c1
- (id)_nodeFromObject:(id)object objectIDMap:(id)map;	// 0x33f8cb0d
- (id)_theDictionary;	// 0x33f8c269
- (void)addObject:(id)object objectIDMap:(id)map;	// 0x33f8c2b1
- (id)dataForKey:(id)key;	// 0x33f8c28d
- (void)dealloc;	// 0x33f8c6dd
- (id)handleFetchRequest:(id)request;	// 0x33f8c731
- (void)removeObject:(id)object objectIDMap:(id)map;	// 0x33f8c349
- (id)retainedObjectIDsForRelationship:(id)relationship forObjectID:(id)objectID;	// 0x33f8c395
- (void)saveToPath:(id)path;	// 0x33f8d185
- (void)updateObject:(id)object objectIDMap:(id)map;	// 0x33f8c9bd
@end

