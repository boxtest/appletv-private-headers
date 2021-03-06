/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class SSAccount, NSLock, NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface AccountStore : NSObject {
@private
	NSMutableArray *_accounts;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
@property(readonly, assign) NSArray *accounts;	// G=0x33354e89; 
@property(readonly, assign) SSAccount *activeAccount;	// G=0x33354f7d; 
@property(readonly, assign) SSAccount *activeLockerAccount;	// G=0x3335509d; 
@property(readonly, assign, getter=isExpired) BOOL expired;	// G=0x333551dd; 
+ (id)defaultStore;	// 0x33354e1d
- (id)init;	// 0x33354d59
- (id)_addAccount:(id)account asActiveAccount:(BOOL)account2 asActiveLockerAccount:(BOOL)account3;	// 0x33355389
- (id)_copyAccountsFromManager;	// 0x33355435
- (id)_copyActiveAccountIdentifier:(const CFStringRef *)identifier;	// 0x333554dd
- (id)_copyActiveLockerAccountIdentifier;	// 0x33355559
- (id)_newDemoAccount;	// 0x333555d1
- (id)_ntsAccountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x333556dd
- (id)_ntsAccounts;	// 0x333556a5
- (void)_ntsSetActiveAccount:(id)account;	// 0x333557a5
- (void)_ntsSetActiveLockerAccount:(id)account;	// 0x33355859
- (void)_postAccountStoreDidChange;	// 0x3335599d
- (void)_signOutAccount:(id)account;	// 0x333559e5
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x33354ef9
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier reloadIfNecessary:(BOOL)necessary;	// 0x33354f6d
// declared property getter: - (id)accounts;	// 0x33354e89
// declared property getter: - (id)activeAccount;	// 0x33354f7d
// declared property getter: - (id)activeLockerAccount;	// 0x3335509d
- (id)addAccount:(id)account;	// 0x333551bd
- (id)addAccountWithUserInfo:(id)userInfo;	// 0x33355379
- (void)dealloc;	// 0x33354dbd
// declared property getter: - (BOOL)isExpired;	// 0x333551dd
- (BOOL)isExpiredForTokenType:(int)tokenType;	// 0x333551e1
- (void)resetAccountWithUserInfo:(id)userInfo;	// 0x3335537d
- (void)resetExpiration;	// 0x333551e5
- (void)resetExpirationForTokenType:(int)tokenType;	// 0x333551e9
- (void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x333551ed
- (id)setAccountCreditsWithUserInfo:(id)userInfo;	// 0x33355381
- (id)setActiveAccount:(id)account;	// 0x333551f1
- (id)setActiveLockerAccount:(id)account;	// 0x33355211
- (void)signOutAccount:(id)account;	// 0x33355231
- (id)signOutAccountsWithUserInfo:(id)userInfo;	// 0x33355385
- (void)signOutAllAccounts;	// 0x33355261
- (void)synchronizeData;	// 0x33355375
@end

