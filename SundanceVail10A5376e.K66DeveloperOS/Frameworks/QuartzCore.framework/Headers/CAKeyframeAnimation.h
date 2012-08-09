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
@property(copy) NSArray *biasValues;	// G=0x33d5c55d; S=0x33d5c575; 
@property(copy) NSString *calculationMode;	// G=0x33cbf7e5; S=0x33cb2eed; 
@property(copy) NSArray *continuityValues;	// G=0x33d5c52d; S=0x33d5c545; 
@property(copy) NSArray *keyTimes;	// G=0x33cbf89d; S=0x33cd272d; 
@property(assign) CGPathRef path;	// G=0x33cbf85d; S=0x33d5b6dd; 
@property(copy) NSString *rotationMode;	// G=0x33cbf8cd; S=0x33d5c58d; 
@property(copy) NSArray *tensionValues;	// G=0x33d5c4fd; S=0x33d5c515; 
@property(copy) NSArray *timingFunctions;	// G=0x33cbf8b5; S=0x33d5b6c5; 
@property(copy) NSArray *values;	// G=0x33cbf3bd; S=0x33cb2ed5; 
- (void)CA_prepareRenderValue;	// 0x33cbf34d
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x33cbf3d5
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x33cbf461
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x33d5b6f9
// declared property getter: - (id)biasValues;	// 0x33d5c55d
// declared property getter: - (id)calculationMode;	// 0x33cbf7e5
// declared property getter: - (id)continuityValues;	// 0x33d5c52d
// declared property getter: - (id)keyTimes;	// 0x33cbf89d
// declared property getter: - (CGPathRef)path;	// 0x33cbf85d
// declared property getter: - (id)rotationMode;	// 0x33cbf8cd
// declared property setter: - (void)setBiasValues:(id)values;	// 0x33d5c575
// declared property setter: - (void)setCalculationMode:(id)mode;	// 0x33cb2eed
// declared property setter: - (void)setContinuityValues:(id)values;	// 0x33d5c545
// declared property setter: - (void)setKeyTimes:(id)times;	// 0x33cd272d
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x33d5b6dd
// declared property setter: - (void)setRotationMode:(id)mode;	// 0x33d5c58d
// declared property setter: - (void)setTensionValues:(id)values;	// 0x33d5c515
// declared property setter: - (void)setTimingFunctions:(id)functions;	// 0x33d5b6c5
// declared property setter: - (void)setValues:(id)values;	// 0x33cb2ed5
// declared property getter: - (id)tensionValues;	// 0x33d5c4fd
// declared property getter: - (id)timingFunctions;	// 0x33cbf8b5
// declared property getter: - (id)values;	// 0x33cbf3bd
@end
