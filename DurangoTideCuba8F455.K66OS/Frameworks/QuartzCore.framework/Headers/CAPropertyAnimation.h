/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation {
}
@property(assign, getter=isAdditive) BOOL additive;	// G=0x333b5d2d; S=0x333b7bbd; 
@property(assign, getter=isCumulative) BOOL cumulative;	// G=0x333b5d3d; S=0x3340fcf1; 
@property(copy) NSString *keyPath;	// G=0x333b1bd9; S=0x333b1259; 
@property(retain) CAValueFunction *valueFunction;	// G=0x333b5d4d; S=0x333b7f11; 
+ (id)animationWithKeyPath:(id)keyPath;	// 0x333b1211
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x333b1ee5
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x333b58cd
- (BOOL)additive;	// 0x3340f7c1
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x3340f269
- (BOOL)cumulative;	// 0x3340f7a9
// declared property getter: - (BOOL)isAdditive;	// 0x333b5d2d
// declared property getter: - (BOOL)isCumulative;	// 0x333b5d3d
// declared property getter: - (id)keyPath;	// 0x333b1bd9
// declared property setter: - (void)setAdditive:(BOOL)additive;	// 0x333b7bbd
// declared property setter: - (void)setCumulative:(BOOL)cumulative;	// 0x3340fcf1
// declared property setter: - (void)setKeyPath:(id)path;	// 0x333b1259
// declared property setter: - (void)setValueFunction:(id)function;	// 0x333b7f11
// declared property getter: - (id)valueFunction;	// 0x333b5d4d
@end
