/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString, NSNumber, BRWaitSpinnerControl, BRMarqueeTextControl, NSMutableSet, BRAsyncImageControl;
@protocol BRDisplayInfoLoader;

__attribute__((visibility("hidden")))
@interface BRMenuItem : BRControl {
	CGColorRef _bgColor;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	NSAttributedString *_detailedText;	// 92 = 0x5c
	NSAttributedString *_rightJustifiedText;	// 96 = 0x60
	BRMarqueeTextControl *_scrollingTextControl;	// 100 = 0x64
	BRAsyncImageControl *_imageControl;	// 104 = 0x68
	BRWaitSpinnerControl *_spinner;	// 108 = 0x6c
	id<BRDisplayInfoLoader> _displayInfoLoader;	// 112 = 0x70
	NSMutableSet *_accessories;	// 116 = 0x74
	BOOL _dimmed;	// 120 = 0x78
	BOOL _disableAccessoryHighlighting;	// 121 = 0x79
	BOOL _forceOrdinalLayout;	// 122 = 0x7a
	BOOL _dotsTrailImage;	// 123 = 0x7b
	BOOL _forceBlueDotLayout;	// 124 = 0x7c
	BOOL _forceCenteredIconLayout;	// 125 = 0x7d
	BOOL _forceMenuArrowLayout;	// 126 = 0x7e
	BOOL _usingDefaultTextAttributes;	// 127 = 0x7f
	BOOL _iconsTrailText;	// 128 = 0x80
	float _forcedHeight;	// 132 = 0x84
	float _forcedContentHeight;	// 136 = 0x88
	NSNumber *_ordinal;	// 140 = 0x8c
	int _largestOrdinal;	// 144 = 0x90
	float _imageInset;	// 148 = 0x94
	float _imageHeight;	// 152 = 0x98
	float _textPadding;	// 156 = 0x9c
	float _leftMargin;	// 160 = 0xa0
	float _rightMargin;	// 164 = 0xa4
	float _imageAspectRatio;	// 168 = 0xa8
	BOOL _colorSet;	// 172 = 0xac
}
@property(retain) NSAttributedString *detailedText;	// G=0x341e05; S=0x341ccd; converted property
@property(assign) BOOL dimmed;	// G=0x34257d; S=0x342451; converted property
@property(assign) BOOL disableAccessoryHighlighting;	// G=0x3425ad; S=0x34258d; converted property
@property(retain) id displayInfoLoader;	// G=0x3422c9; S=0x342209; converted property
@property(assign) BOOL dotsTrailImage;	// G=0x342851; S=0x342825; converted property
@property(assign) BOOL forceBlueDotLayout;	// G=0x3427d9; S=0x3427ad; converted property
@property(assign) BOOL forceCenteredIconLayout;	// G=0x342815; S=0x3427e9; converted property
@property(assign) BOOL forceMenuArrowLayout;	// G=0x3426e9; S=0x3426c9; converted property
@property(readonly, assign) BOOL forceOrdinalLayout;	// G=0x34279d; converted property
@property(assign) float forcedContentHeight;	// G=0x3426b9; S=0x342699; converted property
@property(assign) float forcedHeight;	// G=0x342689; S=0x3425bd; converted property
@property(assign) BOOL iconsTrailText;	// G=0x34288d; S=0x342861; converted property
@property(retain) id image;	// G=0x34208d; S=0x341ef1; converted property
@property(assign) float imageAspectRatio;	// G=0x3421f9; S=0x3421c1; converted property
@property(assign) float imageHeight;	// G=0x3429ad; S=0x342975; converted property
@property(assign) float imageInset;	// G=0x34291d; S=0x3428e5; converted property
@property(retain) id imageProxy;	// G=0x3421a1; S=0x34218d; converted property
@property(assign) float leftMargin;	// G=0x3428d5; S=0x34289d; converted property
@property(assign) CGColorRef menuItemBackgroundColor;	// G=0x341b55; S=0x341b31; converted property
@property(retain) NSAttributedString *rightJustifiedText;	// G=0x341ed1; S=0x341e25; converted property
@property(assign) float rightMargin;	// G=0x3429f5; S=0x3429bd; converted property
@property(retain) NSAttributedString *text;	// G=0x341cad; S=0x341b7d; converted property
@property(assign) float textPadding;	// G=0x342965; S=0x34292d; converted property
- (id)init;	// 0x3414dd
- (id)_accessoryOfType:(int)type;	// 0x343e1d
- (id)_accessoryOfType:(int)type offset:(float *)offset;	// 0x343e31
- (CGRect)_contentFrameForBounds:(CGRect)bounds;	// 0x344ec5
- (id)_detailedTextAttributes;	// 0x3447c1
- (id)_firstAccessoryFromAccessories:(id)accessories offset:(float *)offset;	// 0x344271
- (CGRect)_imageFrame;	// 0x344c75
- (id)_imageWithName:(id)name;	// 0x344965
- (id)_largeLeftImage;	// 0x34443d
- (float)_largestOrdinalWidth;	// 0x344a65
- (id)_ordinalImage;	// 0x3445e9
- (id)_ordinalString;	// 0x344b3d
- (id)_ordinalTypes;	// 0x344555
- (id)_rightJustifiedIconWithRightOffset:(float *)rightOffset;	// 0x3442e9
- (id)_rightTextAttributes;	// 0x344805
- (void)_setSpinnerEnabled:(BOOL)enabled;	// 0x3449c5
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x343c89
- (void)_switchToScrollingTextForTextFrame:(CGRect)textFrame;	// 0x344889
- (id)_textAttributes;	// 0x344849
- (void)_updateColorAndContentHeight;	// 0x343cf9
- (id)_upperRightImageTypes;	// 0x34461d
- (id)_upperRightImages;	// 0x344701
- (id)accessibilityLabel;	// 0x344f59
- (id)accessibilitySecondaryLabel;	// 0x345049
- (id)accessibilityTraitsList;	// 0x34510d
- (id)accessibilityValue;	// 0x3450fd
- (void)addAccessoryOfType:(int)type;	// 0x3422d9
- (void)cancelLoadDisplayInfo;	// 0x341a2d
- (id)centeredDetailedTextAttributes;	// 0x341b0d
- (id)centeredTextAttributes;	// 0x341a75
- (void)controlWasActivated;	// 0x341825
- (void)controlWasDeactivated;	// 0x341919
- (void)controlWasFocused;	// 0x341765
- (void)controlWasUnfocused;	// 0x3417c5
- (void)dealloc;	// 0x3415b5
- (id)description;	// 0x3416b5
// converted property getter: - (id)detailedText;	// 0x341e05
// converted property getter: - (BOOL)dimmed;	// 0x34257d
// converted property getter: - (BOOL)disableAccessoryHighlighting;	// 0x3425ad
// converted property getter: - (id)displayInfoLoader;	// 0x3422c9
// converted property getter: - (BOOL)dotsTrailImage;	// 0x342851
- (void)drawRect:(CGRect)rect;	// 0x342ab1
- (CGRect)focusCursorFrame;	// 0x342a05
// converted property getter: - (BOOL)forceBlueDotLayout;	// 0x3427d9
// converted property getter: - (BOOL)forceCenteredIconLayout;	// 0x342815
// converted property getter: - (BOOL)forceMenuArrowLayout;	// 0x3426e9
// converted property getter: - (BOOL)forceOrdinalLayout;	// 0x34279d
// converted property getter: - (float)forcedContentHeight;	// 0x3426b9
// converted property getter: - (float)forcedHeight;	// 0x342689
- (BOOL)hasAccessoryOfType:(int)type;	// 0x3423f9
// converted property getter: - (BOOL)iconsTrailText;	// 0x34288d
// converted property getter: - (id)image;	// 0x34208d
// converted property getter: - (float)imageAspectRatio;	// 0x3421f9
// converted property getter: - (float)imageHeight;	// 0x3429ad
// converted property getter: - (float)imageInset;	// 0x34291d
// converted property getter: - (id)imageProxy;	// 0x3421a1
- (BOOL)isAccessibilityElement;	// 0x344f55
- (void)layoutSubcontrols;	// 0x343c29
// converted property getter: - (float)leftMargin;	// 0x3428d5
- (void)loadDisplayInfo;	// 0x3419e5
// converted property getter: - (CGColorRef)menuItemBackgroundColor;	// 0x341b55
- (void)removeAccessoryOfType:(int)type;	// 0x342381
- (void)removeAllAccessories;	// 0x342415
// converted property getter: - (id)rightJustifiedText;	// 0x341ed1
// converted property getter: - (float)rightMargin;	// 0x3429f5
- (void)scrollingCompleted;	// 0x341985
- (void)setDefaultImage:(id)image;	// 0x341fc9
// converted property setter: - (void)setDetailedText:(id)text;	// 0x341ccd
- (void)setDetailedText:(id)text withAttributes:(id)attributes;	// 0x341ce1
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x342451
// converted property setter: - (void)setDisableAccessoryHighlighting:(BOOL)highlighting;	// 0x34258d
// converted property setter: - (void)setDisplayInfoLoader:(id)loader;	// 0x342209
// converted property setter: - (void)setDotsTrailImage:(BOOL)image;	// 0x342825
// converted property setter: - (void)setForceBlueDotLayout:(BOOL)layout;	// 0x3427ad
// converted property setter: - (void)setForceCenteredIconLayout:(BOOL)layout;	// 0x3427e9
// converted property setter: - (void)setForceMenuArrowLayout:(BOOL)layout;	// 0x3426c9
- (void)setForceOrdinalLayout:(BOOL)layout ordinal:(id)ordinal largestOrdinal:(id)ordinal3;	// 0x3426f9
// converted property setter: - (void)setForcedContentHeight:(float)height;	// 0x342699
// converted property setter: - (void)setForcedHeight:(float)height;	// 0x3425bd
// converted property setter: - (void)setIconsTrailText:(BOOL)text;	// 0x342861
// converted property setter: - (void)setImage:(id)image;	// 0x341ef1
// converted property setter: - (void)setImageAspectRatio:(float)ratio;	// 0x3421c1
// converted property setter: - (void)setImageHeight:(float)height;	// 0x342975
// converted property setter: - (void)setImageInset:(float)inset;	// 0x3428e5
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x34218d
- (void)setImageProxy:(id)proxy shouldCropAndFill:(BOOL)fill;	// 0x3420ad
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x34289d
// converted property setter: - (void)setMenuItemBackgroundColor:(CGColorRef)color;	// 0x341b31
// converted property setter: - (void)setRightJustifiedText:(id)text;	// 0x341e25
- (void)setRightJustifiedText:(id)text withAttributes:(id)attributes;	// 0x341e39
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x3429bd
// converted property setter: - (void)setText:(id)text;	// 0x341b7d
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x341b91
// converted property setter: - (void)setTextPadding:(float)padding;	// 0x34292d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34171d
// converted property getter: - (id)text;	// 0x341cad
// converted property getter: - (float)textPadding;	// 0x342965
@end

