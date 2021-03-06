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
@property(assign) int accountKind;	// G=0x3191031d; S=0x31910f6d; 
@property(copy) NSString *accountName;	// G=0x31910365; S=0x31910fb9; 
@property(assign) int accountScope;	// G=0x319103d1; S=0x31911039; 
@property(assign) int accountSource;	// G=0x31910c19; S=0x31911085; 
@property(assign, getter=isActive) BOOL active;	// G=0x31910d01; S=0x319110d1; 
@property(assign, getter=isActiveLockerAccount) BOOL activeLockerAccount;	// G=0x31910d49; S=0x3191111d; 
@property(readonly, assign, getter=isAuthenticated) BOOL authenticated;	// G=0x31910af9; 
@property(assign) int availableServiceTypes;	// G=0x31910419; S=0x31911235; 
@property(copy) NSString *creditsString;	// G=0x31910461; S=0x31911169; 
@property(assign, getter=isDemoAccount) BOOL demoAccount;	// G=0x31910d91; S=0x319111e9; 
@property(assign) int enabledServiceTypes;	// G=0x319104cd; S=0x31911281; 
@property(copy) NSString *secureToken;	// G=0x31910f01; S=0x319112cd; 
@property(assign, getter=isSocialEnabled) BOOL socialEnabled;	// G=0x31910b25; S=0x3191134d; 
@property(copy) NSString *storeFrontIdentifier;	// G=0x31910b41; S=0x319113a9; 
@property(retain) NSNumber *uniqueIdentifier;	// G=0x31910bad; S=0x31911429; 
- (id)init;	// 0x3190fb51
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3190fe51
- (void)_sendBlockingXPCMessage:(id)message;	// 0x319118b9
// declared property getter: - (int)accountKind;	// 0x3191031d
// declared property getter: - (id)accountName;	// 0x31910365
// declared property getter: - (int)accountScope;	// 0x319103d1
// declared property getter: - (int)accountSource;	// 0x31910c19
- (void)addAvailableServiceTypes:(int)types;	// 0x31910c61
- (void)addEnabledServiceTypes:(int)types;	// 0x31910cb1
// declared property getter: - (int)availableServiceTypes;	// 0x31910419
- (id)copyWithZone:(NSZone *)zone;	// 0x319100d5
- (id)copyXPCEncoding;	// 0x3190fc69
// declared property getter: - (id)creditsString;	// 0x31910461
- (void)dealloc;	// 0x3190fbb5
- (id)description;	// 0x3191025d
// declared property getter: - (int)enabledServiceTypes;	// 0x319104cd
- (void)getDownloadKindsEligibleForContentRestoreWithBlock:(id)block;	// 0x31910515
- (void)getPurchasedItemsForItems:(id)items completionBlock:(id)block;	// 0x31910761
// declared property getter: - (BOOL)isActive;	// 0x31910d01
// declared property getter: - (BOOL)isActiveLockerAccount;	// 0x31910d49
// declared property getter: - (BOOL)isAuthenticated;	// 0x31910af9
// declared property getter: - (BOOL)isDemoAccount;	// 0x31910d91
// declared property getter: - (BOOL)isSocialEnabled;	// 0x31910b25
- (void)removeAvailableServiceTypes:(int)types;	// 0x31910dd9
- (void)removeEnabledServiceTypes:(int)types;	// 0x31910e29
- (void)resetTransientData;	// 0x31910e79
// declared property getter: - (id)secureToken;	// 0x31910f01
// declared property setter: - (void)setAccountKind:(int)kind;	// 0x31910f6d
// declared property setter: - (void)setAccountName:(id)name;	// 0x31910fb9
// declared property setter: - (void)setAccountScope:(int)scope;	// 0x31911039
// declared property setter: - (void)setAccountSource:(int)source;	// 0x31911085
// declared property setter: - (void)setActive:(BOOL)active;	// 0x319110d1
// declared property setter: - (void)setActiveLockerAccount:(BOOL)account;	// 0x3191111d
// declared property setter: - (void)setAvailableServiceTypes:(int)types;	// 0x31911235
// declared property setter: - (void)setCreditsString:(id)string;	// 0x31911169
// declared property setter: - (void)setDemoAccount:(BOOL)account;	// 0x319111e9
// declared property setter: - (void)setEnabledServiceTypes:(int)types;	// 0x31911281
- (void)setLockdownDictionary:(id)dictionary;	// 0x319114a9
// declared property setter: - (void)setSecureToken:(id)token;	// 0x319112cd
// declared property setter: - (void)setSocialEnabled:(BOOL)enabled;	// 0x3191134d
// declared property setter: - (void)setStoreFrontIdentifier:(id)identifier;	// 0x319113a9
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x31911429
// declared property getter: - (id)storeFrontIdentifier;	// 0x31910b41
// declared property getter: - (id)uniqueIdentifier;	// 0x31910bad
@end

