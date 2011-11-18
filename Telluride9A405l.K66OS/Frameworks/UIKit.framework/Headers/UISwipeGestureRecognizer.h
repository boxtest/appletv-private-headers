/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer {
@private
	double _maximumDuration;	// 56 = 0x38
	float _minimumPrimaryMovement;	// 64 = 0x40
	float _maximumPrimaryMovement;	// 68 = 0x44
	float _minimumSecondaryMovement;	// 72 = 0x48
	float _maximumSecondaryMovement;	// 76 = 0x4c
	float _rateOfMinimumMovementDecay;	// 80 = 0x50
	float _rateOfMaximumMovementDecay;	// 84 = 0x54
	unsigned _numberOfTouchesRequired;	// 88 = 0x58
	NSMutableArray *_touches;	// 92 = 0x5c
	int _direction;	// 96 = 0x60
	CGPoint _startLocation;	// 100 = 0x64
	CGPoint *_startLocations;	// 108 = 0x6c
	double _startTime;	// 112 = 0x70
	unsigned _failed : 1;	// 120 = 0x78
}
@property(assign, nonatomic) int direction;	// G=0x32f55eb1; S=0x32cbdda5; @synthesize=_direction
@property(assign, nonatomic) double maximumDuration;	// G=0x32f55dc9; S=0x32cbddb5; @synthesize=_maximumDuration
@property(assign, nonatomic) float maximumPrimaryMovement;	// G=0x32f55e01; S=0x32f55e11; @synthesize=_maximumPrimaryMovement
@property(assign, nonatomic) float maximumSecondaryMovement;	// G=0x32f55e41; S=0x32f55e51; @synthesize=_maximumSecondaryMovement
@property(assign, nonatomic) float minimumPrimaryMovement;	// G=0x32f55de1; S=0x32f55df1; @synthesize=_minimumPrimaryMovement
@property(assign, nonatomic) float minimumSecondaryMovement;	// G=0x32f55e21; S=0x32f55e31; @synthesize=_minimumSecondaryMovement
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x32f55ea1; S=0x32cbdd61; @synthesize=_numberOfTouchesRequired
@property(assign, nonatomic) float rateOfMaximumMovementDecay;	// G=0x32f55e81; S=0x32f55e91; @synthesize=_rateOfMaximumMovementDecay
@property(assign, nonatomic) float rateOfMinimumMovementDecay;	// G=0x32f55e61; S=0x32f55e71; @synthesize=_rateOfMinimumMovementDecay
@property(readonly, assign, nonatomic) CGPoint startPoint;	// G=0x32dfde45; 
- (id)initWithCoder:(id)coder;	// 0x32f559dd
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x32cbdc29
- (void)_appendSubclassDescription:(id)description;	// 0x32f55c9d
- (BOOL)_checkForSwipeWithDelta:(CGPoint)delta time:(double)time;	// 0x32d9a469
- (void)_resetGestureRecognizer;	// 0x32d9b8d9
- (void)dealloc;	// 0x32ca037d
// declared property getter: - (int)direction;	// 0x32f55eb1
- (void)encodeWithCoder:(id)coder;	// 0x32f55aad
- (CGPoint)locationInView:(id)view;	// 0x32f55b3d
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x32f55bf9
// declared property getter: - (double)maximumDuration;	// 0x32f55dc9
// declared property getter: - (float)maximumPrimaryMovement;	// 0x32f55e01
// declared property getter: - (float)maximumSecondaryMovement;	// 0x32f55e41
// declared property getter: - (float)minimumPrimaryMovement;	// 0x32f55de1
// declared property getter: - (float)minimumSecondaryMovement;	// 0x32f55e21
- (unsigned)numberOfTouches;	// 0x32f55bd9
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x32f55ea1
// declared property getter: - (float)rateOfMaximumMovementDecay;	// 0x32f55e81
// declared property getter: - (float)rateOfMinimumMovementDecay;	// 0x32f55e61
// declared property setter: - (void)setDirection:(int)direction;	// 0x32cbdda5
// declared property setter: - (void)setMaximumDuration:(double)duration;	// 0x32cbddb5
// declared property setter: - (void)setMaximumPrimaryMovement:(float)movement;	// 0x32f55e11
// declared property setter: - (void)setMaximumSecondaryMovement:(float)movement;	// 0x32f55e51
// declared property setter: - (void)setMinimumPrimaryMovement:(float)movement;	// 0x32f55df1
// declared property setter: - (void)setMinimumSecondaryMovement:(float)movement;	// 0x32f55e31
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x32cbdd61
// declared property setter: - (void)setRateOfMaximumMovementDecay:(float)maximumMovementDecay;	// 0x32f55e91
// declared property setter: - (void)setRateOfMinimumMovementDecay:(float)minimumMovementDecay;	// 0x32f55e71
// declared property getter: - (CGPoint)startPoint;	// 0x32dfde45
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32d97db5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32dd59d5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32d9e461
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32d9a0d9
@end

