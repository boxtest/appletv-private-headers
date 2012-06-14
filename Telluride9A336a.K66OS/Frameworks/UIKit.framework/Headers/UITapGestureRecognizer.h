/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSArray;

@interface UITapGestureRecognizer : UIGestureRecognizer {
@private
	CGPoint _locationInView;	// 56 = 0x38
	id _imp;	// 64 = 0x40
	unsigned _delaysRecognitionForGreaterTapCounts;	// 68 = 0x44
}
@property(assign) float allowableMovement;	// G=0x35379f25; S=0x35100e91; converted property
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x35238a1d; 
@property(readonly, assign, nonatomic) CGPoint location;	// G=0x351b7cad; 
@property(assign) double maximumIntervalBetweenSuccessiveTaps;	// G=0x3522be81; S=0x35100e5d; converted property
@property(assign) double maximumSingleTapDuration;	// G=0x35379f45; S=0x35100e29; converted property
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x351b6ddd; S=0x35100ec1; 
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x351b6c09; S=0x35100ef1; 
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x35379f05; 
- (id)initWithCoder:(id)coder;	// 0x35379e5d
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x35100c81
- (void)_appendSubclassDescription:(id)description;	// 0x35379f85
- (BOOL)_delaysRecognitionForGreaterTapCounts;	// 0x35379f65
- (void)_resetGestureRecognizer;	// 0x351bce69
- (void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)greaterTapCounts;	// 0x35379f75
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x351b53b1
// converted property getter: - (float)allowableMovement;	// 0x35379f25
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x351b6ab9
// declared property getter: - (CGPoint)centroid;	// 0x35238a1d
- (void)dealloc;	// 0x350df3e1
- (void)encodeWithCoder:(id)coder;	// 0x35379e01
// declared property getter: - (CGPoint)location;	// 0x351b7cad
- (CGPoint)locationInView:(id)view;	// 0x351b60a1
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x3537a061
// converted property getter: - (double)maximumIntervalBetweenSuccessiveTaps;	// 0x3522be81
// converted property getter: - (double)maximumSingleTapDuration;	// 0x35379f45
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x351b6ddd
- (unsigned)numberOfTouches;	// 0x3537a029
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x351b6c09
// converted property setter: - (void)setAllowableMovement:(float)movement;	// 0x35100e91
// converted property setter: - (void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;	// 0x35100e5d
// converted property setter: - (void)setMaximumSingleTapDuration:(double)duration;	// 0x35100e29
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x35100ec1
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x35100ef1
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x351b3731
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x351b6181
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x351b5cb1
// declared property getter: - (id)touches;	// 0x35379f05
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x351b33e1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35379ee5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x351b5b61
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x351e6bd9
@end
