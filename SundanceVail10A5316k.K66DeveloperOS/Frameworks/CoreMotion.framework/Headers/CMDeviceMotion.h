/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "CMLogItem.h"

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {
@private
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CMAttitude *attitude;	// G=0x36de1741; 
@property(readonly, assign, nonatomic) XXStruct_taVrlB gravity;	// G=0x36de17a5; 
@property(readonly, assign, nonatomic) XXStruct_1dFDiB magneticField;	// G=0x36de182d; 
@property(readonly, assign, nonatomic) XXStruct_taVrlB rotationRate;	// G=0x36de1761; 
@property(readonly, assign, nonatomic) XXStruct_taVrlB userAcceleration;	// G=0x36de17e9; 
- (id)initWithCoder:(id)coder;	// 0x36de0e09
- (id)initWithDeviceMotion:(XXStruct_cN_7IB)deviceMotion andTimestamp:(double)timestamp;	// 0x36de0d25
// declared property getter: - (id)attitude;	// 0x36de1741
- (id)copyWithZone:(NSZone *)zone;	// 0x36de144d
- (void)dealloc;	// 0x36de1401
- (id)description;	// 0x36de14a9
- (bool)doingBiasEstimation;	// 0x36de18f5
- (bool)doingYawCorrection;	// 0x36de18d1
- (void)encodeWithCoder:(id)coder;	// 0x36de1149
// declared property getter: - (XXStruct_taVrlB)gravity;	// 0x36de17a5
// declared property getter: - (XXStruct_1dFDiB)magneticField;	// 0x36de182d
- (int)magneticFieldCalibrationLevel;	// 0x36de18b1
// declared property getter: - (XXStruct_taVrlB)rotationRate;	// 0x36de1761
// declared property getter: - (XXStruct_taVrlB)userAcceleration;	// 0x36de17e9
@end

