/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface FujiConfig : NSObject {
@private
	BOOL deviceSupported;	// 4 = 0x4
	BOOL login;	// 5 = 0x5
	unsigned uiOrientation;	// 8 = 0x8
	unsigned uiPlayerOrientation;	// 12 = 0xc
	BOOL uiRuntimeUrlParams;	// 16 = 0x10
	BOOL uiShowAddressBar;	// 17 = 0x11
	BOOL uiPersistURL;	// 18 = 0x12
	BOOL uiLastURL;	// 19 = 0x13
	NSString *uibootURL;	// 20 = 0x14
	NSString *genericFeedURL;	// 24 = 0x18
	NSString *country;	// 28 = 0x1c
	NSString *configLogMessage;	// 32 = 0x20
	NSString *minVersionRequired;	// 36 = 0x24
	NSString *currentVersion;	// 40 = 0x28
	NSString *appStoreURL;	// 44 = 0x2c
	NSString *mandatoryUpgradeTitle;	// 48 = 0x30
	NSString *mandatoryUpgradeMessage;	// 52 = 0x34
	NSString *normalUpgradeTitle;	// 56 = 0x38
	NSString *normalUpgradeMessage;	// 60 = 0x3c
	int normalUpgradeReminderPeriod;	// 64 = 0x40
	int normalUpgradeReminderIterations;	// 68 = 0x44
	unsigned initialBitrateMaskWifi;	// 72 = 0x48
	unsigned initialBitrateMask3G;	// 76 = 0x4c
	BOOL supportCrashReporting;	// 80 = 0x50
	BOOL useTestEnvironment;	// 81 = 0x51
	NSString *testNCCPDataURL;	// 84 = 0x54
	NSString *testNCCPIdentityURL;	// 88 = 0x58
	NSString *testNCCPLoggingURL;	// 92 = 0x5c
	BOOL supportDD5_1;	// 96 = 0x60
	unsigned cdnRankingMethod;	// 100 = 0x64
	unsigned cdnMeasurementMethod;	// 104 = 0x68
	BOOL supportPlaylist302Redirects;	// 108 = 0x6c
}
@property(readonly, retain) NSString *appStoreURL;	// G=0x337626c0; @synthesize
@property(readonly, assign) unsigned cdnMeasurementMethod;	// G=0x3375f0b0; @synthesize
@property(readonly, assign) unsigned cdnRankingMethod;	// G=0x3375f0c4; @synthesize
@property(readonly, retain) NSString *configLogMessage;	// G=0x33762660; @synthesize
@property(readonly, retain) NSString *country;	// G=0x33762640; @synthesize
@property(readonly, retain) NSString *currentVersion;	// G=0x337626a0; @synthesize
@property(readonly, assign) BOOL deviceSupported;	// G=0x3375f1f0; @synthesize
@property(readonly, retain) NSString *genericFeedURL;	// G=0x33762620; @synthesize
@property(readonly, assign) unsigned initialBitrateMask3G;	// G=0x3375f114; @synthesize
@property(readonly, assign) unsigned initialBitrateMaskWifi;	// G=0x3375f128; @synthesize
@property(readonly, assign) BOOL login;	// G=0x3375f1dc; @synthesize
@property(readonly, retain) NSString *mandatoryUpgradeMessage;	// G=0x33762700; @synthesize
@property(readonly, retain) NSString *mandatoryUpgradeTitle;	// G=0x337626e0; @synthesize
@property(readonly, retain) NSString *minVersionRequired;	// G=0x33762680; @synthesize
@property(readonly, retain) NSString *normalUpgradeMessage;	// G=0x33762740; @synthesize
@property(readonly, assign) int normalUpgradeReminderIterations;	// G=0x3375f13c; @synthesize
@property(readonly, assign) int normalUpgradeReminderPeriod;	// G=0x3375f150; @synthesize
@property(readonly, retain) NSString *normalUpgradeTitle;	// G=0x33762720; @synthesize
@property(readonly, assign) BOOL supportCrashReporting;	// G=0x3375f100; @synthesize
@property(readonly, assign) BOOL supportDD5_1;	// G=0x3375f0ec; @synthesize
@property(readonly, assign) BOOL supportPlaylist302Redirects;	// G=0x3375f09c; @synthesize
@property(readonly, retain) NSString *testNCCPDataURL;	// G=0x33762760; @synthesize
@property(readonly, retain) NSString *testNCCPIdentityURL;	// G=0x33762780; @synthesize
@property(readonly, retain) NSString *testNCCPLoggingURL;	// G=0x337627a0; @synthesize
@property(readonly, assign) BOOL uiLastURL;	// G=0x3375f164; @synthesize
@property(readonly, assign) unsigned uiOrientation;	// G=0x3375f1c8; @synthesize
@property(readonly, assign) BOOL uiPersistURL;	// G=0x3375f178; @synthesize
@property(readonly, assign) unsigned uiPlayerOrientation;	// G=0x3375f1b4; @synthesize
@property(readonly, assign) BOOL uiRuntimeUrlParams;	// G=0x3375f1a0; @synthesize
@property(readonly, assign) BOOL uiShowAddressBar;	// G=0x3375f18c; @synthesize
@property(readonly, retain) NSString *uibootURL;	// G=0x33762600; @synthesize
@property(readonly, assign) BOOL useTestEnvironment;	// G=0x3375f0d8; @synthesize
- (id)init;	// 0x33762364
- (id)initWithFujiConfig:(id)fujiConfig;	// 0x33761abc
// declared property getter: - (id)appStoreURL;	// 0x337626c0
- (void)appendToAppStoreURL:(id)appStoreURL;	// 0x337608dc
- (void)appendToAppStoreURLWithCString:(char *)cstring;	// 0x337607dc
- (void)appendToConfigLogMessage:(id)configLogMessage;	// 0x33761578
- (void)appendToConfigLogMessageWithCString:(char *)cstring;	// 0x33761478
- (void)appendToGenericFeedURL:(id)genericFeedURL;	// 0x33760f48
- (void)appendToGenericFeedURLWithCString:(char *)cstring;	// 0x33760e48
- (void)appendToMandatoryUpgradeMessage:(id)mandatoryUpgradeMessage;	// 0x337602ac
- (void)appendToMandatoryUpgradeMessageWithCString:(char *)cstring;	// 0x337601ac
- (void)appendToMandatoryUpgradeTitle:(id)mandatoryUpgradeTitle;	// 0x337605c4
- (void)appendToMandatoryUpgradeTitleWithCString:(char *)cstring;	// 0x337604c4
- (void)appendToNormalUpgradeMessage:(id)normalUpgradeMessage;	// 0x3375fc7c
- (void)appendToNormalUpgradeMessageWithCString:(char *)cstring;	// 0x3375fb7c
- (void)appendToNormalUpgradeTitle:(id)normalUpgradeTitle;	// 0x3375ff94
- (void)appendToNormalUpgradeTitleWithCString:(char *)cstring;	// 0x3375fe94
- (void)appendToTestNCCPDataURL:(id)testNCCPDataURL;	// 0x3375f904
- (void)appendToTestNCCPDataURLWithCString:(char *)cstring;	// 0x3375f804
- (void)appendToTestNCCPIdentityURL:(id)testNCCPIdentityURL;	// 0x3375f604
- (void)appendToTestNCCPIdentityURLWithCString:(char *)cstring;	// 0x3375f504
- (void)appendToTestNCCPLoggingURL:(id)testNCCPLoggingURL;	// 0x3375f304
- (void)appendToTestNCCPLoggingURLWithCString:(char *)cstring;	// 0x3375f204
- (void)appendToUIBootURL:(id)uibootURL;	// 0x33761260
- (void)appendToUIBootURLWithCString:(char *)cstring;	// 0x33761160
// declared property getter: - (unsigned)cdnMeasurementMethod;	// 0x3375f0b0
// declared property getter: - (unsigned)cdnRankingMethod;	// 0x3375f0c4
// declared property getter: - (id)configLogMessage;	// 0x33762660
// declared property getter: - (id)country;	// 0x33762640
// declared property getter: - (id)currentVersion;	// 0x337626a0
- (void)dealloc;	// 0x33761790
// declared property getter: - (BOOL)deviceSupported;	// 0x3375f1f0
// declared property getter: - (id)genericFeedURL;	// 0x33762620
// declared property getter: - (unsigned)initialBitrateMask3G;	// 0x3375f114
// declared property getter: - (unsigned)initialBitrateMaskWifi;	// 0x3375f128
// declared property getter: - (BOOL)login;	// 0x3375f1dc
// declared property getter: - (id)mandatoryUpgradeMessage;	// 0x33762700
// declared property getter: - (id)mandatoryUpgradeTitle;	// 0x337626e0
// declared property getter: - (id)minVersionRequired;	// 0x33762680
// declared property getter: - (id)normalUpgradeMessage;	// 0x33762740
// declared property getter: - (int)normalUpgradeReminderIterations;	// 0x3375f13c
// declared property getter: - (int)normalUpgradeReminderPeriod;	// 0x3375f150
// declared property getter: - (id)normalUpgradeTitle;	// 0x33762720
- (void)setAppStoreURL:(id)url;	// 0x33760a68
- (void)setAppStoreURLWithCString:(char *)cstring;	// 0x337609d8
- (void)setCDNMeasurementMethod:(unsigned)method;	// 0x3375f074
- (void)setCDNRankingMethod:(unsigned)method;	// 0x3375f060
- (void)setConfigLogMessage:(id)message;	// 0x33761704
- (void)setConfigLogMessageWithCString:(char *)cstring;	// 0x33761674
- (void)setCountry:(id)country;	// 0x33760dbc
- (void)setCountryWithCString:(char *)cstring;	// 0x33760d2c
- (void)setCurrentVersion:(id)version;	// 0x33760b84
- (void)setCurrentVersionWithCString:(char *)cstring;	// 0x33760af4
- (void)setDeviceSupported:(BOOL)supported;	// 0x3375ef5c
- (void)setGenericFeedURL:(id)url;	// 0x337610d4
- (void)setGenericFeedURLWithCString:(char *)cstring;	// 0x33761044
- (void)setInitialBitrateMask3G:(unsigned)g;	// 0x3375fb04
- (void)setInitialBitrateMaskWifi:(unsigned)wifi;	// 0x3375fb40
- (void)setLastURL:(BOOL)url;	// 0x3375efc0
- (void)setLogin:(BOOL)login;	// 0x3375ef70
- (void)setMandatoryUpgradeMessage:(id)message;	// 0x33760438
- (void)setMandatoryUpgradeMessageWithCString:(char *)cstring;	// 0x337603a8
- (void)setMandatoryUpgradeTitle:(id)title;	// 0x33760750
- (void)setMandatoryUpgradeTitleWithCString:(char *)cstring;	// 0x337606c0
- (void)setMinVersionRequired:(id)required;	// 0x33760ca0
- (void)setMinVersionRequiredWithCString:(char *)cstring;	// 0x33760c10
- (void)setNormalUpgradeMessage:(id)message;	// 0x3375fe08
- (void)setNormalUpgradeMessageWithCString:(char *)cstring;	// 0x3375fd78
- (void)setNormalUpgradeReminderIterations:(int)iterations;	// 0x3375f010
- (void)setNormalUpgradeReminderPeriod:(int)period;	// 0x3375effc
- (void)setNormalUpgradeTitle:(id)title;	// 0x33760120
- (void)setNormalUpgradeTitleWithCString:(char *)cstring;	// 0x33760090
- (void)setPersistUrl:(BOOL)url;	// 0x3375efac
- (void)setRuntimeUrlParams:(BOOL)params;	// 0x3375ef84
- (void)setShowAddressbar:(BOOL)addressbar;	// 0x3375ef98
- (void)setSupportCrashReporting:(BOOL)reporting;	// 0x3375f024
- (void)setSupportDD5_1:(BOOL)a1;	// 0x3375f038
- (void)setSupportPlaylist302Redirects:(BOOL)redirects;	// 0x3375f088
- (void)setTestNCCPDataURL:(id)url;	// 0x3375fa84
- (void)setTestNCCPDataURLWithCString:(char *)cstring;	// 0x3375fa00
- (void)setTestNCCPIdentityURL:(id)url;	// 0x3375f784
- (void)setTestNCCPIdentityURLWithCString:(char *)cstring;	// 0x3375f700
- (void)setTestNCCPLoggingURL:(id)url;	// 0x3375f484
- (void)setTestNCCPLoggingURLWithCString:(char *)cstring;	// 0x3375f400
- (void)setUIBootURL:(id)url;	// 0x337613ec
- (void)setUIBootURLWithCString:(char *)cstring;	// 0x3376135c
- (void)setUIOrientation:(int)orientation;	// 0x3375efd4
- (void)setUIPlayerOrientation:(int)orientation;	// 0x3375efe8
- (void)setUseTestEnvironment:(BOOL)environment;	// 0x3375f04c
// declared property getter: - (BOOL)supportCrashReporting;	// 0x3375f100
// declared property getter: - (BOOL)supportDD5_1;	// 0x3375f0ec
// declared property getter: - (BOOL)supportPlaylist302Redirects;	// 0x3375f09c
// declared property getter: - (id)testNCCPDataURL;	// 0x33762760
// declared property getter: - (id)testNCCPIdentityURL;	// 0x33762780
// declared property getter: - (id)testNCCPLoggingURL;	// 0x337627a0
// declared property getter: - (BOOL)uiLastURL;	// 0x3375f164
// declared property getter: - (unsigned)uiOrientation;	// 0x3375f1c8
// declared property getter: - (BOOL)uiPersistURL;	// 0x3375f178
// declared property getter: - (unsigned)uiPlayerOrientation;	// 0x3375f1b4
// declared property getter: - (BOOL)uiRuntimeUrlParams;	// 0x3375f1a0
// declared property getter: - (BOOL)uiShowAddressBar;	// 0x3375f18c
// declared property getter: - (id)uibootURL;	// 0x33762600
// declared property getter: - (BOOL)useTestEnvironment;	// 0x3375f0d8
@end

