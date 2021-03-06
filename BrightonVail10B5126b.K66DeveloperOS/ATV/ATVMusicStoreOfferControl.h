/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOfferControl : BRControl {
	BRTextControl *_topLineTextControl;	// 84 = 0x54
	BRTextControl *_bottomLineTextControl;	// 88 = 0x58
	BRImageControl *_hdImageControl;	// 92 = 0x5c
	BRImageControl *_ddImageControl;	// 96 = 0x60
	BRImageControl *_ccImageControl;	// 100 = 0x64
	BRImageControl *_digitalExtrasControl;	// 104 = 0x68
	BOOL _displaysBottomLineText;	// 108 = 0x6c
}
@property(assign) BOOL displaysBottomLineText;	// G=0x205f09; S=0x205f21; @synthesize=_displaysBottomLineText
- (id)init;	// 0x204f8d
- (id)accessibilityLabel;	// 0x205dfd
- (void)dealloc;	// 0x204fd5
// declared property getter: - (BOOL)displaysBottomLineText;	// 0x205f09
- (void)layoutSubcontrols;	// 0x205825
- (void)setClosedCaption:(BOOL)caption;	// 0x205611
// declared property setter: - (void)setDisplaysBottomLineText:(BOOL)text;	// 0x205f21
- (void)setDolbyDigital:(BOOL)digital;	// 0x205541
- (void)setHasDigitalExtras:(BOOL)extras;	// 0x2056e1
- (void)setWidescreen:(BOOL)widescreen andHD:(BOOL)hd and1080p:(BOOL)p;	// 0x205089
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2057b1
@end

