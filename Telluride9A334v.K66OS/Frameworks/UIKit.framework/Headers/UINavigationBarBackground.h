/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageView.h"

@class _UINavigationBarAppearanceStorage, UIColor;

__attribute__((visibility("hidden")))
@interface UINavigationBarBackground : UIImageView {
@private
	UIColor *_tintColor;	// 52 = 0x34
	_UINavigationBarAppearanceStorage *_appearanceStorage;	// 56 = 0x38
	struct {
		unsigned isTranslucent : 1;
		unsigned barStyle : 3;
		unsigned backgroundImageNeedsUpdate : 1;
		unsigned isContainedInPopover : 1;
	} _navbarFlags;	// 60 = 0x3c
}
@property(retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage;	// G=0x301f9849; S=0x301f9859; @synthesize=_appearanceStorage
@property(assign, nonatomic) int barStyle;	// G=0x3019611d; S=0x300f4ac9; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x301f9725; S=0x301f96cd; 
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x301f9735; S=0x300f4e0d; 
- (id)initWithFrame:(CGRect)frame barStyle:(int)style tintColor:(id)color appearance:(id)appearance isTranslucent:(BOOL)translucent;	// 0x30064079
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x3006ca29
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x301f9749
// declared property getter: - (id)appearanceStorage;	// 0x301f9849
// declared property getter: - (int)barStyle;	// 0x3019611d
- (void)dealloc;	// 0x300f5db1
// declared property getter: - (BOOL)isTranslucent;	// 0x301f9735
// declared property setter: - (void)setAppearanceStorage:(id)storage;	// 0x301f9859
// declared property setter: - (void)setBarStyle:(int)style;	// 0x300f4ac9
- (void)setBounds:(CGRect)bounds;	// 0x301f9769
- (void)setFrame:(CGRect)frame;	// 0x30064169
// declared property setter: - (void)setTintColor:(id)color;	// 0x301f96cd
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x300f4e0d
// declared property getter: - (id)tintColor;	// 0x301f9725
- (void)updateBackgroundImage;	// 0x30064249
@end

