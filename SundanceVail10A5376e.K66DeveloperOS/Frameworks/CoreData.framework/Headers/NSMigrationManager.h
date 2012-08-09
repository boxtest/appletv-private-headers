/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSError, NSManagedObjectContext, NSDictionary, NSMigrationContext, NSManagedObjectModel, NSMappingModel;

@interface NSMigrationManager : NSObject {
	NSManagedObjectModel *_sourceModel;	// 4 = 0x4
	NSDictionary *_sourceEntitiesByVersionHash;	// 8 = 0x8
	NSManagedObjectModel *_destinationModel;	// 12 = 0xc
	NSDictionary *_destinationEntitiesByVersionHash;	// 16 = 0x10
	NSMappingModel *_mappingModel;	// 20 = 0x14
	NSManagedObjectContext *_sourceManagedObjectContext;	// 24 = 0x18
	NSManagedObjectContext *_destinationManagedObjectContext;	// 28 = 0x1c
	NSMigrationContext *_migrationContext;	// 32 = 0x20
	NSDictionary *_userInfo;	// 36 = 0x24
	migrationManagerFlags _migrationManagerFlags;	// 40 = 0x28
	NSError *_migrationCancellationError;	// 44 = 0x2c
	id _reserved1;	// 48 = 0x30
	id _reserved2;	// 52 = 0x34
	id _reserved3;	// 56 = 0x38
	id _reserved4;	// 60 = 0x3c
}
@property(readonly, retain) NSManagedObjectModel *destinationModel;	// G=0x35c6277d; converted property
@property(readonly, retain) NSMappingModel *mappingModel;	// G=0x35c6275d; converted property
@property(readonly, retain) NSManagedObjectModel *sourceModel;	// G=0x35c6276d; converted property
@property(retain) NSDictionary *userInfo;	// G=0x35c63695; S=0x35c636a5; converted property
@property(assign) BOOL usesStoreSpecificMigrationManager;	// G=0x35c63759; S=0x35c63741; converted property
+ (BOOL)_performSanityCheckForMapping:(id)mapping fromSourceModel:(id)sourceModel toDestinationModel:(id)destinationModel;	// 0x35c63951
+ (int)migrationDebugLevel;	// 0x35c6376d
+ (void)setMigrationDebugLevel:(int)level;	// 0x35c63789
- (id)initWithSourceModel:(id)sourceModel destinationModel:(id)model;	// 0x35c622b9
- (void)_doCleanupOnFailure:(id)failure;	// 0x35c64a79
- (BOOL)_doFirstPassForMapping:(id)mapping error:(id *)error;	// 0x35c63ba9
- (BOOL)_doSecondPassForMapping:(id)mapping error:(id *)error;	// 0x35c640f5
- (BOOL)_doThirdPassForMapping:(id)mapping error:(id *)error;	// 0x35c6471d
- (id)_evaluateSourceExpressionForMapping:(id)mapping entityPolicy:(id)policy;	// 0x35c63ad5
- (id)_mappingNamed:(id)named;	// 0x35c63915
- (BOOL)_migrateStoreFromURL:(id)url type:(id)type options:(id)options withMappingModel:(id)mappingModel toDestinationURL:(id)destinationURL destinationType:(id)type6 destinationOptions:(id)options7 error:(id *)error;	// 0x35c65011
- (id)_migrationContext;	// 0x35c63905
- (BOOL)_validateAllObjectsAfterMigration:(id *)migration;	// 0x35c64b11
- (void)associateSourceInstance:(id)instance withDestinationInstance:(id)destinationInstance forEntityMapping:(id)entityMapping;	// 0x35c62825
- (void)cancelMigrationWithError:(id)error;	// 0x35c636e9
- (id)currentEntityMapping;	// 0x35c635b9
- (id)currentPropertyMapping;	// 0x35c635e1
- (void)dealloc;	// 0x35c62445
- (id)destinationContext;	// 0x35c6279d
- (id)destinationEntityForEntityMapping:(id)entityMapping;	// 0x35c627e9
- (id)destinationInstancesForEntityMappingNamed:(id)entityMappingNamed sourceInstances:(id)instances;	// 0x35c62899
- (id)destinationInstancesForSourceRelationshipNamed:(id)sourceRelationshipNamed sourceInstances:(id)instances;	// 0x35c62bd5
// converted property getter: - (id)destinationModel;	// 0x35c6277d
- (id)fetchRequestForSourceEntityNamed:(id)sourceEntityNamed predicateString:(id)string;	// 0x35c638e1
- (id)fetchRequestForSourceEntityNamed:(id)sourceEntityNamed predicateString:(id)string includesSubentities:(BOOL)subentities;	// 0x35c637a5
// converted property getter: - (id)mappingModel;	// 0x35c6275d
- (BOOL)migrateStoreFromURL:(id)url type:(id)type options:(id)options withMappingModel:(id)mappingModel toDestinationURL:(id)destinationURL destinationType:(id)type6 destinationOptions:(id)options7 error:(id *)error;	// 0x35c62519
- (float)migrationProgress;	// 0x35c63609
- (void)reset;	// 0x35c6273d
// converted property setter: - (void)setUserInfo:(id)info;	// 0x35c636a5
// converted property setter: - (void)setUsesStoreSpecificMigrationManager:(BOOL)manager;	// 0x35c63741
- (id)sourceContext;	// 0x35c6278d
- (id)sourceEntityForEntityMapping:(id)entityMapping;	// 0x35c627ad
- (id)sourceInstancesForEntityMappingNamed:(id)entityMappingNamed destinationInstances:(id)instances;	// 0x35c6327d
// converted property getter: - (id)sourceModel;	// 0x35c6276d
// converted property getter: - (id)userInfo;	// 0x35c63695
// converted property getter: - (BOOL)usesStoreSpecificMigrationManager;	// 0x35c63759
@end
