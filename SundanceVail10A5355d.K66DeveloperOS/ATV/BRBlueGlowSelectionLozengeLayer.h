/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSelectionLozengeLayer.h"


__attribute__((visibility("hidden")))
@interface BRBlueGlowSelectionLozengeLayer : BRSelectionLozengeLayer {
	BOOL _focusedImage;	// 78 = 0x4e
	BOOL _clearCenter;	// 79 = 0x4f
}
@property(assign) BOOL clearCenter;	// G=0x2c3ec5; S=0x2c3e99; converted property
- (id)init;	// 0x2c39c1
- (float)bottomGlowHeight;	// 0x2c3a15
// converted property getter: - (BOOL)clearCenter;	// 0x2c3ec5
- (void)drawRect:(CGRect)rect;	// 0x2c3a59
- (float)edgeGlowWidth;	// 0x2c3a21
// converted property setter: - (void)setClearCenter:(BOOL)center;	// 0x2c3e99
- (void)setFocused:(BOOL)focused;	// 0x2c3a2d
- (float)topGlowHeight;	// 0x2c3a09
@end

