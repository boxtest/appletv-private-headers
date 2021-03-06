/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSAccountStore.h"
#import "NSObject.h"
#import <NSObject.h> // Unknown library

@class NSArray, SSDistributedNotificationCenter, SSKeyValueStore, SSAccount;
@protocol OS_dispatch_queue;

@protocol SSAccountStore <NSObject>
@property(readonly, assign) NSArray *accounts;
@property(readonly, assign) SSAccount *activeAccount;
@property(readonly, assign) SSAccount *activeLockerAccount;
@property(readonly, assign, getter=isAuthenticationActive) BOOL authenticationActive;
@property(readonly, assign, getter=isExpired) BOOL expired;
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier;
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier reloadIfNecessary:(BOOL)necessary;
// declared property getter: - (id)accounts;
// declared property getter: - (id)activeAccount;
// declared property getter: - (id)activeLockerAccount;
- (id)addAccount:(id)account;
// declared property getter: - (BOOL)isAuthenticationActive;
// declared property getter: - (BOOL)isExpired;
- (BOOL)isExpiredForTokenType:(int)tokenType;
- (void)resetExpiration;
- (void)resetExpirationForTokenType:(int)tokenType;
- (void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)uniqueIdentifier;
- (id)setActiveAccount:(id)account;
- (id)setActiveLockerAccount:(id)account;
- (void)signOutAccount:(id)account;
- (void)signOutAllAccounts;
@end

@interface SSAccountStore : NSObject <SSAccountStore> {
	NSArray *_accounts;	// 4 = 0x4
	BOOL _accountsValid;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 12 = 0xc
	SSKeyValueStore *_keyValueStore;	// 16 = 0x10
	SSDistributedNotificationCenter *_notificationCenter;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_notificationQueue;	// 24 = 0x18
	id _observer;	// 28 = 0x1c
}
@property(readonly, assign) NSArray *accounts;	// G=0x312ad679; 
@property(readonly, assign) SSAccount *activeAccount;	// G=0x312ada25; 
@property(readonly, assign) SSAccount *activeLockerAccount;	// G=0x312adca1; 
@property(readonly, assign, getter=isAuthenticationActive) BOOL authenticationActive;	// G=0x312ae5e9; 
@property(retain) SSDistributedNotificationCenter *distributedNotificationCenter;	// G=0x312ae1d9; S=0x312aeccd; 
@property(readonly, assign, getter=isExpired) BOOL expired;	// G=0x312adf1d; 
+ (id)defaultStore;	// 0x312ad5e5
+ (id)existingDefaultStore;	// 0x312adf41
+ (BOOL)isExpired;	// 0x312aef85
+ (BOOL)isExpiredForTokenType:(int)tokenType;	// 0x312aef9d
+ (void)resetExpiration;	// 0x312af0bd
+ (void)resetExpirationForTokenType:(int)tokenType;	// 0x312af0d1
+ (void)setDefaultStore:(id)store;	// 0x312af151
+ (double)tokenExpirationInterval;	// 0x312ad661
- (id)init;	// 0x312ad401
- (id)_accountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x312af1a5
- (id)_addAccount:(id)account asActiveAccount:(BOOL)account2 activeLockerAccount:(BOOL)account3;	// 0x312af28d
- (void)_invalidateAccounts;	// 0x312af5f1
- (void)_postAccountStoreChanged;	// 0x312af629
- (BOOL)_reloadAccountsIfNeeded;	// 0x312af6d5
- (void)_sendMessage:(id)message withAccountsBlock:(id)accountsBlock;	// 0x312af91d
- (void)_setAccounts:(id)accounts;	// 0x312afaa9
- (void)_signOutWithAccountIDs:(id)accountIDs;	// 0x312afaed
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x312ad84d
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier reloadIfNecessary:(BOOL)necessary;	// 0x312adf85
// declared property getter: - (id)accounts;	// 0x312ad679
// declared property getter: - (id)activeAccount;	// 0x312ada25
// declared property getter: - (id)activeLockerAccount;	// 0x312adca1
- (id)addAccount:(id)account;	// 0x312ae1b9
- (void)dealloc;	// 0x312ad4e9
// declared property getter: - (id)distributedNotificationCenter;	// 0x312ae1d9
- (void)getDefaultAccountNameUsingBlock:(id)block;	// 0x312ae389
// declared property getter: - (BOOL)isAuthenticationActive;	// 0x312ae5e9
// declared property getter: - (BOOL)isExpired;	// 0x312adf1d
- (BOOL)isExpiredForTokenType:(int)tokenType;	// 0x312ae7c5
- (void)reloadAccounts;	// 0x312ae7e9
- (void)resetExpiration;	// 0x312ae865
- (void)resetExpirationForTokenType:(int)tokenType;	// 0x312ae881
- (void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x312ae89d
- (id)setActiveAccount:(id)account;	// 0x312aea29
- (id)setActiveLockerAccount:(id)account;	// 0x312aea49
- (void)setDefaultAccountName:(id)name completionBlock:(id)block;	// 0x312aea69
// declared property setter: - (void)setDistributedNotificationCenter:(id)center;	// 0x312aeccd
- (void)signOutAccount:(id)account;	// 0x312aeead
- (void)signOutAllAccounts;	// 0x312aef71
@end

