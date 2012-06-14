/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library


@interface DAKeychain : NSObject {
}
+ (id)sharedKeychain;	// 0x31eb39c5
- (CFDictionaryRef)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)persistentUUID accessibility:(int)accessibility;	// 0x31eb3b2d
- (CFDictionaryRef)_DACopyMutableQueryForAccountWithPersistentUUID:(id)persistentUUID;	// 0x31eb3aa9
- (int)_daKeychainAccessibilityForSecAccessibility:(void *)secAccessibility;	// 0x31eb3a45
- (void)_removePersistentCredentialsForAccount:(id)account;	// 0x31eb3e51
- (void *)_secAccessibilityForDAKeychainAccessibility:(int)dakeychainAccessibility;	// 0x31eb3a0d
- (id)guessPasswordForURL:(id)url;	// 0x31eb5919
- (id)loadKeychainInformationsForURL:(id)url;	// 0x31eb4fe9
- (id)passwordForAccountWithPersistentUUID:(id)persistentUUID expectedAccessibility:(int)accessibility shouldSetAccessibility:(BOOL)accessibility3 passwordExpected:(BOOL)expected;	// 0x31eb3b81
- (void)removeKeychainInformationsForURL:(id)url;	// 0x31eb54ad
- (BOOL)removePasswordForAccount:(id)account withPersistentUUID:(id)persistentUUID;	// 0x31eb42b1
- (BOOL)saveKeychainInformationsForURL:(id)url andPassword:(id)password withAccessibility:(int)accessibility;	// 0x31eb49a5
- (BOOL)setPassword:(id)password forAccount:(id)account withPersistentUUID:(id)persistentUUID withAccessibility:(int)accessibility;	// 0x31eb40f5
@end
