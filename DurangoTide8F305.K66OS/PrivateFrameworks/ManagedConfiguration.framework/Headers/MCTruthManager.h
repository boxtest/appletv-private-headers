/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary;

@interface MCTruthManager : NSObject {
@private
	NSMutableDictionary *_defaultTruth;	// 4 = 0x4
	NSMutableDictionary *_truth;	// 8 = 0x8
	NSMutableDictionary *_profileTruth;	// 12 = 0xc
	NSMutableDictionary *_clientTruth;	// 16 = 0x10
	NSDictionary *_userSettings;	// 20 = 0x14
	NSDictionary *_effectiveUserSettings;	// 24 = 0x18
	NSDictionary *_clientTypeLoaders;	// 28 = 0x1c
	CFDictionaryRef _clientTypeToLoaderClass;	// 32 = 0x20
	CFDictionaryRef _clientTypeToLoaderSelector;	// 36 = 0x24
	CFDictionaryRef _clientTypeToRecomputeComplianceSelector;	// 40 = 0x28
	dispatch_queue_s *_syncQueue;	// 44 = 0x2c
	dispatch_queue_s *_nagMetaQueue;	// 48 = 0x30
	int _senderPID;	// 52 = 0x34
}
@property(readonly, retain) NSMutableDictionary *clientTruth;	// G=0x32b04735; converted property
@property(readonly, retain) NSDictionary *effectiveUserSettings;	// G=0x32b043c5; converted property
@property(readonly, retain) NSMutableDictionary *profileTruth;	// G=0x32b047ed; converted property
@property(assign) int senderPID;	// G=0x32b0403d; S=0x32b0404d; @synthesize=_senderPID
@property(readonly, retain) NSDictionary *userSettings;	// G=0x32b0445d; converted property
+ (BOOL)_isDictionary:(id)dictionary differentFromDictionary:(id)dictionary2;	// 0x32b04d75
+ (void)_setPathsTruthFilePath:(id)path defaultTruthFilePath:(id)path2 clientTypeLoadersFilePath:(id)path3 profileTruthFilePath:(id)path4 clientTruthFilePath:(id)path5 userSettingsFilePath:(id)path6 effectiveUserSettingsFilePath:(id)path7;	// 0x32b061c5
+ (BOOL)boolSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x32b04e5d
+ (int)boolSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x32b04f55
+ (int)defaultBoolValueForSetting:(id)setting;	// 0x32b04ffd
+ (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x32b050a1
+ (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x32b05065
+ (id)defaultSettingsDict;	// 0x32b050dd
+ (id)defaultValueForSetting:(id)setting;	// 0x32b04fb1
+ (id)filterRestrictionDictionaryForPublicUse:(id)publicUse;	// 0x32b06e09
+ (id)objectForFeature:(id)feature withTruthDictionary:(id)truthDictionary;	// 0x32b0583d
+ (BOOL)restrictedBool:(id)aBool changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x32b05785
+ (int)restrictedBoolForFeature:(id)feature withTruthDictionary:(id)truthDictionary;	// 0x32b058c1
+ (BOOL)restrictedValue:(id)value changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x32b056cd
+ (id)sharedManager;	// 0x32b09281
+ (id)truthAfterApplyingTruthDictionary:(id)dictionary toTruthDictionary:(id)truthDictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x32b092ad
+ (id)truthWithCurrentTruth:(id)currentTruth defaultTruth:(id)truth profileTruth:(id)truth3 clientTruth:(id)truth4 outTruthChanged:(BOOL *)changed outError:(id *)error;	// 0x32b07125
+ (id)valueForFeature:(id)feature withTruthDictionary:(id)truthDictionary;	// 0x32b05875
+ (BOOL)valueSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x32b04da5
+ (id)valueSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x32b04f15
- (id)_clientTruth;	// 0x32b07c65
- (id)_clientTruthForClientUUID:(id)clientUUID;	// 0x32b05eed
- (id)_clientTypeForClientUUID:(id)clientUUID;	// 0x32b05eb1
- (id)_currentTruthDictionary;	// 0x32b066b5
- (id)_defaultSettingsDictionary;	// 0x32b06065
- (id)_defaultTruthDictionary;	// 0x32b06491
- (id)_effectiveUserSettings;	// 0x32b091d5
- (id)_init;	// 0x32b08e1d
- (id)_liveClientUUIDsForClientType:(id)clientType;	// 0x32b08871
- (id)_loadClientLoaders;	// 0x32b082f5
- (id)_profileTruth;	// 0x32b067a1
- (BOOL)_recomputeEffectiveUserSettings;	// 0x32b0689d
- (BOOL)_setAllClientTruths:(id)truths outTruthChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outError:(id *)error;	// 0x32b07ef9
- (void)_setClientTruthsWithoutNotifications:(id)notifications;	// 0x32b07c05
- (BOOL)_setEffectiveUserSettings:(id)settings;	// 0x32b09139
- (void)_setTruth:(id)truth;	// 0x32b06639
- (BOOL)_setUserSettings:(id)settings;	// 0x32b09079
- (id)_userInfoForClientUUID:(id)clientUUID;	// 0x32b05e39
- (id)_userSettings;	// 0x32b08fcd
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x32b05d5d
// converted property getter: - (id)clientTruth;	// 0x32b04735
- (id)clientTruthForClientUUID:(id)clientUUID;	// 0x32b04695
- (id)combinedProfileRestrictions;	// 0x32b0787d
- (id)currentTruthDictionary;	// 0x32b04885
- (void)dealloc;	// 0x32b08e91
- (id)defaultTruthDictionary;	// 0x32b0492d
- (id)description;	// 0x32b08da5
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x32b05571
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x32b05535
- (int)effectiveRestrictedBoolForSetting:(id)setting;	// 0x32b054ed
// converted property getter: - (id)effectiveUserSettings;	// 0x32b043c5
- (id)effectiveValueForSetting:(id)setting;	// 0x32b054bd
- (void)invalidateSettings;	// 0x32b041b5
- (void)invalidateTruth;	// 0x32b04201
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x32b05411
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x32b042ad
- (void)notifyClientsToRecomputeCompliance;	// 0x32b08765
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x32b04149
- (id)objectForFeature:(id)feature;	// 0x32b05925
- (id)potentialTruthAfterApplyingTruthDictionary:(id)dictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x32b05a5d
// converted property getter: - (id)profileTruth;	// 0x32b047ed
- (BOOL)recomputeNagMetadata;	// 0x32b05aa9
- (void)removeBoolSetting:(id)setting;	// 0x32b040f9
- (BOOL)removeOrphanedClientTruths;	// 0x32b05b6d
- (void)removeValueSetting:(id)setting;	// 0x32b040a9
- (void)resetAllSettingsToDefaults;	// 0x32b0405d
- (int)restrictedBoolForFeature:(id)feature;	// 0x32b05995
// declared property getter: - (int)senderPID;	// 0x32b0403d
- (BOOL)setAllClientTruths:(id)truths outTruthChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x32b05bcd
- (BOOL)setClientTruth:(id)truth clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarning:(id)warning outTruthChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x32b06329
- (BOOL)setParametersForSettingsByType:(id)settingsByType;	// 0x32b0433d
- (BOOL)setProfileTruth:(id)truth outTruthChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x32b05f61
// declared property setter: - (void)setSenderPID:(int)pid;	// 0x32b0404d
- (void)setShowNagMessage;	// 0x32b04195
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x32b0640d
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x32b045ed
// converted property getter: - (id)userSettings;	// 0x32b0445d
- (id)valueForFeature:(id)feature;	// 0x32b0595d
@end

