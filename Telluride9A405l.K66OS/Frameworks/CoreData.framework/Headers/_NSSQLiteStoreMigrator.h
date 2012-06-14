/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSQLConnection, NSSQLModel, NSSQLAdapter, NSSQLCore, NSMutableDictionary, NSMappingModel;

__attribute__((visibility("hidden")))
@interface _NSSQLiteStoreMigrator : NSObject {
@private
	NSSQLCore *_store;	// 4 = 0x4
	NSSQLModel *_dstModel;	// 8 = 0x8
	NSSQLModel *_srcModel;	// 12 = 0xc
	NSSQLAdapter *_adapter;	// 16 = 0x10
	NSMappingModel *_mappingModel;	// 20 = 0x14
	NSSQLConnection *_connection;	// 24 = 0x18
	NSMutableDictionary *_reindexedEntities;	// 28 = 0x1c
	NSMutableDictionary *_reindexedPropertiesByEntity;	// 32 = 0x20
	NSMutableDictionary *_sourceToDestinationEntityMap;	// 36 = 0x24
	NSMutableDictionary *_addedEntityMigrations;	// 40 = 0x28
	NSMutableDictionary *_removedEntityMigrations;	// 44 = 0x2c
	NSMutableDictionary *_transformedEntityMigrations;	// 48 = 0x30
	NSMutableDictionary *_copiedEntityMigrations;	// 52 = 0x34
	NSMutableDictionary *_tableMigrationDescriptionsByEntity;	// 56 = 0x38
	BOOL _hasPKTableChanges;	// 60 = 0x3c
}
@property(readonly, assign) NSSQLAdapter *adapter;	// G=0x34030379; @synthesize=_adapter
+ (BOOL)_annotatesMigrationMetadata;	// 0x34030615
+ (void)_setAnnotatesMigrationMetadata:(BOOL)metadata;	// 0x34030369
- (id)initWithStore:(id)store destinationModel:(id)model mappingModel:(id)model3;	// 0x34030389
- (void)_addEntityMigration:(id)migration toTableMigrationForRootEntity:(id)rootEntity migrationType:(int)type;	// 0x34030731
- (void)_addReindexedProperty:(id)property toSetForEntity:(id)entity;	// 0x34030651
- (void)_determinePropertyDependenciesOnIDForEntity:(id)entity;	// 0x340318ed
- (void)_determineReindexedEntitiesAndAffectedProperties;	// 0x34031759
- (void)_populateEntityMigrationDescriptionsAndEntityMap;	// 0x34031115
- (void)_populateTableMigrationDescriptions;	// 0x3403080d
// declared property getter: - (id)adapter;	// 0x34030379
- (id)createEntityMigrationStatements;	// 0x34032fdd
- (id)createIndexStatementsForEntity:(id)entity;	// 0x34031ead
- (id)createStatementsForUpdatingEntityKeys;	// 0x34032481
- (void)dealloc;	// 0x34033c5d
- (id)entityMigrationDescriptionForEntity:(id)entity;	// 0x340315a9
- (BOOL)performMigration:(id *)migration;	// 0x34033335
- (id)tableMigrationDescriptionForEntity:(id)entity;	// 0x340314b1
@end
