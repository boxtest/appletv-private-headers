/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, BRImageControl, BRTextControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRComboMenuItemLayer : BRControl {
	BRControl *_background;	// 84 = 0x54
	BRImageControl *_thumbnailLayer;	// 88 = 0x58
	id<BRImageProxy> _imageProxy;	// 92 = 0x5c
	BRMarqueeTextControl *_titleLayer;	// 96 = 0x60
	BRTextControl *_subtitleLayer;	// 100 = 0x64
	BRTextControl *_leftTextLayer;	// 104 = 0x68
	BRTextControl *_middleTextLayer;	// 108 = 0x6c
	BRControl *_bottomRightControl;	// 112 = 0x70
	BRImageControl *_topRightImageLayer;	// 116 = 0x74
	float _thumbnailPaddingFactor;	// 120 = 0x78
	float _thumbnailLayerAspect;	// 124 = 0x7c
	BOOL _dimmed;	// 128 = 0x80
}
@property(assign) BOOL dimmed;	// G=0x356e11; S=0x356e21; converted property
@property(retain) id subtitle;	// G=0x3560a5; S=0x355f91; converted property
@property(assign) float thumbnailLayerAspectRatio;	// G=0x356495; S=0x356421; converted property
@property(assign) float thumbnailPaddingFactor;	// G=0x356411; S=0x3563d9; converted property
@property(retain) id title;	// G=0x355f59; S=0x355e45; converted property
- (id)init;	// 0x355af5
- (void)_artworkAssetLoadedNotification:(id)notification;	// 0x357215
- (id)_comboMenuItemSubtitleTextAttributes;	// 0x3571d1
- (id)_comboMenuItemTitleTextAttributes;	// 0x357191
- (void)_setThumbnail:(id)thumbnail;	// 0x357135
- (id)accessibilityLabel;	// 0x357081
- (id)axSelectedItemText;	// 0x356f4d
- (void)controlWasActivated;	// 0x355d51
- (void)controlWasDeactivated;	// 0x355dc1
- (void)controlWasFocused;	// 0x3565d1
- (void)controlWasUnfocused;	// 0x356621
- (void)dealloc;	// 0x355c35
- (float)defaultRowHeight;	// 0x355e11
// converted property getter: - (BOOL)dimmed;	// 0x356e11
- (CGRect)focusCursorFrame;	// 0x356671
- (BOOL)isAccessibilityElement;	// 0x35707d
- (void)layoutSubcontrols;	// 0x356719
- (void)setBottomRightControl:(id)control;	// 0x3564a5
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x356e21
- (void)setLeftText:(id)text;	// 0x3560dd
- (void)setMiddleText:(id)text;	// 0x3561f1
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x355f91
- (void)setThumbnailImageProxy:(id)proxy;	// 0x356305
// converted property setter: - (void)setThumbnailLayerAspectRatio:(float)ratio;	// 0x356421
// converted property setter: - (void)setThumbnailPaddingFactor:(float)factor;	// 0x3563d9
// converted property setter: - (void)setTitle:(id)title;	// 0x355e45
- (void)setTopRightImage:(id)image;	// 0x356511
// converted property getter: - (id)subtitle;	// 0x3560a5
// converted property getter: - (float)thumbnailLayerAspectRatio;	// 0x356495
// converted property getter: - (float)thumbnailPaddingFactor;	// 0x356411
// converted property getter: - (id)title;	// 0x355f59
@end

