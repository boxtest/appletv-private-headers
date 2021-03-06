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
@property(readonly, retain) NSMutableDictionary *clientTruth;	// G=0x30057735; converted property
@property(readonly, retain) NSDictionary *effectiveUserSettings;	// G=0x300573c5; converted property
@property(readonly, retain) NSMutableDictionary *profileTruth;	// G=0x300577ed; converted property
@property(assign) int senderPID;	// G=0x3005703d; S=0x3005704d; @synthesize=_senderPID
@property(readonly, retain) NSDictionary *userSettings;	// G=0x3005745d; converted property
+ (BOOL)_isDictionary:(id)dictionary differentFromDictionary:(id)dictionary2;	// 0x30057d75
+ (void)_setPathsTruthFilePath:(id)path defaultTruthFilePath:(id)path2 clientTypeLoadersFilePath:(id)path3 profileTruthFilePath:(id)path4 clientTruthFilePath:(id)path5 userSettingsFilePath:(id)path6 effectiveUserSettingsFilePath:(id)path7;	// 0x300591c5
+ (BOOL)boolSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x30057e5d
+ (int)boolSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x30057f55
+ (int)defaultBoolValueForSetting:(id)setting;	// 0x30057ffd
+ (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x300580a1
+ (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x30058065
+ (id)defaultSettingsDict;	// 0x300580dd
+ (id)defaultValueForSetting:(id)setting;	// 0x30057fb1
+ (id)filterRestrictionDictionaryForPublicUse:(id)publicUse;	// 0x30059e09
+ (id)objectForFeature:(id)feature withTruthDictionary:(id)truthDictionary;	// 0x3005883d
+ (BOOL)restrictedBool:(id)aBool changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x30058785
+ (int)restrictedBoolForFeature:(id)feature withTruthDictionary:(id)truthDictionary;	// 0x300588c1
+ (BOOL)restrictedValue:(id)value changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;	// 0x300586cd
+ (id)sharedManager;	// 0x3005c281
+ (id)truthAfterApplyingTruthDictionary:(id)dictionary toTruthDictionary:(id)truthDictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x3005c2ad
+ (id)truthWithCurrentTruth:(id)currentTruth defaultTruth:(id)truth profileTruth:(id)truth3 clientTruth:(id)truth4 outTruthChanged:(BOOL *)changed outError:(id *)error;	// 0x3005a125
+ (id)valueForFeature:(id)feature withTruthDictionary:(id)truthDictionary;	// 0x30058875
+ (BOOL)valueSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;	// 0x30057da5
+ (id)valueSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;	// 0x30057f15
- (id)_clientTruth;	// 0x3005ac65
- (id)_clientTruthForClientUUID:(id)clientUUID;	// 0x30058eed
- (id)_clientTypeForClientUUID:(id)clientUUID;	// 0x30058eb1
- (id)_currentTruthDictionary;	// 0x300596b5
- (id)_defaultSettingsDictionary;	// 0x30059065
- (id)_defaultTruthDictionary;	// 0x30059491
- (id)_effectiveUserSettings;	// 0x3005c1d5
- (id)_init;	// 0x3005be1d
- (id)_liveClientUUIDsForClientType:(id)clientType;	// 0x3005b871
- (id)_loadClientLoaders;	// 0x3005b2f5
- (id)_profileTruth;	// 0x300597a1
- (BOOL)_recomputeEffectiveUserSettings;	// 0x3005989d
- (BOOL)_setAllClientTruths:(id)truths outTruthChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outError:(id *)error;	// 0x3005aef9
- (void)_setClientTruthsWithoutNotifications:(id)notifications;	// 0x3005ac05
- (BOOL)_setEffectiveUserSettings:(id)settings;	// 0x3005c139
- (void)_setTruth:(id)truth;	// 0x30059639
- (BOOL)_setUserSettings:(id)settings;	// 0x3005c079
- (id)_userInfoForClientUUID:(id)clientUUID;	// 0x30058e39
- (id)_userSettings;	// 0x3005bfcd
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x30058d5d
// converted property getter: - (id)clientTruth;	// 0x30057735
- (id)clientTruthForClientUUID:(id)clientUUID;	// 0x30057695
- (id)combinedProfileRestrictions;	// 0x3005a87d
- (id)currentTruthDictionary;	// 0x30057885
- (void)dealloc;	// 0x3005be91
- (id)defaultTruthDictionary;	// 0x3005792d
- (id)description;	// 0x3005bda5
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x30058571
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x30058535
- (int)effectiveRestrictedBoolForSetting:(id)setting;	// 0x300584ed
// converted property getter: - (id)effectiveUserSettings;	// 0x300573c5
- (id)effectiveValueForSetting:(id)setting;	// 0x300584bd
- (void)invalidateSettings;	// 0x300571b5
- (void)invalidateTruth;	// 0x30057201
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x30058411
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x300572ad
- (void)notifyClientsToRecomputeCompliance;	// 0x3005b765
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x30057149
- (id)objectForFeature:(id)feature;	// 0x30058925
- (id)potentialTruthAfterApplyingTruthDictionary:(id)dictionary outChangeDetected:(BOOL *)detected outError:(id *)error;	// 0x30058a5d
// converted property getter: - (id)profileTruth;	// 0x300577ed
- (BOOL)recomputeNagMetadata;	// 0x30058aa9
- (void)removeBoolSetting:(id)setting;	// 0x300570f9
- (BOOL)removeOrphanedClientTruths;	// 0x30058b6d
- (void)removeValueSetting:(id)setting;	// 0x300570a9
- (void)resetAllSettingsToDefaults;	// 0x3005705d
- (int)restrictedBoolForFeature:(id)feature;	// 0x30058995
// declared property getter: - (int)senderPID;	// 0x3005703d
- (BOOL)setAllClientTruths:(id)truths outTruthChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x30058bcd
- (BOOL)setClientTruth:(id)truth clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarning:(id)warning outTruthChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x30059329
- (BOOL)setParametersForSettingsByType:(id)settingsByType;	// 0x3005733d
- (BOOL)setProfileTruth:(id)truth outTruthChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed3 outRecomputedNag:(BOOL *)nag outError:(id *)error;	// 0x30058f61
// declared property setter: - (void)setSenderPID:(int)pid;	// 0x3005704d
- (void)setShowNagMessage;	// 0x30057195
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x3005940d
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x300575ed
// converted property getter: - (id)userSettings;	// 0x3005745d
- (id)valueForFeature:(id)feature;	// 0x3005895d
@end

