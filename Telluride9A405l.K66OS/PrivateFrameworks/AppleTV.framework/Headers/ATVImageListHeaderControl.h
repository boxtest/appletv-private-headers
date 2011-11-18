/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVImageListHeaderControl : BRControl {
@private
	BRImageControl *_image;	// 48 = 0x30
}
@property(readonly, assign) BRImageControl *image;	// G=0x35d81f69; @synthesize=_image
- (id)init;	// 0x35d81d7d
- (id)accessibilityLabel;	// 0x35d81f49
- (void)dealloc;	// 0x35d81df1
// declared property getter: - (id)image;	// 0x35d81f69
- (void)layoutSubcontrols;	// 0x35d81eb5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35d81e3d
@end

