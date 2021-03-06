/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import "NSObject.h"


@protocol ACDAccountStoreProtocol <NSObject>
- (void)accessKeysForAccountType:(id)accountType handler:(id)handler;
- (void)accountExistsWithDescription:(id)description completion:(id)completion;
- (void)accountIdentifiersEnabledForDataclass:(id)dataclass handler:(id)handler;
- (void)accountIdentifiersEnabledForDataclasses:(id)dataclasses withAccountTypeIdentifiers:(id)accountTypeIdentifiers completion:(id)completion;
- (void)accountIdentifiersEnabledToSyncDataclass:(id)syncDataclass handler:(id)handler;
- (void)accountTypeWithIdentifier:(id)identifier handler:(id)handler;
- (void)accountTypesWithHandler:(id)handler;
- (void)accountWithIdentifier:(id)identifier handler:(id)handler;
- (void)accountsWithAccountType:(id)accountType handler:(id)handler;
- (void)accountsWithHandler:(id)handler;
- (void)appPermissionsForAccountType:(id)accountType withHandler:(id)handler;
- (void)canSaveAccount:(id)account completion:(id)completion;
- (void)childAccountsForAccountWithIdentifier:(id)identifier handler:(id)handler;
- (void)childAccountsWithAccountTypeIdentifier:(id)accountTypeIdentifier parentAccountIdentifier:(id)identifier handler:(id)handler;
- (void)clearAllPermissionsGrantedForAccountType:(id)accountType withHandler:(id)handler;
- (void)clearGrantedPermissionsForAccountType:(id)accountType withHandler:(id)handler;
- (void)credentialForAccountWithIdentifier:(id)identifier bundleID:(id)anId handler:(id)handler;
- (void)credentialForAccountWithIdentifier:(id)identifier handler:(id)handler;
- (void)dataclassActionsForAccountDeletion:(id)accountDeletion completion:(id)completion;
- (void)dataclassActionsForAccountSave:(id)accountSave completion:(id)completion;
- (void)dataclassesWithHandler:(id)handler;
- (void)displayAccountTypeForAccountWithIdentifier:(id)identifier handler:(id)handler;
- (void)enabledDataclassesForAccountWithIdentifier:(id)identifier handler:(id)handler;
- (void)grantedPermissionsForAccountType:(id)accountType withHandler:(id)handler;
- (void)insertAccountDataclass:(id)dataclass withHandler:(id)handler;
- (void)insertAccountType:(id)type withHandler:(id)handler;
- (void)isPerformingDataclassActionsForAccount:(id)account completion:(id)completion;
- (void)isPushSupportedForAccount:(id)account completion:(id)completion;
- (void)isTetheredSyncingEnabledForDataclass:(id)dataclass completion:(id)completion;
- (void)kerberosAccountsForDomainFromURL:(id)url completion:(id)completion;
- (void)parentAccountForAccountWithIdentifier:(id)identifier handler:(id)handler;
- (void)permissionForAccountType:(id)accountType withHandler:(id)handler;
- (void)provisionedDataclassesForAccountWithIdentifier:(id)identifier handler:(id)handler;
- (void)removeAccount:(id)account withDataclassActions:(id)dataclassActions completion:(id)completion;
- (void)removeAccountType:(id)type withHandler:(id)handler;
- (void)renewCredentialsForAccount:(id)account force:(BOOL)force reason:(id)reason completion:(id)completion;
- (void)renewCredentialsForAccount:(id)account reason:(id)reason completion:(id)completion;
- (void)requestAccessForAccountTypeWithIdentifier:(id)identifier options:(id)options withHandler:(id)handler;
- (void)saveAccount:(id)account pid:(id)pid verify:(BOOL)verify dataclassActions:(id)actions completion:(id)completion;
- (void)saveAccount:(id)account withHandler:(id)handler;
- (void)setClientBundleID:(id)anId withHandler:(id)handler;
- (void)setNotificationsEnabledNum:(BOOL)num;
- (void)setPermissionGranted:(id)granted forBundleID:(id)bundleID onAccountType:(id)type withHandler:(id)handler;
- (void)supportedDataclassesForAccountType:(id)accountType handler:(id)handler;
- (void)syncableDataclassesForAccountType:(id)accountType handler:(id)handler;
- (void)tetheredSyncSourceTypeForDataclass:(id)dataclass completion:(id)completion;
- (void)typeIdentifierForDomain:(id)domain withHandler:(id)handler;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)typeIdentifier withHandler:(id)handler;
- (void)verifyCredentialsForAccount:(id)account saveWhenAuthorized:(BOOL)authorized withHandler:(id)handler;
@end

