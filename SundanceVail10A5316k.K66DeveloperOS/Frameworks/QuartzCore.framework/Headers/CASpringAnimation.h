/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CABasicAnimation.h"
#import "QuartzCore-Structs.h"


@interface CASpringAnimation : CABasicAnimation {
}
@property(assign) float damping;	// G=0x32af4f5d; S=0x32af4f75; 
@property(assign) float mass;	// G=0x32af4efd; S=0x32af4f15; 
@property(assign) float stiffness;	// G=0x32af4f2d; S=0x32af4f45; 
@property(assign) float velocity;	// G=0x32af4f8d; S=0x32af4fa5; 
+ (id)defaultValueForKey:(id)key;	// 0x32af4c41
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x32af4dbd
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x32af4dfd
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x32af4d09
- (double)_timeFunction:(double)function;	// 0x32af4e1d
// declared property getter: - (float)damping;	// 0x32af4f5d
// declared property getter: - (float)mass;	// 0x32af4efd
// declared property setter: - (void)setDamping:(float)damping;	// 0x32af4f75
// declared property setter: - (void)setMass:(float)mass;	// 0x32af4f15
// declared property setter: - (void)setStiffness:(float)stiffness;	// 0x32af4f45
// declared property setter: - (void)setVelocity:(float)velocity;	// 0x32af4fa5
// declared property getter: - (float)stiffness;	// 0x32af4f2d
// declared property getter: - (float)velocity;	// 0x32af4f8d
@end

