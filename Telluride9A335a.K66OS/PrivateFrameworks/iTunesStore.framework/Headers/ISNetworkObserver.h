/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import "ISSingleton.h"
#import <NSObject.h> // Unknown library
#import "SSDownloadQueueObserver.h"

@class NSMutableSet, NSString;

@interface ISNetworkObserver : NSObject <ISSingleton, SSDownloadQueueObserver> {
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	BOOL _isCellularRestricted;	// 8 = 0x8
	double _lastNetworkTypeChangeTime;	// 12 = 0xc
	int _networkUsageCount;	// 20 = 0x14
	int _networkType;	// 24 = 0x18
	NSMutableSet *_observedDownloadQueues;	// 28 = 0x1c
	SCNetworkReachabilityRef _reachability;	// 32 = 0x20
}
@property(readonly, assign, getter=isCellularDataRestricted) BOOL cellularDataRestricted;	// G=0x30f12195; 
@property(readonly, assign) NSString *connectionTypeHeader;	// G=0x30f11ced; 
@property(readonly, assign) double lastNetworkTypeChangeTime;	// G=0x30f123ed; 
@property(assign) int networkType;	// G=0x30f124e5; S=0x30f126d9; 
@property(readonly, assign) BOOL shouldShowCellularAutomaticDownloadsSwitch;	// G=0x30f125b5; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x30f12311; 
@property(readonly, assign, getter=isWiFiEnabled) BOOL wifiEnabled;	// G=0x30f12625; 
+ (void)set3GEnabled:(BOOL)enabled;	// 0x30f12fcd
+ (void)setAirplaneModeEnabled:(BOOL)enabled;	// 0x30f12fd1
+ (void)setSharedInstance:(id)instance;	// 0x30f11849
+ (void)setWiFiEnabled:(BOOL)enabled;	// 0x30f12fd5
+ (id)sharedInstance;	// 0x30f1189d
- (id)init;	// 0x30f1127d
- (int)_currentNetworkType;	// 0x30f129ad
- (void)_dataStatusChangedNotification:(id)notification;	// 0x30f128ad
- (int)_networkTypeFromDataIndicator:(id)dataIndicator;	// 0x30f12a55
- (BOOL)_ntsIsUsingNetwork;	// 0x30f12b09
- (void)_postTypeChangedNotificationFromValue:(int)value toValue:(int)value2;	// 0x30f12be5
- (void)_postUsageChangedToValue:(BOOL)value;	// 0x30f12ccd
- (void)_reloadCellularRestriction;	// 0x30f12d8d
- (void)_reloadNetworkType;	// 0x30f12eb5
- (int)_setNetworkType:(int)type;	// 0x30f12f71
- (void)_telephonyObserverAvailableNotification:(id)notification;	// 0x30f1292d
- (void)beginObservingDownloadQueue:(id)queue;	// 0x30f11919
- (void)beginUsingNetwork;	// 0x30f11b6d
// declared property getter: - (id)connectionTypeHeader;	// 0x30f11ced
- (id)copyValueForCarrierBundleKey:(id)carrierBundleKey;	// 0x30f11de5
- (void)dealloc;	// 0x30f116e9
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;	// 0x30f12855
- (void)downloadQueueNetworkUsageChanged:(id)changed;	// 0x30f12859
- (void)endObservingDownloadQueue:(id)queue;	// 0x30f11df5
- (void)endUsingNetwork;	// 0x30f12011
// declared property getter: - (BOOL)isCellularDataRestricted;	// 0x30f12195
// declared property getter: - (BOOL)isUsingNetwork;	// 0x30f12311
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x30f12625
// declared property getter: - (double)lastNetworkTypeChangeTime;	// 0x30f123ed
// declared property getter: - (int)networkType;	// 0x30f124e5
- (void)reloadNetworkType;	// 0x30f12659
// declared property setter: - (void)setNetworkType:(int)type;	// 0x30f126d9
// declared property getter: - (BOOL)shouldShowCellularAutomaticDownloadsSwitch;	// 0x30f125b5
@end

