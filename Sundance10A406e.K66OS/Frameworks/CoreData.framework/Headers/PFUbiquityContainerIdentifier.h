/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityLocation, NSString;

@interface PFUbiquityContainerIdentifier : NSObject {
	NSString *_storeName;	// 4 = 0x4
	NSString *_localPeerID;	// 8 = 0x8
	PFUbiquityLocation *_ubiquityRootLocation;	// 12 = 0xc
	NSString *_uuidString;	// 16 = 0x10
	PFUbiquityLocation *_uuidFileLocation;	// 20 = 0x14
	BOOL _usedExistingUUIDFile;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) BOOL usedExistingUUIDFile;	// G=0x33e13905; @synthesize=_usedExistingUUIDFile
@property(readonly, assign, nonatomic) PFUbiquityLocation *uuidFileLocation;	// G=0x33e138f5; @synthesize=_uuidFileLocation
@property(readonly, assign, nonatomic) NSString *uuidString;	// G=0x33e138e5; @synthesize=_uuidString
- (id)init;	// 0x33e12fbd
- (id)initWithLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x33e13045
- (void)dealloc;	// 0x33e130c1
- (BOOL)identifyContainer:(id *)container;	// 0x33e13335
- (BOOL)replaceIdentifierWithUUID:(id)uuid error:(id *)error;	// 0x33e13765
- (void)setUUIDStringFromLocation:(id)location;	// 0x33e13181
// declared property getter: - (BOOL)usedExistingUUIDFile;	// 0x33e13905
// declared property getter: - (id)uuidFileLocation;	// 0x33e138f5
// declared property getter: - (id)uuidString;	// 0x33e138e5
- (BOOL)writeToDisk:(id *)disk;	// 0x33e13231
@end

