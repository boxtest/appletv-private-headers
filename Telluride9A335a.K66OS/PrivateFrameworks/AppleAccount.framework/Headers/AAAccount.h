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
@property(readonly, assign, nonatomic) int accountServiceType;	// G=0x304ffe9d; 
@property(readonly, assign, nonatomic) NSArray *appleIDAliases;	// G=0x304ffd8d; 
@property(readonly, assign, nonatomic) NSString *authToken;	// G=0x304ffbc5; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x304ffd41; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x304ffd09; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x304ffd25; 
@property(readonly, assign, nonatomic) int mobileMeAccountStatus;	// G=0x304ffed1; 
@property(readonly, assign, nonatomic) BOOL needsRegistration;	// G=0x304ffe5d; 
@property(copy, nonatomic) NSString *password;	// G=0x304ffac9; S=0x30503605; @synthesize=_cachedPassword
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x304ffced; 
@property(assign, nonatomic) BOOL primaryAccount;	// G=0x304ffd5d; S=0x304ffda9; 
@property(readonly, assign, nonatomic) NSString *primaryEmail;	// G=0x304ffe09; 
@property(readonly, assign, nonatomic) BOOL primaryEmailVerified;	// G=0x304ffe25; 
@property(readonly, assign, nonatomic) NSArray *provisionedDataclasses;	// G=0x304fff39; 
@property(readonly, assign, nonatomic) BOOL serviceUnavailable;	// G=0x304ffff9; 
@property(readonly, assign, nonatomic) NSDictionary *serviceUnavailableInfo;	// G=0x30500051; 
@property(copy, nonatomic) NSString *username;	// G=0x304ffa3d; S=0x304ffa5d; 
+ (id)accountTypeString;	// 0x304ff829
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x304ff541
+ (id)basicAccountProperties;	// 0x304ff841
+ (id)classicAccountTypeString;	// 0x304ff835
+ (id)configuredSyncAccountName;	// 0x30502229
+ (id)dataclassesBoundToPrimaryAccount;	// 0x305023a1
+ (id)dataclassesBoundToSingleAccount;	// 0x30502459
+ (id)dataclassesBoundToSyncAccount;	// 0x305023fd
+ (BOOL)doesConfiguredSyncAccountExist;	// 0x30502159
+ (BOOL)isAOSEnabled;	// 0x305024e9
+ (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x305035b9
+ (id)propertiesWhichRequireValidation;	// 0x3050356d
+ (void)setAOSEnabled:(BOOL)enabled;	// 0x3050250d
+ (id)supportedDataclasses;	// 0x304ff86d
- (id)initWithProperties:(id)properties;	// 0x304ff5c9
- (id)_deviceSpecificLocalizedString:(id)string;	// 0x305025f5
- (id)_errorWithDescriptionForResponseError:(id)responseError;	// 0x305028e9
- (id)_mailChildAccountProperties;	// 0x3050278d
- (void)_performiCloudMigration;	// 0x30502cf9
- (void)_setToken:(id)token;	// 0x305026f1
- (id)accountFirstDisplayAlert;	// 0x305017f9
- (id)accountFooterButton;	// 0x305017b1
- (id)accountFooterText;	// 0x30501769
// declared property getter: - (int)accountServiceType;	// 0x304ffe9d
- (void)addChildAccount:(id)account;	// 0x30503359
// declared property getter: - (id)appleIDAliases;	// 0x304ffd8d
// declared property getter: - (id)authToken;	// 0x304ffbc5
- (void)authenticateWithHandler:(id)handler;	// 0x30500559
- (BOOL)becomeConfiguredSyncAccount;	// 0x305022c9
- (void)cancelNetworkActivity;	// 0x305008ad
- (void)configureAppleIDCerts;	// 0x30502b99
// declared property getter: - (id)dataclassProperties;	// 0x304ffd41
- (void)dealloc;	// 0x304ff88d
- (id)description;	// 0x304ff969
- (id)displayName;	// 0x304ff9e1
// declared property getter: - (id)firstName;	// 0x304ffd09
- (void)flushCachedPassword;	// 0x30501709
- (void)flushCachedTokens;	// 0x305016a9
- (BOOL)isConfiguredSyncAccount;	// 0x30502581
- (BOOL)isProvisionedForDataclass:(id)dataclass;	// 0x304fff0d
// declared property getter: - (id)lastName;	// 0x304ffd25
// declared property getter: - (int)mobileMeAccountStatus;	// 0x304ffed1
- (BOOL)needsEmailConfiguration;	// 0x30501ab1
// declared property getter: - (BOOL)needsRegistration;	// 0x304ffe5d
- (void)notifyUserOfQuotaDepletion;	// 0x305008e5
// declared property getter: - (id)password;	// 0x304ffac9
// declared property getter: - (id)personID;	// 0x304ffced
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass;	// 0x30501099
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass withHandler:(id)handler;	// 0x30500d45
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary;	// 0x30500d2d
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary withHandler:(id)handler;	// 0x30500951
// declared property getter: - (BOOL)primaryAccount;	// 0x304ffd5d
// declared property getter: - (id)primaryEmail;	// 0x304ffe09
// declared property getter: - (BOOL)primaryEmailVerified;	// 0x304ffe25
- (id)propertiesForDataclass:(id)dataclass;	// 0x304ffee1
// declared property getter: - (id)provisionedDataclasses;	// 0x304fff39
- (void)registerWithHandler:(id)handler;	// 0x305003a5
- (void)removeAppleIDCerts;	// 0x30502c99
- (void)removeChildAccountWithIdentifier:(id)identifier;	// 0x30503419
- (void)removePasswordFromKeychain;	// 0x30501559
- (void)removeTokensFromKeychain;	// 0x30501229
- (void)resendVerificationEmail:(id)email;	// 0x30500785
- (void)savePasswordInKeychain;	// 0x305013c9
- (void)saveTokensInKeychain;	// 0x305010ad
// declared property getter: - (BOOL)serviceUnavailable;	// 0x304ffff9
// declared property getter: - (id)serviceUnavailableInfo;	// 0x30500051
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x304fff65
- (void)setLocationAuthorizationForDeviceLocator:(BOOL)deviceLocator;	// 0x3050205d
// declared property setter: - (void)setPassword:(id)password;	// 0x30503605
// declared property setter: - (void)setPrimaryAccount:(BOOL)account;	// 0x304ffda9
- (void)setUseCellular:(BOOL)cellular forDataclass:(id)dataclass;	// 0x305000d9
// declared property setter: - (void)setUsername:(id)username;	// 0x304ffa5d
- (void)setupChildMailAccountAndEnable:(BOOL)enable withEmail:(id)email;	// 0x30501b49
- (void)signInWithHandler:(id)handler;	// 0x305001a5
- (id)syncStoreIdentifier;	// 0x30502269
- (void)updateAccountPropertiesWithHandler:(id)handler;	// 0x305003b5
- (void)updateAccountWithProvisioningResponse:(id)provisioningResponse;	// 0x30501841
- (BOOL)useCellularForDataclass:(id)dataclass;	// 0x30500099
// declared property getter: - (id)username;	// 0x304ffa3d
@end

