/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSMigrationManager, NSManagedObjectModel, NSPersistentStoreCoordinator, NSURL, NSMappingModel, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSStoreMigrationPolicy : NSObject {
@private
	NSPersistentStoreCoordinator *_coordinator;	// 4 = 0x4
	NSURL *_sourceURL;	// 8 = 0x8
	NSString *_sourceConfiguration;	// 12 = 0xc
	NSDictionary *_sourceOptions;	// 16 = 0x10
	NSManagedObjectModel *_sourceModel;	// 20 = 0x14
	NSDictionary *_sourceMetadata;	// 24 = 0x18
	NSMappingModel *_mappingModel;	// 28 = 0x1c
	NSURL *_destinationURL;	// 32 = 0x20
	NSString *_destinationType;	// 36 = 0x24
	NSString *_destinationConfiguration;	// 40 = 0x28
	NSDictionary *_destinationOptions;	// 44 = 0x2c
	NSMigrationManager *_migrationManager;	// 48 = 0x30
	NSArray *_resourceBundles;	// 52 = 0x34
	void *_reserved1;	// 56 = 0x38
	void *_reserved2;	// 60 = 0x3c
	void *_reserved3;	// 64 = 0x40
	void *_reserved4;	// 68 = 0x44
}
@property(retain) NSString *destinationConfiguration;	// G=0x3435e96d; S=0x3435ee15; converted property
@property(retain) NSDictionary *destinationOptions;	// G=0x3435e97d; S=0x3435edc5; converted property
@property(retain) NSString *destinationType;	// G=0x3435e95d; S=0x3435ee65; converted property
@property(retain) NSURL *destinationURL;	// G=0x3435e94d; S=0x3435eeb5; converted property
@property(retain) NSMappingModel *mappingModel;	// G=0x3435e93d; S=0x3435ef05; converted property
@property(retain) NSMigrationManager *migrationManager;	// G=0x3435e98d; S=0x3435ed75; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x3435e8cd; S=0x3435e8dd; converted property
@property(retain) NSArray *resourceBundles;	// G=0x3435e9a9; S=0x3435e9e9; converted property
@property(retain) NSString *sourceConfiguration;	// G=0x3435e8fd; S=0x3435f069; converted property
@property(retain) NSDictionary *sourceMetadata;	// G=0x3435e90d; S=0x3435f019; converted property
@property(retain) NSManagedObjectModel *sourceModel;	// G=0x3435e92d; S=0x3435ef79; converted property
@property(retain) NSDictionary *sourceOptions;	// G=0x3435e91d; S=0x3435efc9; converted property
@property(retain) NSURL *sourceURL;	// G=0x3435e8ed; S=0x3435f0e9; converted property
+ (int)migrationDebugLevel;	// 0x3435f271
+ (void)setMigrationDebugLevel:(int)level;	// 0x3435f251
- (id)_gatherDataAndPerformMigration:(id *)migration;	// 0x3435f9f9
- (id)addMigratedStoreToCoordinator:(id)coordinator withType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x3435ea25
- (void)dealloc;	// 0x3435f87d
// converted property getter: - (id)destinationConfiguration;	// 0x3435e96d
- (id)destinationConfigurationForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x3435eae1
- (id)destinationModel;	// 0x3435ef55
// converted property getter: - (id)destinationOptions;	// 0x3435e97d
- (id)destinationOptionsForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x3435eacd
// converted property getter: - (id)destinationType;	// 0x3435e95d
- (id)destinationTypeForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x3435eaf5
// converted property getter: - (id)destinationURL;	// 0x3435e94d
- (id)destinationURLForMigration:(id)migration sourceURL:(id)url sourceMetadata:(id)metadata error:(id *)error;	// 0x3435eb09
- (void)didPerformMigrationWithManager:(id)manager;	// 0x3435e9a1
- (void)handleMigrationError:(id)error inManager:(id)manager;	// 0x3435e9a5
- (id)managerForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x3435f305
// converted property getter: - (id)mappingModel;	// 0x3435e93d
- (id)mappingModelForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x3435eba1
- (BOOL)migrateStoreAtURL:(id)url toURL:(id)url2 storeType:(id)type options:(id)options withManager:(id)manager error:(id *)error;	// 0x3435ea51
- (id)migrateStoreAtURL:(id)url withManager:(id)manager metadata:(id)metadata options:(id)options error:(id *)error;	// 0x3435f291
// converted property getter: - (id)migrationManager;	// 0x3435e98d
// converted property getter: - (id)persistentStoreCoordinator;	// 0x3435e8cd
// converted property getter: - (id)resourceBundles;	// 0x3435e9a9
// converted property setter: - (void)setDestinationConfiguration:(id)configuration;	// 0x3435ee15
// converted property setter: - (void)setDestinationOptions:(id)options;	// 0x3435edc5
// converted property setter: - (void)setDestinationType:(id)type;	// 0x3435ee65
// converted property setter: - (void)setDestinationURL:(id)url;	// 0x3435eeb5
// converted property setter: - (void)setMappingModel:(id)model;	// 0x3435ef05
// converted property setter: - (void)setMigrationManager:(id)manager;	// 0x3435ed75
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x3435e8dd
- (void)setPersistentStoreCoordinator:(id)coordinator sourceURL:(id)url configuration:(id)configuration metadata:(id)metadata options:(id)options;	// 0x3435f139
// converted property setter: - (void)setResourceBundles:(id)bundles;	// 0x3435e9e9
// converted property setter: - (void)setSourceConfiguration:(id)configuration;	// 0x3435f069
// converted property setter: - (void)setSourceMetadata:(id)metadata;	// 0x3435f019
// converted property setter: - (void)setSourceModel:(id)model;	// 0x3435ef79
// converted property setter: - (void)setSourceOptions:(id)options;	// 0x3435efc9
// converted property setter: - (void)setSourceURL:(id)url;	// 0x3435f0e9
// converted property getter: - (id)sourceConfiguration;	// 0x3435e8fd
// converted property getter: - (id)sourceMetadata;	// 0x3435e90d
// converted property getter: - (id)sourceModel;	// 0x3435e92d
- (id)sourceModelForStoreAtURL:(id)url metadata:(id)metadata error:(id *)error;	// 0x3435f47d
// converted property getter: - (id)sourceOptions;	// 0x3435e91d
- (id)sourceType;	// 0x3435f0b9
// converted property getter: - (id)sourceURL;	// 0x3435e8ed
- (void)willPerformMigrationWithManager:(id)manager;	// 0x3435e99d
@end
