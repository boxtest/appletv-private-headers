/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSelectionLozengeLayer.h"


@interface BRBlueGlowSelectionLozengeLayer : BRSelectionLozengeLayer {
@private
	BOOL _focusedImage;	// 46 = 0x2e
	BOOL _clearCenter;	// 47 = 0x2f
}
@property(assign) BOOL clearCenter;	// G=0x33080a71; S=0x33080a41; converted property
- (id)init;	// 0x33080381
- (float)bottomGlowHeight;	// 0x33080619
// converted property getter: - (BOOL)clearCenter;	// 0x33080a71
- (void)drawInContext:(CGContextRef)context;	// 0x33080701
- (float)edgeGlowWidth;	// 0x33080675
// converted property setter: - (void)setClearCenter:(BOOL)center;	// 0x33080a41
- (void)setFocused:(BOOL)focused;	// 0x330806d1
- (float)topGlowHeight;	// 0x330805bd
@end

