/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixConfigProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface BuiltinConfig : XXUnknownSuperclass <NetflixConfigProtocol> {
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
@property(assign) unsigned cdnMeasurementMethod;	// G=0x45947d; S=0x45948d; @synthesize=cdnMeasurementMethod_
@property(assign) unsigned cdnRankingMethod;	// G=0x45945d; S=0x45946d; @synthesize=cdnRankingMethod_
@property(copy) NSString *country;	// G=0x4590dd; S=0x4590f1; @synthesize=country_
@property(assign) BOOL deviceSupported;	// G=0x45909d; S=0x4590ad; @synthesize=deviceSupported_
@property(assign) BOOL dfxpUrlsRequireRangeRequest;	// G=0x4594bd; S=0x4594cd; @synthesize=dfxpUrlsRequireRangeRequest_
@property(retain) id env;	// G=0x458505; S=0x458545; converted property
@property(copy) NSString *genericFeedUrl;	// G=0x459265; S=0x459279; @synthesize=genericFeedUrl_
@property(copy) NSString *geolocation;	// G=0x459115; S=0x459129; @synthesize=geolocation_
@property(copy) NSString *geolocation_country;	// G=0x4591bd; S=0x4591d1; @synthesize=geolocation_country_
@property(copy) NSString *geolocation_language;	// G=0x459185; S=0x459199; @synthesize=geolocation_language_
@property(copy) NSString *geolocation_locale;	// G=0x4591f5; S=0x459209; @synthesize=geolocation_locale_
@property(copy) NSString *geolocation_status;	// G=0x45914d; S=0x459161; @synthesize=geolocation_status_
@property(assign) BOOL login;	// G=0x4590bd; S=0x4590cd; @synthesize=login_
@property(retain) id loginWithString;	// G=0x45859d; S=0x4585dd; converted property
@property(copy) NSString *nccpServerUrl;	// G=0x45939d; S=0x4593b1; @synthesize=nccpServerUrl_
@property(copy) NSString *netflixApiHost;	// G=0x45929d; S=0x4592b1; @synthesize=netflixApiHost_
@property(assign) BOOL supportDD5_1;	// G=0x45943d; S=0x45944d; @synthesize=supportDD5_1_
@property(assign) BOOL supportPlaylist302Redirects;	// G=0x45949d; S=0x4594ad; @synthesize=supportPlaylist302Redirects_
@property(assign) BOOL testEnvironment;	// G=0x4592d5; S=0x4592e5; @synthesize=testEnvironment_
@property(copy) NSString *testNccpDataUrl;	// G=0x4592f5; S=0x459309; @synthesize=testNccpDataUrl_
@property(copy) NSString *testNccpIdentityUrl;	// G=0x45932d; S=0x459341; @synthesize=testNccpIdentityUrl_
@property(copy) NSString *testNccpLoggingUrl;	// G=0x459365; S=0x459379; @synthesize=testNccpLoggingUrl_
@property(assign) double timePeriodForReconfiguration;	// G=0x4593d5; S=0x459409; @synthesize=timePeriodForReconfiguration_
@property(copy) NSString *uiBootUrl;	// G=0x45922d; S=0x459241; @synthesize=uiBootUrl_
- (id)init;	// 0x4582dd
// declared property getter: - (unsigned)cdnMeasurementMethod;	// 0x45947d
// declared property getter: - (unsigned)cdnRankingMethod;	// 0x45945d
// declared property getter: - (id)country;	// 0x4590dd
- (void)dealloc;	// 0x45836d
// declared property getter: - (BOOL)deviceSupported;	// 0x45909d
// declared property getter: - (BOOL)dfxpUrlsRequireRangeRequest;	// 0x4594bd
// converted property getter: - (id)env;	// 0x458505
// declared property getter: - (id)genericFeedUrl;	// 0x459265
// declared property getter: - (id)geolocation;	// 0x459115
// declared property getter: - (id)geolocation_country;	// 0x4591bd
// declared property getter: - (id)geolocation_language;	// 0x459185
// declared property getter: - (id)geolocation_locale;	// 0x4591f5
// declared property getter: - (id)geolocation_status;	// 0x45914d
// declared property getter: - (BOOL)login;	// 0x4590bd
// converted property getter: - (id)loginWithString;	// 0x45859d
// declared property getter: - (id)nccpServerUrl;	// 0x45939d
// declared property getter: - (id)netflixApiHost;	// 0x45929d
- (id)parsableItems;	// 0x4585f1
// declared property setter: - (void)setCdnMeasurementMethod:(unsigned)method;	// 0x45948d
// declared property setter: - (void)setCdnRankingMethod:(unsigned)method;	// 0x45946d
// declared property setter: - (void)setCountry:(id)country;	// 0x4590f1
// declared property setter: - (void)setDeviceSupported:(BOOL)supported;	// 0x4590ad
// declared property setter: - (void)setDfxpUrlsRequireRangeRequest:(BOOL)request;	// 0x4594cd
// converted property setter: - (void)setEnv:(id)env;	// 0x458545
// declared property setter: - (void)setGenericFeedUrl:(id)url;	// 0x459279
// declared property setter: - (void)setGeolocation:(id)geolocation;	// 0x459129
// declared property setter: - (void)setGeolocation_country:(id)country;	// 0x4591d1
// declared property setter: - (void)setGeolocation_language:(id)language;	// 0x459199
// declared property setter: - (void)setGeolocation_locale:(id)locale;	// 0x459209
// declared property setter: - (void)setGeolocation_status:(id)status;	// 0x459161
// declared property setter: - (void)setLogin:(BOOL)login;	// 0x4590cd
// converted property setter: - (void)setLoginWithString:(id)string;	// 0x4585dd
// declared property setter: - (void)setNccpServerUrl:(id)url;	// 0x4593b1
// declared property setter: - (void)setNetflixApiHost:(id)host;	// 0x4592b1
// declared property setter: - (void)setSupportDD5_1:(BOOL)a1;	// 0x45944d
// declared property setter: - (void)setSupportPlaylist302Redirects:(BOOL)redirects;	// 0x4594ad
// declared property setter: - (void)setTestEnvironment:(BOOL)environment;	// 0x4592e5
// declared property setter: - (void)setTestNccpDataUrl:(id)url;	// 0x459309
// declared property setter: - (void)setTestNccpIdentityUrl:(id)url;	// 0x459341
// declared property setter: - (void)setTestNccpLoggingUrl:(id)url;	// 0x459379
// declared property setter: - (void)setTimePeriodForReconfiguration:(double)reconfiguration;	// 0x459409
// declared property setter: - (void)setUiBootUrl:(id)url;	// 0x459241
// declared property getter: - (BOOL)supportDD5_1;	// 0x45943d
// declared property getter: - (BOOL)supportPlaylist302Redirects;	// 0x45949d
// declared property getter: - (BOOL)testEnvironment;	// 0x4592d5
// declared property getter: - (id)testNccpDataUrl;	// 0x4592f5
// declared property getter: - (id)testNccpIdentityUrl;	// 0x45932d
// declared property getter: - (id)testNccpLoggingUrl;	// 0x459365
// declared property getter: - (double)timePeriodForReconfiguration;	// 0x4593d5
// declared property getter: - (id)uiBootUrl;	// 0x45922d
@end
