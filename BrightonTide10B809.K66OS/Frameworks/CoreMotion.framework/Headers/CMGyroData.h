/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "CMLogItem.h"


@interface CMGyroData : CMLogItem {
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB rotationRate;	// G=0x316b1bf9; 
- (id)initWithCoder:(id)coder;	// 0x316b1871
- (id)initWithRotationRate:(XXStruct_ZUkpeA)rotationRate andTimestamp:(double)timestamp;	// 0x316b17e5
- (id)copyWithZone:(NSZone *)zone;	// 0x316b1acd
- (void)dealloc;	// 0x316b1a81
- (id)description;	// 0x316b1b29
- (void)encodeWithCoder:(id)coder;	// 0x316b1991
// declared property getter: - (XXStruct_taVrlB)rotationRate;	// 0x316b1bf9
@end
