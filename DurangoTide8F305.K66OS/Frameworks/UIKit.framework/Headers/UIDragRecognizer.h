/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UITouch, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIDragRecognizer : UIGestureRecognizer {
@private
	double _maximumDeviation;	// 60 = 0x3c
	double _minimumDistance;	// 68 = 0x44
	CGPoint _startPosition;	// 76 = 0x4c
	BOOL _restrictsToAngle;	// 84 = 0x54
	double _angle;	// 88 = 0x58
	UITouch *_touch;	// 96 = 0x60
	UIDelayedAction *_tooSlow;	// 100 = 0x64
	double _startAngle;	// 104 = 0x68
}
@property(assign, nonatomic) double angle;	// G=0x321c9609; S=0x321c9619; @synthesize=_angle
@property(assign, nonatomic) double maximumDeviation;	// G=0x321c96b1; S=0x321c96c1; @synthesize=_maximumDeviation
@property(assign, nonatomic) double minimumDistance;	// G=0x321c965d; S=0x321c966d; @synthesize=_minimumDistance
@property(assign, nonatomic) BOOL restrictsToAngle;	// G=0x321c962d; S=0x321c963d; @synthesize=_restrictsToAngle
@property(assign, nonatomic) double startAngle;	// G=0x321c95e5; S=0x321c95f5; @synthesize=_startAngle
@property(assign, nonatomic) CGPoint startPosition;	// G=0x321c9681; S=0x321c9699; @synthesize=_startPosition
@property(retain, nonatomic) UITouch *touch;	// G=0x321c964d; S=0x321c9cbd; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x321c9875
- (void)_resetGestureRecognizer;	// 0x321c97dd
// declared property getter: - (double)angle;	// 0x321c9609
- (void)clearTimer;	// 0x321c97a1
- (void)dealloc;	// 0x321c9829
// declared property getter: - (double)maximumDeviation;	// 0x321c96b1
// declared property getter: - (double)minimumDistance;	// 0x321c965d
// declared property getter: - (BOOL)restrictsToAngle;	// 0x321c962d
// declared property setter: - (void)setAngle:(double)angle;	// 0x321c9619
// declared property setter: - (void)setMaximumDeviation:(double)deviation;	// 0x321c96c1
// declared property setter: - (void)setMinimumDistance:(double)distance;	// 0x321c966d
// declared property setter: - (void)setRestrictsToAngle:(BOOL)angle;	// 0x321c963d
// declared property setter: - (void)setStartAngle:(double)angle;	// 0x321c95f5
// declared property setter: - (void)setStartPosition:(CGPoint)position;	// 0x321c9699
// declared property setter: - (void)setTouch:(id)touch;	// 0x321c9cbd
// declared property getter: - (double)startAngle;	// 0x321c95e5
// declared property getter: - (CGPoint)startPosition;	// 0x321c9681
- (void)tooSlow:(id)slow;	// 0x321c9779
// declared property getter: - (id)touch;	// 0x321c964d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x321c990d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x321c96d5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x321c96fd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x321c9a01
@end

