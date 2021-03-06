/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UINavigationItem, UIFont;

__attribute__((visibility("hidden")))
@interface UINavigationItemView : UIView {
@private
	UIFont *_font;	// 48 = 0x30
	UINavigationItem *_item;	// 52 = 0x34
	float _titleWidth;	// 56 = 0x38
	BOOL _titleAutosizesToFit;	// 60 = 0x3c
	UIView *_topCrossView;	// 64 = 0x40
	UIView *_bottomCrossView;	// 68 = 0x44
	BOOL _isCrossFading;	// 72 = 0x48
	int _lineBreakMode;	// 76 = 0x4c
}
@property(retain) UIFont *font;	// G=0x3308a40d; S=0x3308a3c9; converted property
@property(assign) BOOL titleAutoresizesToFit;	// G=0x3308a3b9; S=0x32efa215; converted property
- (id)initWithNavigationItem:(id)navigationItem;	// 0x32ef9fd9
- (void)_cleanUpCrossView;	// 0x3308a781
- (void)_crossFadeHiddingButton:(BOOL)button;	// 0x3308a681
- (id)_currentTextColorForBarStyle:(int)barStyle;	// 0x32f283d9
- (id)_currentTextShadowColorForBarStyle:(int)barStyle;	// 0x32f28291
- (CGSize)_currentTextShadowOffsetForBarStyle:(int)barStyle;	// 0x32f2814d
- (id)_defaultFont;	// 0x32f28115
- (void)_prepareCrossViewsForNewSize:(CGSize)newSize;	// 0x3308a41d
- (void)_resetTitleWidth;	// 0x32f133c9
- (id)_scriptingInfo;	// 0x33003cc5
- (void)_setLineBreakMode:(int)mode;	// 0x32f1383d
- (float)_titleWidth;	// 0x32f41815
- (BOOL)_useSilverLookForBarStyle:(int)barStyle;	// 0x32f28211
- (void)drawRect:(CGRect)rect;	// 0x32f27e29
- (void)drawText:(id)text inRect:(CGRect)rect barStyle:(int)style;	// 0x32f27f0d
// converted property getter: - (id)font;	// 0x3308a40d
- (id)navigationItem;	// 0x3308a3a9
// converted property setter: - (void)setFont:(id)font;	// 0x3308a3c9
- (void)setFrame:(CGRect)frame;	// 0x32efa095
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x32efa215
- (id)title;	// 0x32f98681
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x3308a3b9
@end

