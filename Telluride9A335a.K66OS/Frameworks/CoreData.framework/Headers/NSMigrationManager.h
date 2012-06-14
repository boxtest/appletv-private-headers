/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObjectContext, NSMigrationContext, NSError, NSManagedObjectModel, NSMappingModel, NSDictionary;

@interface NSMigrationManager : NSObject {
@private
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
@property(readonly, retain) NSManagedObjectModel *destinationModel;	// G=0x33156079; converted property
@property(readonly, retain) NSMappingModel *mappingModel;	// G=0x33156059; converted property
@property(readonly, retain) NSManagedObjectModel *sourceModel;	// G=0x33156069; converted property
@property(retain) NSDictionary *userInfo;	// G=0x331560a9; S=0x33156229; converted property
@property(assign) BOOL usesStoreSpecificMigrationManager;	// G=0x331560d1; S=0x331560b9; converted property
+ (BOOL)_performSanityCheckForMapping:(id)mapping fromSourceModel:(id)sourceModel toDestinationModel:(id)destinationModel;	// 0x331578f5
+ (int)migrationDebugLevel;	// 0x33157781
+ (void)setMigrationDebugLevel:(int)level;	// 0x3315779d
- (id)initWithSourceModel:(id)sourceModel destinationModel:(id)model;	// 0x331573f9
- (void)_doCleanupOnFailure:(id)failure;	// 0x331576e1
- (BOOL)_doFirstPassForMapping:(id)mapping error:(id *)error;	// 0x33157a7d
- (BOOL)_doSecondPassForMapping:(id)mapping error:(id *)error;	// 0x33157f35
- (BOOL)_doThirdPassForMapping:(id)mapping error:(id *)error;	// 0x3315850d
- (id)_evaluateSourceExpressionForMapping:(id)mapping entityPolicy:(id)policy;	// 0x33157609
- (id)_mappingNamed:(id)named;	// 0x331575cd
- (BOOL)_migrateStoreFromURL:(id)url type:(id)type options:(id)options withMappingModel:(id)mappingModel toDestinationURL:(id)destinationURL destinationType:(id)type6 destinationOptions:(id)options7 error:(id *)error;	// 0x33158821
- (id)_migrationContext;	// 0x331560e5
- (BOOL)_validateAllObjectsAfterMigration:(id *)migration;	// 0x331597e1
- (void)associateSourceInstance:(id)instance withDestinationInstance:(id)destinationInstance forEntityMapping:(id)entityMapping;	// 0x331570a1
- (void)cancelMigrationWithError:(id)error;	// 0x331561cd
- (id)currentEntityMapping;	// 0x33156329
- (id)currentPropertyMapping;	// 0x33156301
- (void)dealloc;	// 0x331560f5
- (id)destinationContext;	// 0x33156099
- (id)destinationEntityForEntityMapping:(id)entityMapping;	// 0x33157119
- (id)destinationInstancesForEntityMappingNamed:(id)entityMappingNamed sourceInstances:(id)instances;	// 0x33156d81
- (id)destinationInstancesForSourceRelationshipNamed:(id)sourceRelationshipNamed sourceInstances:(id)instances;	// 0x33156679
// converted property getter: - (id)destinationModel;	// 0x33156079
- (id)fetchRequestForSourceEntityNamed:(id)sourceEntityNamed predicateString:(id)string;	// 0x331575a9
- (id)fetchRequestForSourceEntityNamed:(id)sourceEntityNamed predicateString:(id)string includesSubentities:(BOOL)subentities;	// 0x331577b9
// converted property getter: - (id)mappingModel;	// 0x33156059
- (BOOL)migrateStoreFromURL:(id)url type:(id)type options:(id)options withMappingModel:(id)mappingModel toDestinationURL:(id)destinationURL destinationType:(id)type6 destinationOptions:(id)options7 error:(id *)error;	// 0x331571c1
- (float)migrationProgress;	// 0x33156271
- (void)reset;	// 0x331571a1
// converted property setter: - (void)setUserInfo:(id)info;	// 0x33156229
// converted property setter: - (void)setUsesStoreSpecificMigrationManager:(BOOL)manager;	// 0x331560b9
- (id)sourceContext;	// 0x33156089
- (id)sourceEntityForEntityMapping:(id)entityMapping;	// 0x3315715d
- (id)sourceInstancesForEntityMappingNamed:(id)entityMappingNamed destinationInstances:(id)instances;	// 0x33156351
// converted property getter: - (id)sourceModel;	// 0x33156069
// converted property getter: - (id)userInfo;	// 0x331560a9
// converted property getter: - (BOOL)usesStoreSpecificMigrationManager;	// 0x331560d1
@end
