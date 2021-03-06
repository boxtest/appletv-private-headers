/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITabBarButtonBadge, UITabBarButtonLabel, NSValue, UIImage, UITabBarSelectionIndicatorView;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl {
@private
	CGRect _hitRect;	// 72 = 0x48
	UIView *_info;	// 88 = 0x58
	UITabBarButtonLabel *_label;	// 92 = 0x5c
	UITabBarButtonBadge *_badge;	// 96 = 0x60
	UITabBarSelectionIndicatorView *_selectedIndicator;	// 100 = 0x64
	BOOL _selected;	// 104 = 0x68
	BOOL _barHeight;	// 105 = 0x69
	BOOL _badgeAnimated;	// 106 = 0x6a
	UIEdgeInsets _infoInsets;	// 108 = 0x6c
	UIOffset _selectedInfoOffset;	// 124 = 0x7c
	UIOffset _infoOffset;	// 132 = 0x84
	UIImage *_customSelectedIndicatorImage;	// 140 = 0x8c
	NSValue *_labelOffsetValue;	// 144 = 0x90
}
@property(retain, nonatomic) NSValue *labelOffsetValue;	// G=0x32eee41d; S=0x32eee42d; @synthesize=_labelOffsetValue
@property(readonly, assign, nonatomic) UITabBarButtonLabel *tabBarButtonLabel;	// G=0x32eee451; @synthesize=_label
+ (id)_defaultLabelColor;	// 0x32d0e9c5
+ (id)_defaultLabelFont;	// 0x32d0e855
+ (id)_donePushButton;	// 0x32eeda4d
- (id)initWithImage:(id)image selectedImage:(id)image2 label:(id)label withInsets:(UIEdgeInsets)insets;	// 0x32d0e515
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x32eee2c5
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x32eee2c1
- (void)_applyTabBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x32d0f045
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x32eee0f5
- (void)_positionBadge;	// 0x32d0eaf9
- (id)_scriptingInfo;	// 0x32ef2a6d
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x32eee1b5
- (void)_setBadgeValue:(id)value;	// 0x32eede89
- (void)_setBarHeight:(float)height;	// 0x32d0efd1
- (void)_setCustomSelectedIndicatorImage:(id)image;	// 0x32eee251
- (void)_setInfoOffset:(UIOffset)offset;	// 0x32eede21
- (void)_setSelected:(BOOL)selected;	// 0x32d1025d
- (void)_setSelectedInfoOffset:(UIOffset)offset;	// 0x32eeddb9
- (void)_setTabBarHitRect:(CGRect)rect;	// 0x32d0f8a9
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x32eee3d1
- (void)_showSelectedIndicator:(BOOL)indicator changeSelection:(BOOL)selection;	// 0x32d0f1d5
- (id)_swappableImageView;	// 0x32eedda9
- (CGRect)_tabBarHitRect;	// 0x32eedd85
- (UIOffset)_titlePositionAdjustment;	// 0x32eee3e1
- (void)_updateInfoFrame;	// 0x32d12c95
- (BOOL)_useBarHeight;	// 0x32eee241
- (void)dealloc;	// 0x32eedc99
// declared property getter: - (id)labelOffsetValue;	// 0x32eee41d
- (void)layoutSubviews;	// 0x32d127b1
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x32eee211
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32d9756d
- (void)setEnabled:(BOOL)enabled;	// 0x32d0f0f9
- (void)setFrame:(CGRect)frame;	// 0x32d0eab1
- (void)setImage:(id)image;	// 0x32eedd65
// declared property setter: - (void)setLabelOffsetValue:(id)value;	// 0x32eee42d
// declared property getter: - (id)tabBarButtonLabel;	// 0x32eee451
@end

