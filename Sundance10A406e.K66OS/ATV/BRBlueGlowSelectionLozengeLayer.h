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
	BOOL _focusedImage;	// 85 = 0x55
	BOOL _clearCenter;	// 86 = 0x56
}
@property(assign) BOOL clearCenter;	// G=0x2dae85; S=0x2dae59; converted property
- (id)init;	// 0x2da981
- (float)bottomGlowHeight;	// 0x2da9d5
// converted property getter: - (BOOL)clearCenter;	// 0x2dae85
- (void)drawRect:(CGRect)rect;	// 0x2daa19
- (float)edgeGlowWidth;	// 0x2da9e1
// converted property setter: - (void)setClearCenter:(BOOL)center;	// 0x2dae59
- (void)setFocused:(BOOL)focused;	// 0x2da9ed
- (float)topGlowHeight;	// 0x2da9c9
@end
