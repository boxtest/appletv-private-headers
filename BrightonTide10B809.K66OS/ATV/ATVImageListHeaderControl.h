/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVImageListHeaderControl : BRControl {
	BRImageControl *_image;	// 84 = 0x54
}
@property(readonly, assign) BRImageControl *image;	// G=0x118ca5; @synthesize=_image
- (id)init;	// 0x118aad
- (id)accessibilityLabel;	// 0x118c85
- (void)dealloc;	// 0x118b31
// declared property getter: - (id)image;	// 0x118ca5
- (void)layoutSubcontrols;	// 0x118bf5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x118b7d
@end

