/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSManagedObjectContext, NSMutableDictionary, NSString, NSPersistentStoreCoordinator, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface _PFUbiquityStack : NSObject {
@private
	NSManagedObjectContext *_metadataMOC;	// 4 = 0x4
	NSPersistentStoreCoordinator *_metadataPSC;	// 8 = 0x8
	NSMutableDictionary *_peerRangeCache;	// 12 = 0xc
	NSMutableDictionary *_objectHistoryCache;	// 16 = 0x10
	NSString *_localPeerID;	// 20 = 0x14
	PFUbiquityLocation *_ubiquityRootURL;	// 24 = 0x18
	NSURL *_metadataContainerURL;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x3487af09; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSURL *metadataContainerURL;	// G=0x3487aee9; @synthesize=_metadataContainerURL
@property(readonly, assign, nonatomic) NSManagedObjectContext *metadataMOC;	// G=0x3487af29; @synthesize=_metadataMOC
@property(readonly, assign, nonatomic) NSPersistentStoreCoordinator *metadataPSC;	// G=0x3487af19; @synthesize=_metadataPSC
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootURL;	// G=0x3487aef9; @synthesize=_ubiquityRootURL
+ (id)defaultUbiquityLocationForBundleIdentifier:(id)bundleIdentifier createIfMissing:(BOOL)missing;	// 0x3487d435
+ (id)defaultUbiquityLocationForPeerID:(id)peerID andBundleIdentifier:(id)identifier createIfMissing:(BOOL)missing;	// 0x3487d50d
+ (id)defaultUbiquityRootLocation;	// 0x3487d2fd
+ (BOOL)doBasicSanityCheckWithError:(id *)error forUbiquityRootURL:(id)ubiquityRootURL;	// 0x3487d02d
+ (id)getUbiquityModel;	// 0x3487d5d5
+ (void)initialize;	// 0x3487d63d
+ (int)integerFromPrimaryKeyString:(id)primaryKeyString;	// 0x3487d5f1
+ (unsigned)peerRangeStartForPrimaryKey:(unsigned)primaryKey;	// 0x3487aee1
+ (BOOL)recoverMetadataForStore:(id)store withLocalPeerID:(id)localPeerID withError:(id *)error;	// 0x3487b035
+ (BOOL)shouldRecoverStackMetadataForStore:(id)store withLocalPeerID:(id)localPeerID;	// 0x3487ccf9
- (id)init;	// 0x3487aedd
- (id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x34880db1
- (id)addPersistentStoreDescribedByMetadata:(id)metadata toPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x3487e715
- (id)addPersistentStoreWithName:(id)name toPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x3487e6b1
- (id)allPeers;	// 0x3487ede1
- (void)cachePeerRanges;	// 0x34880931
- (void)cacheTransactionHistoryWithPeerState:(id)peerState andTransactionDate:(id)date forStoreName:(id)storeName andImportingPeerID:(id)anId;	// 0x3487d6c5
- (id)cachedTransactionEntryHistoryForLocalIDString:(id)localIDString;	// 0x3487d6a1
- (id)createGlobalIdentifierForManagedObjectID:(id)managedObjectID withPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x3487eaa5
- (id)createMapOfGlobalObjectIDsToLocalIDURIs:(id)localIDURIs forStoreSaveSnapshot:(id)storeSaveSnapshot withPersistentStoreCoordinator:(id)persistentStoreCoordinator andImportContext:(id)context;	// 0x3487ffa9
- (void)createNewPeerRangesForFakeManagedObjects:(id)fakeManagedObjects withPeerEntityNameRangeStartSetDictionary:(id)peerEntityNameRangeStartSetDictionary andStoreNameToFetchedMetadata:(id)fetchedMetadata;	// 0x3487f139
- (void)dealloc;	// 0x3487af39
- (id)description;	// 0x34880d0d
- (id)importStateForStoreName:(id)storeName andPeerID:(id)anId;	// 0x3487e9b1
- (id)importStatesMatchingStoreName:(id)name;	// 0x3487e8fd
// declared property getter: - (id)localPeerID;	// 0x3487af09
- (unsigned)localPrimaryKeyForPeerID:(id)peerID inStoreNamed:(id)storeNamed andPrimaryKey:(unsigned)key forEntityNamed:(id)entityNamed;	// 0x3487ee1d
// declared property getter: - (id)metadataContainerURL;	// 0x3487aee9
// declared property getter: - (id)metadataMOC;	// 0x3487af29
// declared property getter: - (id)metadataPSC;	// 0x3487af19
- (id)newCoordinatorForPersistentStoreName:(id)persistentStoreName;	// 0x3487e839
- (id)peerForPeerID:(id)peerID createIfMissing:(BOOL)missing;	// 0x3487ed91
- (BOOL)shouldProcessTransactionLogAtLocation:(id)location error:(id *)error;	// 0x3487e251
// declared property getter: - (id)ubiquityRootURL;	// 0x3487aef9
@end
