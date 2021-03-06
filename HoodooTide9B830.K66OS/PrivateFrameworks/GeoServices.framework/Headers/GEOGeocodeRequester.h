/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOGeocodeRequester : NSObject {
	NSMapTable *_pendingGeocodes;	// 4 = 0x4
	NSLock *_pendingGeocodesLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (void)_countryProvidersDidChange:(id)_countryProviders;	// 0x35f3d46d
+ (id)sharedGeocodeRequester;	// 0x35f3c665
- (id)init;	// 0x35f3c7d5
- (void)cancelGeocode:(id)geocode;	// 0x35f3d371
- (void)dealloc;	// 0x35f3c8ad
- (void)forwardGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x35f3c921
- (void)registerProvider:(Class)provider;	// 0x35f3d42d
- (void)reverseGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x35f3cd39
@end

