/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import "BasicAccount.h"
#import "AccountCreationProtocol.h"


@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol> {
}
+ (id)_identifier;	// 0x32eeb52d
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x32eeb485
+ (id)basicAccountProperties;	// 0x32eeae15
+ (BOOL)isTetheredSyncingDataclass:(id)dataclass;	// 0x32eeb42d
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)dataClass;	// 0x32eeb30d
+ (id)localizedSyncSourceStringForDataClass:(id)dataClass forBeginningOfSentence:(BOOL)sentence;	// 0x32eeb009
+ (id)tetheredSourceForDataClass:(id)dataClass;	// 0x32eeb47d
+ (id)typeString;	// 0x32eeaefd
- (id)displayName;	// 0x32eeb4f5
- (id)identifier;	// 0x32eeb4e9
- (id)syncStoreIdentifier;	// 0x32eeb51d
@end

