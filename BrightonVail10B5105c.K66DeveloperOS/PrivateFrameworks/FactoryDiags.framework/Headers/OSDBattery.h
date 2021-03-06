/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface OSDBattery : NSObject {
	unsigned _IOPMPowerSourceService;	// 4 = 0x4
}
@property(readonly, assign, getter=_getIOPMPowerSourceService) unsigned IOPMPowerSourceService;	// G=0x34ef1ca5; 
@property(readonly, assign, getter=_deviceChargerConnected) BOOL deviceChargerConnected;	// G=0x34ef1fc5; 
@property(readonly, assign, getter=_deviceIsCharging) BOOL deviceIsCharging;	// G=0x34ef20cd; 
@property(readonly, assign, getter=_exactDeviceChargerConnected) BOOL exactDeviceChargerConnected;	// G=0x34ef2049; 
@property(readonly, assign, getter=_externalPowerConnected) BOOL externalPowerConnected;	// G=0x34ef1fa5; 
@property(readonly, assign, getter=_getBatteryCurrentCapacity) int getBatteryCurrentCapacity;	// G=0x34ef1e91; 
@property(readonly, assign, getter=_getBatteryCycleCount) int getBatteryCycleCount;	// G=0x34ef1ee5; 
@property(readonly, assign, getter=_getBatteryDesignCapacity) int getBatteryDesignCapacity;	// G=0x34ef1ead; 
@property(readonly, assign, getter=_batteryID) NSString *getBatteryID;	// G=0x34ef20ed; 
@property(readonly, assign, getter=_getBatteryLevel) int getBatteryLevel;	// G=0x34ef1e39; 
@property(readonly, assign, getter=_getBatteryManufacturer) NSString *getBatteryManufacturer;	// G=0x34ef2221; 
@property(readonly, assign, getter=_getBatteryMaxCapacity) int getBatteryMaxCapacity;	// G=0x34ef1ec9; 
@property(readonly, assign, getter=_getBatterySerialNumber) NSString *getBatterySerialNumber;	// G=0x34ef2189; 
@property(readonly, assign, getter=_getChargerCurrent) int getChargerCurrent;	// G=0x34ef1f1d; 
@property(readonly, assign, getter=_getChargerID) int getChargerID;	// G=0x34ef1f01; 
@property(readonly, assign, getter=_getChargerType) NSString *getChargerType;	// G=0x34ef22b9; 
@property(readonly, assign, getter=_getRawBatteryVoltage) int getRawBatteryVoltage;	// G=0x34ef1f39; 
+ (void)initialize;	// 0x34ef2301
+ (id)sharedInstance;	// 0x34ef2359
- (id)init;	// 0x34ef2471
// declared property getter: - (id)_batteryID;	// 0x34ef20ed
// declared property getter: - (BOOL)_deviceChargerConnected;	// 0x34ef1fc5
// declared property getter: - (BOOL)_deviceIsCharging;	// 0x34ef20cd
// declared property getter: - (BOOL)_exactDeviceChargerConnected;	// 0x34ef2049
// declared property getter: - (BOOL)_externalPowerConnected;	// 0x34ef1fa5
// declared property getter: - (int)_getBatteryCurrentCapacity;	// 0x34ef1e91
// declared property getter: - (int)_getBatteryCycleCount;	// 0x34ef1ee5
// declared property getter: - (int)_getBatteryDesignCapacity;	// 0x34ef1ead
// declared property getter: - (int)_getBatteryLevel;	// 0x34ef1e39
// declared property getter: - (id)_getBatteryManufacturer;	// 0x34ef2221
// declared property getter: - (int)_getBatteryMaxCapacity;	// 0x34ef1ec9
// declared property getter: - (id)_getBatterySerialNumber;	// 0x34ef2189
// declared property getter: - (int)_getChargerCurrent;	// 0x34ef1f1d
// declared property getter: - (int)_getChargerID;	// 0x34ef1f01
// declared property getter: - (id)_getChargerType;	// 0x34ef22b9
// declared property getter: - (unsigned)_getIOPMPowerSourceService;	// 0x34ef1ca5
// declared property getter: - (int)_getRawBatteryVoltage;	// 0x34ef1f39
- (bool)_readBoolProperty:(CFStringRef)property;	// 0x34ef1dc5
- (int)_readIntegerProperty:(CFStringRef)property;	// 0x34ef1d61
- (void)dealloc;	// 0x34ef2509
- (void)setCharging:(BOOL)charging inflow:(BOOL)inflow;	// 0x34ef2369
@end

