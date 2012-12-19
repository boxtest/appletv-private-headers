/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl, BRListControl;

__attribute__((visibility("hidden")))
@interface BRResumeMenuControl : BRControl {
	BRTextControl *_title;	// 84 = 0x54
	BRTextControl *_footnote;	// 88 = 0x58
	BRListControl *_resumeMenu;	// 92 = 0x5c
	BRImageControl *_blurControl;	// 96 = 0x60
	float _blurOversizeFactor;	// 100 = 0x64
}
@property(retain) BRTextControl *footnote;	// G=0x2feca5; S=0x2febb5; converted property
@property(retain) BRTextControl *title;	// G=0x2feb7d; S=0x2fea7d; converted property
- (id)init;	// 0x2fe82d
- (CGColorRef)blurControlBackgroundColor;	// 0x2ff1b1
- (BOOL)brEventAction:(id)action;	// 0x2feff9
- (void)dealloc;	// 0x2fe9f1
// converted property getter: - (id)footnote;	// 0x2feca5
- (void)layoutSubcontrols;	// 0x2fecdd
- (id)list;	// 0x2ff095
- (void)setBlurOversizeFactor:(float)factor;	// 0x2ff191
// converted property setter: - (void)setFootnote:(id)footnote;	// 0x2febb5
- (void)setImage:(id)image;	// 0x2ff0a5
// converted property setter: - (void)setTitle:(id)title;	// 0x2fea7d
// converted property getter: - (id)title;	// 0x2feb7d
@end
