/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UILabel, _UIPressedIndicatorView, UIColor, UIToolbarButtonBadge;

__attribute__((visibility("hidden")))
@interface UIToolbarButton : UIControl {
	CGRect _hitRect;	// 108 = 0x6c
	UIView *_info;	// 124 = 0x7c
	UILabel *_label;	// 128 = 0x80
	UIToolbarButtonBadge *_badge;	// 132 = 0x84
	_UIPressedIndicatorView *_pressedIndicator;	// 136 = 0x88
	int _barStyle;	// 140 = 0x8c
	int _style;	// 144 = 0x90
	UIEdgeInsets _glowAdjust;	// 148 = 0x94
	BOOL _onState;	// 164 = 0xa4
	BOOL _barHeight;	// 165 = 0xa5
	BOOL _badgeAnimated;	// 166 = 0xa6
	BOOL _bezel;	// 167 = 0xa7
	float _minimumWidth;	// 168 = 0xa8
	float _maximumWidth;	// 172 = 0xac
	float _labelHeight;	// 176 = 0xb0
	UIEdgeInsets _infoInsets;	// 180 = 0xb4
	UIColor *_toolbarTintColor;	// 196 = 0xc4
	BOOL _isAnimatedTrashButton;	// 200 = 0xc8
	id _appearanceStorage;	// 204 = 0xcc
	BOOL _isInTopBar;	// 208 = 0xd0
}
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;	// G=0x32bb747d; S=0x32d04f9d; 
@property(assign, nonatomic, getter=isAnimatedTrashButton) BOOL animatedTrashButton;	// G=0x32b9fad9; S=0x32b946b1; @synthesize=_isAnimatedTrashButton
+ (id)_defaultLabelColor;	// 0x32d03bad
+ (id)_defaultLabelFont;	// 0x32d03b89
- (id)initWithImage:(id)image pressedImage:(id)image2 label:(id)label labelHeight:(float)height withBarStyle:(int)barStyle withStyle:(int)style withInsets:(UIEdgeInsets)insets possibleTitles:(id)titles possibleSystemItems:(id)items withToolbarTintColor:(id)toolbarTintColor bezel:(BOOL)bezel imageInsets:(UIEdgeInsets)insets12 glowInsets:(UIEdgeInsets)insets13 landscape:(BOOL)landscape;	// 0x32b92c01
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x32d04fd9
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x32d0533d
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x32d05345
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x32d04e3d
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x32d04ca1
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x32d04fe1
- (void)_UIAppearance_setTintColor:(id)color;	// 0x32d04ef9
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x32d0515d
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x32d04fb1
- (void)_adjustPushButtonForMiniBar:(BOOL)miniBar isChangingBarHeight:(BOOL)height;	// 0x32b94021
- (void)_adjustToolbarButtonInfo;	// 0x32d04961
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)changed;	// 0x32d04975
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar;	// 0x32d04465
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar target:(id)target didFinishSelector:(SEL)selector;	// 0x32d043c5
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x32b9473d
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x32d04e81
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x32d0510d
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x32d03f61
- (CGRect)_buttonBarHitRect;	// 0x32b96025
- (BOOL)_canGetPadding;	// 0x32b95f25
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x32d042f9
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x32bb74b9
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x32d0450d
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x32d045d9
- (id)_info;	// 0x32d04c91
- (BOOL)_isBordered;	// 0x32b95d4d
- (BOOL)_isOn;	// 0x32d043b5
- (id)_newButton;	// 0x32bb72e9
- (float)_paddingForLeft:(BOOL)left;	// 0x32b985a1
- (void)_positionBadge;	// 0x32b934e9
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x32d04fdd
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x32d05341
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x32d05349
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x32d04e71
- (void)_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x32d04e61
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x32d050fd
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x32d04021
- (void)_setBadgeValue:(id)value;	// 0x32bb97f1
- (void)_setBarHeight:(float)height;	// 0x32b946c5
- (void)_setButtonBarHitRect:(CGRect)rect;	// 0x32b96009
- (void)_setInTopBar:(BOOL)topBar;	// 0x32b95f89
- (void)_setInfoExtremityWidth:(float)width isMin:(BOOL)min;	// 0x32d04079
- (void)_setInfoFlexibleWidth:(BOOL)width;	// 0x32d04211
- (void)_setInfoWidth:(float)width;	// 0x32c3ed55
- (void)_setOn:(BOOL)on;	// 0x32d04375
- (void)_setPressed:(BOOL)pressed;	// 0x32d03db1
// declared property setter: - (void)_setTintColor:(id)color;	// 0x32d04f9d
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x32d052c9
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x32d04fb5
- (void)_showPressedIndicator:(BOOL)indicator;	// 0x32d03c81
- (void)_sizeView:(id)view toPossibleTitles:(id)possibleTitles pressedTitle:(id)title;	// 0x32c4c5a5
// declared property getter: - (id)_tintColor;	// 0x32bb747d
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x32d052d9
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x32d04fb9
- (void)_updateInfoTextColorsForState:(unsigned)state;	// 0x32d04785
- (void)_updateShadowOffsetWithAttributes:(id)attributes forState:(unsigned)state;	// 0x32d04661
- (BOOL)_useBarHeight;	// 0x32b95f79
- (BOOL)_useSilverLook;	// 0x32d044a1
- (UIEdgeInsets)alignmentRectInsets;	// 0x32d04339
- (void)dealloc;	// 0x32ba085d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32d04291
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32c3cf29
// declared property getter: - (BOOL)isAnimatedTrashButton;	// 0x32b9fad9
- (void)layoutSubviews;	// 0x32b9f541
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x32d04261
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32c3cf91
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x32c3d569
// declared property setter: - (void)setAnimatedTrashButton:(BOOL)button;	// 0x32b946b1
- (void)setBarStyle:(int)style;	// 0x32b98699
- (void)setEnabled:(BOOL)enabled;	// 0x32b94a79
- (void)setFrame:(CGRect)frame;	// 0x32b934a1
- (void)setHighlighted:(BOOL)highlighted;	// 0x32c3cfc5
- (void)setImage:(id)image;	// 0x32d03c05
- (void)setSizesToFitImage:(BOOL)fitImage;	// 0x32bb9695
- (void)setTintColor:(id)color;	// 0x32d04491
- (void)setToolbarTintColor:(id)color;	// 0x32b986c1
- (void)setUseSelectedImage:(BOOL)image;	// 0x32d03ea5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32d042fd
@end
