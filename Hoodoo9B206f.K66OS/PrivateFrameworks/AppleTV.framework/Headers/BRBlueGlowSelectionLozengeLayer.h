/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionLozengeLayer.h"
#import "AppleTV-Structs.h"


@interface BRBlueGlowSelectionLozengeLayer : BRSelectionLozengeLayer {
@private
	BOOL _focusedImage;	// 46 = 0x2e
	BOOL _clearCenter;	// 47 = 0x2f
}
@property(assign) BOOL clearCenter;	// G=0x366a1f51; S=0x366a1f21; converted property
- (id)init;	// 0x366a1a31
- (float)bottomGlowHeight;	// 0x366a1a85
// converted property getter: - (BOOL)clearCenter;	// 0x366a1f51
- (void)drawInContext:(CGContextRef)context;	// 0x366a1acd
- (float)edgeGlowWidth;	// 0x366a1a91
// converted property setter: - (void)setClearCenter:(BOOL)center;	// 0x366a1f21
- (void)setFocused:(BOOL)focused;	// 0x366a1a9d
- (float)topGlowHeight;	// 0x366a1a79
@end
