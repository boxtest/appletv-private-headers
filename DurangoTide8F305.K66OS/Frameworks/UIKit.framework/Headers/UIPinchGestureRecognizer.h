/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UITouch;

@interface UIPinchGestureRecognizer : UIGestureRecognizer {
@private
	float _initialTouchDistance;	// 60 = 0x3c
	float _initialTouchScale;	// 64 = 0x40
	double _lastTouchTime;	// 68 = 0x44
	float _velocity;	// 76 = 0x4c
	float _previousVelocity;	// 80 = 0x50
	float _scaleThreshold;	// 84 = 0x54
	CGAffineTransform _transform;	// 88 = 0x58
	CGPoint _anchorPoint;	// 112 = 0x70
	UITouch *_touches[2];	// 120 = 0x78
	float _hysteresis;	// 128 = 0x80
	unsigned _endsOnSingleTouch : 1;	// 132 = 0x84
}
@property(readonly, assign, nonatomic) CGPoint anchorPoint;	// G=0x320c87f1; 
@property(assign, nonatomic, getter=_hysteresis, setter=_setHysteresis:) float hysteresis;	// G=0x320c8721; S=0x321bde3d; @synthesize=_hysteresis
@property(assign, nonatomic) float scale;	// G=0x320c82a5; S=0x320c8809; 
@property(assign, nonatomic) float scaleThreshold;	// G=0x321bde4d; S=0x321bde5d; @synthesize=_scaleThreshold
@property(readonly, assign, nonatomic) float velocity;	// G=0x321bdddd; 
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x31ffcb9d
- (BOOL)_endsOnSingleTouch;	// 0x321bddad
// declared property getter: - (float)_hysteresis;	// 0x320c8721
- (void)_resetGestureRecognizer;	// 0x32081e35
- (void)_setEndsOnSingleTouch:(BOOL)touch;	// 0x321bddc1
// declared property setter: - (void)_setHysteresis:(float)hysteresis;	// 0x321bde3d
// declared property getter: - (CGPoint)anchorPoint;	// 0x320c87f1
// declared property getter: - (float)scale;	// 0x320c82a5
// declared property getter: - (float)scaleThreshold;	// 0x321bde4d
// declared property setter: - (void)setScale:(float)scale;	// 0x320c8809
// declared property setter: - (void)setScaleThreshold:(float)threshold;	// 0x321bde5d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32081395
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32097d25
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32081d7d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x320c83fd
// declared property getter: - (float)velocity;	// 0x321bdddd
@end

