/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRDropShadowControl, NSString, BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface LTAirPlayPINControl : BRControl {
	BRControl *_dialogBox;	// 84 = 0x54
	BRDropShadowControl *_shadowControl;	// 88 = 0x58
	BRImageControl *_dividerImage;	// 92 = 0x5c
	BRImageControl *_airPlayImage;	// 96 = 0x60
	BRTextControl *_airPlayText;	// 100 = 0x64
	BRTextControl *_pinText;	// 104 = 0x68
	NSString *_pin;	// 108 = 0x6c
}
@property(retain, nonatomic) NSString *pin;	// G=0x7002d; S=0x6fb5d; @synthesize=_pin
- (id)initWithPIN:(id)pin;	// 0x6f701
- (void).cxx_destruct;	// 0x7003d
- (BOOL)brEventAction:(id)action;	// 0x6fc59
- (void)layoutSubcontrols;	// 0x6fcad
// declared property getter: - (id)pin;	// 0x7002d
// declared property setter: - (void)setPin:(id)pin;	// 0x6fb5d
@end

