/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIStatusBarAnimationParameters : NSObject {
	double _startTime;	// 4 = 0x4
	double _duration;	// 12 = 0xc
	int _curve;	// 20 = 0x14
}
@property(assign, nonatomic) int curve;	// G=0x32c2e551; S=0x32e2e521; @synthesize=_curve
@property(assign, nonatomic) double duration;	// G=0x32b8b2b9; S=0x32c4632d; @synthesize=_duration
@property(assign, nonatomic) double startTime;	// G=0x32c2e4c5; S=0x32e2e50d; @synthesize=_startTime
- (id)init;	// 0x32e2e4fd
- (id)initWithDefaultParameters;	// 0x32af1525
- (id)initWithEmptyParameters;	// 0x32b54505
// declared property getter: - (int)curve;	// 0x32c2e551
// declared property getter: - (double)duration;	// 0x32b8b2b9
// declared property setter: - (void)setCurve:(int)curve;	// 0x32e2e521
// declared property setter: - (void)setDuration:(double)duration;	// 0x32c4632d
// declared property setter: - (void)setStartTime:(double)time;	// 0x32e2e50d
// declared property getter: - (double)startTime;	// 0x32c2e4c5
@end
