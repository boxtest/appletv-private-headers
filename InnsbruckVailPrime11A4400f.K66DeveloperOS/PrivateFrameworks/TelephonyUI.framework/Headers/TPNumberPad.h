/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray;

@interface TPNumberPad : UIControl {
	NSMutableArray *_buttons;	// 120 = 0x78
	BOOL _numberButtonsEnabled;	// 124 = 0x7c
}
@property(assign, nonatomic) float buttonBackgroundAlpha;	// G=0x329d37f1; S=0x329d3831; 
@property(retain) NSArray *buttons;	// G=0x329d362d; S=0x329d363d; @dynamic
@property(assign, nonatomic) BOOL numberButtonsEnabled;	// G=0x329d3e0d; S=0x329d3c9d; @synthesize=_numberButtonsEnabled
- (id)initWithButtons:(id)buttons;	// 0x329d32e5
- (void)_addButton:(id)button;	// 0x329d3b0d
- (float)_backgroundAlphaOfButton:(id)button;	// 0x329d390d
- (void)_layoutGrid;	// 0x329d39d5
- (void)_setBackgroundAlphaOnButton:(id)button alpha:(float)alpha;	// 0x329d396d
// declared property getter: - (float)buttonBackgroundAlpha;	// 0x329d37f1
- (void)buttonCancelled:(id)cancelled;	// 0x329d3df9
- (void)buttonDown:(id)down;	// 0x329d3df5
- (void)buttonLongPressed:(id)pressed;	// 0x329d3e09
- (void)buttonLongPressedViaGesture:(id)gesture;	// 0x329d3da1
- (void)buttonTapped:(id)tapped;	// 0x329d3ded
- (void)buttonUp:(id)up;	// 0x329d3df1
// declared property getter: - (id)buttons;	// 0x329d362d
- (void)dealloc;	// 0x329d3545
- (CGSize)intrinsicContentSize;	// 0x329d3591
// declared property getter: - (BOOL)numberButtonsEnabled;	// 0x329d3e0d
- (void)replaceButton:(id)button atIndex:(unsigned)index;	// 0x329d36c5
// declared property setter: - (void)setButtonBackgroundAlpha:(float)alpha;	// 0x329d3831
// declared property setter: - (void)setButtons:(id)buttons;	// 0x329d363d
// declared property setter: - (void)setNumberButtonsEnabled:(BOOL)enabled;	// 0x329d3c9d
@end

