/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSNumber, NSLock, NSString;

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
@property(assign) int accountKind;	// G=0x354c8e2d; S=0x354c9a7d; 
@property(copy) NSString *accountName;	// G=0x354c8e75; S=0x354c9ac9; 
@property(assign) int accountScope;	// G=0x354c8ee1; S=0x354c9b49; 
@property(assign) int accountSource;	// G=0x354c9729; S=0x354c9b95; 
@property(assign, getter=isActive) BOOL active;	// G=0x354c9811; S=0x354c9be1; 
@property(assign, getter=isActiveLockerAccount) BOOL activeLockerAccount;	// G=0x354c9859; S=0x354c9c2d; 
@property(readonly, assign, getter=isAuthenticated) BOOL authenticated;	// G=0x354c9609; 
@property(assign) int availableServiceTypes;	// G=0x354c8f29; S=0x354c9d45; 
@property(copy) NSString *creditsString;	// G=0x354c8f71; S=0x354c9c79; 
@property(assign, getter=isDemoAccount) BOOL demoAccount;	// G=0x354c98a1; S=0x354c9cf9; 
@property(assign) int enabledServiceTypes;	// G=0x354c8fdd; S=0x354c9d91; 
@property(copy) NSString *secureToken;	// G=0x354c9a11; S=0x354c9ddd; 
@property(assign, getter=isSocialEnabled) BOOL socialEnabled;	// G=0x354c9635; S=0x354c9e5d; 
@property(copy) NSString *storeFrontIdentifier;	// G=0x354c9651; S=0x354c9eb9; 
@property(retain) NSNumber *uniqueIdentifier;	// G=0x354c96bd; S=0x354c9f39; 
- (id)init;	// 0x354c8579
- (id)initDemoAccount;	// 0x354c85dd
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354c8949
- (void)_sendBlockingXPCMessage:(id)message;	// 0x354caa35
// declared property getter: - (int)accountKind;	// 0x354c8e2d
// declared property getter: - (id)accountName;	// 0x354c8e75
// declared property getter: - (int)accountScope;	// 0x354c8ee1
// declared property getter: - (int)accountSource;	// 0x354c9729
- (void)addAvailableServiceTypes:(int)types;	// 0x354c9771
- (void)addEnabledServiceTypes:(int)types;	// 0x354c97c1
// declared property getter: - (int)availableServiceTypes;	// 0x354c8f29
- (id)copyLockdownRepresentation;	// 0x354c9fb9
- (id)copyWithZone:(NSZone *)zone;	// 0x354c8bcd
- (id)copyXPCEncoding;	// 0x354c8761
// declared property getter: - (id)creditsString;	// 0x354c8f71
- (void)dealloc;	// 0x354c86ad
- (id)description;	// 0x354c8d55
// declared property getter: - (int)enabledServiceTypes;	// 0x354c8fdd
- (void)getDownloadKindsEligibleForContentRestoreWithBlock:(id)block;	// 0x354c9025
- (void)getPurchasedItemsForItems:(id)items completionBlock:(id)block;	// 0x354c9271
// declared property getter: - (BOOL)isActive;	// 0x354c9811
// declared property getter: - (BOOL)isActiveLockerAccount;	// 0x354c9859
// declared property getter: - (BOOL)isAuthenticated;	// 0x354c9609
// declared property getter: - (BOOL)isDemoAccount;	// 0x354c98a1
// declared property getter: - (BOOL)isSocialEnabled;	// 0x354c9635
- (BOOL)mergeValuesFromAccount:(id)account;	// 0x354ca2a5
- (void)removeAvailableServiceTypes:(int)types;	// 0x354c98e9
- (void)removeEnabledServiceTypes:(int)types;	// 0x354c9939
- (void)resetTransientData;	// 0x354c9989
// declared property getter: - (id)secureToken;	// 0x354c9a11
// declared property setter: - (void)setAccountKind:(int)kind;	// 0x354c9a7d
// declared property setter: - (void)setAccountName:(id)name;	// 0x354c9ac9
// declared property setter: - (void)setAccountScope:(int)scope;	// 0x354c9b49
// declared property setter: - (void)setAccountSource:(int)source;	// 0x354c9b95
// declared property setter: - (void)setActive:(BOOL)active;	// 0x354c9be1
// declared property setter: - (void)setActiveLockerAccount:(BOOL)account;	// 0x354c9c2d
// declared property setter: - (void)setAvailableServiceTypes:(int)types;	// 0x354c9d45
// declared property setter: - (void)setCreditsString:(id)string;	// 0x354c9c79
// declared property setter: - (void)setDemoAccount:(BOOL)account;	// 0x354c9cf9
// declared property setter: - (void)setEnabledServiceTypes:(int)types;	// 0x354c9d91
- (void)setLockdownDictionary:(id)dictionary;	// 0x354ca625
// declared property setter: - (void)setSecureToken:(id)token;	// 0x354c9ddd
// declared property setter: - (void)setSocialEnabled:(BOOL)enabled;	// 0x354c9e5d
// declared property setter: - (void)setStoreFrontIdentifier:(id)identifier;	// 0x354c9eb9
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x354c9f39
// declared property getter: - (id)storeFrontIdentifier;	// 0x354c9651
// declared property getter: - (id)uniqueIdentifier;	// 0x354c96bd
@end

