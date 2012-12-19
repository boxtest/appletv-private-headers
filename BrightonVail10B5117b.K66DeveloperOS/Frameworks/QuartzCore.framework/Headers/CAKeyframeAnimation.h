/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAPropertyAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, NSArray;

@interface CAKeyframeAnimation : CAPropertyAnimation {
}
@property(copy) NSArray *biasValues;	// G=0x32b78425; S=0x32b7843d; 
@property(copy) NSString *calculationMode;	// G=0x32adb6dd; S=0x32acedd5; 
@property(copy) NSArray *continuityValues;	// G=0x32b783f5; S=0x32b7840d; 
@property(copy) NSArray *keyTimes;	// G=0x32adb795; S=0x32aee615; 
@property(assign) CGPathRef path;	// G=0x32adb755; S=0x32b775a5; 
@property(copy) NSString *rotationMode;	// G=0x32adb7c5; S=0x32b78455; 
@property(copy) NSArray *tensionValues;	// G=0x32b783c5; S=0x32b783dd; 
@property(copy) NSArray *timingFunctions;	// G=0x32adb7ad; S=0x32b7758d; 
@property(copy) NSArray *values;	// G=0x32adb2b5; S=0x32acedbd; 
- (void)CA_prepareRenderValue;	// 0x32adb245
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x32adb2cd
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x32adb359
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x32b775c1
// declared property getter: - (id)biasValues;	// 0x32b78425
// declared property getter: - (id)calculationMode;	// 0x32adb6dd
// declared property getter: - (id)continuityValues;	// 0x32b783f5
// declared property getter: - (id)keyTimes;	// 0x32adb795
// declared property getter: - (CGPathRef)path;	// 0x32adb755
// declared property getter: - (id)rotationMode;	// 0x32adb7c5
// declared property setter: - (void)setBiasValues:(id)values;	// 0x32b7843d
// declared property setter: - (void)setCalculationMode:(id)mode;	// 0x32acedd5
// declared property setter: - (void)setContinuityValues:(id)values;	// 0x32b7840d
// declared property setter: - (void)setKeyTimes:(id)times;	// 0x32aee615
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x32b775a5
// declared property setter: - (void)setRotationMode:(id)mode;	// 0x32b78455
// declared property setter: - (void)setTensionValues:(id)values;	// 0x32b783dd
// declared property setter: - (void)setTimingFunctions:(id)functions;	// 0x32b7758d
// declared property setter: - (void)setValues:(id)values;	// 0x32acedbd
// declared property getter: - (id)tensionValues;	// 0x32b783c5
// declared property getter: - (id)timingFunctions;	// 0x32adb7ad
// declared property getter: - (id)values;	// 0x32adb2b5
@end
