/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityImportOperation.h"

@class NSString, PFUbiquityLocation, NSManagedObjectModel, NSPersistentStore;

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {
	NSString *_localPeerID;	// 24 = 0x18
	NSString *_storeName;	// 28 = 0x1c
	NSString *_modelVersionHash;	// 32 = 0x20
	NSManagedObjectModel *_model;	// 36 = 0x24
	PFUbiquityLocation *_ubiquityRootLocation;	// 40 = 0x28
	NSPersistentStore *_store;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x3638903d; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSManagedObjectModel *model;	// G=0x3638906d; @synthesize=_model
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x3638907d; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSPersistentStore *store;	// G=0x3638908d; @synthesize=_store
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x3638904d; @synthesize=_storeName
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x3638905d; @synthesize=_ubiquityRootLocation
- (id)initWithStore:(id)store andLocalPeerID:(id)anId;	// 0x36388bb9
- (id)initWithStoreName:(id)storeName localPeerID:(id)anId modelVersionHash:(id)hash andRootLocation:(id)location;	// 0x36388d79
- (void)dealloc;	// 0x36388e7d
- (id)description;	// 0x36388f81
// declared property getter: - (id)localPeerID;	// 0x3638903d
// declared property getter: - (id)model;	// 0x3638906d
// declared property getter: - (id)modelVersionHash;	// 0x3638907d
// declared property getter: - (id)store;	// 0x3638908d
// declared property getter: - (id)storeName;	// 0x3638904d
- (void)storeWillBeRemoved:(id)store;	// 0x36388e39
// declared property getter: - (id)ubiquityRootLocation;	// 0x3638905d
@end
