/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIDocument.h"

@class NSString, NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel, NSDictionary;

@interface UIManagedDocument : UIDocument {
@private
	NSManagedObjectContext *_managedObjectContext;	// 100 = 0x64
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 104 = 0x68
	NSManagedObjectModel *_managedObjectModel;	// 108 = 0x6c
	NSDictionary *_documentMetadata;	// 112 = 0x70
	mdocFlags _mdocFlags;	// 116 = 0x74
	NSDictionary *persistentStoreOptions;	// 120 = 0x78
	NSString *modelConfiguration;	// 124 = 0x7c
}
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x33d2aa71; 
@property(readonly, assign, nonatomic) NSManagedObjectModel *managedObjectModel;	// G=0x33d2aa81; 
@property(copy, nonatomic) NSString *modelConfiguration;	// G=0x33d2e5bd; S=0x33d2e5cd; @synthesize
@property(copy, nonatomic) NSDictionary *persistentStoreOptions;	// G=0x33d2e589; S=0x33d2e599; @synthesize
+ (id)additionalContentPathComponent;	// 0x33d2aa35
+ (void)initialize;	// 0x33d2a339
+ (BOOL)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)options;	// 0x33d2aa41
+ (id)persistentStoreName;	// 0x33d2aa29
- (id)initWithFileURL:(id)fileURL;	// 0x33d2a64d
- (void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)nonSyncedURL toSyncedURL:(id)syncedURL;	// 0x33d2ad41
- (void)_handleRelocatingStoreContentDirectoryFromSyncedURL:(id)syncedURL toNonSyncedURL:(id)nonSyncedURL;	// 0x33d2b071
- (id)_readMetadataFromDocumentURL:(id)documentURL;	// 0x33d2b501
- (BOOL)_writeMetadataToDocumentURL:(id)documentURL;	// 0x33d2b791
- (id)additionalContentForURL:(id)url error:(id *)error;	// 0x33d2ad21
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)url ofType:(id)type modelConfiguration:(id)configuration storeOptions:(id)options error:(id *)error;	// 0x33d2aad5
- (id)contentsForType:(id)type error:(id *)error;	// 0x33d2d2d1
- (void)dealloc;	// 0x33d2a91d
// declared property getter: - (id)managedObjectContext;	// 0x33d2aa71
// declared property getter: - (id)managedObjectModel;	// 0x33d2aa81
// declared property getter: - (id)modelConfiguration;	// 0x33d2e5bd
// declared property getter: - (id)persistentStoreOptions;	// 0x33d2e589
- (id)persistentStoreTypeForFileType:(id)fileType;	// 0x33d2ad11
- (BOOL)readAdditionalContentFromURL:(id)url error:(id *)error;	// 0x33d2ad1d
- (BOOL)readFromURL:(id)url error:(id *)error;	// 0x33d2bb15
- (void)revertToContentsOfURL:(id)url completionHandler:(id)handler;	// 0x33d2e1f1
// declared property setter: - (void)setModelConfiguration:(id)configuration;	// 0x33d2e5cd
// declared property setter: - (void)setPersistentStoreOptions:(id)options;	// 0x33d2e599
- (BOOL)writeAdditionalContent:(id)content toURL:(id)url originalContentsURL:(id)url3 error:(id *)error;	// 0x33d2ad3d
- (BOOL)writeContents:(id)contents andAttributes:(id)attributes safelyToURL:(id)url forSaveOperation:(int)saveOperation error:(id *)error;	// 0x33d2d521
- (BOOL)writeContents:(id)contents toURL:(id)url forSaveOperation:(int)saveOperation originalContentsURL:(id)url4 error:(id *)error;	// 0x33d2daf9
@end

