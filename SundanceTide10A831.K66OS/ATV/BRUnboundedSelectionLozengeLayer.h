/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSelectionLozengeLayer.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRUnboundedSelectionLozengeLayer : BRSelectionLozengeLayer {
	BRImage *_topImage;	// 88 = 0x58
	BRImage *_bottomImage;	// 92 = 0x5c
	BOOL _brighterImage;	// 96 = 0x60
	BOOL _focusedImage;	// 97 = 0x61
}
@property(assign) BOOL useBrighterUnselectedImage;	// G=0x2e1379; S=0x2e134d; converted property
- (id)init;	// 0x2e128d
- (void)_updateImages;	// 0x2e14a9
- (void)dealloc;	// 0x2e12e9
- (void)drawRect:(CGRect)rect;	// 0x2e13b9
- (void)layoutSubcontrols;	// 0x2e13b5
- (void)setFocused:(BOOL)focused;	// 0x2e1389
// converted property setter: - (void)setUseBrighterUnselectedImage:(BOOL)image;	// 0x2e134d
// converted property getter: - (BOOL)useBrighterUnselectedImage;	// 0x2e1379
@end

