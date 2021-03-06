/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSLock, NSString, NSNumber;

@interface SSAccount : NSObject <SSXPCCoding, NSCopying> {
	int _accountKind;	// 4 = 0x4
	NSString *_accountName;	// 8 = 0x8
	int _accountScope;	// 12 = 0xc
	int _accountSource;	// 16 = 0x10
	BOOL _active;	// 20 = 0x14
	BOOL _activeLockerAccount;	// 21 = 0x15
	int _availableServiceTypes;	// 24 = 0x18
	NSString *_creditsString;	// 28 = 0x1c
	BOOL _demo;	// 32 = 0x20
	int _enabledServiceTypes;	// 36 = 0x24
	NSLock *_lock;	// 40 = 0x28
	NSString *_secureToken;	// 44 = 0x2c
	NSString *_storeFrontID;	// 48 = 0x30
	NSNumber *_uniqueIdentifier;	// 52 = 0x34
}
@property(assign) int accountKind;	// G=0x378111ad; S=0x37811dfd; 
@property(copy) NSString *accountName;	// G=0x378111f5; S=0x37811e49; 
@property(assign) int accountScope;	// G=0x37811261; S=0x37811ec9; 
@property(assign) int accountSource;	// G=0x37811aa9; S=0x37811f15; 
@property(assign, getter=isActive) BOOL active;	// G=0x37811b91; S=0x37811f61; 
@property(assign, getter=isActiveLockerAccount) BOOL activeLockerAccount;	// G=0x37811bd9; S=0x37811fad; 
@property(readonly, assign, getter=isAuthenticated) BOOL authenticated;	// G=0x37811989; 
@property(assign) int availableServiceTypes;	// G=0x378112a9; S=0x378120c5; 
@property(copy) NSString *creditsString;	// G=0x378112f1; S=0x37811ff9; 
@property(assign, getter=isDemoAccount) BOOL demoAccount;	// G=0x37811c21; S=0x37812079; 
@property(assign) int enabledServiceTypes;	// G=0x3781135d; S=0x37812111; 
@property(copy) NSString *secureToken;	// G=0x37811d91; S=0x3781215d; 
@property(assign, getter=isSocialEnabled) BOOL socialEnabled;	// G=0x378119b5; S=0x378121dd; 
@property(copy) NSString *storeFrontIdentifier;	// G=0x378119d1; S=0x37812239; 
@property(retain) NSNumber *uniqueIdentifier;	// G=0x37811a3d; S=0x378122b9; 
- (id)init;	// 0x378109c9
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x37810cc9
- (void)_sendBlockingXPCMessage:(id)message;	// 0x37812749
// declared property getter: - (int)accountKind;	// 0x378111ad
// declared property getter: - (id)accountName;	// 0x378111f5
// declared property getter: - (int)accountScope;	// 0x37811261
// declared property getter: - (int)accountSource;	// 0x37811aa9
- (void)addAvailableServiceTypes:(int)types;	// 0x37811af1
- (void)addEnabledServiceTypes:(int)types;	// 0x37811b41
// declared property getter: - (int)availableServiceTypes;	// 0x378112a9
- (id)copyWithZone:(NSZone *)zone;	// 0x37810f4d
- (id)copyXPCEncoding;	// 0x37810ae1
// declared property getter: - (id)creditsString;	// 0x378112f1
- (void)dealloc;	// 0x37810a2d
- (id)description;	// 0x378110d5
// declared property getter: - (int)enabledServiceTypes;	// 0x3781135d
- (void)getDownloadKindsEligibleForContentRestoreWithBlock:(id)block;	// 0x378113a5
- (void)getPurchasedItemsForItems:(id)items completionBlock:(id)block;	// 0x378115f1
// declared property getter: - (BOOL)isActive;	// 0x37811b91
// declared property getter: - (BOOL)isActiveLockerAccount;	// 0x37811bd9
// declared property getter: - (BOOL)isAuthenticated;	// 0x37811989
// declared property getter: - (BOOL)isDemoAccount;	// 0x37811c21
// declared property getter: - (BOOL)isSocialEnabled;	// 0x378119b5
- (void)removeAvailableServiceTypes:(int)types;	// 0x37811c69
- (void)removeEnabledServiceTypes:(int)types;	// 0x37811cb9
- (void)resetTransientData;	// 0x37811d09
// declared property getter: - (id)secureToken;	// 0x37811d91
// declared property setter: - (void)setAccountKind:(int)kind;	// 0x37811dfd
// declared property setter: - (void)setAccountName:(id)name;	// 0x37811e49
// declared property setter: - (void)setAccountScope:(int)scope;	// 0x37811ec9
// declared property setter: - (void)setAccountSource:(int)source;	// 0x37811f15
// declared property setter: - (void)setActive:(BOOL)active;	// 0x37811f61
// declared property setter: - (void)setActiveLockerAccount:(BOOL)account;	// 0x37811fad
// declared property setter: - (void)setAvailableServiceTypes:(int)types;	// 0x378120c5
// declared property setter: - (void)setCreditsString:(id)string;	// 0x37811ff9
// declared property setter: - (void)setDemoAccount:(BOOL)account;	// 0x37812079
// declared property setter: - (void)setEnabledServiceTypes:(int)types;	// 0x37812111
- (void)setLockdownDictionary:(id)dictionary;	// 0x37812339
// declared property setter: - (void)setSecureToken:(id)token;	// 0x3781215d
// declared property setter: - (void)setSocialEnabled:(BOOL)enabled;	// 0x378121dd
// declared property setter: - (void)setStoreFrontIdentifier:(id)identifier;	// 0x37812239
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x378122b9
// declared property getter: - (id)storeFrontIdentifier;	// 0x378119d1
// declared property getter: - (id)uniqueIdentifier;	// 0x37811a3d
@end

