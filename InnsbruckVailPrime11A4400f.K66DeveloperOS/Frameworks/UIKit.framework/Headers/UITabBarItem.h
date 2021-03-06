/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIBarItem.h"

@class UIColor, UIImage, NSString, UIView;

@interface UITabBarItem : UIBarItem {
	NSString *_title;	// 8 = 0x8
	SEL _action;	// 12 = 0xc
	id _target;	// 16 = 0x10
	UIImage *_templateImage;	// 20 = 0x14
	UIImage *_selectedTemplateImage;	// 24 = 0x18
	UIImage *_selectedImage;	// 28 = 0x1c
	UIImage *_unselectedImage;	// 32 = 0x20
	UIEdgeInsets _imageInsets;	// 36 = 0x24
	NSString *_badgeValue;	// 52 = 0x34
	UIView *_view;	// 56 = 0x38
	int _tag;	// 60 = 0x3c
	id _appearanceStorage;	// 64 = 0x40
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned animatedBadge : 1;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	} _tabBarItemFlags;	// 68 = 0x44
	int _barMetrics;	// 72 = 0x48
	int _imageStyle;	// 76 = 0x4c
	UIColor *_tintColor;	// 80 = 0x50
}
@property(assign, nonatomic, setter=_setBarMetrics:) int _barMetrics;	// G=0x2f6c391d; S=0x2f6c392d; @synthesize
@property(assign, nonatomic, setter=_setImageStyle:) int _imageStyle;	// G=0x2f6c393d; S=0x2f6c394d; @synthesize
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;	// G=0x2f6c395d; S=0x2f6c2e61; @synthesize
@property(assign, nonatomic) SEL action;	// G=0x2f4f6ed9; S=0x2f4191d9; 
@property(assign, nonatomic) BOOL animatedBadge;	// G=0x2f6c3a19; S=0x2f6c3999; 
@property(copy, nonatomic) NSString *badgeValue;	// G=0x2f6c354d; S=0x2f467e19; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x2f41ab25; S=0x2f467bf1; converted property
@property(retain) id image;	// G=0x2f418341; S=0x2f467f91; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x2f469e0d; S=0x2f495409; converted property
@property(retain, nonatomic) UIImage *selectedImage;	// G=0x2f6c3639; S=0x2f6c3585; 
@property(assign) int tag;	// G=0x2f418395; S=0x2f467c75; converted property
@property(assign, nonatomic) id target;	// G=0x2f4f6ee9; S=0x2f4191c9; 
@property(retain) NSString *title;	// G=0x2f469db9; S=0x2f467df1; converted property
@property(assign) UIOffset titlePositionAdjustment;	// G=0x2f6c38c9; S=0x2f6c37bd; converted property
@property(retain, nonatomic) UIImage *unselectedImage;	// G=0x2f468ce1; S=0x2f6c3a2d; 
@property(retain, nonatomic) UIView *view;	// G=0x2f419919; S=0x2f4699e5; 
@property(assign, nonatomic) BOOL viewIsCustom;	// G=0x2f46981d; S=0x2f6c3971; 
+ (id)_appearanceBlindViewClasses;	// 0x2f6c3ee9
- (id)init;	// 0x2f467ba5
- (id)initWithCoder:(id)coder;	// 0x2f6c2fad
- (id)initWithTabBarSystemItem:(int)tabBarSystemItem tag:(int)tag;	// 0x2f467b4d
- (id)initWithTitle:(id)title image:(id)image selectedImage:(id)image3;	// 0x2f6c2f45
- (id)initWithTitle:(id)title image:(id)image tag:(int)tag;	// 0x2f467f25
// declared property getter: - (int)_barMetrics;	// 0x2f6c391d
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge idiom:(int)idiom;	// 0x2f6c3f79
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge withTint:(BOOL)tint idiom:(int)idiom;	// 0x2f6c3fa9
// declared property getter: - (int)_imageStyle;	// 0x2f6c393d
- (id)_internalTemplateImage;	// 0x2f468dc5
- (id)_internalTemplateImages;	// 0x2f6c3ab5
- (id)_internalTitle;	// 0x2f468ded
// declared property setter: - (void)_setBarMetrics:(int)metrics;	// 0x2f6c392d
// declared property setter: - (void)_setImageStyle:(int)style;	// 0x2f6c394d
- (void)_setInternalTemplateImage:(id)image;	// 0x2f467fbd
- (void)_setInternalTitle:(id)title;	// 0x2f467d01
// declared property setter: - (void)_setTintColor:(id)color;	// 0x2f6c2e61
- (void)_setTitleTextAttributeValue:(id)value forAttributeKey:(id)attributeKey state:(unsigned)state;	// 0x2f6c3db1
// declared property getter: - (id)_tintColor;	// 0x2f6c395d
- (void)_updateButtonForTintColor:(id)tintColor selected:(BOOL)selected;	// 0x2f6c3c5d
- (id)_updateImageWithTintColor:(id)tintColor isSelected:(BOOL)selected getImageOffset:(UIOffset *)offset;	// 0x2f469bd1
- (void)_updateView;	// 0x2f467d79
- (void)_updateViewForIdiom:(int)idiom;	// 0x2f6c48fd
- (void)_updateViewForIdiom:(int)idiom positionItems:(BOOL)items;	// 0x2f6c46d1
// declared property getter: - (SEL)action;	// 0x2f4f6ed9
// declared property getter: - (BOOL)animatedBadge;	// 0x2f6c3a19
// declared property getter: - (id)badgeValue;	// 0x2f6c354d
- (void)dealloc;	// 0x2f6c3459
- (void)encodeWithCoder:(id)coder;	// 0x2f6c3209
- (id)finishedSelectedImage;	// 0x2f6c3711
- (id)finishedUnselectedImage;	// 0x2f6c373d
// converted property getter: - (id)image;	// 0x2f418341
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x2f469e0d
// converted property getter: - (BOOL)isEnabled;	// 0x2f41ab25
- (BOOL)isSystemItem;	// 0x2f467ced
- (id)nextResponder;	// 0x2f6c3d91
// declared property getter: - (id)selectedImage;	// 0x2f6c3639
// declared property setter: - (void)setAction:(SEL)action;	// 0x2f4191d9
// declared property setter: - (void)setAnimatedBadge:(BOOL)badge;	// 0x2f6c3999
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x2f467e19
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x2f467bf1
- (void)setFinishedSelectedImage:(id)image withFinishedUnselectedImage:(id)finishedUnselectedImage;	// 0x2f468225
// converted property setter: - (void)setImage:(id)image;	// 0x2f467f91
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x2f495409
// declared property setter: - (void)setSelectedImage:(id)image;	// 0x2f6c3585
// converted property setter: - (void)setTag:(int)tag;	// 0x2f467c75
// declared property setter: - (void)setTarget:(id)target;	// 0x2f4191c9
// converted property setter: - (void)setTitle:(id)title;	// 0x2f467df1
// converted property setter: - (void)setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x2f6c37bd
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x2f494f9d
// declared property setter: - (void)setUnselectedImage:(id)image;	// 0x2f6c3a2d
// declared property setter: - (void)setView:(id)view;	// 0x2f4699e5
// declared property setter: - (void)setViewIsCustom:(BOOL)custom;	// 0x2f6c3971
- (int)systemItem;	// 0x2f468db1
// converted property getter: - (int)tag;	// 0x2f418395
// declared property getter: - (id)target;	// 0x2f4f6ee9
// converted property getter: - (id)title;	// 0x2f469db9
// converted property getter: - (UIOffset)titlePositionAdjustment;	// 0x2f6c38c9
- (id)titleTextAttributesForState:(unsigned)state;	// 0x2f6c3769
// declared property getter: - (id)unselectedImage;	// 0x2f468ce1
// declared property getter: - (id)view;	// 0x2f419919
// declared property getter: - (BOOL)viewIsCustom;	// 0x2f46981d
@end

