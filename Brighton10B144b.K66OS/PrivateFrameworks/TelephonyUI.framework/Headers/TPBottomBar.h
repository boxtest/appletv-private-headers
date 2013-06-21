/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIView.h> // Unknown library

@class UIImageView;

@interface TPBottomBar : UIView {
	int _orientation;	// 84 = 0x54
	int _style;	// 88 = 0x58
	BOOL _suppressDrawingBackground;	// 92 = 0x5c
	UIImageView *_shadowView;	// 96 = 0x60
}
@property(assign) int orientation;	// G=0x355d9bbd; S=0x355d9ba9; converted property
@property(readonly, assign) UIImageView *shadowView;	// G=0x355d9d9d; @synthesize=_shadowView
@property(assign, nonatomic) BOOL suppressDrawingBackground;	// G=0x355d9d8d; S=0x355d9bcd; @synthesize=_suppressDrawingBackground
+ (id)_backgroundImage;	// 0x355d9585
+ (float)defaultHeight;	// 0x355d96b1
+ (float)defaultHeightForOrientation:(int)orientation;	// 0x355d9671
+ (float)defaultHeightForStyle:(int)style;	// 0x355d9651
+ (float)defaultHeightForStyle:(int)style orientation:(int)orientation;	// 0x355d9605
+ (int)fullscreenStyle;	// 0x355d9791
+ (int)overlayStyle;	// 0x355d97cd
+ (id)upsideDownShadowImage;	// 0x355d95dd
- (id)init;	// 0x355d99d9
- (id)initWithDefaultSize;	// 0x355d96c5
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x355d96d9
- (id)initWithFrame:(CGRect)frame;	// 0x355d9809
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x355d9855
- (void)dealloc;	// 0x355d9a45
- (void)drawRect:(CGRect)rect;	// 0x355d9d21
- (void)layoutSubviews;	// 0x355d9bf9
// converted property getter: - (int)orientation;	// 0x355d9bbd
// converted property setter: - (void)setOrientation:(int)orientation;	// 0x355d9ba9
- (void)setOrientation:(int)orientation updateFrame:(BOOL)frame;	// 0x355d9a91
// declared property setter: - (void)setSuppressDrawingBackground:(BOOL)background;	// 0x355d9bcd
- (void)setWellAlpha:(float)alpha;	// 0x355d9d89
// declared property getter: - (id)shadowView;	// 0x355d9d9d
// declared property getter: - (BOOL)suppressDrawingBackground;	// 0x355d9d8d
@end
