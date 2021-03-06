/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityLocation, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityContainerIdentifier : NSObject {
@private
	NSString *_storeName;	// 4 = 0x4
	NSString *_localPeerID;	// 8 = 0x8
	PFUbiquityLocation *_ubiquityRootLocation;	// 12 = 0xc
	NSString *_uuidString;	// 16 = 0x10
	PFUbiquityLocation *_uuidFileLocation;	// 20 = 0x14
	BOOL _usedExistingUUIDFile;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) BOOL usedExistingUUIDFile;	// G=0x32c325ad; @synthesize=_usedExistingUUIDFile
@property(readonly, assign, nonatomic) PFUbiquityLocation *uuidFileLocation;	// G=0x32c325bd; @synthesize=_uuidFileLocation
@property(readonly, assign, nonatomic) NSString *uuidString;	// G=0x32c325cd; @synthesize=_uuidString
- (id)init;	// 0x32c325dd
- (id)initWithLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x32c32e35
- (void)dealloc;	// 0x32c32d6d
- (BOOL)identifyContainer:(id *)container;	// 0x32c327f5
- (BOOL)replaceIdentifierWithUUID:(id)uuid error:(id *)error;	// 0x32c32665
- (void)setUUIDStringFromLocation:(id)location;	// 0x32c32cbd
// declared property getter: - (BOOL)usedExistingUUIDFile;	// 0x32c325ad
// declared property getter: - (id)uuidFileLocation;	// 0x32c325bd
// declared property getter: - (id)uuidString;	// 0x32c325cd
- (BOOL)writeToDisk:(id *)disk;	// 0x32c32bb9
@end

