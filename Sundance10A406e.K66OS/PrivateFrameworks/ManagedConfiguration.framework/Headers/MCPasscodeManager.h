/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCPasscodeManager : NSObject {
}
+ (BOOL)_passcodeCharacteristics:(id)characteristics compliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x3578bf55
+ (id)characteristicsDictionaryFromPasscode:(id)passcode;	// 0x3578d06d
+ (id)generateSalt;	// 0x3578aa95
+ (id)hashForPasscode:(id)passcode usingMethod:(int)method salt:(id)salt;	// 0x3578d495
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)restrictions;	// 0x3578b7ed
+ (BOOL)passcode:(id)passcode compliesWithPolicyFromRestrictions:(id)restrictions checkHistory:(BOOL)history outError:(id *)error;	// 0x3578bd25
+ (BOOL)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions;	// 0x3578cefd
+ (id)sharedManager;	// 0x3578a6c5
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)passcodeCharacteristics;	// 0x3578b5ed
+ (int)unlockScreenTypeForRestrictions:(id)restrictions;	// 0x3578b695
- (BOOL)_checkPasscode:(id)passcode againstHistoryWithRestrictions:(id)restrictions outError:(id *)error;	// 0x3578c6d1
- (id)_init;	// 0x3578a689
- (id)_passcodeCharacteristics;	// 0x3578b471
- (id)_privatePasscodeDict;	// 0x3578a7d9
- (id)_publicPasscodeDict;	// 0x3578a719
- (void)_sendPasscodeChangedNotification;	// 0x3578aac5
- (void)_setPrivatePasscodeDict:(id)dict;	// 0x3578a861
- (id)_wrongPasscodeError;	// 0x3578a97d
- (BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id *)error;	// 0x3578aae9
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id *)error;	// 0x3578b1e9
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x3578bdf1
- (int)currentUnlockScreenType;	// 0x3578b4c1
- (BOOL)isCurrentPasscodeCompliantOutError:(id *)error;	// 0x3578bedd
- (BOOL)isDeviceLocked;	// 0x3578a961
- (BOOL)isPasscodeSet;	// 0x3578a92d
- (id)localizedDescriptionOfPasscodePolicy;	// 0x3578b76d
- (void)lockDevice;	// 0x3578a945
- (int)newPasscodeEntryScreenType;	// 0x3578b529
- (BOOL)passcode:(id)passcode compliesWithPolicyCheckHistory:(BOOL)policyCheckHistory outError:(id *)error;	// 0x3578bc89
- (void)passcodeExpiryDateCompletionBlock:(id)block;	// 0x3578cc5d
- (id)passcodeExpiryDateOutError:(id *)error;	// 0x3578ca19
- (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;	// 0x3578aa01
@end

