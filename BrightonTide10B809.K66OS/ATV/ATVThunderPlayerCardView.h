/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVThunderPlayerCardView : BRControl {
	BRAsyncImageControl *_background;	// 84 = 0x54
	BRAsyncImageControl *_playerImage;	// 88 = 0x58
	BRTextControl *_playerNumber;	// 92 = 0x5c
	BRTextControl *_playerName;	// 96 = 0x60
}
- (id)initWithDictionary:(id)dictionary;	// 0x2698d1
- (id)accessibilityLabel;	// 0x269f35
- (void)dealloc;	// 0x269ce9
- (void)layoutSubcontrols;	// 0x269d75
@end
