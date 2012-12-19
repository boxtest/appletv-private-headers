/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library


@interface GEOGeocodeProvider : NSObject {
	id _successHandler;	// 4 = 0x4
	id _errorHandler;	// 8 = 0x8
}
@property(copy, nonatomic) id errorHandler;	// G=0x3418aa05; S=0x3415534d; @synthesize=_errorHandler
@property(copy, nonatomic) id successHandler;	// G=0x34155b79; S=0x34155561; @synthesize=_successHandler
+ (unsigned short)provider;	// 0x3418a9b9
+ (id)providerName;	// 0x3418a9bd
- (void)cancel;	// 0x3418a9f1
- (void)dealloc;	// 0x34155c19
// declared property getter: - (id)errorHandler;	// 0x3418aa05
- (void)forwardGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x3418a9c9
- (void)reverseGeocode:(id)geocode success:(id)success error:(id)error;	// 0x3418a9dd
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x3415534d
// declared property setter: - (void)setSuccessHandler:(id)handler;	// 0x34155561
// declared property getter: - (id)successHandler;	// 0x34155b79
@end
