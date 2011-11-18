/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSMutableSet, NSArray;

@interface UILongPressGestureRecognizer : UIGestureRecognizer {
@private
	NSArray *_touches;	// 56 = 0x38
	NSMutableSet *_activeTouches;	// 60 = 0x3c
	int _numberOfTouchesRequired;	// 64 = 0x40
	double _minimumPressDuration;	// 68 = 0x44
	float _allowableMovement;	// 76 = 0x4c
	CGPoint _startPointScreen;	// 80 = 0x50
	id _enoughTimeElapsed;	// 88 = 0x58
	id _tooMuchTimeElapsed;	// 92 = 0x5c
	id _imp;	// 96 = 0x60
	unsigned _gotTouchEnd : 1;	// 100 = 0x64
	unsigned _gotTooMany : 1;	// 100 = 0x64
	unsigned _gotEnoughTaps : 1;	// 100 = 0x64
	unsigned _cancelPastAllowableMovement : 1;	// 100 = 0x64
}
@property(assign, nonatomic) float allowableMovement;	// G=0x32f39971; S=0x32cc2581; @synthesize=_allowableMovement
@property(assign, nonatomic) BOOL cancelPastAllowableMovement;	// G=0x32f396b9; S=0x32f396cd; 
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x32d75195; 
@property(assign, nonatomic) double delay;	// G=0x32d75539; S=0x32d02865; @synthesize=_minimumPressDuration
@property(assign, nonatomic) double minimumPressDuration;	// G=0x32f396a1; S=0x32cd87e5; 
@property(assign, nonatomic) int numberOfTapsRequired;	// G=0x32d77e1d; S=0x32f39659; 
@property(assign, nonatomic) int numberOfTouchesRequired;	// G=0x32d77e0d; S=0x32cc2549; @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) CGPoint startPoint;	// G=0x32dcb3bd; 
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x32d75309; @synthesize=_touches
- (id)initWithCoder:(id)coder;	// 0x32f393d9
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x32cc2415
- (void)_resetGestureRecognizer;	// 0x32d7e09d
- (void)_startTapFinishedTimer;	// 0x32f396f9
// declared property getter: - (float)allowableMovement;	// 0x32f39971
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x32dcab79
// declared property getter: - (BOOL)cancelPastAllowableMovement;	// 0x32f396b9
// declared property getter: - (CGPoint)centroid;	// 0x32d75195
- (CGPoint)centroidScreen;	// 0x32d7511d
- (void)clearTimer;	// 0x32ca06b1
- (void)dealloc;	// 0x32ca0615
// declared property getter: - (double)delay;	// 0x32d75539
- (void)encodeWithCoder:(id)coder;	// 0x32f39549
- (void)enoughTimeElapsed:(id)elapsed;	// 0x32dc9b89
- (void)invalidate;	// 0x32e12ea9
- (CGPoint)locationInView:(id)view;	// 0x32dc9cf1
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x32f39845
// declared property getter: - (double)minimumPressDuration;	// 0x32f396a1
// declared property getter: - (int)numberOfTapsRequired;	// 0x32d77e1d
- (unsigned)numberOfTouches;	// 0x32f39825
// declared property getter: - (int)numberOfTouchesRequired;	// 0x32d77e0d
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x32cc2581
// declared property setter: - (void)setCancelPastAllowableMovement:(BOOL)movement;	// 0x32f396cd
// declared property setter: - (void)setDelay:(double)delay;	// 0x32d02865
// declared property setter: - (void)setMinimumPressDuration:(double)duration;	// 0x32cd87e5
// declared property setter: - (void)setNumberOfTapsRequired:(int)tapsRequired;	// 0x32f39659
// declared property setter: - (void)setNumberOfTouchesRequired:(int)touchesRequired;	// 0x32cc2549
- (void)setTouches:(id)touches;	// 0x32ca0731
- (void)setView:(id)view;	// 0x32cc2591
// declared property getter: - (CGPoint)startPoint;	// 0x32dcb3bd
- (void)startTimer;	// 0x32d7549d
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x32f397a1
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x32f39811
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x32f397c1
- (void)tooMuchElapsed:(id)elapsed;	// 0x32f396e5
// declared property getter: - (id)touches;	// 0x32d75309
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32d74e21
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32dcd75d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32d77615
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32da79fd
@end

