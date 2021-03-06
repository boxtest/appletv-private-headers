/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIFont, NSString;

@interface UIPushButton : UIControl {
	NSString *_title;	// 68 = 0x44
	UIFont *_font;	// 72 = 0x48
	CGSize _shadowOffset;	// 76 = 0x4c
	CGSize _imageOffset;	// 84 = 0x54
	CGSize _titlePadding;	// 92 = 0x5c
	CFDictionaryRef _info;	// 100 = 0x64
	float _minimumFontPointSize;	// 104 = 0x68
	struct {
		unsigned selected : 1;
		unsigned drawShadow : 1;
		unsigned disableAutosizeToFit : 1;
		unsigned drawContentsCentered : 1;
		unsigned reverseShadowDirectionWhenHighlighted : 1;
		unsigned stretchBackground : 1;
		unsigned showPressFeedback : 1;
		unsigned disabledDimsImage : 1;
		unsigned alwaysHandleScrollerMouseEvent : 1;
		unsigned drawsImageOnRight : 1;
		unsigned drawContentsCenteredHorizontally : 1;
	} _pushButtonFlags;	// 108 = 0x6c
}
@property(assign) BOOL autosizesToFit;	// G=0x301f1e39; S=0x300c19b1; converted property
@property(assign) BOOL drawContentsCentered;	// G=0x301f1ef5; S=0x300c1a4d; converted property
@property(assign) BOOL drawsShadow;	// G=0x301f1eb1; S=0x300c1ff9; converted property
@property(retain) id image;	// G=0x30194b21; S=0x3019ba41; converted property
@property(assign) CGSize imageOffset;	// G=0x301f1edd; S=0x301f1e99; converted property
@property(assign) float minimumFontSize;	// G=0x301f1e29; S=0x30191095; converted property
@property(assign, getter=isSelected) BOOL selected;	// G=0x301f1e15; S=0x301166f1; converted property
@property(readonly, assign) CGSize shadowOffset;	// G=0x301f1ec5; converted property
@property(retain) NSString *title;	// G=0x301b0119; S=0x30094e7d; converted property
@property(retain) id titleColor;	// G=0x301f1fa5; S=0x30102c11; converted property
@property(retain) id titleFont;	// G=0x300c2191; S=0x300c1e69; converted property
+ (id)defaultFont;	// 0x301f2045
- (id)initWithFrame:(CGRect)frame;	// 0x300c185d
- (id)initWithImage:(id)image;	// 0x300c2f35
- (id)initWithTitle:(id)title;	// 0x300e9365
- (id)initWithTitle:(id)title autosizesToFit:(BOOL)fit;	// 0x300e937d
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x301f1e51
- (XXStruct_UUz0SD)_backgroundSlices:(CGSize)slices;	// 0x300d61fd
- (XXStruct_Xx1ZfA)_currentButtonStateInfo;	// 0x301b0bd5
- (void)_drawBezelPartInRect:(CGRect)rect;	// 0x300978a5
- (void)_drawImageAndTextPartInRect:(CGRect)rect;	// 0x30097a71
- (void)_removePressFeedback:(id)feedback finished:(id)finished;	// 0x30107c69
- (id)_scriptingInfo;	// 0x301f1f09
- (void)_setAlwaysHandleScrollerMouseEvent:(BOOL)event;	// 0x301f1e65
- (void)_setNeedsDisplay:(XXStruct_Xx1ZfA)display;	// 0x301b0c3d
// converted property getter: - (BOOL)autosizesToFit;	// 0x301f1e39
- (id)backgroundForState:(unsigned)state;	// 0x30097a51
- (id)currentBackground;	// 0x30097a09
- (id)currentImage;	// 0x300950e5
- (id)currentShadowColor;	// 0x300c1f99
- (id)currentTitleColor;	// 0x300c1de1
- (void)dealloc;	// 0x30107bed
- (void)drawButtonPart:(int)part inRect:(CGRect)rect;	// 0x30097859
// converted property getter: - (BOOL)drawContentsCentered;	// 0x301f1ef5
- (void)drawImageAtPoint:(CGPoint)point fraction:(float)fraction;	// 0x30097eb9
- (void)drawRect:(CGRect)rect;	// 0x30097809
- (void)drawTitleAtPoint:(CGPoint)point width:(float)width;	// 0x300d664d
// converted property getter: - (BOOL)drawsShadow;	// 0x301f1eb1
// converted property getter: - (id)image;	// 0x30194b21
- (id)imageForState:(unsigned)state;	// 0x30095181
// converted property getter: - (CGSize)imageOffset;	// 0x301f1edd
- (BOOL)isPressed;	// 0x301f202d
// converted property getter: - (BOOL)isSelected;	// 0x301f1e15
// converted property getter: - (float)minimumFontSize;	// 0x301f1e29
- (CGPoint)pressFeedbackPosition;	// 0x3017d0f5
// converted property setter: - (void)setAutosizesToFit:(BOOL)fit;	// 0x300c19b1
- (void)setBackground:(id)background forState:(unsigned)state;	// 0x300c1c91
- (void)setDisabledDimsImage:(BOOL)image;	// 0x30116765
// converted property setter: - (void)setDrawContentsCentered:(BOOL)centered;	// 0x300c1a4d
- (void)setDrawContentsCenteredHorizontally:(BOOL)horizontally;	// 0x301f1fed
- (void)setDrawsImageOnRight:(BOOL)right;	// 0x30102c29
// converted property setter: - (void)setDrawsShadow:(BOOL)shadow;	// 0x300c1ff9
- (void)setEnabled:(BOOL)enabled;	// 0x301f2069
- (void)setFrame:(CGRect)frame;	// 0x300c1965
- (void)setHighlighted:(BOOL)highlighted;	// 0x3017ce3d
- (void)setHighlightedTitleColor:(id)color;	// 0x301f1fbd
// converted property setter: - (void)setImage:(id)image;	// 0x3019ba41
- (void)setImage:(id)image forState:(unsigned)state;	// 0x30094fe1
// converted property setter: - (void)setImageOffset:(CGSize)offset;	// 0x301f1e99
// converted property setter: - (void)setMinimumFontSize:(float)size;	// 0x30191095
- (void)setNeedsDisplay;	// 0x30094eed
- (void)setPressedImage:(id)image;	// 0x301f1fd5
- (void)setReverseShadowDirectionWhenHighlighted:(BOOL)highlighted;	// 0x30188c69
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x301166f1
- (void)setShadowColor:(id)color;	// 0x300c1ed9
- (void)setShadowColor:(id)color forState:(unsigned)state;	// 0x300c1ef1
- (void)setShadowOffset:(float)offset;	// 0x30188c35
- (void)setShowPressFeedback:(BOOL)feedback;	// 0x3017bcd9
- (void)setStretchBackground:(BOOL)background;	// 0x300c1a05
// converted property setter: - (void)setTitle:(id)title;	// 0x30094e7d
// converted property setter: - (void)setTitleColor:(id)color;	// 0x30102c11
- (void)setTitleColor:(id)color forState:(unsigned)state;	// 0x300c1d39
// converted property setter: - (void)setTitleFont:(id)font;	// 0x300c1e69
- (void)setTitlePadding:(CGSize)padding;	// 0x301f1e81
- (void)setTracking:(BOOL)tracking;	// 0x3017d14d
- (id)shadowColorForState:(unsigned)state;	// 0x300d68f1
// converted property getter: - (CGSize)shadowOffset;	// 0x301f1ec5
- (void)sizeToFit;	// 0x300c2015
- (unsigned)state;	// 0x3009512d
// converted property getter: - (id)title;	// 0x301b0119
// converted property getter: - (id)titleColor;	// 0x301f1fa5
- (id)titleColorForState:(unsigned)state;	// 0x300c1e49
// converted property getter: - (id)titleFont;	// 0x300c2191
@end

