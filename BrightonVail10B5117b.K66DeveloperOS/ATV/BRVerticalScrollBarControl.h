/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRVerticalScrollBarControl : BRControl {
	BRImageControl *_image;	// 84 = 0x54
	float _position;	// 88 = 0x58
}
@property(retain) BRImageControl *image;	// G=0x302c71; S=0x302c51; converted property
- (id)init;	// 0x302b69
- (void)dealloc;	// 0x302be5
// converted property getter: - (id)image;	// 0x302c71
- (void)layoutSubcontrols;	// 0x302c91
// converted property setter: - (void)setImage:(id)image;	// 0x302c51
- (void)setScrollPosition:(float)position;	// 0x302c31
@end

