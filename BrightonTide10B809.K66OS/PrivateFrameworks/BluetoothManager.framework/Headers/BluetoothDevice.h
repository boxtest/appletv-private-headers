/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

#import "BluetoothManager-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface BluetoothDevice : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_address;	// 8 = 0x8
	BTDeviceImplRef _device;	// 12 = 0xc
	BOOL _isLowEnergy;	// 16 = 0x10
}
@property(readonly, retain) NSString *address;	// G=0x33518be5; converted property
@property(assign) BTDeviceImplRef device;	// G=0x33518a85; S=0x33518a95; converted property
@property(readonly, assign) BOOL isLowEnergy;	// G=0x33518aad; converted property
@property(readonly, retain) NSString *name;	// G=0x33518b01; converted property
@property(assign) XXStruct_La4IvC syncSettings;	// G=0x33519231; S=0x33519271; converted property
- (id)initWithDevice:(BTDeviceImplRef)device address:(id)address isLE:(BOOL)le;	// 0x335188c1
- (void)_clearName;	// 0x33518abd
- (BOOL)_isNameCached;	// 0x33518ae9
- (void)acceptSSP:(int)ssp;	// 0x3351914d
// converted property getter: - (id)address;	// 0x33518be5
- (int)batteryLevel;	// 0x33518e45
- (int)compare:(id)compare;	// 0x33518a49
- (void)connect;	// 0x33519059
- (void)connectWithServices:(unsigned)services;	// 0x33519091
- (BOOL)connected;	// 0x33518d89
- (unsigned)connectedServices;	// 0x33518dc5
- (unsigned)connectedServicesCount;	// 0x33518de9
- (id)copyWithZone:(NSZone *)zone;	// 0x335189ad
- (void)dealloc;	// 0x33518949
- (id)description;	// 0x33518ca9
// converted property getter: - (BTDeviceImplRef)device;	// 0x33518a85
- (void)disconnect;	// 0x335190cd
- (void)endVoiceCommand;	// 0x335191f9
- (id)getServiceSetting:(unsigned)setting key:(id)key;	// 0x33518f51
- (BOOL)isAccessory;	// 0x33518eb1
// converted property getter: - (BOOL)isLowEnergy;	// 0x33518aad
- (BOOL)isServiceSupported:(unsigned)supported;	// 0x33518f19
- (unsigned)majorClass;	// 0x33518c51
- (unsigned)minorClass;	// 0x33518c7d
// converted property getter: - (id)name;	// 0x33518b01
- (BOOL)paired;	// 0x33518d59
- (id)scoUID;	// 0x33518d09
// converted property setter: - (void)setDevice:(BTDeviceImplRef)device;	// 0x33518a95
- (void)setPIN:(id)pin;	// 0x33519111
- (void)setServiceSetting:(unsigned)setting key:(id)key value:(id)value;	// 0x33518fe9
- (void)setSyncGroup:(int)group enabled:(BOOL)enabled;	// 0x33519391
// converted property setter: - (void)setSyncSettings:(XXStruct_La4IvC)settings;	// 0x33519271
- (void)startVoiceCommand;	// 0x335191c1
- (BOOL)supportsBatteryLevel;	// 0x33518e2d
- (id)syncGroups;	// 0x335192b9
// converted property getter: - (XXStruct_La4IvC)syncSettings;	// 0x33519231
- (int)type;	// 0x33518c29
- (void)unpair;	// 0x33519189
@end
