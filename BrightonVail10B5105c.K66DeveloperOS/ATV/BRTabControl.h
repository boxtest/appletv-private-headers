/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPanelControl.h"
#import "AppleTV-Structs.h"

@class NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface BRTabControl : BRPanelControl {
	int _selectedTabIndex;	// 112 = 0x70
	float _scaledTextPadding;	// 116 = 0x74
	float _scaledPreferredHeight;	// 120 = 0x78
	int _tabBeingDeselected;	// 124 = 0x7c
	id _tabControlDelegate;	// 128 = 0x80
	NSArray *_greyImages;	// 132 = 0x84
	NSArray *_blackImages;	// 136 = 0x88
	NSArray *_blueImages;	// 140 = 0x8c
	NSDictionary *_tabItemLabelAttributes;	// 144 = 0x90
}
@property(assign) id tabControlDelegate;	// G=0x3006cd; S=0x3006dd; converted property
+ (id)fullSizeTabControl;	// 0x300295
+ (id)menuTabControl;	// 0x30035d
- (id)init;	// 0x300425
- (id)_centerTabImagesFromImages:(id)images;	// 0x3017b1
- (void)_focusChanged:(id)changed;	// 0x301c5d
- (id)_imagesForTabItem:(id)tabItem;	// 0x3018d5
- (id)_leftTabImagesFromImages:(id)images;	// 0x301715
- (void)_loadTabImages;	// 0x301355
- (id)_rightTabImagesFromImages:(id)images;	// 0x301835
- (void)_updateFocusNotifications;	// 0x301bc5
- (void)_updateTabItemNames:(int)names;	// 0x301aa5
- (id)accessibilityControls;	// 0x3011a9
- (void)addTabItem:(id)item;	// 0x3006ed
- (void)addTabItems:(id)items;	// 0x30072d
- (BOOL)brEventAction:(id)action;	// 0x3005f9
- (void)controlWasFocused;	// 0x301039
- (void)controlWasUnfocused;	// 0x3010f1
- (void)dealloc;	// 0x3004e5
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x300fbd
- (void)insertTabItem:(id)item atIndex:(int)index;	// 0x3009a5
- (void)removeAllTabItems;	// 0x300b65
- (void)removeTabItem:(id)item;	// 0x300b79
- (void)selectNextTabItem;	// 0x300f39
- (void)selectPreviousTabItem;	// 0x300ee1
- (void)selectTabItem:(id)item;	// 0x300cd9
- (void)selectTabItemAtIndex:(int)index;	// 0x300e75
- (id)selectedTabItem;	// 0x300c8d
- (int)selectedTabItemIndex;	// 0x300cc9
- (void)setScaledPreferredHeight:(float)height;	// 0x3005ad
- (void)setScaledTextPadding:(float)padding;	// 0x30059d
// converted property setter: - (void)setTabControlDelegate:(id)delegate;	// 0x3006dd
- (void)setTabItemLabelAttributes:(id)attributes;	// 0x3005bd
- (void)setTabItemNonSelectedImages:(id)images;	// 0x3016bd
- (void)setTabItemSelectedInFocusImages:(id)focusImages;	// 0x30160d
- (void)setTabItemSelectedNonFocusedImages:(id)images;	// 0x301665
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3011b9
// converted property getter: - (id)tabControlDelegate;	// 0x3006cd
- (int)tabItemCount;	// 0x300c65
- (id)tabItems;	// 0x300995
@end
