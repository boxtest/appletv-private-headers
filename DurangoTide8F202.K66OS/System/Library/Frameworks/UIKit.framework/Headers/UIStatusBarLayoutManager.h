/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIStatusBarItemView, UIStatusBarForegroundView;

__attribute__((visibility("hidden")))
@interface UIStatusBarLayoutManager : NSObject {
@private
	UIStatusBarForegroundView *_foregroundView;	// 4 = 0x4
	int _region;	// 8 = 0x8
	UIStatusBarItemView *_itemViews[22];	// 12 = 0xc
}
@property(assign, nonatomic) UIStatusBarForegroundView *foregroundView;	// G=0x308220d1; S=0x3068bb5d; @synthesize=_foregroundView
- (id)initWithRegion:(int)region foregroundView:(id)view;	// 0x305c159d
- (id)_createViewForItem:(id)item withData:(XXStruct_LyCp7D *)data actions:(int)actions;	// 0x305b3141
- (CGRect)_frameForItemView:(id)itemView startPosition:(float)position;	// 0x305b4b75
- (SEL)_itemSortSelector;	// 0x305a6d65
- (id)_itemViews;	// 0x305a5615
- (id)_itemViewsSortedForLayout;	// 0x305a6cb1
- (float)_positionAfterPlacingItemView:(id)view startPosition:(float)position;	// 0x305a6df5
- (void)_positionNewItemViewsWithEnabledItems:(BOOL *)enabledItems;	// 0x305b495d
- (void)_prepareEnabledItemType:(int)type withEnabledItems:(BOOL *)enabledItems withData:(XXStruct_LyCp7D *)data actions:(int)actions itemAppearing:(BOOL *)appearing itemDisappearing:(BOOL *)disappearing;	// 0x305a51bd
- (CGRect)_repositionedNewFrame:(CGRect)frame widthDelta:(float)delta;	// 0x30822359
- (float)_startPosition;	// 0x305a6c41
- (BOOL)_updateItemView:(id)view withData:(XXStruct_LyCp7D *)data actions:(int)actions animated:(BOOL)animated;	// 0x305a5671
- (id)_viewForItem:(id)item;	// 0x305b5601
- (float)_widthNeededForItemView:(id)itemView;	// 0x305a6f09
- (void)clearOverlapFromItems:(id)items;	// 0x305b562d
- (void)dealloc;	// 0x3068bb6d
- (float)distributeOverlap:(float)overlap amongItems:(id)items;	// 0x30822179
// declared property getter: - (id)foregroundView;	// 0x308220d1
- (BOOL)itemIsVisible:(id)visible;	// 0x305ba325
- (void)itemView:(id)view widthChangedBy:(float)by;	// 0x308222b1
- (void)makeVisibleItemsPerformPendedActions;	// 0x305a70c1
- (void)positionInvisibleItems;	// 0x305a6b1d
- (BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL *)enabledItems;	// 0x30822111
- (BOOL)prepareEnabledItems:(BOOL *)items withData:(XXStruct_LyCp7D *)data actions:(int)actions;	// 0x305a510d
- (CGRect)rectForItems:(id)items;	// 0x305b54a9
- (void)reflowWithVisibleItems:(id)visibleItems duration:(double)duration;	// 0x305b58f9
- (void)removeDisabledItems:(BOOL *)items;	// 0x305a6a7d
- (float)removeOverlap:(float)overlap fromItems:(id)items;	// 0x305b57d9
// declared property setter: - (void)setForegroundView:(id)view;	// 0x3068bb5d
- (BOOL)updateDoubleHeightItem;	// 0x308220e1
- (BOOL)updateItemsWithData:(XXStruct_LyCp7D *)data actions:(int)actions animated:(BOOL)animated;	// 0x305a5541
- (float)widthNeededForItem:(id)item;	// 0x305b57ad
- (float)widthNeededForItems:(id)items;	// 0x305b56ed
@end
