/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface AccountsManager : NSObject {
	NSMutableDictionary *_topLevelAccountsByID;	// 4 = 0x4
	NSMutableArray *_orderedTopLevelAccounts;	// 8 = 0x8
	NSMutableDictionary *_childAccountsByID;	// 12 = 0xc
	NSMutableDictionary *_childAccountIDToParentAccountID;	// 16 = 0x10
@private
	NSMutableDictionary *_originalAccountsByID;	// 20 = 0x14
	unsigned _dataVersion;	// 24 = 0x18
	NSArray *_runtimeFixers;	// 28 = 0x1c
}
@property(assign) unsigned dataVersion;	// G=0x34835a05; S=0x34835a21; converted property
+ (void)_migrateAccountsIfNeeded;	// 0x34839059
+ (BOOL)_oldDAAccountsInformationFound;	// 0x348393f1
+ (BOOL)_oldMailAccountsInformationFound;	// 0x34839471
+ (void)_setShouldSkipNotifications:(BOOL)_set;	// 0x34835a15
+ (BOOL)accountSettingsNeedsToBeMigrated;	// 0x34835a51
+ (id)createAndLockMigrationLock;	// 0x34835d21
+ (unsigned)currentVersion;	// 0x34835a01
+ (id)displayNameForGroupOfAccountType:(id)accountType forBeginningOfSentence:(BOOL)sentence;	// 0x34835eb1
+ (id)fullPathToAccountSettingsPlist;	// 0x34839189
+ (void)killDataAccessIfNecessary;	// 0x34839265
+ (void)releaseMigrationLock:(id)lock;	// 0x34835cf9
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;	// 0x348373e9
+ (void)shouldMigrateOldMailAccounts:(BOOL *)accounts oldDAAccounts:(BOOL *)accounts2 newAccountSettings:(BOOL *)settings;	// 0x34835ad1
+ (void)waitForMigrationToFinish;	// 0x34835c95
- (id)init;	// 0x34836401
- (id)initInsideOfMigration;	// 0x34835d69
- (id)initWithAccounsInfoArray:(id)accounsInfoArray;	// 0x34835e35
- (void)_addNotificationToDictionary:(id)dictionary forChangeType:(int)changeType originalProperties:(id)properties currentProperties:(id)properties4;	// 0x348364d9
- (id)_createRuntimeFixers;	// 0x34835e49
- (id)_initWithAccountsInfo:(id)accountsInfo;	// 0x34837479
- (void)_loadChildrenFromAccount:(id)account;	// 0x34837819
- (id)_notifierClassNamesForAccountType:(id)accountType dataclass:(id)dataclass;	// 0x348388c5
- (void)_removeChildrenForAccountWithIdentifier:(id)identifier;	// 0x34836c21
- (void)_sendNotificationsForChangedAccounts;	// 0x34838c11
- (void)_setOriginalAccountDictionaries;	// 0x34838755
- (id)accountWithIdentifier:(id)identifier;	// 0x3483637d
- (id)accountsWithTypes:(id)types;	// 0x348361a1
- (id)accountsWithTypes:(id)types withLoader:(id)loader;	// 0x34836f11
- (void)addChild:(id)child toAccount:(id)account;	// 0x34835fa1
- (id)allBasicAccounts;	// 0x34836311
- (id)allBasicSyncableAccounts;	// 0x348362ad
- (id)allMailAccounts;	// 0x348361b9
- (id)basicAccountsWithTypes:(id)types;	// 0x34837155
- (unsigned)count;	// 0x34836181
- (unsigned)countOfBasicAccountsWithTypes:(id)types;	// 0x34836b45
// converted property getter: - (unsigned)dataVersion;	// 0x34835a05
- (void)dealloc;	// 0x34836435
- (void)deleteAccount:(id)account;	// 0x34838465
- (void)deleteAccountWithIdentifier:(id)identifier;	// 0x34836149
- (id)displayAccountWithSyncIdentifier:(id)syncIdentifier;	// 0x34836341
- (id)fullAccountWithIdentifier:(id)identifier loader:(id)loader;	// 0x34836241
- (id)fullDeviceLocalAccount;	// 0x348379b1
- (void)insertAccount:(id)account;	// 0x3483857d
- (void)removeChildWithIdentifier:(id)identifier fromAccount:(id)account;	// 0x34836d91
- (void)replaceAccount:(id)account withAccount:(id)account2;	// 0x34836069
- (void)replaceAccountsWithTypes:(id)types withAccounts:(id)accounts;	// 0x34837fc1
- (void)saveAllAccounts;	// 0x34837b59
// converted property setter: - (void)setDataVersion:(unsigned)version;	// 0x34835a21
- (id)syncableAccountWithSyncIdentifier:(id)syncIdentifier;	// 0x34837259
- (void)updateAccount:(id)account;	// 0x3483863d
@end
