/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "CoreMotion-Structs.h"


@interface CMAttitude : NSObject <NSCopying, NSCoding> {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double pitch;	// G=0x331cc109; 
@property(readonly, assign, nonatomic) XXStruct_mouQIC quaternion;	// G=0x331cbe85; 
@property(readonly, assign, nonatomic) double roll;	// G=0x331cc12d; 
@property(readonly, assign, nonatomic) XXStruct_Wz$NiD rotationMatrix;	// G=0x331cc04d; 
@property(readonly, assign, nonatomic) double yaw;	// G=0x331cc0e5; 
- (id)initWithCoder:(id)coder;	// 0x331cc3a1
- (id)initWithQuaternion:(XXStruct_mouQIC)quaternion;	// 0x331cbf45
- (id)copyWithZone:(NSZone *)zone;	// 0x331cc1e9
- (void)dealloc;	// 0x331cc261
- (id)description;	// 0x331cc151
- (void)encodeWithCoder:(id)coder;	// 0x331cc301
- (void)multiplyByInverseOfAttitude:(id)attitude;	// 0x331cbfe5
// declared property getter: - (double)pitch;	// 0x331cc109
// declared property getter: - (XXStruct_mouQIC)quaternion;	// 0x331cbe85
// declared property getter: - (double)roll;	// 0x331cc12d
// declared property getter: - (XXStruct_Wz$NiD)rotationMatrix;	// 0x331cc04d
- (void)setQuaternion:(XXStruct_mouQIC)quaternion;	// 0x331cc2ad
// declared property getter: - (double)yaw;	// 0x331cc0e5
@end

