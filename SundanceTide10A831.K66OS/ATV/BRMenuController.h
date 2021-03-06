/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRHeaderControl, BRListControlMonitor, BRTextControl, BRListControl;

__attribute__((visibility("hidden")))
@interface BRMenuController : BRController {
	BRListControl *_list;	// 100 = 0x64
	BRHeaderControl *_header;	// 104 = 0x68
	id _selectedObject;	// 108 = 0x6c
	BOOL _clearSavedSelection;	// 112 = 0x70
	BRListControlMonitor *_listControlMonitor;	// 116 = 0x74
	float _menuWidthFactor;	// 120 = 0x78
	float _headerWidthFactor;	// 124 = 0x7c
	BOOL _useCenteredLayout;	// 128 = 0x80
	BRTextControl *_primaryTextControl;	// 132 = 0x84
	BRTextControl *_secondaryTextControl;	// 136 = 0x88
	BRTextControl *_labelControl;	// 140 = 0x8c
}
@property(readonly, retain) BRHeaderControl *header;	// G=0x29b2c1; converted property
@property(assign) float headerWidthFactor;	// G=0x29b311; S=0x29b2d1; converted property
@property(readonly, retain) BRListControl *list;	// G=0x29b20d; converted property
@property(retain) id listIcon;	// G=0x29c11d; S=0x29c0b9; converted property
@property(assign) float listIconHorizontalOffset;	// G=0x29c15d; S=0x29c13d; converted property
@property(assign) float listIconKerningFactor;	// G=0x29c19d; S=0x29c17d; converted property
@property(retain) id listTitle;	// G=0x29c079; S=0x29bff9; converted property
@property(assign) float menuWidthFactor;	// G=0x29b2b1; S=0x29b21d; converted property
@property(assign) long selectedItem;	// G=0x29c32d; S=0x29c30d; converted property
@property(retain) id selectedObject;	// G=0x29b4cd; S=0x29b491; converted property
@property(retain) id title;	// G=0x29bb29; S=0x29bae5; converted property
- (id)init;	// 0x29ad79
- (BOOL)_itemSelected:(id)selected;	// 0x29c391
- (id)accessibilityLabel;	// 0x29c285
- (id)accessibilitySecondaryLabel;	// 0x29c2a5
- (void)cancelCurrentListMonitorLoads;	// 0x29b679
- (void)clearSavedSelection;	// 0x29b325
- (int)contextMenuDimOption;	// 0x29c281
- (id)controlForContextMenuPositioning;	// 0x29c1bd
- (id)controlForContextMenuStart;	// 0x29c1cd
- (id)controlToDim;	// 0x29c1f5
- (void)controlWasActivated;	// 0x29b375
- (void)dealloc;	// 0x29aec9
- (long)defaultIndex;	// 0x29c389
// converted property getter: - (id)header;	// 0x29b2c1
// converted property getter: - (float)headerWidthFactor;	// 0x29b311
- (BOOL)isCurrentSelectionValidForModelData:(id)modelData;	// 0x29b539
- (BOOL)isValidAfterDataUpdate;	// 0x29b5d1
- (BOOL)isVolatile;	// 0x29c405
- (long)itemCount;	// 0x29c34d
- (void)itemSelected:(long)selected;	// 0x29c385
- (void)layoutSubcontrols;	// 0x29afbd
- (void)layoutSubcontrolsUsingCenteredLayout;	// 0x29b6ed
// converted property getter: - (id)list;	// 0x29b20d
// converted property getter: - (id)listIcon;	// 0x29c11d
// converted property getter: - (float)listIconHorizontalOffset;	// 0x29c15d
// converted property getter: - (float)listIconKerningFactor;	// 0x29c19d
// converted property getter: - (id)listTitle;	// 0x29c079
- (float)listVerticalOffset;	// 0x29b321
- (id)loadModelData;	// 0x29b4dd
// converted property getter: - (float)menuWidthFactor;	// 0x29b2b1
- (id)primaryInfoTextControl;	// 0x29bce1
- (void)refreshControllerForModelUpdate;	// 0x29b4e1
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x29b4e5
- (id)secondaryInfoTextControl;	// 0x29be29
// converted property getter: - (long)selectedItem;	// 0x29c32d
// converted property getter: - (id)selectedObject;	// 0x29b4cd
// converted property setter: - (void)setHeaderWidthFactor:(float)factor;	// 0x29b2d1
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x29bb51
- (void)setLabel:(id)label;	// 0x29be39
- (void)setLabel:(id)label withAttributes:(id)attributes;	// 0x29be75
// converted property setter: - (void)setListIcon:(id)icon;	// 0x29c0b9
- (void)setListIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x29c099
// converted property setter: - (void)setListIconHorizontalOffset:(float)offset;	// 0x29c13d
// converted property setter: - (void)setListIconKerningFactor:(float)factor;	// 0x29c17d
// converted property setter: - (void)setListTitle:(id)title;	// 0x29bff9
- (void)setListTitle:(id)title withAttributes:(id)attributes;	// 0x29bf79
// converted property setter: - (void)setMenuWidthFactor:(float)factor;	// 0x29b21d
- (void)setPrimaryInfoText:(id)text;	// 0x29bba9
- (void)setPrimaryInfoText:(id)text withAttributes:(id)attributes;	// 0x29bbbd
- (void)setSecondaryInfoText:(id)text;	// 0x29bcf1
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x29bd05
// converted property setter: - (void)setSelectedItem:(long)item;	// 0x29c30d
// converted property setter: - (void)setSelectedObject:(id)object;	// 0x29b491
// converted property setter: - (void)setTitle:(id)title;	// 0x29bae5
- (void)setUseCenteredLayout:(BOOL)layout;	// 0x29b699
- (BOOL)shouldRefreshForUpdateToObject:(id)object;	// 0x29b5cd
- (int)soundForSelectingItem:(long)selectingItem;	// 0x29c38d
// converted property getter: - (id)title;	// 0x29bb29
- (void)wasPushed;	// 0x29b3d5
@end

