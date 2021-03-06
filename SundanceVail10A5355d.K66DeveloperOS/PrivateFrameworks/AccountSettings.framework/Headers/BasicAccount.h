/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import "AccountFullAccountProtocol.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;
@protocol AccountRefreshProtocol;

@interface BasicAccount : NSObject <AccountFullAccountProtocol> {
	NSDictionary *_originalProperties;	// 4 = 0x4
	NSMutableDictionary *_properties;	// 8 = 0x8
	id<AccountFullAccountProtocol> _fullAccount;	// 12 = 0xc
	id<AccountRefreshProtocol> _syncAccount;	// 16 = 0x10
	BasicAccount *_parentAccount;	// 20 = 0x14
}
@property(retain) id accountClass;	// G=0x35f73161; S=0x35f73181; converted property
@property(retain) id displayName;	// G=0x35f731dd; S=0x35f742a9; converted property
@property(retain, nonatomic) NSDictionary *originalProperties;	// G=0x35f73a29; S=0x35f739e1; @synthesize=_originalProperties
@property(retain) BasicAccount *parentAccount;	// G=0x35f730f5; S=0x35f73105; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x35f7306d; converted property
+ (id)_accountCreationMap;	// 0x35f74825
+ (id)_creatorsInfo;	// 0x35f73ca9
+ (id)_dataclassesProperties;	// 0x35f73d41
+ (BOOL)_isValidAccountType:(id)type;	// 0x35f73a39
+ (id)accountWithProperties:(id)properties;	// 0x35f72725
+ (id)accountWithType:(id)type class:(id)aClass;	// 0x35f726e5
+ (id)allSupportedDataclasses;	// 0x35f72771
+ (id)createNewAccountUID;	// 0x35f747f1
+ (id)deleteAccountActionsForAccountType:(id)accountType;	// 0x35f72a6d
+ (BOOL)displayToggleForDataclass:(id)dataclass;	// 0x35f72b95
+ (void)initialize;	// 0x35f71f45
+ (BOOL)isMultitaskingEnabled;	// 0x35f71ef9
+ (BOOL)multipleStoresSupportedByDataclass:(id)dataclass;	// 0x35f72af1
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)singleStoreDataclass;	// 0x35f728e1
+ (BOOL)showRemindersSeparatelyForAccountType:(id)accountType;	// 0x35f72aa9
+ (id)supportedDataclassesForAccountType:(id)accountType;	// 0x35f728a5
+ (id)userActionsToDisableDataclass:(id)disableDataclass forAccountType:(id)accountType;	// 0x35f729f9
+ (id)userActionsToEnableDataclass:(id)enableDataclass forAccountType:(id)accountType;	// 0x35f72985
+ (BOOL)userConfirmationIsRequiredByDataclass:(id)dataclass;	// 0x35f72bf9
- (id)init;	// 0x35f72e41
- (id)initWithProperties:(id)properties;	// 0x35f72c5d
- (id)_cachedSyncAccount;	// 0x35f73dd9
- (id)_creatorClassNameForAccountType:(id)accountType creatorType:(id)type loader:(id)loader;	// 0x35f7436d
- (void)_forcedSetAccountProperty:(id)property forKey:(id)key;	// 0x35f741cd
- (void)_forcedSetEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x35f741ed
- (id)_initWithType:(id)type class:(id)aClass;	// 0x35f73a81
- (id)_orderedDataclasses:(id)dataclasses;	// 0x35f73e95
- (id)_profileRestrictedDataclasses;	// 0x35f74039
// converted property getter: - (id)accountClass;	// 0x35f73161
- (id)accountPropertyForKey:(id)key;	// 0x35f73005
- (void)dealloc;	// 0x35f72ec1
// converted property getter: - (id)displayName;	// 0x35f731dd
- (id)enabledDataclasses;	// 0x35f73399
- (id)fullAccountCreatorClassNameForAccountType:(id)accountType loader:(id)loader;	// 0x35f7479d
- (id)fullAccountUsingLoader:(id)loader;	// 0x35f73691
- (id)identifier;	// 0x35f730ad
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x35f73491
// declared property getter: - (id)originalProperties;	// 0x35f73a29
// converted property getter: - (id)parentAccount;	// 0x35f730f5
- (id)parentAccountIdentifier;	// 0x35f730cd
// converted property getter: - (id)properties;	// 0x35f7306d
- (id)propertiesToSave;	// 0x35f7307d
- (id)provisionedDataclasses;	// 0x35f732a5
- (BOOL)refreshContainerListForDataclass:(id)dataclass;	// 0x35f739a9
- (BOOL)refreshContainerListForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x35f73925
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass;	// 0x35f73985
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x35f738ed
- (BOOL)refreshContainersForDataclass:(id)dataclass;	// 0x35f739c1
- (BOOL)refreshContainersForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x35f73955
- (void)removeAccountPropertyForKey:(id)key;	// 0x35f72fe5
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x35f739d9
// converted property setter: - (void)setAccountClass:(id)aClass;	// 0x35f73181
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x35f72f61
// converted property setter: - (void)setDisplayName:(id)name;	// 0x35f742a9
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x35f734bd
- (void)setEnabledForDataclasses:(id)dataclasses;	// 0x35f735a9
- (void)setFullAccount:(id)account;	// 0x35f74329
// declared property setter: - (void)setOriginalProperties:(id)properties;	// 0x35f739e1
// converted property setter: - (void)setParentAccount:(id)account;	// 0x35f73105
- (id)shortTypeString;	// 0x35f7321d
- (id)supportedDataclasses;	// 0x35f7323d
- (id)syncAccountCreatorClassNameForAccountType:(id)accountType;	// 0x35f747c5
- (id)syncStoreIdentifier;	// 0x35f73141
- (id)type;	// 0x35f7308d
- (id)typeString;	// 0x35f731fd
@end

