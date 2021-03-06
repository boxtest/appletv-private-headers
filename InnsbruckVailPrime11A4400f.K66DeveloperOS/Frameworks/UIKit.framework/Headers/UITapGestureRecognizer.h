/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSArray;

@interface UITapGestureRecognizer : UIGestureRecognizer {
	CGPoint _locationInView;	// 60 = 0x3c
	id _imp;	// 68 = 0x44
	unsigned _delaysRecognitionForGreaterTapCounts;	// 72 = 0x48
	int _buttonType;	// 76 = 0x4c
}
@property(assign, nonatomic, setter=_setButtonType:) int _buttonType;	// G=0x2f7250e5; S=0x2f724df9; @synthesize
@property(assign) float allowableMovement;	// G=0x2f724d99; S=0x2f45c949; converted property
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x2f724f45; 
@property(readonly, assign, nonatomic) CGPoint location;	// G=0x2f4e34dd; 
@property(assign) double maximumIntervalBetweenSuccessiveTaps;	// G=0x2f536271; S=0x2f45c911; converted property
@property(assign) double maximumSingleTapDuration;	// G=0x2f724db9; S=0x2f45c8d9; converted property
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x2f4e24e9; S=0x2f444321; 
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x2f4e22d9; S=0x2f444341; 
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x2f724d79; 
- (id)initWithCoder:(id)coder;	// 0x2f724be5
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x2f442789
- (void)_appendSubclassDescription:(id)description;	// 0x2f724ea9
// declared property getter: - (int)_buttonType;	// 0x2f7250e5
- (BOOL)_delaysRecognitionForGreaterTapCounts;	// 0x2f724dd9
- (void)_physicalButtonsBegan:(id)began withEvent:(id)event;	// 0x2f724c69
- (void)_physicalButtonsCancelled:(id)cancelled withEvent:(id)event;	// 0x2f724d25
- (void)_physicalButtonsEnded:(id)ended withEvent:(id)event;	// 0x2f724cd1
- (void)_resetGestureRecognizer;	// 0x2f4e6519
// declared property setter: - (void)_setButtonType:(int)type;	// 0x2f724df9
- (void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)greaterTapCounts;	// 0x2f724de9
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x2f4e0795
// converted property getter: - (float)allowableMovement;	// 0x2f724d99
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x2f4e2171
// declared property getter: - (CGPoint)centroid;	// 0x2f724f45
- (void)dealloc;	// 0x2f4bb575
- (void)encodeWithCoder:(id)coder;	// 0x2f724b89
// declared property getter: - (CGPoint)location;	// 0x2f4e34dd
- (CGPoint)locationInView:(id)view;	// 0x2f4e1c85
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x2f724f95
// converted property getter: - (double)maximumIntervalBetweenSuccessiveTaps;	// 0x2f536271
// converted property getter: - (double)maximumSingleTapDuration;	// 0x2f724db9
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x2f4e24e9
- (unsigned)numberOfTouches;	// 0x2f724f5d
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x2f4e22d9
// converted property setter: - (void)setAllowableMovement:(float)movement;	// 0x2f45c949
// converted property setter: - (void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;	// 0x2f45c911
// converted property setter: - (void)setMaximumSingleTapDuration:(double)duration;	// 0x2f45c8d9
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x2f444321
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x2f444341
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x2f4dec41
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x2f4e1405
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x2f4e1639
// declared property getter: - (id)touches;	// 0x2f724d79
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2f4de8a5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f55e49d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f4e1305
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x2f53c0ed
@end

