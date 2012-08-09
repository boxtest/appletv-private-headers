/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library
#import "CoreTelephony-Structs.h"

@class CTCarrier;

@interface CTTelephonyNetworkInfo : NSObject {
	void *_internal;	// 4 = 0x4
	CTCarrier *_subscriberCellularProvider;	// 8 = 0x8
	id _subscriberCellularProviderDidUpdateNotifier;	// 12 = 0xc
}
@property(retain) CTCarrier *subscriberCellularProvider;	// G=0x324a9a11; S=0x324a9a25; @synthesize=_subscriberCellularProvider
@property(copy, nonatomic) id subscriberCellularProviderDidUpdateNotifier;	// G=0x324a909d; S=0x324a90ad; 
- (id)init;	// 0x324a8eed
- (void)cleanUpServerConnection;	// 0x324a8ea5
- (void)dealloc;	// 0x324a8ff1
- (BOOL)getAllowsVOIP:(BOOL *)voip withCTError:(XXStruct_K5nmsA *)cterror;	// 0x324a9331
- (BOOL)getCarrierName:(id)name withCTError:(XXStruct_K5nmsA *)cterror;	// 0x324a915d
- (BOOL)getMobileCountryCode:(id)code andIsoCountryCode:(id)code2 withCTError:(XXStruct_K5nmsA *)cterror;	// 0x324a91e5
- (BOOL)getMobileNetworkCode:(id)code withCTError:(XXStruct_K5nmsA *)cterror;	// 0x324a92a9
- (void)handleNotificationFromConnection:(void *)connection ofType:(id)type withInfo:(id)info;	// 0x324a96f1
- (void)postUpdatesIfNecessary;	// 0x324a9931
// declared property setter: - (void)setSubscriberCellularProvider:(id)provider;	// 0x324a9a25
// declared property setter: - (void)setSubscriberCellularProviderDidUpdateNotifier:(id)updateNotifier;	// 0x324a90ad
- (BOOL)setUpServerConnection;	// 0x324a8d3d
// declared property getter: - (id)subscriberCellularProvider;	// 0x324a9a11
// declared property getter: - (id)subscriberCellularProviderDidUpdateNotifier;	// 0x324a909d
- (BOOL)updateNetworkInfoAndShouldNotifyClient:(BOOL *)updateNetworkInfoAnd;	// 0x324a93a5
@end
