/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import <MCTunnelParser.h> // Unknown library

@class NSString, MCMDMServer;

@interface MCMDMParser : MCTunnelParser {
@private
	NSString *_managingProfileIdentifier;	// 4 = 0x4
	MCMDMServer *_server;	// 8 = 0x8
	BOOL _isChaperone;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL isChaperone;	// G=0x315aa2fd; @synthesize=_isChaperone
@property(assign, nonatomic) __weak MCMDMServer *server;	// G=0x315aa2c9; S=0x315aa2e9; @synthesize=_server
- (id)initWithManagingProfileIdentifier:(id)managingProfileIdentifier;	// 0x315a41cd
- (id)initWithManagingProfileIdentifier:(id)managingProfileIdentifier isChaperone:(BOOL)chaperone;	// 0x315a4149
- (void).cxx_destruct;	// 0x315aa30d
- (id)_allCommands;	// 0x315a44fd
- (id)_allSettingsItems;	// 0x315a466d
- (id)_appStoreDisabledError;	// 0x315a9525
- (BOOL)_appStoreEnabled;	// 0x315a94c9
- (id)_applyRedemptionCode:(id)code;	// 0x315a9a8d
- (id)_availableCommandsWhileLocked;	// 0x315a43a9
- (id)_certificateList:(id)list;	// 0x315a7065
- (id)_clearPasscode:(id)passcode;	// 0x315a5ca1
- (id)_deviceInformationWithRequest:(id)request accessRights:(int)rights;	// 0x315a6145
- (id)_deviceLock:(id)lock;	// 0x315a5c6d
- (id)_eraseDevice:(id)device;	// 0x315a6009
- (id)_installApplication:(id)application;	// 0x315a95a9
- (id)_installProfile:(id)profile accessRights:(int)rights;	// 0x315a82fd
- (id)_installProvisioningProfile:(id)profile;	// 0x315a774d
- (id)_installedApplicationList:(id)list;	// 0x315a7b55
- (id)_invalidRequestTypeError:(id)error;	// 0x315a41f5
- (BOOL)_isProfileIdentifierManaged:(id)managed;	// 0x315a7845
- (BOOL)_isProvisioningProfileUUIDManaged:(id)managed;	// 0x315a78fd
- (id)_managedApplicationList:(id)list;	// 0x315a9c51
- (id)_notAuthorizedError;	// 0x315a427d
- (void)_performQuery:(id)query withResultDictionary:(id)resultDictionary;	// 0x315a6779
- (id)_performSetDataRoaming:(id)roaming;	// 0x315a8e19
- (id)_performSetVoiceRoaming:(id)roaming;	// 0x315a8ed5
- (id)_performSetWallpaper:(id)wallpaper;	// 0x315a8c2d
- (id)_performSetting:(id)setting;	// 0x315a8f91
- (id)_processRequest:(id)request withAccessRights:(int)accessRights;	// 0x315a4e71
- (id)_profileList:(id)list;	// 0x315a5335
- (id)_provisioningProfileList:(id)list;	// 0x315a74d1
- (id)_removeApplication:(id)application;	// 0x315a9fc9
- (id)_removeProfile:(id)profile;	// 0x315a8505
- (id)_removeProvisioningProfile:(id)profile;	// 0x315a79b5
- (id)_requestUnlockToken:(id)token;	// 0x315a5f55
- (id)_restrictions:(id)restrictions;	// 0x315a7f2d
- (id)_securityInfo:(id)info;	// 0x315a870d
- (id)_settings:(id)settings accessRights:(int)rights;	// 0x315a9159
- (BOOL)_validateSetting:(id)setting accessRights:(int)rights outError:(id *)error;	// 0x315a8961
// declared property getter: - (BOOL)isChaperone;	// 0x315aa2fd
- (id)malformedRequestErrorResult;	// 0x315a4301
- (id)processRequest:(id)request withAccessRights:(int)accessRights;	// 0x315a4709
// declared property getter: - (id)server;	// 0x315aa2c9
// declared property setter: - (void)setServer:(id)server;	// 0x315aa2e9
@end
