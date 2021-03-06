/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMappedObjectStore.h"


__attribute__((visibility("hidden")))
@interface NSMemoryObjectStore : NSMappedObjectStore {
}
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x343227c1
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x34322805
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x34322849
- (id)_archivedData;	// 0x3432279d
- (void)_preflightCrossCheck;	// 0x34322799
- (void)saveDocumentToPath:(id)path;	// 0x34322785
- (id)type;	// 0x34322789
@end

