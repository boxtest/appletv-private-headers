/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface COMPUTERSTopShelfSharingView : BRControl {
	BRImageControl *_sharingImage;	// 84 = 0x54
	BRTextControl *_title;	// 88 = 0x58
	BRTextControl *_text;	// 92 = 0x5c
}
- (id)init;	// 0xc0019
- (void).cxx_destruct;	// 0xc0671
- (void)_updateSharingImage;	// 0xc0439
- (id)accessibilityLabel;	// 0xc05fd
- (void)controlWasActivated;	// 0xc03f9
- (void)layoutSubcontrols;	// 0xc04f1
- (void)setTitle:(id)title andDescription:(id)description;	// 0xc0121
@end

