/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCHacks : NSObject {
}
+ (void)_applyChangesWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions oldEffectiveUserSettings:(id)settings newEffectiveUserSettings:(id)settings4;	// 0x31913ef1
+ (BOOL)_applyHeuristicsToRestrictions:(id)restrictions forProfile:(id)profile outError:(id *)error;	// 0x319146f9
+ (void)_applyImpliedSettingsToSettingsDictionary:(id)settingsDictionary;	// 0x31914b99
+ (void)_applyServerSideChangesWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions oldEffectiveUserSettings:(id)settings newEffectiveUserSettings:(id)settings4;	// 0x31913bed
+ (void)_checkCarrierBundleRelatedSettings;	// 0x31914e2d
+ (id)_deviceSpecificDefaultSettings;	// 0x31914341
+ (id)_permittedAutoLockNumbers;	// 0x319141f5
+ (id)_permittedGracePeriodNumbers;	// 0x319141c9
+ (id)_selectLargestNumberFromSortedArray:(id)sortedArray equalToOrLessThanNumber:(id)orLessThanNumber;	// 0x31914639
+ (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)effectiveUserSettings;	// 0x31914d75
@end

