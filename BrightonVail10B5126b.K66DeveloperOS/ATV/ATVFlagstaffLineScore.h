/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTableView.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffLineScore : BRTableView {
	BRImageControl *_leftFadeImageControl;	// 108 = 0x6c
	BRImageControl *_rightFadeImageControl;	// 112 = 0x70
	BOOL _leftFadeOn;	// 116 = 0x74
	BOOL _rightFadeOn;	// 117 = 0x75
}
@property(assign, nonatomic) BOOL leftFadeOn;	// G=0x19afc9; S=0x19ae41; @synthesize=_leftFadeOn
@property(assign, nonatomic) BOOL rightFadeOn;	// G=0x19afd9; S=0x19ae79; @synthesize=_rightFadeOn
- (id)init;	// 0x19ac85
- (void)dealloc;	// 0x19addd
- (void)layoutSubcontrols;	// 0x19aeb1
// declared property getter: - (BOOL)leftFadeOn;	// 0x19afc9
// declared property getter: - (BOOL)rightFadeOn;	// 0x19afd9
// declared property setter: - (void)setLeftFadeOn:(BOOL)on;	// 0x19ae41
// declared property setter: - (void)setRightFadeOn:(BOOL)on;	// 0x19ae79
@end
