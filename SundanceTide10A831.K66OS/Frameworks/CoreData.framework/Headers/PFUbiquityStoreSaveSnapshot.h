/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, NSMutableDictionary, NSArray, NSDictionary, NSNumber;

@interface PFUbiquityStoreSaveSnapshot : NSObject {
	NSMutableArray *_entityNames;	// 4 = 0x4
	NSMutableArray *_peerIDs;	// 8 = 0x8
	NSMutableArray *_globalObjectIDs;	// 12 = 0xc
	NSMutableArray *_primaryKeys;	// 16 = 0x10
	NSMutableDictionary *_managedObjectIDToGlobalObjectID;	// 20 = 0x14
	NSMutableDictionary *_globalObjectIDToPermanentManagedObjectID;	// 24 = 0x18
	NSMutableDictionary *_entityNameToIndex;	// 28 = 0x1c
	NSMutableDictionary *_peerIDToIndex;	// 32 = 0x20
	NSMutableDictionary *_primaryKeyToIndex;	// 36 = 0x24
	NSMutableDictionary *_globalObjectIDToIndex;	// 40 = 0x28
	NSMutableDictionary *_insertedObjects;	// 44 = 0x2c
	NSMutableDictionary *_updatedObjects;	// 48 = 0x30
	NSMutableDictionary *_deletedObjects;	// 52 = 0x34
	NSMutableDictionary *_peerStates;	// 56 = 0x38
	NSNumber *_transactionNumber;	// 60 = 0x3c
	NSString *_exportingPeerID;	// 64 = 0x40
	NSString *_localPeerID;	// 68 = 0x44
	NSDictionary *_storeOptions;	// 72 = 0x48
	NSMutableArray *_filesInsertedInTransaction;	// 76 = 0x4c
	NSArray *_filesDeletedInTransaction;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSDictionary *deletedObjects;	// G=0x33e41ed9; @synthesize=_deletedObjects
@property(readonly, assign, nonatomic) NSDictionary *entityNameToIndex;	// G=0x33e41f49; @synthesize=_entityNameToIndex
@property(readonly, assign, nonatomic) NSArray *entityNames;	// G=0x33e41e79; @synthesize=_entityNames
@property(retain, nonatomic) NSString *exportingPeerID;	// G=0x33e41f09; S=0x33e41f19; @synthesize=_exportingPeerID
@property(readonly, retain) NSArray *filesDeletedInTransaction;	// G=0x33e40215; converted property
@property(readonly, retain) NSMutableArray *filesInsertedInTransaction;	// G=0x33e40205; converted property
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToIndex;	// G=0x33e41f79; @synthesize=_globalObjectIDToIndex
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToPermanentManagedObjectID;	// G=0x33e41f89; @synthesize=_globalObjectIDToPermanentManagedObjectID
@property(readonly, assign, nonatomic) NSArray *globalObjectIDs;	// G=0x33e41e99; @synthesize=_globalObjectIDs
@property(readonly, assign, nonatomic) NSDictionary *insertedObjects;	// G=0x33e41eb9; @synthesize=_insertedObjects
@property(retain, nonatomic) NSString *localPeerID;	// G=0x33e41f99; S=0x33e41fa9; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSDictionary *managedObjectIDToGlobalObjectID;	// G=0x33e41f39; @synthesize=_managedObjectIDToGlobalObjectID
@property(readonly, assign, nonatomic) NSDictionary *peerIDToIndex;	// G=0x33e41f59; @synthesize=_peerIDToIndex
@property(readonly, assign, nonatomic) NSArray *peerIDs;	// G=0x33e41e89; @synthesize=_peerIDs
@property(readonly, assign, nonatomic) NSDictionary *peerStates;	// G=0x33e41ee9; @synthesize=_peerStates
@property(readonly, assign, nonatomic) NSDictionary *primaryKeyToIndex;	// G=0x33e41f69; @synthesize=_primaryKeyToIndex
@property(readonly, assign, nonatomic) NSArray *primaryKeys;	// G=0x33e41ea9; @synthesize=_primaryKeys
@property(readonly, assign, nonatomic) NSDictionary *storeOptions;	// G=0x33e41f29; @synthesize=_storeOptions
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x33e41ef9; @synthesize=_transactionNumber
@property(readonly, assign, nonatomic) NSDictionary *updatedObjects;	// G=0x33e41ec9; @synthesize=_updatedObjects
- (id)init;	// 0x33e3fb3d
- (id)initWithExportingPeerID:(id)exportingPeerID;	// 0x33e3fd41
- (id)initWithPersistentStoreOptions:(id)persistentStoreOptions andExportingPeerID:(id)anId;	// 0x33e3fd85
- (void)_setFilesDeletedInTransaction:(id)transaction;	// 0x33e40225
- (id)addManagedObject:(id)object withTransactionType:(int)transactionType andStoreExportContext:(id)context withError:(id *)error;	// 0x33e4064d
- (id)checkIndex:(id)index forValue:(id)value fromArrayOfValues:(id)values;	// 0x33e40269
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)globalObjectID;	// 0x33e40445
- (id)createKnowledgeVectorFromPeerStates;	// 0x33e40b41
- (id)createUbiquityDictionary:(id)dictionary withStoreExportContext:(id)storeExportContext error:(id *)error;	// 0x33e41411
- (void)dealloc;	// 0x33e3fe4d
// declared property getter: - (id)deletedObjects;	// 0x33e41ed9
- (id)description;	// 0x33e40075
// declared property getter: - (id)entityNameToIndex;	// 0x33e41f49
// declared property getter: - (id)entityNames;	// 0x33e41e79
// declared property getter: - (id)exportingPeerID;	// 0x33e41f09
// converted property getter: - (id)filesDeletedInTransaction;	// 0x33e40215
// converted property getter: - (id)filesInsertedInTransaction;	// 0x33e40205
- (void)generatePeerStatesWithStoreExportContext:(id)storeExportContext;	// 0x33e40925
- (id)globalObjectIDForManagedObject:(id)managedObject withStoreExportContext:(id)storeExportContext;	// 0x33e40339
- (id)globalObjectIDFromCompressedObjectID:(id)compressedObjectID;	// 0x33e40555
// declared property getter: - (id)globalObjectIDToIndex;	// 0x33e41f79
// declared property getter: - (id)globalObjectIDToPermanentManagedObjectID;	// 0x33e41f89
// declared property getter: - (id)globalObjectIDs;	// 0x33e41e99
// declared property getter: - (id)insertedObjects;	// 0x33e41eb9
// declared property getter: - (id)localPeerID;	// 0x33e41f99
// declared property getter: - (id)managedObjectIDToGlobalObjectID;	// 0x33e41f39
// declared property getter: - (id)peerIDToIndex;	// 0x33e41f59
// declared property getter: - (id)peerIDs;	// 0x33e41e89
// declared property getter: - (id)peerStates;	// 0x33e41ee9
// declared property getter: - (id)primaryKeyToIndex;	// 0x33e41f69
// declared property getter: - (id)primaryKeys;	// 0x33e41ea9
- (void)reserveTransactionNumberWithStoreExportContext:(id)storeExportContext;	// 0x33e40771
- (void)setDeletedObjects:(id)objects;	// 0x33e413cd
- (void)setEntityNames:(id)names globalObjectIDs:(id)ids primaryKeys:(id)keys forStoreName:(id)storeName withRootLocation:(id)rootLocation;	// 0x33e40f2d
// declared property setter: - (void)setExportingPeerID:(id)anId;	// 0x33e41f19
- (void)setInsertedObjects:(id)objects;	// 0x33e41345
// declared property setter: - (void)setLocalPeerID:(id)anId;	// 0x33e41fa9
- (void)setTransactionNumber:(id)number peerStates:(id)states andPeerIDs:(id)ids;	// 0x33e40db5
- (void)setUpdatedObjects:(id)objects;	// 0x33e41389
// declared property getter: - (id)storeOptions;	// 0x33e41f29
// declared property getter: - (id)transactionNumber;	// 0x33e41ef9
- (id)transactionNumberFromPeerStates:(id)peerStates;	// 0x33e40cf9
// declared property getter: - (id)updatedObjects;	// 0x33e41ec9
@end

