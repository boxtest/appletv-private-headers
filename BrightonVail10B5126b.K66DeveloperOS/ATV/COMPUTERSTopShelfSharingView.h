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
- (id)init;	// 0xcd0a1
- (void).cxx_destruct;	// 0xcd6f9
- (void)_updateSharingImage;	// 0xcd4c1
- (id)accessibilityLabel;	// 0xcd685
- (void)controlWasActivated;	// 0xcd481
- (void)layoutSubcontrols;	// 0xcd579
- (void)setTitle:(id)title andDescription:(id)description;	// 0xcd1a9
@end

