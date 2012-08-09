/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


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
@property(assign) SEL action;	// G=0x3037fd69; S=0x30419fc9; converted property
@property(retain) id completion;	// G=0x3037fd59; S=0x3041a07d; converted property
@property(assign) id delegate;	// G=0x3037f4a9; S=0x3037ef71; converted property
@property(readonly, assign) int state;	// G=0x3037f0dd; converted property
@property(readonly, retain) id target;	// G=0x3037fb19; converted property
@property(assign) BOOL usesNSTimer;	// G=0x3041a069; S=0x30419fd9; converted property
- (id)initWithTarget:(id)target;	// 0x3037ee61
// converted property getter: - (SEL)action;	// 0x3037fd69
// converted property getter: - (id)completion;	// 0x3037fd59
- (void)dealloc;	// 0x3037ff61
// converted property getter: - (id)delegate;	// 0x3037f4a9
- (float)fractionForTime:(double)time;	// 0x3037f7c1
- (void)markStart:(double)start;	// 0x3037f479
- (void)markStop;	// 0x3037fd45
- (float)progressForFraction:(float)fraction;	// 0x3037f869
// converted property setter: - (void)setAction:(SEL)action;	// 0x30419fc9
- (void)setAnimationCurve:(int)curve;	// 0x3037ef51
// converted property setter: - (void)setCompletion:(id)completion;	// 0x3041a07d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3037ef71
- (void)setDuration:(double)duration;	// 0x3037f0f1
- (void)setProgress:(float)progress;	// 0x3041a0bd
// converted property setter: - (void)setUsesNSTimer:(BOOL)timer;	// 0x30419fd9
// converted property getter: - (int)state;	// 0x3037f0dd
- (void)stopAnimation;	// 0x30419f91
// converted property getter: - (id)target;	// 0x3037fb19
- (int)type;	// 0x3041a0c5
// converted property getter: - (BOOL)usesNSTimer;	// 0x3041a069
@end
