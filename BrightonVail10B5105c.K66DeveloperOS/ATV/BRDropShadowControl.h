/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRDropShadowControl : BRControl {
	BRControl *_content;	// 84 = 0x54
	int _shadowStyle;	// 88 = 0x58
	float _sizeFactor;	// 92 = 0x5c
}
@property(retain) BRControl *content;	// G=0x2d3fc1; S=0x2d3f3d; converted property
@property(assign) float shadowSizeFactor;	// G=0x2d3f2d; S=0x2d3ef5; converted property
@property(assign) int shadowStyle;	// G=0x2d3ee5; S=0x2d3ebd; converted property
- (id)init;	// 0x2d3e11
- (void)_updateImages;	// 0x2d4285
// converted property getter: - (id)content;	// 0x2d3fc1
- (void)dealloc;	// 0x2d3e71
- (void)layoutSubcontrols;	// 0x2d3fd1
// converted property setter: - (void)setContent:(id)content;	// 0x2d3f3d
// converted property setter: - (void)setShadowSizeFactor:(float)factor;	// 0x2d3ef5
// converted property setter: - (void)setShadowStyle:(int)style;	// 0x2d3ebd
// converted property getter: - (float)shadowSizeFactor;	// 0x2d3f2d
// converted property getter: - (int)shadowStyle;	// 0x2d3ee5
@end

