/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObject.h"
#import "CoreData-Structs.h"

@class NSString, NSSet, NSDictionary, PFUbiquityLocation, NSData, NSURL;

@interface PFUbiquityStoreMetadata : NSManagedObject {
}
@property(retain, nonatomic) NSString *modelVersionHashString;	// @dynamic
@property(retain, nonatomic) NSSet *peerStates;	// @dynamic
@property(retain, nonatomic) NSSet *primaryKeyRanges;	// @dynamic
@property(retain, nonatomic) NSString *storeIdentifier;	// @dynamic
@property(retain, nonatomic) NSDictionary *storeOptions;	// G=0x30fabfcd; S=0x30fac029; 
@property(retain, nonatomic) NSData *storeOptionsBinaryPlistData;	// @dynamic
@property(retain, nonatomic) NSString *storeType;	// @dynamic
@property(retain, nonatomic) NSString *storeURLString;	// @dynamic
@property(retain, nonatomic) NSSet *transactionEntries;	// @dynamic
@property(retain, nonatomic) NSString *ubiquityName;	// @dynamic
@property(retain, nonatomic) NSString *ubiquityRelativePath;	// @dynamic
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x30fabf85; 
@property(readonly, assign, nonatomic) NSURL *ubiquityRootURL;	// G=0x30fabf35; 
@property(retain, nonatomic) NSString *ubiquityRootURLString;	// @dynamic
+ (id)addMetadataForPersistentStore:(id)persistentStore withLocalPeerID:(id)localPeerID inManagedObjectContext:(id)managedObjectContext;	// 0x30faada5
+ (id)allStoreMetadataInManagedObjectContext:(id)managedObjectContext;	// 0x30faac3d
+ (id)baselineGCModelURLForUbiquityName:(id)ubiquityName andUbiquityLogURL:(id)url;	// 0x30fabd59
+ (id)baselineMetaFileURLForUbiquityName:(id)ubiquityName andUbiquityLogURL:(id)url;	// 0x30fabd8d
+ (id)baselineModelURLForUbiquityName:(id)ubiquityName andUbiquityLogURL:(id)url;	// 0x30fabd25
+ (id)baselineRootDirectoryForUbiquityName:(id)ubiquityName andUbiquityLogURL:(id)url;	// 0x30fabdc1
+ (id)baselineStoreURLForUbiquityName:(id)ubiquityName andUbiquityLogURL:(id)url;	// 0x30fabcf1
+ (BOOL)isBaselineRootURL:(id)url;	// 0x30fabf01
+ (id)metadataForStoreWithName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x30faad5d
+ (id)storeMetadatasWithName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x30faacb9
- (id)initWithUbiquityName:(id)ubiquityName andUbiquityRootLocation:(id)location insertIntoManagedObjectContext:(id)context;	// 0x30faab5d
- (id)createPeerRangesForBaselineWithLocalPeerID:(id)localPeerID;	// 0x30fab545
- (void)loadFromBaselineMetadata:(id)baselineMetadata withLocalPeerID:(id)localPeerID;	// 0x30fab175
- (id)peerStateForPeerID:(id)peerID;	// 0x30fab84d
- (id)peerStoreURLForPeerIdentifier:(id)peerIdentifier;	// 0x30fabcad
- (id)peerURLForPeerIdentifier:(id)peerIdentifier;	// 0x30fabc61
// declared property setter: - (void)setStoreOptions:(id)options;	// 0x30fac029
// declared property getter: - (id)storeOptions;	// 0x30fabfcd
// declared property getter: - (id)ubiquityRootLocation;	// 0x30fabf85
// declared property getter: - (id)ubiquityRootURL;	// 0x30fabf35
- (void)updatePeerStatesToMatchKnowledgeVector:(id)matchKnowledgeVector;	// 0x30faba91
- (void)updateWithStore:(id)store;	// 0x30faaf79
@end
