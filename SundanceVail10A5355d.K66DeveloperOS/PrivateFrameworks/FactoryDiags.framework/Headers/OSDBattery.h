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
@property(readonly, assign, getter=_getIOPMPowerSourceService) unsigned IOPMPowerSourceService;	// G=0x377b53d5; 
@property(readonly, assign, getter=_deviceChargerConnected) BOOL deviceChargerConnected;	// G=0x377b56f5; 
@property(readonly, assign, getter=_deviceIsCharging) BOOL deviceIsCharging;	// G=0x377b57fd; 
@property(readonly, assign, getter=_exactDeviceChargerConnected) BOOL exactDeviceChargerConnected;	// G=0x377b5779; 
@property(readonly, assign, getter=_externalPowerConnected) BOOL externalPowerConnected;	// G=0x377b56d5; 
@property(readonly, assign, getter=_getBatteryCurrentCapacity) int getBatteryCurrentCapacity;	// G=0x377b55c1; 
@property(readonly, assign, getter=_getBatteryCycleCount) int getBatteryCycleCount;	// G=0x377b5615; 
@property(readonly, assign, getter=_getBatteryDesignCapacity) int getBatteryDesignCapacity;	// G=0x377b55dd; 
@property(readonly, assign, getter=_batteryID) NSString *getBatteryID;	// G=0x377b581d; 
@property(readonly, assign, getter=_getBatteryLevel) int getBatteryLevel;	// G=0x377b5569; 
@property(readonly, assign, getter=_getBatteryManufacturer) NSString *getBatteryManufacturer;	// G=0x377b5951; 
@property(readonly, assign, getter=_getBatteryMaxCapacity) int getBatteryMaxCapacity;	// G=0x377b55f9; 
@property(readonly, assign, getter=_getBatterySerialNumber) NSString *getBatterySerialNumber;	// G=0x377b58b9; 
@property(readonly, assign, getter=_getChargerCurrent) int getChargerCurrent;	// G=0x377b564d; 
@property(readonly, assign, getter=_getChargerID) int getChargerID;	// G=0x377b5631; 
@property(readonly, assign, getter=_getChargerType) NSString *getChargerType;	// G=0x377b59e9; 
@property(readonly, assign, getter=_getRawBatteryVoltage) int getRawBatteryVoltage;	// G=0x377b5669; 
+ (void)initialize;	// 0x377b5a31
+ (id)sharedInstance;	// 0x377b5a89
- (id)init;	// 0x377b5ba1
// declared property getter: - (id)_batteryID;	// 0x377b581d
// declared property getter: - (BOOL)_deviceChargerConnected;	// 0x377b56f5
// declared property getter: - (BOOL)_deviceIsCharging;	// 0x377b57fd
// declared property getter: - (BOOL)_exactDeviceChargerConnected;	// 0x377b5779
// declared property getter: - (BOOL)_externalPowerConnected;	// 0x377b56d5
// declared property getter: - (int)_getBatteryCurrentCapacity;	// 0x377b55c1
// declared property getter: - (int)_getBatteryCycleCount;	// 0x377b5615
// declared property getter: - (int)_getBatteryDesignCapacity;	// 0x377b55dd
// declared property getter: - (int)_getBatteryLevel;	// 0x377b5569
// declared property getter: - (id)_getBatteryManufacturer;	// 0x377b5951
// declared property getter: - (int)_getBatteryMaxCapacity;	// 0x377b55f9
// declared property getter: - (id)_getBatterySerialNumber;	// 0x377b58b9
// declared property getter: - (int)_getChargerCurrent;	// 0x377b564d
// declared property getter: - (int)_getChargerID;	// 0x377b5631
// declared property getter: - (id)_getChargerType;	// 0x377b59e9
// declared property getter: - (unsigned)_getIOPMPowerSourceService;	// 0x377b53d5
// declared property getter: - (int)_getRawBatteryVoltage;	// 0x377b5669
- (bool)_readBoolProperty:(CFStringRef)property;	// 0x377b54f5
- (int)_readIntegerProperty:(CFStringRef)property;	// 0x377b5491
- (void)dealloc;	// 0x377b5c39
- (void)setCharging:(BOOL)charging inflow:(BOOL)inflow;	// 0x377b5a99
@end

