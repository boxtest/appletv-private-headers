/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "ASDynamicAccountClassLoader.h"
#import <BasicAccount.h> // Unknown library

@class NSOperationQueue, NSString, NSDictionary, NSLock, NSArray;

@interface AAAccount : BasicAccount <ASDynamicAccountClassLoader> {
	NSString *_cachedPassword;	// 24 = 0x18
	NSString *_cachedToken;	// 28 = 0x1c
	NSString *_unsavedToken;	// 32 = 0x20
	NSString *_cachedCommerceToken;	// 36 = 0x24
	NSOperationQueue *_requesterQueue;	// 40 = 0x28
	NSLock *_tokenLock;	// 44 = 0x2c
	NSLock *_passwordLock;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) int accountServiceType;	// G=0x33897e9d; 
@property(readonly, assign, nonatomic) NSArray *appleIDAliases;	// G=0x33897d8d; 
@property(readonly, assign, nonatomic) NSString *authToken;	// G=0x33897bc5; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x33897d41; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x33897d09; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x33897d25; 
@property(readonly, assign, nonatomic) int mobileMeAccountStatus;	// G=0x33897ed1; 
@property(readonly, assign, nonatomic) BOOL needsRegistration;	// G=0x33897e5d; 
@property(copy, nonatomic) NSString *password;	// G=0x33897ac9; S=0x3389b605; @synthesize=_cachedPassword
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x33897ced; 
@property(assign, nonatomic) BOOL primaryAccount;	// G=0x33897d5d; S=0x33897da9; 
@property(readonly, assign, nonatomic) NSString *primaryEmail;	// G=0x33897e09; 
@property(readonly, assign, nonatomic) BOOL primaryEmailVerified;	// G=0x33897e25; 
@property(readonly, assign, nonatomic) NSArray *provisionedDataclasses;	// G=0x33897f39; 
@property(readonly, assign, nonatomic) BOOL serviceUnavailable;	// G=0x33897ff9; 
@property(readonly, assign, nonatomic) NSDictionary *serviceUnavailableInfo;	// G=0x33898051; 
@property(copy, nonatomic) NSString *username;	// G=0x33897a3d; S=0x33897a5d; 
+ (id)accountTypeString;	// 0x33897829
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x33897541
+ (id)basicAccountProperties;	// 0x33897841
+ (id)classicAccountTypeString;	// 0x33897835
+ (id)configuredSyncAccountName;	// 0x3389a229
+ (id)dataclassesBoundToPrimaryAccount;	// 0x3389a3a1
+ (id)dataclassesBoundToSingleAccount;	// 0x3389a459
+ (id)dataclassesBoundToSyncAccount;	// 0x3389a3fd
+ (BOOL)doesConfiguredSyncAccountExist;	// 0x3389a159
+ (BOOL)isAOSEnabled;	// 0x3389a4e9
+ (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x3389b5b9
+ (id)propertiesWhichRequireValidation;	// 0x3389b56d
+ (void)setAOSEnabled:(BOOL)enabled;	// 0x3389a50d
+ (id)supportedDataclasses;	// 0x3389786d
- (id)initWithProperties:(id)properties;	// 0x338975c9
- (id)_deviceSpecificLocalizedString:(id)string;	// 0x3389a5f5
- (id)_errorWithDescriptionForResponseError:(id)responseError;	// 0x3389a8e9
- (id)_mailChildAccountProperties;	// 0x3389a78d
- (void)_performiCloudMigration;	// 0x3389acf9
- (void)_setToken:(id)token;	// 0x3389a6f1
- (id)accountFirstDisplayAlert;	// 0x338997f9
- (id)accountFooterButton;	// 0x338997b1
- (id)accountFooterText;	// 0x33899769
// declared property getter: - (int)accountServiceType;	// 0x33897e9d
- (void)addChildAccount:(id)account;	// 0x3389b359
// declared property getter: - (id)appleIDAliases;	// 0x33897d8d
// declared property getter: - (id)authToken;	// 0x33897bc5
- (void)authenticateWithHandler:(id)handler;	// 0x33898559
- (BOOL)becomeConfiguredSyncAccount;	// 0x3389a2c9
- (void)cancelNetworkActivity;	// 0x338988ad
- (void)configureAppleIDCerts;	// 0x3389ab99
// declared property getter: - (id)dataclassProperties;	// 0x33897d41
- (void)dealloc;	// 0x3389788d
- (id)description;	// 0x33897969
- (id)displayName;	// 0x338979e1
// declared property getter: - (id)firstName;	// 0x33897d09
- (void)flushCachedPassword;	// 0x33899709
- (void)flushCachedTokens;	// 0x338996a9
- (BOOL)isConfiguredSyncAccount;	// 0x3389a581
- (BOOL)isProvisionedForDataclass:(id)dataclass;	// 0x33897f0d
// declared property getter: - (id)lastName;	// 0x33897d25
// declared property getter: - (int)mobileMeAccountStatus;	// 0x33897ed1
- (BOOL)needsEmailConfiguration;	// 0x33899ab1
// declared property getter: - (BOOL)needsRegistration;	// 0x33897e5d
- (void)notifyUserOfQuotaDepletion;	// 0x338988e5
// declared property getter: - (id)password;	// 0x33897ac9
// declared property getter: - (id)personID;	// 0x33897ced
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass;	// 0x33899099
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass withHandler:(id)handler;	// 0x33898d45
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary;	// 0x33898d2d
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary withHandler:(id)handler;	// 0x33898951
// declared property getter: - (BOOL)primaryAccount;	// 0x33897d5d
// declared property getter: - (id)primaryEmail;	// 0x33897e09
// declared property getter: - (BOOL)primaryEmailVerified;	// 0x33897e25
- (id)propertiesForDataclass:(id)dataclass;	// 0x33897ee1
// declared property getter: - (id)provisionedDataclasses;	// 0x33897f39
- (void)registerWithHandler:(id)handler;	// 0x338983a5
- (void)removeAppleIDCerts;	// 0x3389ac99
- (void)removeChildAccountWithIdentifier:(id)identifier;	// 0x3389b419
- (void)removePasswordFromKeychain;	// 0x33899559
- (void)removeTokensFromKeychain;	// 0x33899229
- (void)resendVerificationEmail:(id)email;	// 0x33898785
- (void)savePasswordInKeychain;	// 0x338993c9
- (void)saveTokensInKeychain;	// 0x338990ad
// declared property getter: - (BOOL)serviceUnavailable;	// 0x33897ff9
// declared property getter: - (id)serviceUnavailableInfo;	// 0x33898051
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x33897f65
- (void)setLocationAuthorizationForDeviceLocator:(BOOL)deviceLocator;	// 0x3389a05d
// declared property setter: - (void)setPassword:(id)password;	// 0x3389b605
// declared property setter: - (void)setPrimaryAccount:(BOOL)account;	// 0x33897da9
- (void)setUseCellular:(BOOL)cellular forDataclass:(id)dataclass;	// 0x338980d9
// declared property setter: - (void)setUsername:(id)username;	// 0x33897a5d
- (void)setupChildMailAccountAndEnable:(BOOL)enable withEmail:(id)email;	// 0x33899b49
- (void)signInWithHandler:(id)handler;	// 0x338981a5
- (id)syncStoreIdentifier;	// 0x3389a269
- (void)updateAccountPropertiesWithHandler:(id)handler;	// 0x338983b5
- (void)updateAccountWithProvisioningResponse:(id)provisioningResponse;	// 0x33899841
- (BOOL)useCellularForDataclass:(id)dataclass;	// 0x33898099
// declared property getter: - (id)username;	// 0x33897a3d
@end
