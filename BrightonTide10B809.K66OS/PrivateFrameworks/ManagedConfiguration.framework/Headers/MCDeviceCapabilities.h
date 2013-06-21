/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCDeviceCapabilities : NSObject {
	BOOL _supportsBlockLevelEncryption;	// 4 = 0x4
	BOOL _supportsFileLevelEncryption;	// 5 = 0x5
}
@property(readonly, assign, nonatomic) BOOL supportsBlockLevelEncryption;	// G=0x344cefe5; @synthesize=_supportsBlockLevelEncryption
@property(readonly, assign, nonatomic) BOOL supportsFileLevelEncryption;	// G=0x344ceff5; @synthesize=_supportsFileLevelEncryption
+ (id)currentDevice;	// 0x344cec91
- (id)init;	// 0x344ced9d
- (BOOL)_mediaDiskIsEncrypted;	// 0x344ced09
// declared property getter: - (BOOL)supportsBlockLevelEncryption;	// 0x344cefe5
// declared property getter: - (BOOL)supportsFileLevelEncryption;	// 0x344ceff5
- (BOOL)validateCapabilitiesRequiredByRestrictions:(id)restrictions localizedIncompatibilityMessage:(id)message outError:(id *)error;	// 0x344cee6d
@end
