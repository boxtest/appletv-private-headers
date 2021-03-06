/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSDictionary;

@interface OSDIOAccessory : NSObject {
	unsigned _accessoryService;	// 4 = 0x4
}
@property(readonly, assign, getter=_CFBundleIdentifier) NSString *CFBundleIdentifier;	// G=0x34ef2aa1; 
@property(readonly, assign, getter=_IOAccessoryDetect) BOOL IOAccessoryDetect;	// G=0x34ef2ad5; 
@property(readonly, assign, getter=_IOAccessoryID) int IOAccessoryID;	// G=0x34ef2c15; 
@property(readonly, assign, getter=_IOAccessoryManagerSleepPower) BOOL IOAccessoryManagerSleepPower;	// G=0x34ef2b15; 
@property(readonly, assign, getter=_IOAccessoryManagerSystemID) int IOAccessoryManagerSystemID;	// G=0x34ef2c59; 
@property(readonly, assign, getter=_IOAccessoryManagerType) int IOAccessoryManagerType;	// G=0x34ef2c9d; 
@property(readonly, assign, getter=_IOAccessoryOrientation) int IOAccessoryOrientation;	// G=0x34ef2ce1; 
@property(readonly, assign, getter=_IOAccessoryPowerCurrentLimits) NSArray *IOAccessoryPowerCurrentLimits;	// G=0x34ef2f35; 
@property(readonly, assign, getter=_IOAccessoryPowerHandshake) BOOL IOAccessoryPowerHandshake;	// G=0x34ef2b95; 
@property(readonly, assign, getter=_IOAccessoryPowerMode) int IOAccessoryPowerMode;	// G=0x34ef2d25; 
@property(readonly, assign, getter=_IOAccessoryPrimaryDevicePort) int IOAccessoryPrimaryDevicePort;	// G=0x34ef2d69; 
@property(readonly, assign, getter=_IOAccessorySupportedPowerModes) NSArray *IOAccessorySupportedPowerModes;	// G=0x34ef2f01; 
@property(readonly, assign, getter=_IOAccessoryUSBActive) BOOL IOAccessoryUSBActive;	// G=0x34ef2bd5; 
@property(readonly, assign, getter=_IOAccessoryUSBConnectType) int IOAccessoryUSBConnectType;	// G=0x34ef2dad; 
@property(readonly, assign, getter=_IOAccessoryUSBCurrentLimit) int IOAccessoryUSBCurrentLimit;	// G=0x34ef2df1; 
@property(readonly, assign, getter=_IOAccessoryUSBCurrentLimitBase) int IOAccessoryUSBCurrentLimitBase;	// G=0x34ef2e35; 
@property(readonly, assign, getter=_IOAccessoryUSBCurrentLimitOffset) int IOAccessoryUSBCurrentLimitOffset;	// G=0x34ef2e79; 
@property(readonly, assign, getter=_IOAccessoryUSBPower) BOOL IOAccessoryUSBPower;	// G=0x34ef2b55; 
@property(readonly, assign, getter=_IOClass) NSString *IOClass;	// G=0x34ef2f9d; 
@property(readonly, assign, getter=_IOGeneralInterest) NSString *IOGeneralInterest;	// G=0x34ef2fd1; 
@property(readonly, assign, getter=_IOMatchCategory) NSString *IOMatchCategory;	// G=0x34ef3005; 
@property(readonly, assign, getter=_IONameMatch) NSArray *IONameMatch;	// G=0x34ef2f69; 
@property(readonly, assign, getter=_IONameMatched) NSString *IONameMatched;	// G=0x34ef3039; 
@property(readonly, assign, getter=_IOProbeScore) int IOProbeScore;	// G=0x34ef2ebd; 
@property(readonly, assign, getter=_IOProviderClass) NSString *IOProviderClass;	// G=0x34ef306d; 
@property(readonly, assign, getter=_IOUserClientClass) NSString *IOUserClientClass;	// G=0x34ef30a1; 
@property(readonly, assign, getter=_TriStarREV) int TriStarREV;	// G=0x34ef30d5; 
@property(readonly, assign, getter=_getAccessoryProperties) NSDictionary *getAccessoryProperties;	// G=0x34ef2a5d; 
@property(readonly, assign, getter=_getAccessoryService) unsigned getAccessoryService;	// G=0x34ef2a19; 
+ (void)initialize;	// 0x34ef3119
+ (id)sharedInstance;	// 0x34ef3171
- (id)init;	// 0x34ef3181
// declared property getter: - (id)_CFBundleIdentifier;	// 0x34ef2aa1
// declared property getter: - (BOOL)_IOAccessoryDetect;	// 0x34ef2ad5
// declared property getter: - (int)_IOAccessoryID;	// 0x34ef2c15
// declared property getter: - (BOOL)_IOAccessoryManagerSleepPower;	// 0x34ef2b15
// declared property getter: - (int)_IOAccessoryManagerSystemID;	// 0x34ef2c59
// declared property getter: - (int)_IOAccessoryManagerType;	// 0x34ef2c9d
// declared property getter: - (int)_IOAccessoryOrientation;	// 0x34ef2ce1
// declared property getter: - (id)_IOAccessoryPowerCurrentLimits;	// 0x34ef2f35
// declared property getter: - (BOOL)_IOAccessoryPowerHandshake;	// 0x34ef2b95
// declared property getter: - (int)_IOAccessoryPowerMode;	// 0x34ef2d25
// declared property getter: - (int)_IOAccessoryPrimaryDevicePort;	// 0x34ef2d69
// declared property getter: - (id)_IOAccessorySupportedPowerModes;	// 0x34ef2f01
// declared property getter: - (BOOL)_IOAccessoryUSBActive;	// 0x34ef2bd5
// declared property getter: - (int)_IOAccessoryUSBConnectType;	// 0x34ef2dad
// declared property getter: - (int)_IOAccessoryUSBCurrentLimit;	// 0x34ef2df1
// declared property getter: - (int)_IOAccessoryUSBCurrentLimitBase;	// 0x34ef2e35
// declared property getter: - (int)_IOAccessoryUSBCurrentLimitOffset;	// 0x34ef2e79
// declared property getter: - (BOOL)_IOAccessoryUSBPower;	// 0x34ef2b55
// declared property getter: - (id)_IOClass;	// 0x34ef2f9d
// declared property getter: - (id)_IOGeneralInterest;	// 0x34ef2fd1
// declared property getter: - (id)_IOMatchCategory;	// 0x34ef3005
// declared property getter: - (id)_IONameMatch;	// 0x34ef2f69
// declared property getter: - (id)_IONameMatched;	// 0x34ef3039
// declared property getter: - (int)_IOProbeScore;	// 0x34ef2ebd
// declared property getter: - (id)_IOProviderClass;	// 0x34ef306d
// declared property getter: - (id)_IOUserClientClass;	// 0x34ef30a1
// declared property getter: - (int)_TriStarREV;	// 0x34ef30d5
// declared property getter: - (id)_getAccessoryProperties;	// 0x34ef2a5d
// declared property getter: - (unsigned)_getAccessoryService;	// 0x34ef2a19
- (void)dealloc;	// 0x34ef3219
@end

