/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"


__attribute__((visibility("hidden")))
@interface UIAlertButton : UIButton {
	float _imageOffset;	// 180 = 0xb4
}
@property(assign, nonatomic) float imageOffset;	// G=0x32fedc3d; S=0x32fedc4d; @synthesize=_imageOffset
@property(retain) id title;	// G=0x32fedaf1; S=0x32fedb19; converted property
- (id)initWithTitle:(id)title;	// 0x32dd9839
- (id)image;	// 0x32e48711
// declared property getter: - (float)imageOffset;	// 0x32fedc3d
- (void)layoutSubviews;	// 0x32dd98c1
- (void)setEnabled:(BOOL)enabled;	// 0x32fedbdd
- (void)setHighlighted:(BOOL)highlighted;	// 0x32ddfe15
- (void)setImage:(id)image forState:(unsigned)state;	// 0x32fedb7d
// declared property setter: - (void)setImageOffset:(float)offset;	// 0x32fedc4d
// converted property setter: - (void)setTitle:(id)title;	// 0x32fedb19
// converted property getter: - (id)title;	// 0x32fedaf1
@end
