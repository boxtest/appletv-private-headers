/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITabBarItem, UIColor, UIImage, NSArray;
@protocol UITabBarDelegate;

@interface UITabBar : UIView {
@private
	UIView *_customizeView;	// 48 = 0x30
	UIView *_backgroundView;	// 52 = 0x34
	id<UITabBarDelegate> _delegate;	// 56 = 0x38
	NSArray *_items;	// 60 = 0x3c
	UITabBarItem *_selectedItem;	// 64 = 0x40
	NSArray *_customizationItems;	// 68 = 0x44
	struct {
		unsigned pushedRunLoop : 1;
		unsigned isRotatingRight : 1;
		unsigned isZoomRubberBandEnabled : 1;
		unsigned zoomsFromCurrentToMinOrMax : 1;
		unsigned updatesScroller : 1;
		unsigned isAnimatingZoomFailure : 1;
	} _tabBarFlags;	// 72 = 0x48
	NSArray *_buttonItems;	// 76 = 0x4c
	CFArrayRef _hiddenItems;	// 80 = 0x50
	id _appearanceStorage;	// 84 = 0x54
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x302a523d; S=0x302a5119; 
@property(retain) NSArray *buttonItems;	// G=0x302a5b91; S=0x302a5ba1; converted property
@property(assign, nonatomic) id<UITabBarDelegate> delegate;	// G=0x302a5695; S=0x300bf4d1; @synthesize=_delegate
@property(copy, nonatomic) NSArray *items;	// G=0x30104ad1; S=0x302a4d0d; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x300bf539; S=0x300bf3fd; converted property
@property(retain, nonatomic) UIColor *selectedImageTintColor;	// G=0x302a5675; S=0x302a55dd; 
@property(assign, nonatomic) UITabBarItem *selectedItem;	// G=0x300df1dd; S=0x300c3dc9; 
@property(retain, nonatomic) UIImage *selectionIndicatorImage;	// G=0x302a53a5; S=0x302a525d; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x300c1bdd; S=0x302a5531; 
+ (float)_buttonGap;	// 0x302a5be5
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x302a56a5
- (id)initWithCoder:(id)coder;	// 0x302a47ad
- (id)initWithFrame:(CGRect)frame;	// 0x300bedb9
- (void)_adjustButtonSelection:(id)selection;	// 0x3014b72d
- (void)_alertDidHide;	// 0x302a5ec1
- (void)_alertWillShow:(BOOL)_alert duration:(float)duration;	// 0x302a5bed
- (id)_appearanceStorage;	// 0x300c1bcd
- (void)_buttonCancel:(id)cancel;	// 0x302a5f69
- (void)_buttonDown:(id)down;	// 0x3014b661
- (void)_buttonDownDelayed:(id)delayed;	// 0x302a5f21
- (void)_buttonUp:(id)up;	// 0x3014b6b5
- (BOOL)_canDrawContent;	// 0x300bee85
- (void)_configureTabBarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;	// 0x302a67d9
- (void)_customizeDoneButtonAction:(id)action;	// 0x302a61a9
- (void)_customizeWithAvailableItems:(id)availableItems;	// 0x302a6321
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x300c626d
- (void)_dismissCustomizeSheet:(BOOL)sheet;	// 0x302a5fa1
- (void)_finishCustomizeAnimation:(id)animation;	// 0x302a61bd
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x302a4d21
- (BOOL)_isHidden:(id)hidden;	// 0x302a6a1d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x302a4909
- (void)_positionTabBarButtons:(id)buttons ignoringItem:(id)item;	// 0x300c34d5
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x3014b839
- (void)_setBackgroundImage:(id)image;	// 0x302a429d
- (void)_setLabelFont:(id)font;	// 0x302a42bd
- (void)_setLabelShadowColor:(id)color;	// 0x302a4541
- (void)_setLabelShadowOffset:(CGSize)offset;	// 0x302a4669
- (void)_setLabelTextColor:(id)color selectedTextColor:(id)color2;	// 0x302a43e5
- (void)_setSelectionIndicatorImage:(id)image;	// 0x302a42ad
- (BOOL)_subclassImplementsDrawRect;	// 0x300bee05
- (void)_tabBarFinishedAnimating;	// 0x302a56cd
- (void)_updateBackgroundImage;	// 0x300bef8d
- (void)_updateTintedImages:(id)images selected:(BOOL)selected;	// 0x302a53c5
// declared property getter: - (id)backgroundImage;	// 0x302a523d
- (void)beginCustomizingItems:(id)items;	// 0x302a4fa5
// converted property getter: - (id)buttonItems;	// 0x302a5b91
- (void)dealloc;	// 0x302a4b65
// declared property getter: - (id)delegate;	// 0x302a5695
- (void)dismissCustomizeSheet:(BOOL)sheet;	// 0x302a56ed
- (void)drawRect:(CGRect)rect;	// 0x302a5969
- (void)encodeWithCoder:(id)coder;	// 0x302a4a19
- (BOOL)endCustomizingAnimated:(BOOL)animated;	// 0x302a5099
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x302a69b1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3014b501
- (BOOL)isCustomizing;	// 0x300f5929
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x302b5635
// converted property getter: - (BOOL)isLocked;	// 0x300bf539
// declared property getter: - (id)items;	// 0x30104ad1
- (void)layoutSubviews;	// 0x300c6759
// declared property getter: - (id)selectedImageTintColor;	// 0x302a5675
// declared property getter: - (id)selectedItem;	// 0x300df1dd
// declared property getter: - (id)selectionIndicatorImage;	// 0x302a53a5
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x302a5119
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x302a5919
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x302a58c9
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x302a5879
- (void)setBounds:(CGRect)bounds;	// 0x302a4ef5
// converted property setter: - (void)setButtonItems:(id)items;	// 0x302a5ba1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x300bf4d1
- (void)setFrame:(CGRect)frame;	// 0x302a4e45
- (void)setFrame:(CGRect)frame;	// 0x300beed5
// declared property setter: - (void)setItems:(id)items;	// 0x302a4d0d
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x300c108d
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x300bf3fd
// declared property setter: - (void)setSelectedImageTintColor:(id)color;	// 0x302a55dd
// declared property setter: - (void)setSelectedItem:(id)item;	// 0x300c3dc9
// declared property setter: - (void)setSelectionIndicatorImage:(id)image;	// 0x302a525d
// declared property setter: - (void)setTintColor:(id)color;	// 0x302a5531
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x300bf431
// declared property getter: - (id)tintColor;	// 0x300c1bdd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x302a5719
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302a5821
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x302a57c9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x302a5771
@end
