/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface GEOCountryConfiguration : NSObject {
	NSString *_countryCode;	// 4 = 0x4
	NSDictionary *_oldProvidersInfo;	// 8 = 0x8
	NSString *_oldCountryCode;	// 12 = 0xc
	BOOL _isObservingReachability;	// 16 = 0x10
	BOOL _isUpdating;	// 17 = 0x11
}
@property(copy, nonatomic) NSString *countryCode;	// G=0x3412dd59; S=0x3412dfb1; @synthesize=_countryCode
+ (id)sharedConfiguration;	// 0x3412d885
- (void)_checkCountryCode;	// 0x3412dfc1
- (void)_checkCountryProviders;	// 0x34136841
- (void)_reachabilityChanged:(id)changed;	// 0x3417fded
- (void)_registerNetworkDefaults;	// 0x34136449
- (void)_useCountryCodeProvider:(id)provider;	// 0x34136185
// declared property getter: - (id)countryCode;	// 0x3412dd59
- (id)countryDefaultForKey:(id)key;	// 0x3414845d
- (void)dealloc;	// 0x3417fd49
- (id)defaultForKey:(id)key defaultValue:(id)value;	// 0x34148431
// declared property setter: - (void)setCountryCode:(id)code;	// 0x3412dfb1
- (void)updateProvidersForCurrentCountry;	// 0x3412d8b1
@end
