/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTableView.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffLineScore : BRTableView {
@private
	BRImageControl *_leftFadeImageControl;	// 72 = 0x48
	BRImageControl *_rightFadeImageControl;	// 76 = 0x4c
	BOOL _leftFadeOn;	// 80 = 0x50
	BOOL _rightFadeOn;	// 81 = 0x51
}
@property(assign, nonatomic) BOOL leftFadeOn;	// G=0x341716ad; S=0x3417150d; @synthesize=_leftFadeOn
@property(assign, nonatomic) BOOL rightFadeOn;	// G=0x341716bd; S=0x34171549; @synthesize=_rightFadeOn
- (id)init;	// 0x34171349
- (void)dealloc;	// 0x341714ad
- (void)layoutSubcontrols;	// 0x34171585
// declared property getter: - (BOOL)leftFadeOn;	// 0x341716ad
// declared property getter: - (BOOL)rightFadeOn;	// 0x341716bd
// declared property setter: - (void)setLeftFadeOn:(BOOL)on;	// 0x3417150d
// declared property setter: - (void)setRightFadeOn:(BOOL)on;	// 0x34171549
@end

