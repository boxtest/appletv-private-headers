/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, NSArray;

@interface UIToolbar : UIView {
@private
	id _delegate;	// 48 = 0x30
	NSArray *_items;	// 52 = 0x34
	UIColor *_tintColor;	// 56 = 0x38
	struct {
		unsigned barStyle : 2;
		unsigned mode : 2;
		unsigned alertShown : 1;
		unsigned wasEnabled : 1;
		unsigned downButtonSentAction : 1;
		unsigned isTranslucent : 1;
		unsigned forceTopBarAppearance : 1;
	} _toolbarFlags;	// 60 = 0x3c
	CFDictionaryRef _groups;	// 64 = 0x40
	NSArray *_buttonItems;	// 68 = 0x44
	int _currentButtonGroup;	// 72 = 0x48
	CFArrayRef _hiddenItems;	// 76 = 0x4c
	int _pressedTag;	// 80 = 0x50
	float _extraEdgeInsets;	// 84 = 0x54
	UIView *_backgroundView;	// 88 = 0x58
	id _appearanceStorage;	// 92 = 0x5c
}
@property(assign, nonatomic) int barStyle;	// G=0x33a1ee19; S=0x33a2268d; 
@property(retain) NSArray *buttonItems;	// G=0x33b767d9; S=0x33b767e9; converted property
@property(readonly, assign) int currentButtonGroup;	// G=0x33ac519d; converted property
@property(assign) id delegate;	// G=0x33a43905; S=0x33a43751; converted property
@property(assign) float extraEdgeInsets;	// G=0x33b75a09; S=0x33b759f9; converted property
@property(copy, nonatomic) NSArray *items;	// G=0x33ac4d71; S=0x33a43761; 
@property(assign) int mode;	// G=0x33a20f65; S=0x33b75a19; converted property
@property(retain, nonatomic) UIColor *tintColor;	// G=0x33a1f2b5; S=0x33a28ec9; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x33a2e0d5; S=0x33afee2d; 
+ (float)_buttonGap;	// 0x33a221b9
+ (Class)defaultButtonClass;	// 0x33b760f5
+ (id)defaultButtonFont;	// 0x33a43915
+ (float)defaultHeight;	// 0x33a2907d
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x33a24549
+ (float)defaultSelectionModeHeight;	// 0x33b76111
+ (Class)defaultTextButtonClass;	// 0x33a4ab19
- (id)initInView:(id)view withFrame:(CGRect)frame withItemList:(id)itemList;	// 0x33a4170d
- (id)initInView:(id)view withFrame:(CGRect)frame withItems:(XXStruct_b4LybD *)items withCount:(int)count;	// 0x33b76a11
- (id)initInView:(id)view withItemList:(id)itemList;	// 0x33a49171
- (id)initInView:(id)view withItems:(XXStruct_b4LybD *)items withCount:(int)count;	// 0x33b76b9d
- (id)initWithCoder:(id)coder;	// 0x33b756c1
- (id)initWithFrame:(CGRect)frame;	// 0x33a1cd6d
- (void)_adjustButtonPressed:(id)pressed;	// 0x33b772c5
- (void)_alertWillShow:(BOOL)_alert duration:(float)duration;	// 0x33b76cd1
- (id)_backgroundView;	// 0x33b75641
- (void)_buttonBarFinishedAnimating;	// 0x33b764bd
- (void)_buttonCancel:(id)cancel;	// 0x33b7728d
- (void)_buttonDown:(id)down;	// 0x33b77151
- (void)_buttonDownDelayed:(id)delayed;	// 0x33b771a9
- (id)_buttonName:(id)name withType:(int)type;	// 0x33b77599
- (void)_buttonUp:(id)up;	// 0x33b771f1
- (id)_buttonWithDescription:(id)description;	// 0x33a49d9d
- (id)_currentButtons;	// 0x33b7737d
- (id)_currentCustomBackgroundRespectOversize:(BOOL *)oversize;	// 0x33a28881
- (id)_customToolbarAppearance;	// 0x33b770c1
- (void)_customViewChangedForButtonItem:(id)buttonItem;	// 0x33b75e79
- (id)_descriptionForTag:(int)tag;	// 0x33b7713d
- (void)_didFinishHidingRetainedOldItems:(id)items;	// 0x33a225a9
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x33a246cd
- (float)_edgeMarginForBorderedItem:(BOOL)borderedItem;	// 0x33a2212d
- (void)_finishButtonAnimation:(int)animation forButton:(int)button;	// 0x33b774e9
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x33ac3079
- (CGRect)_frameOfBarButtonItem:(id)barButtonItem;	// 0x33b76851
- (BOOL)_isHidden:(id)hidden;	// 0x33b77549
- (BOOL)_isInNavigationBar;	// 0x33b770d1
- (BOOL)_isPositionedHiddenForAlert;	// 0x33a28ea9
- (BOOL)_isTopBar;	// 0x33a22339
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33b75801
- (void)_positionToolbarButtons:(id)buttons ignoringItem:(id)item;	// 0x33a22545
- (id)_positionToolbarButtons:(id)buttons ignoringItem:(id)item actuallyRepositionButtons:(BOOL)buttons3;	// 0x33a210f5
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x33b75aed
- (void)_setBackgroundImage:(id)image mini:(id)mini;	// 0x33b768dd
- (void)_setBackgroundView:(id)view;	// 0x33b75651
- (void)_setButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x33b76915
- (void)_setForceTopBarAppearance:(BOOL)appearance;	// 0x33b7682d
- (void)_setTintColor:(id)color force:(BOOL)force;	// 0x33a1e2c9
- (void)_showButtons:(int *)buttons withCount:(int)count group:(int)group withDuration:(double)duration adjustPositions:(BOOL)positions skipTag:(int)tag;	// 0x33a49469
- (BOOL)_subclassImplementsDrawRect;	// 0x33a1cdb9
- (void)_updateBackgroundImage;	// 0x33a1d5e5
- (void)_updateItemsForNewFrame:(id)newFrame;	// 0x33a1de25
- (void)_updateOpacity;	// 0x33a1e295
- (void)_updateScriptingInfo:(id)info view:(id)view;	// 0x33ac4b8d
- (void)animateToolbarItemIndex:(unsigned)index duration:(double)duration target:(id)target didFinishSelector:(SEL)selector;	// 0x33b75df5
- (void)animateWithDuration:(float)duration forButton:(int)button;	// 0x33b767a5
- (id)backgroundImageForToolbarPosition:(int)toolbarPosition barMetrics:(int)metrics;	// 0x33b760a1
// declared property getter: - (int)barStyle;	// 0x33a1ee19
// converted property getter: - (id)buttonItems;	// 0x33b767d9
- (id)createButtonWithDescription:(id)description;	// 0x33a4a059
// converted property getter: - (int)currentButtonGroup;	// 0x33ac519d
- (void)dealloc;	// 0x33a559d1
- (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x33a28c45
// converted property getter: - (id)delegate;	// 0x33a43905
- (void)drawRect:(CGRect)rect;	// 0x33a27799
- (void)encodeWithCoder:(id)coder;	// 0x33b75911
// converted property getter: - (float)extraEdgeInsets;	// 0x33b75a09
- (void)getVisibleButtonTags:(int *)tags count:(unsigned *)count maxItems:(unsigned)items;	// 0x33b76599
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33c06651
- (BOOL)isMinibar;	// 0x33a1cf6d
// declared property getter: - (BOOL)isTranslucent;	// 0x33a2e0d5
// declared property getter: - (id)items;	// 0x33ac4d71
- (void)layoutSubviews;	// 0x33a26c41
// converted property getter: - (int)mode;	// 0x33a20f65
- (BOOL)onStateForButton:(int)button;	// 0x33b7674d
- (void)positionButtons:(id)buttons tags:(int *)tags count:(int)count group:(int)group;	// 0x33a4abad
- (void)registerButtonGroup:(int)group withButtons:(int *)buttons withCount:(int)count;	// 0x33b764dd
- (id)scriptingInfoWithChildren;	// 0x33ac4631
- (void)setBackgroundImage:(id)image forToolbarPosition:(int)toolbarPosition barMetrics:(int)metrics;	// 0x33b75f4d
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x33b766fd
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x33b766ad
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x33b7665d
// declared property setter: - (void)setBarStyle:(int)style;	// 0x33a2268d
- (void)setBarStyle:(int)style force:(BOOL)force;	// 0x33a1e051
- (void)setBounds:(CGRect)bounds;	// 0x33a28d75
- (void)setBounds:(CGRect)bounds;	// 0x33b75c09
- (void)setButtonBarTrackingMode:(int)mode;	// 0x33a4935d
// converted property setter: - (void)setButtonItems:(id)items;	// 0x33b767e9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33a43751
// converted property setter: - (void)setExtraEdgeInsets:(float)insets;	// 0x33b759f9
- (void)setFrame:(CGRect)frame;	// 0x33a1ce39
- (void)setFrame:(CGRect)frame;	// 0x33b75d01
// declared property setter: - (void)setItems:(id)items;	// 0x33a43761
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x33a1cfe9
// converted property setter: - (void)setMode:(int)mode;	// 0x33b75a19
- (void)setOnStateForButton:(BOOL)button forButton:(int)button2;	// 0x33b76775
// declared property setter: - (void)setTintColor:(id)color;	// 0x33a28ec9
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x33afee2d
- (void)showButtonGroup:(int)group withDuration:(double)duration;	// 0x33ac51ad
- (void)showButtons:(int *)buttons withCount:(int)count withDuration:(double)duration;	// 0x33a49439
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33a28afd
// declared property getter: - (id)tintColor;	// 0x33a1f2b5
@end
