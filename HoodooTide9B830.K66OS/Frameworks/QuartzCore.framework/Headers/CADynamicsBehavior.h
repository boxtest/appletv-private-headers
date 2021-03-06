/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CABehavior.h"

@class NSArray;

@interface CADynamicsBehavior : CABehavior {
}
@property(assign) float angularDrag;	// G=0x36cd55f5; S=0x36cd53c5; 
@property(assign) double collisionInterval;	// G=0x36cd5571; S=0x36cd5341; 
@property(assign) float drag;	// G=0x36cd55dd; S=0x36cd53ad; 
@property(copy) NSArray *forceFields;	// G=0x36cd54f5; S=0x36cd52c5; 
@property(assign) double minimumTimeStep;	// G=0x36cd554d; S=0x36cd531d; 
@property(assign) BOOL reactsToCollisions;	// G=0x36cd550d; S=0x36cd52dd; 
@property(assign) float springScale;	// G=0x36cd55c5; S=0x36cd5395; 
@property(copy) NSArray *springs;	// G=0x36cd54dd; S=0x36cd52ad; 
@property(assign) float stoppedAngularVelocity;	// G=0x36cd55ad; S=0x36cd537d; 
@property(assign) float stoppedVelocity;	// G=0x36cd5595; S=0x36cd5365; 
@property(assign) double timeStep;	// G=0x36cd5529; S=0x36cd52f9; 
+ (id)defaultValueForKey:(id)key;	// 0x36cd50fd
- (Object *)CA_copyRenderValue;	// 0x36cd560d
// declared property getter: - (float)angularDrag;	// 0x36cd55f5
// declared property getter: - (double)collisionInterval;	// 0x36cd5571
// declared property getter: - (float)drag;	// 0x36cd55dd
// declared property getter: - (id)forceFields;	// 0x36cd54f5
// declared property getter: - (double)minimumTimeStep;	// 0x36cd554d
// declared property getter: - (BOOL)reactsToCollisions;	// 0x36cd550d
// declared property setter: - (void)setAngularDrag:(float)drag;	// 0x36cd53c5
// declared property setter: - (void)setCollisionInterval:(double)interval;	// 0x36cd5341
// declared property setter: - (void)setDrag:(float)drag;	// 0x36cd53ad
// declared property setter: - (void)setForceFields:(id)fields;	// 0x36cd52c5
// declared property setter: - (void)setMinimumTimeStep:(double)step;	// 0x36cd531d
// declared property setter: - (void)setReactsToCollisions:(BOOL)collisions;	// 0x36cd52dd
// declared property setter: - (void)setSpringScale:(float)scale;	// 0x36cd5395
// declared property setter: - (void)setSprings:(id)springs;	// 0x36cd52ad
// declared property setter: - (void)setStoppedAngularVelocity:(float)velocity;	// 0x36cd537d
// declared property setter: - (void)setStoppedVelocity:(float)velocity;	// 0x36cd5365
// declared property setter: - (void)setTimeStep:(double)step;	// 0x36cd52f9
// declared property getter: - (float)springScale;	// 0x36cd55c5
// declared property getter: - (id)springs;	// 0x36cd54dd
// declared property getter: - (float)stoppedAngularVelocity;	// 0x36cd55ad
// declared property getter: - (float)stoppedVelocity;	// 0x36cd5595
// declared property getter: - (double)timeStep;	// 0x36cd5529
@end

