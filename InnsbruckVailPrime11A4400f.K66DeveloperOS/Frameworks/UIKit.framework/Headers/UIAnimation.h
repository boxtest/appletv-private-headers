/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>


@interface UIAnimation : NSObject {
	id _target;	// 4 = 0x4
	SEL _action;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	id _completion;	// 16 = 0x10
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned useNSTimer : 1;
	} _animationFlags;	// 20 = 0x14
	double _startTime;	// 24 = 0x18
	double _duration;	// 32 = 0x20
	int _state;	// 40 = 0x28
}
@property(assign) SEL action;	// G=0x2f526e21; S=0x2f5eabb1; converted property
@property(retain) id completion;	// G=0x2f526e11; S=0x2f5eac65; converted property
@property(assign) id delegate;	// G=0x2f526549; S=0x2f525fd1; converted property
@property(readonly, assign) int state;	// G=0x2f52613d; converted property
@property(readonly, retain) id target;	// G=0x2f526bd1; converted property
@property(assign) BOOL usesNSTimer;	// G=0x2f5eac51; S=0x2f5eabc1; converted property
- (id)initWithTarget:(id)target;	// 0x2f525ebd
// converted property getter: - (SEL)action;	// 0x2f526e21
// converted property getter: - (id)completion;	// 0x2f526e11
- (void)dealloc;	// 0x2f527041
// converted property getter: - (id)delegate;	// 0x2f526549
- (float)fractionForTime:(double)time;	// 0x2f526861
- (void)markStart:(double)start;	// 0x2f526519
- (void)markStop;	// 0x2f526dfd
- (float)progressForFraction:(float)fraction;	// 0x2f526909
// converted property setter: - (void)setAction:(SEL)action;	// 0x2f5eabb1
- (void)setAnimationCurve:(int)curve;	// 0x2f525fb1
// converted property setter: - (void)setCompletion:(id)completion;	// 0x2f5eac65
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2f525fd1
- (void)setDuration:(double)duration;	// 0x2f526151
- (void)setProgress:(float)progress;	// 0x2f5eaca5
// converted property setter: - (void)setUsesNSTimer:(BOOL)timer;	// 0x2f5eabc1
// converted property getter: - (int)state;	// 0x2f52613d
- (void)stopAnimation;	// 0x2f5eab79
// converted property getter: - (id)target;	// 0x2f526bd1
- (int)type;	// 0x2f5eacad
// converted property getter: - (BOOL)usesNSTimer;	// 0x2f5eac51
@end

