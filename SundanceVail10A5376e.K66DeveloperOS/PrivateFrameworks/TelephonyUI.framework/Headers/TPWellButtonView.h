/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIView.h> // Unknown library

@class TPWell, TPButton;

@interface TPWellButtonView : UIView {
	TPButton *_button;	// 84 = 0x54
	TPWell *_well;	// 88 = 0x58
}
@property(retain, nonatomic) TPButton *button;	// G=0x3793cb1d; S=0x3793cb2d; @synthesize=_button
- (id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(CGRect)frame;	// 0x3793c8c9
// declared property getter: - (id)button;	// 0x3793cb1d
- (void)dealloc;	// 0x3793cab9
// declared property setter: - (void)setButton:(id)button;	// 0x3793cb2d
@end
