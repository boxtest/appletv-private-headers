/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEODirectionsProvider.h"
#import "PBRequesterDelegate.h"

@class GEORequester;

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate> {
	GEORequester *_requester;	// 20 = 0x14
}
@property(retain, nonatomic) GEORequester *requester;	// G=0x31451e85; S=0x31451e95; @synthesize=_requester
+ (id)providerHostname;	// 0x31451a8d
+ (unsigned short)providerID;	// 0x31451a89
+ (id)providerURL;	// 0x31451839
+ (void)resetProviderURL;	// 0x314518f1
- (id)init;	// 0x3145191d
- (void)cancelProviderRequest;	// 0x31451ba5
- (void)cleanupRequester;	// 0x31451bcd
- (void)dealloc;	// 0x31451a21
// declared property getter: - (id)requester;	// 0x31451e85
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x31451e1d
- (void)requesterDidCancel:(id)requester;	// 0x31451e55
- (void)requesterDidFinish:(id)requester;	// 0x31451c11
// declared property setter: - (void)setRequester:(id)requester;	// 0x31451e95
- (void)startProviderWithRequest:(id)request;	// 0x31451ab5
@end

