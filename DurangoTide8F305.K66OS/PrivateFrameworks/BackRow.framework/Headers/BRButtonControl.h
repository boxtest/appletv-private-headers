/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSArray, BRImageControl, BRImage;

@interface BRButtonControl : BRControl {
@private
	int _style;	// 44 = 0x2c
	BRImageControl *_imageControl;	// 48 = 0x30
	BRImageControl *_badgeControl;	// 52 = 0x34
	BRTextControl *_titleControl;	// 56 = 0x38
	BRTextControl *_subtitleControl;	// 60 = 0x3c
	BRImageControl *_overlayImageControl;	// 64 = 0x40
	BRImageControl *_backgroundImageControl;	// 68 = 0x44
	BRImageControl *_bottomBackgroundImageControl;	// 72 = 0x48
	BRImage *_image;	// 76 = 0x4c
	BRImage *_highlightedImage;	// 80 = 0x50
	NSArray *_subcontrolOrder;	// 84 = 0x54
	BOOL _subcontrolsNeedSorting;	// 88 = 0x58
	BOOL _buttonEnabled;	// 89 = 0x59
}
@property(retain) id badgeImage;	// G=0x3299285d; S=0x3299287d; converted property
@property(retain) BRImage *highlightedImage;	// G=0x32992569; S=0x32992729; converted property
@property(retain) BRImage *image;	// G=0x3299295d; S=0x3299297d; converted property
@property(retain) id subtitle;	// G=0x329929c5; S=0x329929e5; converted property
@property(retain) id title;	// G=0x32992aed; S=0x32992b0d; converted property
+ (id)actionButtonWithImage:(id)image subtitle:(id)subtitle badge:(id)badge;	// 0x32927719
+ (id)actionButtonWithTitle:(id)title subtitle:(id)subtitle badge:(id)badge;	// 0x32927859
+ (id)dashedActionButtonWithTitle:(id)title subtitle:(id)subtitle selectable:(BOOL)selectable;	// 0x32992c65
+ (id)dialogButtonWithTitle:(id)title;	// 0x32992cd5
+ (id)glossyButtonWithTitle:(id)title;	// 0x32992c15
- (id)init;	// 0x32923295
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x3292341d
- (void)_addOpacityFadeAnimationIfNeededToControl:(id)control;	// 0x32993119
- (void)_addSortedControl:(id)control;	// 0x32992f8d
- (void)_focusWasChanged;	// 0x329265c9
- (void)_layoutActionSublayers;	// 0x32993d85
- (void)_layoutDashedSublayers;	// 0x32993ac9
- (void)_layoutDialogSublayers;	// 0x329938d5
- (void)_layoutGlossySublayers;	// 0x3299371d
- (id)_nonFocusedOpacityForControlNamed:(id)controlNamed;	// 0x32993199
- (void)_setBackgroundHighlightImage:(id)image;	// 0x32992ec1
- (void)_setBottomBackgroundHighlightImage:(id)image;	// 0x32992df5
- (void)_setControlOrderArray:(id)array;	// 0x32992d11
- (void)_setNonAttributedSubtitle:(id)subtitle;	// 0x329277c5
- (void)_setNonAttributedTitle:(id)title;	// 0x329239d1
- (void)_updateAllFocusOpacities;	// 0x3292662d
- (void)_updateBackgroundDialogImages;	// 0x32992d69
- (void)_updateFocusOpacityOfControl:(id)control;	// 0x32993071
- (void)_updateImageLayer;	// 0x329232f1
- (id)accessibilityLabel;	// 0x3299483d
- (id)accessibilityTraits;	// 0x329925a5
// converted property getter: - (id)badgeImage;	// 0x3299285d
- (void)controlWasActivated;	// 0x32993301
- (void)controlWasFocused;	// 0x3292658d
- (void)controlWasUnfocused;	// 0x32926bd1
- (void)dealloc;	// 0x32924f49
// converted property getter: - (id)highlightedImage;	// 0x32992569
// converted property getter: - (id)image;	// 0x3299295d
- (BOOL)isAccessibilityElement;	// 0x32992579
- (void)layoutSubcontrols;	// 0x329925d1
- (id)overayImage;	// 0x32992771
// converted property setter: - (void)setBadgeImage:(id)image;	// 0x3299287d
- (void)setButtonEnabled:(BOOL)enabled;	// 0x329926dd
- (void)setButtonStyle:(int)style;	// 0x329943d9
// converted property setter: - (void)setHighlightedImage:(id)image;	// 0x32992729
// converted property setter: - (void)setImage:(id)image;	// 0x3299297d
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x3299257d
- (void)setNonAttributedTitle:(id)title;	// 0x32992591
- (void)setOverlayImage:(id)image;	// 0x32992791
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x329929e5
// converted property setter: - (void)setTitle:(id)title;	// 0x32992b0d
// converted property getter: - (id)subtitle;	// 0x329929c5
// converted property getter: - (id)title;	// 0x32992aed
@end

