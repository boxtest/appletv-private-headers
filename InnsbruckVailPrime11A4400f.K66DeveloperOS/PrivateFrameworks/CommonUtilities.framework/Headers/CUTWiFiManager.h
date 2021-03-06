/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

#import "CommonUtilities-Structs.h"
#import "CUTPowerMonitorDelegate.h"
#import </libobjc.A.h>

@class NSMapTable, NSDictionary, NSNumber, NSString, NSRecursiveLock;

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate> {
	NSRecursiveLock *_lock;	// 4 = 0x4
	void *_wifiManager;	// 8 = 0x8
	void *_wifiDevice;	// 12 = 0xc
	int _linkToken;	// 16 = 0x10
	NSMapTable *_delegateMap;	// 20 = 0x14
	NSDictionary *_lastWiFiPowerInfo;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *currentSSID;	// G=0x30421b15; 
@property(readonly, assign, nonatomic) NSDictionary *currentWiFiNetworkPowerUsage;	// G=0x30421429; 
@property(retain, nonatomic) NSMapTable *delegateMap;	// G=0x30421d41; S=0x30421d51; @synthesize=_delegateMap
@property(readonly, assign, nonatomic) BOOL isHostingWiFiHotSpot;	// G=0x30420521; 
@property(readonly, assign, nonatomic) BOOL isWiFiAssociated;	// G=0x30420b65; 
@property(readonly, assign, nonatomic) BOOL isWiFiEnabled;	// G=0x30420ca5; 
@property(copy, nonatomic) NSDictionary *lastWiFiPowerInfo;	// G=0x30421d61; S=0x30421d75; @synthesize=_lastWiFiPowerInfo
@property(assign, nonatomic) int linkToken;	// G=0x30421d21; S=0x30421d31; @synthesize=_linkToken
@property(retain, nonatomic) NSRecursiveLock *lock;	// G=0x30421cc1; S=0x30421cd1; @synthesize=_lock
@property(readonly, assign, nonatomic) NSNumber *wiFiScaledRSSI;	// G=0x304208a5; 
@property(readonly, assign, nonatomic) NSNumber *wiFiScaledRate;	// G=0x30420a05; 
@property(readonly, assign, nonatomic) NSNumber *wiFiSignalStrength;	// G=0x30420745; 
@property(assign, nonatomic) void *wifiDevice;	// G=0x30421d01; S=0x30421d11; @synthesize=_wifiDevice
@property(assign, nonatomic) void *wifiManager;	// G=0x30421ce1; S=0x30421cf1; @synthesize=_wifiManager
+ (id)sharedInstance;	// 0x3041fcf9
- (id)init;	// 0x3041fd65
- (void)_createWiFiManager;	// 0x304202d9
- (void)_handleDeviceAttachedCallback;	// 0x30420fe1
- (void)_handlePotentialDeviceChange:(WiFiDeviceClient *)change;	// 0x3042105d
- (void)_performCurrentNetworkBlock:(id)block;	// 0x30420f3d
- (void)_performCurrentNetworkBlock:(id)block withDevice:(WiFiDeviceClient *)device;	// 0x30420e35
- (void)_performDeviceBlock:(id)block;	// 0x30420d19
- (void)_performPowerReading;	// 0x30421205
- (id)_ssidFromNetwork:(WiFiNetwork *)network;	// 0x30420f51
- (double)_wifiMeasurementErrorForInterval:(double)interval;	// 0x304213f1
- (void)addDelegate:(id)delegate;	// 0x30420175
// declared property getter: - (id)currentSSID;	// 0x30421b15
// declared property getter: - (id)currentWiFiNetworkPowerUsage;	// 0x30421429
- (void)dealloc;	// 0x30420019
// declared property getter: - (id)delegateMap;	// 0x30421d41
// declared property getter: - (BOOL)isHostingWiFiHotSpot;	// 0x30420521
// declared property getter: - (BOOL)isWiFiAssociated;	// 0x30420b65
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x30420ca5
// declared property getter: - (id)lastWiFiPowerInfo;	// 0x30421d61
// declared property getter: - (int)linkToken;	// 0x30421d21
// declared property getter: - (id)lock;	// 0x30421cc1
- (void)removeDelegate:(id)delegate;	// 0x30420239
// declared property setter: - (void)setDelegateMap:(id)map;	// 0x30421d51
// declared property setter: - (void)setLastWiFiPowerInfo:(id)info;	// 0x30421d75
// declared property setter: - (void)setLinkToken:(int)token;	// 0x30421d31
// declared property setter: - (void)setLock:(id)lock;	// 0x30421cd1
// declared property setter: - (void)setWifiDevice:(void *)device;	// 0x30421d11
// declared property setter: - (void)setWifiManager:(void *)manager;	// 0x30421cf1
// declared property getter: - (id)wiFiScaledRSSI;	// 0x304208a5
// declared property getter: - (id)wiFiScaledRate;	// 0x30420a05
// declared property getter: - (id)wiFiSignalStrength;	// 0x30420745
// declared property getter: - (void *)wifiDevice;	// 0x30421d01
// declared property getter: - (void *)wifiManager;	// 0x30421ce1
- (BOOL)willTryToAutoAssociateWiFiNetwork;	// 0x304205ad
- (BOOL)willTryToSearchForWiFiNetwork;	// 0x304206b5
@end

