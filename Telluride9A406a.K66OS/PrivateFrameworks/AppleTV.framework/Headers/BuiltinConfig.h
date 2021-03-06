/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NetflixConfigProtocol.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BuiltinConfig : NSObject <NetflixConfigProtocol> {
@private
	BOOL deviceSupported_;	// 4 = 0x4
	BOOL login_;	// 5 = 0x5
	NSString *country_;	// 8 = 0x8
	NSString *geolocation_;	// 12 = 0xc
	NSString *geolocation_status_;	// 16 = 0x10
	NSString *geolocation_language_;	// 20 = 0x14
	NSString *geolocation_country_;	// 24 = 0x18
	NSString *geolocation_locale_;	// 28 = 0x1c
	NSString *uiBootUrl_;	// 32 = 0x20
	NSString *genericFeedUrl_;	// 36 = 0x24
	NSString *netflixApiHost_;	// 40 = 0x28
	BOOL testEnvironment_;	// 44 = 0x2c
	NSString *testNccpDataUrl_;	// 48 = 0x30
	NSString *testNccpIdentityUrl_;	// 52 = 0x34
	NSString *testNccpLoggingUrl_;	// 56 = 0x38
	NSString *nccpServerUrl_;	// 60 = 0x3c
	double timePeriodForReconfiguration_;	// 64 = 0x40
	BOOL supportDD5_1_;	// 72 = 0x48
	unsigned cdnRankingMethod_;	// 76 = 0x4c
	unsigned cdnMeasurementMethod_;	// 80 = 0x50
	BOOL supportPlaylist302Redirects_;	// 84 = 0x54
	BOOL dfxpUrlsRequireRangeRequest_;	// 85 = 0x55
}
@property(assign) unsigned cdnMeasurementMethod;	// G=0x332f597c; S=0x332f5990; @synthesize=cdnMeasurementMethod_
@property(assign) unsigned cdnRankingMethod;	// G=0x332f59a4; S=0x332f59b8; @synthesize=cdnRankingMethod_
@property(copy) NSString *country;	// G=0x332f5b68; S=0x332f5b34; @synthesize=country_
@property(assign) BOOL deviceSupported;	// G=0x332f5a50; S=0x332f5a68; @synthesize=deviceSupported_
@property(assign) BOOL dfxpUrlsRequireRangeRequest;	// G=0x332f5924; S=0x332f593c; @synthesize=dfxpUrlsRequireRangeRequest_
@property(retain) id env;	// G=0x332f6f30; S=0x332f6ec0; converted property
@property(copy) NSString *genericFeedUrl;	// G=0x332f5db4; S=0x332f5d80; @synthesize=genericFeedUrl_
@property(copy) NSString *geolocation;	// G=0x332f5bbc; S=0x332f5b88; @synthesize=geolocation_
@property(copy) NSString *geolocation_country;	// G=0x332f5cb8; S=0x332f5c84; @synthesize=geolocation_country_
@property(copy) NSString *geolocation_language;	// G=0x332f5c64; S=0x332f5c30; @synthesize=geolocation_language_
@property(copy) NSString *geolocation_locale;	// G=0x332f5d0c; S=0x332f5cd8; @synthesize=geolocation_locale_
@property(copy) NSString *geolocation_status;	// G=0x332f5c10; S=0x332f5bdc; @synthesize=geolocation_status_
@property(assign) BOOL login;	// G=0x332f5a24; S=0x332f5a3c; @synthesize=login_
@property(retain) id loginWithString;	// G=0x332f6e70; S=0x332f6e5c; converted property
@property(copy) NSString *nccpServerUrl;	// G=0x332f5f58; S=0x332f5f24; @synthesize=nccpServerUrl_
@property(copy) NSString *netflixApiHost;	// G=0x332f5e08; S=0x332f5dd4; @synthesize=netflixApiHost_
@property(assign) BOOL supportDD5_1;	// G=0x332f59cc; S=0x332f59e4; @synthesize=supportDD5_1_
@property(assign) BOOL supportPlaylist302Redirects;	// G=0x332f5950; S=0x332f5968; @synthesize=supportPlaylist302Redirects_
@property(assign) BOOL testEnvironment;	// G=0x332f59f8; S=0x332f5a10; @synthesize=testEnvironment_
@property(copy) NSString *testNccpDataUrl;	// G=0x332f5e5c; S=0x332f5e28; @synthesize=testNccpDataUrl_
@property(copy) NSString *testNccpIdentityUrl;	// G=0x332f5eb0; S=0x332f5e7c; @synthesize=testNccpIdentityUrl_
@property(copy) NSString *testNccpLoggingUrl;	// G=0x332f5f04; S=0x332f5ed0; @synthesize=testNccpLoggingUrl_
@property(assign) double timePeriodForReconfiguration;	// G=0x332f5fc0; S=0x332f5f78; @synthesize=timePeriodForReconfiguration_
@property(copy) NSString *uiBootUrl;	// G=0x332f5d60; S=0x332f5d2c; @synthesize=uiBootUrl_
- (id)init;	// 0x332f5a7c
// declared property getter: - (unsigned)cdnMeasurementMethod;	// 0x332f597c
// declared property getter: - (unsigned)cdnRankingMethod;	// 0x332f59a4
// declared property getter: - (id)country;	// 0x332f5b68
- (void)dealloc;	// 0x332f6f80
// declared property getter: - (BOOL)deviceSupported;	// 0x332f5a50
// declared property getter: - (BOOL)dfxpUrlsRequireRangeRequest;	// 0x332f5924
// converted property getter: - (id)env;	// 0x332f6f30
// declared property getter: - (id)genericFeedUrl;	// 0x332f5db4
// declared property getter: - (id)geolocation;	// 0x332f5bbc
// declared property getter: - (id)geolocation_country;	// 0x332f5cb8
// declared property getter: - (id)geolocation_language;	// 0x332f5c64
// declared property getter: - (id)geolocation_locale;	// 0x332f5d0c
// declared property getter: - (id)geolocation_status;	// 0x332f5c10
// declared property getter: - (BOOL)login;	// 0x332f5a24
// converted property getter: - (id)loginWithString;	// 0x332f6e70
// declared property getter: - (id)nccpServerUrl;	// 0x332f5f58
// declared property getter: - (id)netflixApiHost;	// 0x332f5e08
- (id)parsableItems;	// 0x332f6008
// declared property setter: - (void)setCdnMeasurementMethod:(unsigned)method;	// 0x332f5990
// declared property setter: - (void)setCdnRankingMethod:(unsigned)method;	// 0x332f59b8
// declared property setter: - (void)setCountry:(id)country;	// 0x332f5b34
// declared property setter: - (void)setDeviceSupported:(BOOL)supported;	// 0x332f5a68
// declared property setter: - (void)setDfxpUrlsRequireRangeRequest:(BOOL)request;	// 0x332f593c
// converted property setter: - (void)setEnv:(id)env;	// 0x332f6ec0
// declared property setter: - (void)setGenericFeedUrl:(id)url;	// 0x332f5d80
// declared property setter: - (void)setGeolocation:(id)geolocation;	// 0x332f5b88
// declared property setter: - (void)setGeolocation_country:(id)country;	// 0x332f5c84
// declared property setter: - (void)setGeolocation_language:(id)language;	// 0x332f5c30
// declared property setter: - (void)setGeolocation_locale:(id)locale;	// 0x332f5cd8
// declared property setter: - (void)setGeolocation_status:(id)status;	// 0x332f5bdc
// declared property setter: - (void)setLogin:(BOOL)login;	// 0x332f5a3c
// converted property setter: - (void)setLoginWithString:(id)string;	// 0x332f6e5c
// declared property setter: - (void)setNccpServerUrl:(id)url;	// 0x332f5f24
// declared property setter: - (void)setNetflixApiHost:(id)host;	// 0x332f5dd4
// declared property setter: - (void)setSupportDD5_1:(BOOL)a1;	// 0x332f59e4
// declared property setter: - (void)setSupportPlaylist302Redirects:(BOOL)redirects;	// 0x332f5968
// declared property setter: - (void)setTestEnvironment:(BOOL)environment;	// 0x332f5a10
// declared property setter: - (void)setTestNccpDataUrl:(id)url;	// 0x332f5e28
// declared property setter: - (void)setTestNccpIdentityUrl:(id)url;	// 0x332f5e7c
// declared property setter: - (void)setTestNccpLoggingUrl:(id)url;	// 0x332f5ed0
// declared property setter: - (void)setTimePeriodForReconfiguration:(double)reconfiguration;	// 0x332f5f78
// declared property setter: - (void)setUiBootUrl:(id)url;	// 0x332f5d2c
// declared property getter: - (BOOL)supportDD5_1;	// 0x332f59cc
// declared property getter: - (BOOL)supportPlaylist302Redirects;	// 0x332f5950
// declared property getter: - (BOOL)testEnvironment;	// 0x332f59f8
// declared property getter: - (id)testNccpDataUrl;	// 0x332f5e5c
// declared property getter: - (id)testNccpIdentityUrl;	// 0x332f5eb0
// declared property getter: - (id)testNccpLoggingUrl;	// 0x332f5f04
// declared property getter: - (double)timePeriodForReconfiguration;	// 0x332f5fc0
// declared property getter: - (id)uiBootUrl;	// 0x332f5d60
@end

