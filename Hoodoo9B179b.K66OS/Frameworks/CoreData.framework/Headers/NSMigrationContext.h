/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSEntityMapping, NSPropertyMapping, NSMutableDictionary, NSMigrationManager;

__attribute__((visibility("hidden")))
@interface NSMigrationContext : NSObject {
@private
	NSMutableDictionary *_bySourceAssociationTable;	// 4 = 0x4
	NSMutableDictionary *_byDestinationAssociationTable;	// 8 = 0x8
	NSMutableDictionary *_byMappingBySourceAssociationTable;	// 12 = 0xc
	NSMutableDictionary *_byMappingByDestinationAssociationTable;	// 16 = 0x10
	NSMigrationManager *_migrationManager;	// 20 = 0x14
	NSEntityMapping *_currentMapping;	// 24 = 0x18
	unsigned _currentStep;	// 28 = 0x1c
	NSPropertyMapping *_currentPropertyMapping;	// 32 = 0x20
}
@property(retain) id currentEntityMapping;	// G=0x32b72d4d; S=0x32b736d5; converted property
@property(assign) unsigned currentMigrationStep;	// G=0x32b72d6d; S=0x32b735dd; converted property
@property(retain) NSPropertyMapping *currentPropertyMapping;	// G=0x32b72d5d; S=0x32b73641; converted property
- (id)initWithMigrationManager:(id)migrationManager;	// 0x32b72d7d
- (void)_createAssociationsByDestination:(id)destination fromSource:(id)source forEntityMapping:(id)entityMapping;	// 0x32b7325d
- (void)_createAssociationsBySource:(id)source withDestination:(id)destination forEntityMapping:(id)entityMapping;	// 0x32b7341d
- (void)associateSourceInstance:(id)instance withDestinationInstance:(id)destinationInstance forEntityMapping:(id)entityMapping;	// 0x32b7321d
- (void)clearAssociationTables;	// 0x32b7378d
// converted property getter: - (id)currentEntityMapping;	// 0x32b72d4d
// converted property getter: - (unsigned)currentMigrationStep;	// 0x32b72d6d
// converted property getter: - (id)currentPropertyMapping;	// 0x32b72d5d
- (void)dealloc;	// 0x32b73825
- (id)destinationInstancesForEntityMapping:(id)entityMapping sourceInstance:(id)instance;	// 0x32b7304d
// converted property setter: - (void)setCurrentEntityMapping:(id)mapping;	// 0x32b736d5
// converted property setter: - (void)setCurrentMigrationStep:(unsigned)step;	// 0x32b735dd
// converted property setter: - (void)setCurrentPropertyMapping:(id)mapping;	// 0x32b73641
- (id)sourceInstancesForEntityMapping:(id)entityMapping destinationInstance:(id)instance;	// 0x32b72e7d
@end
