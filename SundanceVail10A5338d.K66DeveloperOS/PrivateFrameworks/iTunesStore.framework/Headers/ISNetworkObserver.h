/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library
#import "SSDownloadQueueObserver.h"

@class NSString, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver> {
	NSString *_dataStatusIndicator;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	BOOL _isCellularRestricted;	// 12 = 0xc
	double _lastNetworkTypeChangeTime;	// 16 = 0x10
	int _networkUsageCount;	// 24 = 0x18
	int _networkType;	// 28 = 0x1c
	NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
	NSMutableSet *_observedDownloadQueues;	// 36 = 0x24
	NSString *_operatorName;	// 40 = 0x28
	SCNetworkReachabilityRef _reachability;	// 44 = 0x2c
	NSString *_registrationStatus;	// 48 = 0x30
	CTServerConnectionRef _telephonyServer;	// 52 = 0x34
}
@property(readonly, assign) NSString *connectionTypeHeader;	// G=0x30927ded; 
@property(readonly, assign) NSString *dataStatusIndicator;	// G=0x30928569; 
@property(readonly, assign) double lastNetworkTypeChangeTime;	// G=0x30928331; 
@property(readonly, assign) NSString *modemRegistrationStatus;	// G=0x30928761; 
@property(assign) int networkType;	// G=0x30928429; S=0x30928bad; 
@property(readonly, assign) NSString *operatorName;	// G=0x30928941; 
@property(readonly, assign) BOOL shouldShowCellularAutomaticDownloadsSwitch;	// G=0x309284f5; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x30928259; 
@property(readonly, assign, getter=isWiFiEnabled) BOOL wifiEnabled;	// G=0x3092872d; 
+ (void)set3GEnabled:(BOOL)enabled;	// 0x30929755
+ (void)setAirplaneModeEnabled:(BOOL)enabled;	// 0x30929759
+ (void)setWiFiEnabled:(BOOL)enabled;	// 0x3092975d
+ (id)sharedInstance;	// 0x30927959
- (id)init;	// 0x309272b1
- (int)_currentNetworkType;	// 0x30928f85
- (id)_dataStatusIndicator;	// 0x309290a5
- (void)_handleTelephonyNotificationWithName:(CFStringRef)name userInfo:(CFDictionaryRef)info;	// 0x30928d9d
- (int)_networkTypeFromDataIndicator:(id)dataIndicator;	// 0x30929115
- (BOOL)_ntsIsUsingNetwork;	// 0x30929261
- (void)_postTypeChangedNotificationFromValue:(int)value toValue:(int)value2;	// 0x30929359
- (void)_postUsageChangedToValue:(BOOL)value;	// 0x30929445
- (void)_reloadCellularRestriction;	// 0x30929505
- (void)_reloadNetworkType;	// 0x30929631
- (int)_setNetworkType:(int)type;	// 0x309296e9
- (void)beginObservingDownloadQueue:(id)queue;	// 0x30927a09
- (void)beginUsingNetwork;	// 0x30927c61
// declared property getter: - (id)connectionTypeHeader;	// 0x30927ded
- (id)copyValueForCarrierBundleKey:(id)carrierBundleKey;	// 0x30927e95
// declared property getter: - (id)dataStatusIndicator;	// 0x30928569
- (void)dealloc;	// 0x309277a5
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;	// 0x30928d3d
- (void)downloadQueueNetworkUsageChanged:(id)changed;	// 0x30928d41
- (void)endObservingDownloadQueue:(id)queue;	// 0x30927ea5
- (void)endUsingNetwork;	// 0x309280cd
// declared property getter: - (BOOL)isUsingNetwork;	// 0x30928259
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x3092872d
// declared property getter: - (double)lastNetworkTypeChangeTime;	// 0x30928331
// declared property getter: - (id)modemRegistrationStatus;	// 0x30928761
// declared property getter: - (int)networkType;	// 0x30928429
// declared property getter: - (id)operatorName;	// 0x30928941
- (void)reloadNetworkType;	// 0x30928b31
// declared property setter: - (void)setNetworkType:(int)type;	// 0x30928bad
// declared property getter: - (BOOL)shouldShowCellularAutomaticDownloadsSwitch;	// 0x309284f5
@end

