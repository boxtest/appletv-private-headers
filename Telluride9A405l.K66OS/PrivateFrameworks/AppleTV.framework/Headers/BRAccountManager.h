/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableArray, NSString, NSMutableDictionary;

@interface BRAccountManager : BRSingleton {
@private
	NSString *_accountPath;	// 4 = 0x4
	NSString *_dataPath;	// 8 = 0x8
	NSMutableArray *_accounts;	// 12 = 0xc
	NSMutableDictionary *_accountTypes;	// 16 = 0x10
	NSMutableDictionary *_preferredAccounts;	// 20 = 0x14
	NSMutableArray *_pendingAccounts;	// 24 = 0x18
}
+ (void)initialize;	// 0x35e811b5
+ (void)setSingleton:(id)singleton;	// 0x35e811a5
+ (id)singleton;	// 0x35e81195
- (id)init;	// 0x35e81261
- (void)_accountDirty:(id)dirty;	// 0x35e82ef1
- (void)_deleteAccount:(id)account;	// 0x35e82dd5
- (void)_load;	// 0x35e823b1
- (id)_loadAccountFromFilePath:(id)filePath;	// 0x35e82c9d
- (void)_save;	// 0x35e828ed
- (void)_saveAccount:(id)account;	// 0x35e82a3d
- (void)_saveAccount:(id)account flushDiskImmediately:(BOOL)immediately;	// 0x35e82a51
- (void)_savePrefs;	// 0x35e82be1
- (id)accountWithName:(id)name ofType:(id)type;	// 0x35e81be5
- (id)accountWithName:(id)name ofType:(id)type create:(BOOL)create;	// 0x35e81c09
- (id)accountsOfType:(id)type;	// 0x35e81db5
- (id)allAccounts;	// 0x35e81d89
- (void)clearPreferredAccountForType:(id)type;	// 0x35e81851
- (void)dealloc;	// 0x35e81401
- (void)evaluatePendingAccounts;	// 0x35e814e1
- (BOOL)isAccountManaged:(id)managed;	// 0x35e81e09
- (void)manageAccount:(id)account;	// 0x35e81ecd
- (void)markAsPreferredAccount:(id)account;	// 0x35e819b5
- (id)preferredAccountForType:(id)type;	// 0x35e816e1
- (void)registerClass:(Class)aClass forType:(id)type;	// 0x35e82251
- (void)removeAccount:(id)account;	// 0x35e8201d
@end

