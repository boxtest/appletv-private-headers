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
@property(readonly, retain) NSString *address;	// G=0x342b4515; converted property
@property(assign) BTDeviceImplRef device;	// G=0x342b3dd9; S=0x342b3de9; converted property
@property(readonly, assign) BOOL isLowEnergy;	// G=0x342b3e01; converted property
@property(readonly, retain) NSString *name;	// G=0x342b4555; converted property
@property(assign) XXStruct_La4IvC syncSettings;	// G=0x342b3fc9; S=0x342b3f75; converted property
- (id)initWithDevice:(BTDeviceImplRef)device address:(id)address isLE:(BOOL)le;	// 0x342b3e29
- (void)_clearName;	// 0x342b4609
- (BOOL)_isNameCached;	// 0x342b3e11
- (void)acceptSSP:(int)ssp;	// 0x342b40b1
// converted property getter: - (id)address;	// 0x342b4515
- (int)batteryLevel;	// 0x342b427d
- (int)compare:(id)compare;	// 0x342b4635
- (void)connect;	// 0x342b41a9
- (void)connectWithServices:(unsigned)services;	// 0x342b416d
- (BOOL)connected;	// 0x342b436d
- (unsigned)connectedServices;	// 0x342b4349
- (unsigned)connectedServicesCount;	// 0x342b4301
- (id)copyWithZone:(NSZone *)zone;	// 0x342b467d
- (void)dealloc;	// 0x342b4721
- (id)description;	// 0x342b442d
// converted property getter: - (BTDeviceImplRef)device;	// 0x342b3dd9
- (void)disconnect;	// 0x342b4129
- (void)endVoiceCommand;	// 0x342b4009
- (BOOL)isAccessory;	// 0x342b4215
// converted property getter: - (BOOL)isLowEnergy;	// 0x342b3e01
- (BOOL)isServiceSupported:(unsigned)supported;	// 0x342b41e1
- (unsigned)majorClass;	// 0x342b44c1
- (unsigned)minorClass;	// 0x342b4495
// converted property getter: - (id)name;	// 0x342b4555
- (BOOL)paired;	// 0x342b43a9
- (id)scoUID;	// 0x342b43d9
// converted property setter: - (void)setDevice:(BTDeviceImplRef)device;	// 0x342b3de9
- (void)setPIN:(id)pin;	// 0x342b40ed
- (void)setSyncGroup:(int)group enabled:(BOOL)enabled;	// 0x342b3eb1
// converted property setter: - (void)setSyncSettings:(XXStruct_La4IvC)settings;	// 0x342b3f75
- (void)startVoiceCommand;	// 0x342b4041
- (BOOL)supportsBatteryLevel;	// 0x342b42e9
- (id)syncGroups;	// 0x342b3ec9
// converted property getter: - (XXStruct_La4IvC)syncSettings;	// 0x342b3fc9
- (int)type;	// 0x342b44ed
- (void)unpair;	// 0x342b4079
@end

