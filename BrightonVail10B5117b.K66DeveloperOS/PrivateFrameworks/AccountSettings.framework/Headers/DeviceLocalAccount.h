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
+ (id)_identifier;	// 0x3355d52d
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x3355d485
+ (id)basicAccountProperties;	// 0x3355ce15
+ (BOOL)isTetheredSyncingDataclass:(id)dataclass;	// 0x3355d42d
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)dataClass;	// 0x3355d30d
+ (id)localizedSyncSourceStringForDataClass:(id)dataClass forBeginningOfSentence:(BOOL)sentence;	// 0x3355d009
+ (id)tetheredSourceForDataClass:(id)dataClass;	// 0x3355d47d
+ (id)typeString;	// 0x3355cefd
- (id)displayName;	// 0x3355d4f5
- (id)identifier;	// 0x3355d4e9
- (id)syncStoreIdentifier;	// 0x3355d51d
@end

