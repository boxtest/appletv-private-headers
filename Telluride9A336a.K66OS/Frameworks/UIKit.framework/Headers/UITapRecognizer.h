/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "UIKit-Structs.h"

@class NSMutableArray, NSMutableSet, NSArray;
@protocol UITapRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UITapRecognizer : NSObject <NSCoding> {
@private
	unsigned _numberOfTouchesRequired;	// 4 = 0x4
	unsigned _numberOfTapsRequired;	// 8 = 0x8
	NSMutableSet *_activeTouches;	// 12 = 0xc
	int _currentNumberOfTouches;	// 16 = 0x10
	int _currentNumberOfTaps;	// 20 = 0x14
	CGPoint _location;	// 24 = 0x18
	CGPoint _startPoint;	// 32 = 0x20
	float _allowableMovement;	// 40 = 0x28
	double _maximumSingleTapDuration;	// 44 = 0x2c
	double _maximumIntervalBetweenSuccessiveTaps;	// 52 = 0x34
	NSMutableArray *_touches;	// 60 = 0x3c
	id _delegate;	// 64 = 0x40
	unsigned _timerOn : 1;	// 68 = 0x44
	unsigned _noNewTouches : 1;	// 68 = 0x44
}
@property(assign, nonatomic) float allowableMovement;	// G=0x35379db9; S=0x35100eb1; 
@property(assign, nonatomic) id<UITapRecognizerDelegate> delegate;	// G=0x35379df1; S=0x350df445; @synthesize=_delegate
@property(assign, nonatomic) double maximumIntervalBetweenSuccessiveTaps;	// G=0x3522bea1; S=0x35100e7d; 
@property(assign, nonatomic) double maximumSingleTapDuration;	// G=0x35379dc9; S=0x35100e49; 
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x351b6dfd; S=0x35100ee1; @synthesize=_numberOfTapsRequired
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x351b6c29; S=0x35100f11; @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x35379de1; @synthesize=_touches
- (id)init;	// 0x35100d05
- (id)initWithCoder:(id)coder;	// 0x35379a89
- (CGPoint)_locationOnScreen;	// 0x351b37ad
- (void)_reset;	// 0x351bceb5
// declared property getter: - (float)allowableMovement;	// 0x35379db9
- (void)clearTapTimer;	// 0x350df4c9
- (void)dealloc;	// 0x350df455
// declared property getter: - (id)delegate;	// 0x35379df1
- (void)encodeWithCoder:(id)coder;	// 0x35379c35
- (CGPoint)locationInView:(id)view;	// 0x351b5d15
// declared property getter: - (double)maximumIntervalBetweenSuccessiveTaps;	// 0x3522bea1
// declared property getter: - (double)maximumSingleTapDuration;	// 0x35379dc9
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x351b6dfd
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x351b6c29
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x35100eb1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x350df445
// declared property setter: - (void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;	// 0x35100e7d
// declared property setter: - (void)setMaximumSingleTapDuration:(double)duration;	// 0x35100e49
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x35100ee1
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x35100f11
- (void)startTapTimer:(double)timer;	// 0x351b3751
- (void)tooSlow:(id)slow;	// 0x351bd5ed
// declared property getter: - (id)touches;	// 0x35379de1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x351b3401
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35379d71
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x351b5b81
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x351e6bf9
@end

