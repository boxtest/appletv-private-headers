/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSArray, NSString;

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
@property(readonly, assign, getter=_batteryID) NSString *batteryId;	// G=0x32a13fad; 
@property(readonly, assign, getter=_battLevelLockout) BOOL batteryLevelLockout;	// G=0x32a14289; @synthesize
@property(readonly, assign, getter=_bonfireControlBits) BOOL bonfireControlBits;	// G=0x32a1423d; @synthesize
@property(assign, getter=getBootArgs, setter=setBootArgs:) NSString *bootArgs;	// G=0x32a14c75; S=0x32a14e15; @synthesize
@property(readonly, assign, getter=_buildTrain) NSString *buildTrain;	// G=0x32a14151; 
@property(readonly, assign, getter=_productBuildVersion) NSString *buildVersion;	// G=0x32a13f1d; @synthesize
@property(readonly, assign, getter=_has3GProximity) BOOL has3GProximity;	// G=0x32a13b21; @synthesize
@property(readonly, assign, getter=_hasALS) BOOL hasALS;	// G=0x32a13911; @synthesize
@property(readonly, assign, getter=_hasAccelerometer) BOOL hasAccelerometer;	// G=0x32a13a61; @synthesize
@property(readonly, assign, getter=_hasAudio) BOOL hasAudio;	// G=0x32a13ac1; @synthesize
@property(readonly, assign, getter=_hasBackCamera) BOOL hasBackCamera;	// G=0x32a13a01; @synthesize
@property(readonly, assign, getter=_hasBaseband) BOOL hasBaseband;	// G=0x32a13971; @synthesize
@property(readonly, assign, getter=_hasBluetooth) BOOL hasBluetooth;	// G=0x32a13be1; @synthesize
@property(readonly, assign, getter=_hasCompass) BOOL hasCompass;	// G=0x32a138b1; @synthesize
@property(readonly, assign, getter=_hasFrontCamera) BOOL hasFrontCamera;	// G=0x32a13a31; @synthesize
@property(readonly, assign, getter=_hasGPS) BOOL hasGPS;	// G=0x32a13941; @synthesize
@property(readonly, assign, getter=_hasGasGauge) BOOL hasGasGauge;	// G=0x32a139a1; @synthesize
@property(readonly, assign, getter=_hasGyro) BOOL hasGyro;	// G=0x32a138e1; @synthesize
@property(readonly, assign, getter=_hasInvertedDisplay) BOOL hasInvertedDisplay;	// G=0x32a14511; 
@property(readonly, assign, getter=_hasLatch) BOOL hasLatch;	// G=0x32a13c41; @synthesize
@property(readonly, assign, getter=_hasLatch_Flap1) BOOL hasLatchFlap1;	// G=0x32a13c71; 
@property(readonly, assign, getter=_hasLatch_Flap2) BOOL hasLatchFlap2;	// G=0x32a13ca1; 
@property(readonly, assign, getter=_hasLatch_Flap3) BOOL hasLatchFlap3;	// G=0x32a13cd1; 
@property(readonly, assign, getter=_hasMicrophone) BOOL hasMicrophone;	// G=0x32a13a91; @synthesize
@property(readonly, assign, getter=_hasProximity) BOOL hasProximity;	// G=0x32a13af1; @synthesize
@property(readonly, assign, getter=_hasReceiver) BOOL hasReceiver;	// G=0x32a13bb1; @synthesize
@property(readonly, assign, getter=_hasRingerSwitch) BOOL hasRingerSwitch;	// G=0x32a13b81; @synthesize
@property(readonly, assign, getter=_hasStrobe) BOOL hasStrobe;	// G=0x32a13c11; @synthesize
@property(readonly, assign, getter=_hasTelephony) BOOL hasTelephony;	// G=0x32a139d1; @synthesize
@property(readonly, assign, getter=_hasVolumeButtons) BOOL hasVolumeButtons;	// G=0x32a13b51; @synthesize
@property(readonly, assign, getter=_hasWiFi) BOOL hasWiFi;	// G=0x32a13881; @synthesize
@property(readonly, assign, getter=_iPxControlBits) BOOL iPxControlBits;	// G=0x32a141f1; @synthesize
@property(readonly, assign, getter=_minBrickCurrent) float minBrickCurrent;	// G=0x32a142d5; @synthesize
@property(readonly, assign, getter=_modelName) NSString *modelName;	// G=0x32a13e8d; @synthesize
@property(readonly, assign, getter=_deviceName) NSString *name;	// G=0x32a13dfd; @synthesize
@property(readonly, assign, getter=_osVersion) NSString *osVersion;	// G=0x32a1415d; 
@property(readonly, assign, getter=_pmuFaultLog) NSArray *pmuFaultLog;	// G=0x32a14315; @synthesize
@property(readonly, assign, getter=_isProdFused) BOOL prodFused;	// G=0x32a144d1; @synthesize
@property(readonly, assign, getter=_serialNumber) NSString *serialNumber;	// G=0x32a140c1; @synthesize
@property(readonly, assign, getter=_socType) NSString *socType;	// G=0x32a137b5; @synthesize
@property(readonly, assign, getter=_deviceType) int type;	// G=0x32a13d01; @synthesize
@property(readonly, assign, getter=_wasNTCShutdown) BOOL wasNTCShutdown;	// G=0x32a14475; @synthesize
+ (void)initialize;	// 0x32a14541
+ (id)sharedInstance;	// 0x32a14599
- (id)init;	// 0x32a148f1
// declared property getter: - (BOOL)_battLevelLockout;	// 0x32a14289
// declared property getter: - (id)_batteryID;	// 0x32a13fad
// declared property getter: - (BOOL)_bonfireControlBits;	// 0x32a1423d
// declared property getter: - (id)_buildTrain;	// 0x32a14151
// declared property getter: - (id)_deviceName;	// 0x32a13dfd
// declared property getter: - (int)_deviceType;	// 0x32a13d01
// declared property getter: - (BOOL)_has3GProximity;	// 0x32a13b21
// declared property getter: - (BOOL)_hasALS;	// 0x32a13911
// declared property getter: - (BOOL)_hasAccelerometer;	// 0x32a13a61
// declared property getter: - (BOOL)_hasAudio;	// 0x32a13ac1
// declared property getter: - (BOOL)_hasBackCamera;	// 0x32a13a01
// declared property getter: - (BOOL)_hasBaseband;	// 0x32a13971
// declared property getter: - (BOOL)_hasBluetooth;	// 0x32a13be1
// declared property getter: - (BOOL)_hasCompass;	// 0x32a138b1
// declared property getter: - (BOOL)_hasFrontCamera;	// 0x32a13a31
// declared property getter: - (BOOL)_hasGPS;	// 0x32a13941
// declared property getter: - (BOOL)_hasGasGauge;	// 0x32a139a1
// declared property getter: - (BOOL)_hasGyro;	// 0x32a138e1
// declared property getter: - (BOOL)_hasInvertedDisplay;	// 0x32a14511
// declared property getter: - (BOOL)_hasLatch;	// 0x32a13c41
// declared property getter: - (BOOL)_hasLatch_Flap1;	// 0x32a13c71
// declared property getter: - (BOOL)_hasLatch_Flap2;	// 0x32a13ca1
// declared property getter: - (BOOL)_hasLatch_Flap3;	// 0x32a13cd1
// declared property getter: - (BOOL)_hasMicrophone;	// 0x32a13a91
// declared property getter: - (BOOL)_hasProximity;	// 0x32a13af1
// declared property getter: - (BOOL)_hasReceiver;	// 0x32a13bb1
// declared property getter: - (BOOL)_hasRingerSwitch;	// 0x32a13b81
// declared property getter: - (BOOL)_hasStrobe;	// 0x32a13c11
// declared property getter: - (BOOL)_hasTelephony;	// 0x32a139d1
// declared property getter: - (BOOL)_hasVolumeButtons;	// 0x32a13b51
// declared property getter: - (BOOL)_hasWiFi;	// 0x32a13881
// declared property getter: - (BOOL)_iPxControlBits;	// 0x32a141f1
// declared property getter: - (BOOL)_isProdFused;	// 0x32a144d1
// declared property getter: - (float)_minBrickCurrent;	// 0x32a142d5
// declared property getter: - (id)_modelName;	// 0x32a13e8d
// declared property getter: - (id)_osVersion;	// 0x32a1415d
// declared property getter: - (id)_pmuFaultLog;	// 0x32a14315
- (id)_processDevicesPlist:(id)plist;	// 0x32a1487d
- (void)_processDevicesPlistForAliases:(id)aliases;	// 0x32a14841
- (void)_processForAliases:(id)aliases forDevice:(id)device withLoopTracker:(id)loopTracker;	// 0x32a145a9
// declared property getter: - (id)_productBuildVersion;	// 0x32a13f1d
- (id)_properties;	// 0x32a1377d
// declared property getter: - (id)_serialNumber;	// 0x32a140c1
// declared property getter: - (id)_socType;	// 0x32a137b5
// declared property getter: - (BOOL)_wasNTCShutdown;	// 0x32a14475
- (void)addBootArg:(id)arg;	// 0x32a14e31
- (void)dealloc;	// 0x32a14b0d
- (id)getBootArgParams:(id)params;	// 0x32a14cad
// declared property getter: - (id)getBootArgs;	// 0x32a14c75
- (int)getControlBitStationID:(int)anId;	// 0x32a151d1
- (unsigned)getIOMasterPort;	// 0x32a14c01
- (id)getNVRAMArgsForKey:(id)key;	// 0x32a15065
- (id)getSwitchBoardRowCol;	// 0x32a1378d
- (BOOL)hasBootArg:(id)arg;	// 0x32a14c91
- (BOOL)hasNVRAMKey:(id)key;	// 0x32a15049
- (void)removeBootArg:(id)arg;	// 0x32a14ec9
- (void)removeNVRAMKey:(id)key;	// 0x32a15181
// declared property setter: - (void)setBootArgs:(id)args;	// 0x32a14e15
- (void)setNVRAMArgsForKey:(id)key arguments:(id)arguments;	// 0x32a150fd
@end
