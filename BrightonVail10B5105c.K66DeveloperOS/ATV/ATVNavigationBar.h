/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, NSArray, BRPanelControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVNavigationBar : BRControl {
	BRPanelControl *_panel;	// 84 = 0x54
	BRControl *_bottomDivider;	// 88 = 0x58
	BRImageControl *_glow;	// 92 = 0x5c
	BRControl *_leftFade;	// 96 = 0x60
	BRControl *_rightFade;	// 100 = 0x64
	BOOL _rebuildPanel;	// 104 = 0x68
	int _selectedIndex;	// 108 = 0x6c
	NSTimer *_updateSelectedIndexTimer;	// 112 = 0x70
	id _controlCreationBlock;	// 116 = 0x74
	BOOL _needsUpdateOfSelectedItem;	// 120 = 0x78
	BOOL _needsUpdateOfItems;	// 121 = 0x79
	NSArray *_items;	// 124 = 0x7c
	id _selectedItem;	// 128 = 0x80
	int _focusedIndex;	// 132 = 0x84
	BOOL _centerFocusLayout;	// 136 = 0x88
	double _timeSinceFocusMoved;	// 140 = 0x8c
}
@property(assign, nonatomic) BOOL _centerFocusLayout;	// G=0x12b05d; S=0x12b06d; @synthesize
@property(assign, nonatomic) int _focusedIndex;	// G=0x12b03d; S=0x12b04d; @synthesize
@property(assign, nonatomic) int _selectedIndex;	// G=0x12b01d; S=0x12b02d; @synthesize
@property(assign, nonatomic) double _timeSinceFocusMoved;	// G=0x12b07d; S=0x12b095; @synthesize
@property(copy, nonatomic) NSArray *items;	// G=0x12aff9; S=0x12a715; @synthesize=_items
@property(readonly, assign, nonatomic) unsigned selectedIndex;	// G=0x12ad41; 
@property(assign, nonatomic) id selectedItem;	// G=0x12b00d; S=0x12ad19; @synthesize=_selectedItem
- (id)init;	// 0x12a061
- (void)_accessibilityUpdateSelection;	// 0x12b0e5
// declared property getter: - (BOOL)_centerFocusLayout;	// 0x12b05d
- (void)_clearSelectedIndexTimer;	// 0x12b895
// declared property getter: - (int)_focusedIndex;	// 0x12b03d
- (void)_restoreSelection;	// 0x12b15d
- (void)_selectedCategoryDidChange;	// 0x12b325
// declared property getter: - (int)_selectedIndex;	// 0x12b01d
- (void)_setSelectedIndex:(int)index;	// 0x12b299
- (void)_setupSelectedIndexTimer;	// 0x12b8d9
// declared property getter: - (double)_timeSinceFocusMoved;	// 0x12b07d
- (id)_titleControlForObject:(id)object;	// 0x12b0a9
- (void)_updateRepositioning;	// 0x12b389
- (void)_updateSelectedIndex;	// 0x12b225
- (BOOL)brEventAction:(id)action;	// 0x12ad51
- (void)controlWasFocused;	// 0x12abe5
- (void)controlWasUnfocused;	// 0x12ac99
- (void)dealloc;	// 0x12a60d
// declared property getter: - (id)items;	// 0x12aff9
- (void)layoutSubcontrols;	// 0x12a805
- (void)registerControlCreationBlock:(id)block;	// 0x12a6d5
// declared property getter: - (unsigned)selectedIndex;	// 0x12ad41
// declared property getter: - (id)selectedItem;	// 0x12b00d
// declared property setter: - (void)setItems:(id)items;	// 0x12a715
// declared property setter: - (void)setSelectedItem:(id)item;	// 0x12ad19
// declared property setter: - (void)set_centerFocusLayout:(BOOL)layout;	// 0x12b06d
// declared property setter: - (void)set_focusedIndex:(int)index;	// 0x12b04d
// declared property setter: - (void)set_selectedIndex:(int)index;	// 0x12b02d
// declared property setter: - (void)set_timeSinceFocusMoved:(double)moved;	// 0x12b095
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x12a7ad
- (void)updateBoundItems;	// 0x12a78d
- (void)updateBoundSelectedItem;	// 0x12acf9
@end

