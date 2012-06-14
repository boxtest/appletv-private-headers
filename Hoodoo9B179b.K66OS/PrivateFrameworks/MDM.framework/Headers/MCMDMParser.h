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
@property(readonly, assign) BOOL isChaperone;	// G=0x34e171c9; @synthesize=_isChaperone
@property(assign, nonatomic) MCMDMServer *server;	// G=0x34e171d9; S=0x34e171e9; @synthesize=_server
- (id)initWithManagingProfileIdentifier:(id)managingProfileIdentifier;	// 0x34e1c239
- (id)initWithManagingProfileIdentifier:(id)managingProfileIdentifier isChaperone:(BOOL)chaperone;	// 0x34e171f9
- (id)_allCommands;	// 0x34e1c051
- (id)_allSettingsItems;	// 0x34e1c025
- (id)_appStoreDisabledError;	// 0x34e17c95
- (BOOL)_appStoreEnabled;	// 0x34e17cf5
- (id)_applyRedemptionCode:(id)code;	// 0x34e17791
- (id)_availableCommandsWhileLocked;	// 0x34e1c07d
- (id)_certificateList:(id)list;	// 0x34e197c5
- (id)_clearPasscode:(id)passcode;	// 0x34e1aa95
- (id)_deviceInformationWithRequest:(id)request accessRights:(int)rights;	// 0x34e1a355
- (id)_deviceLock:(id)lock;	// 0x34e1acc1
- (id)_eraseDevice:(id)device;	// 0x34e1a909
- (id)_installApplication:(id)application;	// 0x34e178f5
- (id)_installProfile:(id)profile accessRights:(int)rights;	// 0x34e18ad5
- (id)_installProvisioningProfile:(id)profile;	// 0x34e19509
- (id)_installedApplicationList:(id)list;	// 0x34e18fc9
- (id)_invalidRequestTypeError:(id)error;	// 0x34e1c18d
- (BOOL)_isProfileIdentifierManaged:(id)managed;	// 0x34e19485
- (BOOL)_isProvisioningProfileUUIDManaged:(id)managed;	// 0x34e19401
- (id)_managedApplicationList:(id)list;	// 0x34e174dd
- (id)_notAuthorizedError;	// 0x34e1c12d
- (void)_performQuery:(id)query withResultDictionary:(id)resultDictionary;	// 0x34e19b9d
- (id)_performSetDataRoaming:(id)roaming;	// 0x34e18211
- (id)_performSetVoiceRoaming:(id)roaming;	// 0x34e18189
- (id)_performSetWallpaper:(id)wallpaper;	// 0x34e18299
- (id)_performSetting:(id)setting;	// 0x34e18029
- (id)_processRequest:(id)request withAccessRights:(int)accessRights;	// 0x34e1b549
- (id)_profileList:(id)list;	// 0x34e1acf5
- (id)_provisioningProfileList:(id)list;	// 0x34e195b5
- (id)_removeApplication:(id)application;	// 0x34e17261
- (id)_removeProfile:(id)profile;	// 0x34e1892d
- (id)_removeProvisioningProfile:(id)profile;	// 0x34e192d1
- (id)_requestUnlockToken:(id)token;	// 0x34e1aa01
- (id)_restrictions:(id)restrictions;	// 0x34e18ca1
- (id)_securityInfo:(id)info;	// 0x34e186ed
- (id)_settings:(id)settings accessRights:(int)rights;	// 0x34e17d41
- (BOOL)_validateSetting:(id)setting accessRights:(int)rights outError:(id *)error;	// 0x34e183f5
- (void)dealloc;	// 0x34e1c1ed
// declared property getter: - (BOOL)isChaperone;	// 0x34e171c9
- (id)malformedRequestErrorResult;	// 0x34e1c0a9
- (id)processRequest:(id)request withAccessRights:(int)accessRights;	// 0x34e1b905
// declared property getter: - (id)server;	// 0x34e171d9
// declared property setter: - (void)setServer:(id)server;	// 0x34e171e9
@end
