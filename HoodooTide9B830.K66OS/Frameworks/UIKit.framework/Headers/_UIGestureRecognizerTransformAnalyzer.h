/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _UIGestureRecognizerTransformAnalyzer : NSObject {
@private
	float _lowPassTranslationMagnitudeDelta;	// 4 = 0x4
	float _lowPassScaleDelta;	// 8 = 0x8
	float _lowPassRotationDelta;	// 12 = 0xc
	float _translationWeight;	// 16 = 0x10
	float _pinchingWeight;	// 20 = 0x14
	float _rotationWeight;	// 24 = 0x18
	int _dominantComponent;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) int dominantComponent;	// G=0x30195f75; @synthesize=_dominantComponent
@property(assign, nonatomic) float pinchingWeight;	// G=0x302dc365; S=0x300c3b79; @synthesize=_pinchingWeight
@property(assign, nonatomic) float rotationWeight;	// G=0x302dc375; S=0x300c3b89; @synthesize=_rotationWeight
@property(assign, nonatomic) float translationWeight;	// G=0x302dc355; S=0x300c3b99; @synthesize=_translationWeight
- (id)init;	// 0x300c3b1d
- (void)analyzeTouches:(id)touches;	// 0x3019599d
// declared property getter: - (int)dominantComponent;	// 0x30195f75
// declared property getter: - (float)pinchingWeight;	// 0x302dc365
- (void)reset;	// 0x3016ea05
// declared property getter: - (float)rotationWeight;	// 0x302dc375
// declared property setter: - (void)setPinchingWeight:(float)weight;	// 0x300c3b79
// declared property setter: - (void)setRotationWeight:(float)weight;	// 0x300c3b89
// declared property setter: - (void)setTranslationWeight:(float)weight;	// 0x300c3b99
// declared property getter: - (float)translationWeight;	// 0x302dc355
@end
