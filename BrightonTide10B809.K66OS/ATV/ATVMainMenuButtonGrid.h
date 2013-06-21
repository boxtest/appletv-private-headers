/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRGridView.h"

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMainMenuButtonGrid : BRGridView {
	BOOL _itemsNeedUpdating;	// 208 = 0xd0
	BOOL _focusedItemNeedsUpdating;	// 209 = 0xd1
	BOOL _updatingFocusedItem;	// 210 = 0xd2
	NSArray *_items;	// 212 = 0xd4
	NSDictionary *_buttonTemplateInfo;	// 216 = 0xd8
	long _numberOfColumns;	// 220 = 0xdc
	id _itemTitleBlock;	// 224 = 0xe0
	id _itemImageBlock;	// 228 = 0xe4
	id _itemIconBadgeCountBlock;	// 232 = 0xe8
	BOOL _shouldAlignCenter;	// 236 = 0xec
	int _navigationalBias;	// 240 = 0xf0
	BOOL _allowsReordering;	// 244 = 0xf4
}
@property(assign, nonatomic) BOOL allowsReordering;	// G=0x143109; S=0x143119; @synthesize=_allowsReordering
@property(readonly, assign, nonatomic) NSDictionary *buttonTemplateInfo;	// G=0x1430b9; @synthesize=_buttonTemplateInfo
@property(assign, nonatomic) int navigationalBias;	// G=0x1430e9; S=0x1430f9; @synthesize=_navigationalBias
@property(assign, nonatomic) long numberOfColumns;	// G=0x1430a9; S=0x142c15; @synthesize=_numberOfColumns
@property(assign, nonatomic) BOOL shouldAlignCenter;	// G=0x1430c9; S=0x1430d9; @synthesize=_shouldAlignCenter
- (id)init;	// 0x142119
- (id)initWithLayout:(id)layout;	// 0x142159
- (void)_centerSubcontrols;	// 0x142301
- (id)_itemIconBadgeCountBlock;	// 0x1429c1
- (id)_itemImageBlock;	// 0x1429b1
- (id)_itemTitleBlock;	// 0x1429a1
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x142909
- (void)_updateFocusedItem;	// 0x142a85
// declared property getter: - (BOOL)allowsReordering;	// 0x143109
- (void)bindItemIconBadgeCountWithBlock:(id)block;	// 0x142a49
- (void)bindItemImageWithBlock:(id)block;	// 0x142a0d
- (void)bindItemTitleWithBlock:(id)block;	// 0x1429d1
// declared property getter: - (id)buttonTemplateInfo;	// 0x1430b9
- (BOOL)canMoveItemAtIndex:(long)index;	// 0x142e59
- (id)dataItemAtIndex:(unsigned)index;	// 0x142bc9
- (id)dataItems;	// 0x142b3d
- (void)dealloc;	// 0x142201
- (void)didFocusItemAtIndex:(long)index;	// 0x14301d
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x142865
- (id)initialFocus;	// 0x142755
- (id)itemAtIndex:(long)index;	// 0x142cf1
- (void)layoutSubcontrols;	// 0x142935
- (BOOL)moveItemAtIndex:(long)index toIndex:(long)index2;	// 0x142e71
// declared property getter: - (int)navigationalBias;	// 0x1430e9
// declared property getter: - (long)numberOfColumns;	// 0x1430a9
- (void)populateDataCache:(id)cache;	// 0x142c3d
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x14250d
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0x1425a1
// declared property setter: - (void)setAllowsReordering:(BOOL)reordering;	// 0x143119
// declared property setter: - (void)setNavigationalBias:(int)bias;	// 0x1430f9
// declared property setter: - (void)setNumberOfColumns:(long)columns;	// 0x142c15
// declared property setter: - (void)setShouldAlignCenter:(BOOL)alignCenter;	// 0x1430d9
// declared property getter: - (BOOL)shouldAlignCenter;	// 0x1430c9
- (long)targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x142f7d
- (void)updateBoundFocusedItem;	// 0x1422e1
- (void)updateBoundItems;	// 0x1422c1
@end
