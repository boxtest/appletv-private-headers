/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRAsyncImageControl, BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface MusicCloudAdView : BRControl {
	BRTextControl *_titleControl;	// 84 = 0x54
	BRTextControl *_descriptionControl;	// 88 = 0x58
	BRAsyncImageControl *_iTunesMatchLogo;	// 92 = 0x5c
	BRImageControl *_okButtonImageControl;	// 96 = 0x60
	BRTextControl *_okButtonTextControl;	// 100 = 0x64
	CGRect _iTunesMatchLogoFrame;	// 104 = 0x68
}
@property(retain, nonatomic) BRTextControl *descriptionControl;	// G=0x276ad1; S=0x276ae1; @synthesize=_descriptionControl
@property(retain, nonatomic) BRAsyncImageControl *iTunesMatchLogo;	// G=0x276b09; S=0x276b19; @synthesize=_iTunesMatchLogo
@property(assign, nonatomic) CGRect iTunesMatchLogoFrame;	// G=0x276bb1; S=0x276bc9; @synthesize=_iTunesMatchLogoFrame
@property(retain, nonatomic) BRImageControl *okButtonImageControl;	// G=0x276b41; S=0x276b51; @synthesize=_okButtonImageControl
@property(retain, nonatomic) BRTextControl *okButtonTextControl;	// G=0x276b79; S=0x276b89; @synthesize=_okButtonTextControl
@property(retain, nonatomic) BRTextControl *titleControl;	// G=0x276a99; S=0x276aa9; @synthesize=_titleControl
+ (id)viewWithDescription:(id)description prompt:(id)prompt;	// 0x2761e5
- (id)initWithDescription:(id)description prompt:(id)prompt;	// 0x276245
- (void).cxx_destruct;	// 0x276bed
- (id)accessibilityLabel;	// 0x2769c1
// declared property getter: - (id)descriptionControl;	// 0x276ad1
// declared property getter: - (id)iTunesMatchLogo;	// 0x276b09
// declared property getter: - (CGRect)iTunesMatchLogoFrame;	// 0x276bb1
- (BOOL)isAccessibilityElement;	// 0x2769bd
- (void)layoutSubcontrols;	// 0x2766c1
// declared property getter: - (id)okButtonImageControl;	// 0x276b41
// declared property getter: - (id)okButtonTextControl;	// 0x276b79
// declared property setter: - (void)setDescriptionControl:(id)control;	// 0x276ae1
// declared property setter: - (void)setITunesMatchLogo:(id)logo;	// 0x276b19
// declared property setter: - (void)setITunesMatchLogoFrame:(CGRect)frame;	// 0x276bc9
// declared property setter: - (void)setOkButtonImageControl:(id)control;	// 0x276b51
// declared property setter: - (void)setOkButtonTextControl:(id)control;	// 0x276b89
// declared property setter: - (void)setTitleControl:(id)control;	// 0x276aa9
// declared property getter: - (id)titleControl;	// 0x276a99
@end

