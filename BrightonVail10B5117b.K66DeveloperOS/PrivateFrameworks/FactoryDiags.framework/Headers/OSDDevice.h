/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSDictionary;

@interface OSDDevice : NSObject {
	NSString *_deviceName;	// 4 = 0x4
	NSString *_serialNumber;	// 8 = 0x8
	NSString *_socType;	// 12 = 0xc
	NSString *_batteryID;	// 16 = 0x10
	NSString *_buildVer;	// 20 = 0x14
	NSString *_buildTrain;	// 24 = 0x18
	NSString *_osVersion;	// 28 = 0x1c
	int _deviceType;	// 32 = 0x20
	NSDictionary *_properties;	// 36 = 0x24
	NSArray *_capabilities;	// 40 = 0x28
	NSArray *_pmuFaults;	// 44 = 0x2c
	int _ntcShutdown;	// 48 = 0x30
	NSString *name;	// 52 = 0x34
	NSString *modelName;	// 56 = 0x38
	int type;	// 60 = 0x3c
	NSString *buildVersion;	// 64 = 0x40
	NSString *bootArgs;	// 68 = 0x44
	NSString *serialNumber;	// 72 = 0x48
	BOOL iPxControlBits;	// 76 = 0x4c
	BOOL bonfireControlBits;	// 77 = 0x4d
	BOOL batteryLevelLockout;	// 78 = 0x4e
	float minBrickCurrent;	// 80 = 0x50
	NSArray *pmuFaultLog;	// 84 = 0x54
	BOOL wasNTCShutdown;	// 88 = 0x58
	BOOL prodFused;	// 89 = 0x59
	BOOL hasWiFi;	// 90 = 0x5a
	BOOL hasCompass;	// 91 = 0x5b
	BOOL hasGyro;	// 92 = 0x5c
	BOOL hasALS;	// 93 = 0x5d
	BOOL hasGPS;	// 94 = 0x5e
	BOOL hasBaseband;	// 95 = 0x5f
	BOOL hasGasGauge;	// 96 = 0x60
	BOOL hasTelephony;	// 97 = 0x61
	BOOL hasBackCamera;	// 98 = 0x62
	BOOL hasFrontCamera;	// 99 = 0x63
	BOOL hasAccelerometer;	// 100 = 0x64
	BOOL hasMicrophone;	// 101 = 0x65
	BOOL hasAudio;	// 102 = 0x66
	BOOL hasProximity;	// 103 = 0x67
	BOOL has3GProximity;	// 104 = 0x68
	BOOL hasVolumeButtons;	// 105 = 0x69
	BOOL hasRingerSwitch;	// 106 = 0x6a
	BOOL hasReceiver;	// 107 = 0x6b
	BOOL hasBluetooth;	// 108 = 0x6c
	BOOL hasStrobe;	// 109 = 0x6d
	BOOL hasLatch;	// 110 = 0x6e
	NSString *socType;	// 112 = 0x70
}
@property(readonly, assign, getter=_batteryID) NSString *batteryId;	// G=0x340d02a1; 
@property(readonly, assign, getter=_battLevelLockout) BOOL batteryLevelLockout;	// G=0x340d057d; @synthesize
@property(readonly, assign, getter=_bonfireControlBits) BOOL bonfireControlBits;	// G=0x340d0531; @synthesize
@property(assign, getter=getBootArgs, setter=setBootArgs:) NSString *bootArgs;	// G=0x340d0fa9; S=0x340d1149; @synthesize
@property(readonly, assign, getter=_buildTrain) NSString *buildTrain;	// G=0x340d0445; 
@property(readonly, assign, getter=_productBuildVersion) NSString *buildVersion;	// G=0x340d0211; @synthesize
@property(readonly, assign, getter=_expectedAdapterID) int expectedAdapterID;	// G=0x340d0609; 
@property(readonly, assign, getter=_has3GProximity) BOOL has3GProximity;	// G=0x340cfe15; @synthesize
@property(readonly, assign, getter=_hasALS) BOOL hasALS;	// G=0x340cfc05; @synthesize
@property(readonly, assign, getter=_hasAccelerometer) BOOL hasAccelerometer;	// G=0x340cfd55; @synthesize
@property(readonly, assign, getter=_hasAudio) BOOL hasAudio;	// G=0x340cfdb5; @synthesize
@property(readonly, assign, getter=_hasBackCamera) BOOL hasBackCamera;	// G=0x340cfcf5; @synthesize
@property(readonly, assign, getter=_hasBaseband) BOOL hasBaseband;	// G=0x340cfc65; @synthesize
@property(readonly, assign, getter=_hasBluetooth) BOOL hasBluetooth;	// G=0x340cfed5; @synthesize
@property(readonly, assign, getter=_hasCompass) BOOL hasCompass;	// G=0x340cfba5; @synthesize
@property(readonly, assign, getter=_hasFrontCamera) BOOL hasFrontCamera;	// G=0x340cfd25; @synthesize
@property(readonly, assign, getter=_hasGPS) BOOL hasGPS;	// G=0x340cfc35; @synthesize
@property(readonly, assign, getter=_hasGasGauge) BOOL hasGasGauge;	// G=0x340cfc95; @synthesize
@property(readonly, assign, getter=_hasGyro) BOOL hasGyro;	// G=0x340cfbd5; @synthesize
@property(readonly, assign, getter=_hasInvertedDisplay) BOOL hasInvertedDisplay;	// G=0x340d0845; 
@property(readonly, assign, getter=_hasLatch) BOOL hasLatch;	// G=0x340cff35; @synthesize
@property(readonly, assign, getter=_hasLatch_Flap1) BOOL hasLatchFlap1;	// G=0x340cff65; 
@property(readonly, assign, getter=_hasLatch_Flap2) BOOL hasLatchFlap2;	// G=0x340cff95; 
@property(readonly, assign, getter=_hasLatch_Flap3) BOOL hasLatchFlap3;	// G=0x340cffc5; 
@property(readonly, assign, getter=_hasMicrophone) BOOL hasMicrophone;	// G=0x340cfd85; @synthesize
@property(readonly, assign, getter=_hasProximity) BOOL hasProximity;	// G=0x340cfde5; @synthesize
@property(readonly, assign, getter=_hasReceiver) BOOL hasReceiver;	// G=0x340cfea5; @synthesize
@property(readonly, assign, getter=_hasRingerSwitch) BOOL hasRingerSwitch;	// G=0x340cfe75; @synthesize
@property(readonly, assign, getter=_hasStrobe) BOOL hasStrobe;	// G=0x340cff05; @synthesize
@property(readonly, assign, getter=_hasTelephony) BOOL hasTelephony;	// G=0x340cfcc5; @synthesize
@property(readonly, assign, getter=_hasVolumeButtons) BOOL hasVolumeButtons;	// G=0x340cfe45; @synthesize
@property(readonly, assign, getter=_hasWiFi) BOOL hasWiFi;	// G=0x340cfb75; @synthesize
@property(readonly, assign, getter=_iPxControlBits) BOOL iPxControlBits;	// G=0x340d04e5; @synthesize
@property(readonly, assign, getter=_minBrickCurrent) float minBrickCurrent;	// G=0x340d05c9; @synthesize
@property(readonly, assign, getter=_modelName) NSString *modelName;	// G=0x340d0181; @synthesize
@property(readonly, assign, getter=_deviceName) NSString *name;	// G=0x340d00f1; @synthesize
@property(readonly, assign, getter=_osVersion) NSString *osVersion;	// G=0x340d0451; 
@property(readonly, assign, getter=_pmuFaultLog) NSArray *pmuFaultLog;	// G=0x340d0649; @synthesize
@property(readonly, assign, getter=_isProdFused) BOOL prodFused;	// G=0x340d0805; @synthesize
@property(readonly, assign, getter=_serialNumber) NSString *serialNumber;	// G=0x340d03b5; @synthesize
@property(readonly, assign, getter=_socType) NSString *socType;	// G=0x340cfaa9; @synthesize
@property(readonly, assign, getter=_deviceType) int type;	// G=0x340cfff5; @synthesize
@property(readonly, assign, getter=_wasNTCShutdown) BOOL wasNTCShutdown;	// G=0x340d07a9; @synthesize
+ (void)initialize;	// 0x340d0875
+ (id)sharedInstance;	// 0x340d08cd
- (id)init;	// 0x340d0c25
// declared property getter: - (BOOL)_battLevelLockout;	// 0x340d057d
// declared property getter: - (id)_batteryID;	// 0x340d02a1
// declared property getter: - (BOOL)_bonfireControlBits;	// 0x340d0531
// declared property getter: - (id)_buildTrain;	// 0x340d0445
// declared property getter: - (id)_deviceName;	// 0x340d00f1
// declared property getter: - (int)_deviceType;	// 0x340cfff5
// declared property getter: - (int)_expectedAdapterID;	// 0x340d0609
// declared property getter: - (BOOL)_has3GProximity;	// 0x340cfe15
// declared property getter: - (BOOL)_hasALS;	// 0x340cfc05
// declared property getter: - (BOOL)_hasAccelerometer;	// 0x340cfd55
// declared property getter: - (BOOL)_hasAudio;	// 0x340cfdb5
// declared property getter: - (BOOL)_hasBackCamera;	// 0x340cfcf5
// declared property getter: - (BOOL)_hasBaseband;	// 0x340cfc65
// declared property getter: - (BOOL)_hasBluetooth;	// 0x340cfed5
// declared property getter: - (BOOL)_hasCompass;	// 0x340cfba5
// declared property getter: - (BOOL)_hasFrontCamera;	// 0x340cfd25
// declared property getter: - (BOOL)_hasGPS;	// 0x340cfc35
// declared property getter: - (BOOL)_hasGasGauge;	// 0x340cfc95
// declared property getter: - (BOOL)_hasGyro;	// 0x340cfbd5
// declared property getter: - (BOOL)_hasInvertedDisplay;	// 0x340d0845
// declared property getter: - (BOOL)_hasLatch;	// 0x340cff35
// declared property getter: - (BOOL)_hasLatch_Flap1;	// 0x340cff65
// declared property getter: - (BOOL)_hasLatch_Flap2;	// 0x340cff95
// declared property getter: - (BOOL)_hasLatch_Flap3;	// 0x340cffc5
// declared property getter: - (BOOL)_hasMicrophone;	// 0x340cfd85
// declared property getter: - (BOOL)_hasProximity;	// 0x340cfde5
// declared property getter: - (BOOL)_hasReceiver;	// 0x340cfea5
// declared property getter: - (BOOL)_hasRingerSwitch;	// 0x340cfe75
// declared property getter: - (BOOL)_hasStrobe;	// 0x340cff05
// declared property getter: - (BOOL)_hasTelephony;	// 0x340cfcc5
// declared property getter: - (BOOL)_hasVolumeButtons;	// 0x340cfe45
// declared property getter: - (BOOL)_hasWiFi;	// 0x340cfb75
// declared property getter: - (BOOL)_iPxControlBits;	// 0x340d04e5
// declared property getter: - (BOOL)_isProdFused;	// 0x340d0805
// declared property getter: - (float)_minBrickCurrent;	// 0x340d05c9
// declared property getter: - (id)_modelName;	// 0x340d0181
// declared property getter: - (id)_osVersion;	// 0x340d0451
// declared property getter: - (id)_pmuFaultLog;	// 0x340d0649
- (id)_processDevicesPlist:(id)plist;	// 0x340d0bb1
- (void)_processDevicesPlistForAliases:(id)aliases;	// 0x340d0b75
- (void)_processForAliases:(id)aliases forDevice:(id)device withLoopTracker:(id)loopTracker;	// 0x340d08dd
// declared property getter: - (id)_productBuildVersion;	// 0x340d0211
- (id)_properties;	// 0x340cfa71
// declared property getter: - (id)_serialNumber;	// 0x340d03b5
// declared property getter: - (id)_socType;	// 0x340cfaa9
// declared property getter: - (BOOL)_wasNTCShutdown;	// 0x340d07a9
- (void)addBootArg:(id)arg;	// 0x340d1165
- (void)dealloc;	// 0x340d0e41
- (id)getBootArgParams:(id)params;	// 0x340d0fe1
// declared property getter: - (id)getBootArgs;	// 0x340d0fa9
- (int)getControlBitStationID:(int)anId;	// 0x340d1505
- (unsigned)getIOMasterPort;	// 0x340d0f35
- (id)getNVRAMArgsForKey:(id)key;	// 0x340d1399
- (id)getSwitchBoardRowCol;	// 0x340cfa81
- (BOOL)hasBootArg:(id)arg;	// 0x340d0fc5
- (BOOL)hasNVRAMKey:(id)key;	// 0x340d137d
- (void)removeBootArg:(id)arg;	// 0x340d11fd
- (void)removeNVRAMKey:(id)key;	// 0x340d14b5
// declared property setter: - (void)setBootArgs:(id)args;	// 0x340d1149
- (void)setNVRAMArgsForKey:(id)key arguments:(id)arguments;	// 0x340d1431
@end

