/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"

@class NSMutableArray, BRCursorControl, BRContainerViewDataCache, NSTimer;

__attribute__((visibility("hidden")))
@interface BRGridView : BRControl <BRContainerViewCell> {
	int _mode;	// 84 = 0x54
	BRControl *_requester;	// 88 = 0x58
	NSRange _range;	// 92 = 0x5c
	float _lastGapHeight;	// 100 = 0x64
	double _heightToRange;	// 104 = 0x68
	double _controlHeight;	// 112 = 0x70
	XXStruct_qlg9jA _columWidth;	// 120 = 0x78
	XXStruct_qlg9jA _horizontalGap;	// 124 = 0x7c
	XXStruct_qlg9jA _verticalGap;	// 128 = 0x80
	float _leftMargin;	// 132 = 0x84
	float _rightMargin;	// 136 = 0x88
	float _bottomMargin;	// 140 = 0x8c
	float _bottomMarginFactor;	// 144 = 0x90
	float _topMargin;	// 148 = 0x94
	float _topMarginFactor;	// 152 = 0x98
	int _navigationBehavior;	// 156 = 0x9c
	id _dataSource;	// 160 = 0xa0
	id _delegate;	// 164 = 0xa4
	BRCursorControl *_trackingCursor;	// 168 = 0xa8
	BOOL _needsReload;	// 172 = 0xac
	NSMutableArray *_editEventQueue;	// 176 = 0xb0
	long _loadIndex;	// 180 = 0xb4
	NSTimer *_forceDisplayTimer;	// 184 = 0xb8
	BOOL _followsLoadAndDisplayOnDemand;	// 188 = 0xbc
	id _loadCompletionBlock;	// 192 = 0xc0
	BOOL _toldToLoad;	// 196 = 0xc4
	NSMutableArray *_completedIndexes;	// 200 = 0xc8
	BRContainerViewDataCache *_dataCache;	// 204 = 0xcc
	XXStruct_qlg9jA _itemHeight;	// 208 = 0xd0
	long _defaultFocusIndex;	// 212 = 0xd4
}
@property(assign) float bottomMargin;	// G=0x2cccfd; S=0x2ccc71; converted property
@property(assign) XXStruct_qlg9jA columnWidth;	// G=0x2cbd85; S=0x2cbd75; converted property
@property(retain) id cursor;	// G=0x2cdb91; S=0x2cdb55; converted property
@property(retain) id dataSource;	// G=0x2cbc95; S=0x2cbc4d; converted property
@property(assign, nonatomic) long defaultFocusIndex;	// G=0x2cd151; S=0x2cd161; @synthesize=_defaultFocusIndex
@property(assign) id delegate;	// G=0x2cbcb5; S=0x2cbca5; converted property
@property(assign) XXStruct_qlg9jA horizontalGap;	// G=0x2cbde5; S=0x2cbda1; converted property
@property(assign, nonatomic) XXStruct_qlg9jA itemHeight;	// G=0x2cd125; S=0x2cd141; @synthesize=_itemHeight
@property(assign) float leftMargin;	// G=0x2cbee9; S=0x2cbead; converted property
@property(assign, nonatomic) int navigationBehavior;	// G=0x2cd171; S=0x2cd181; @synthesize=_navigationBehavior
@property(assign) float rightMargin;	// G=0x2cbf35; S=0x2cbef9; converted property
@property(assign) long selection;	// G=0x2cbcd5; S=0x2cbcc5; converted property
@property(assign) float topMargin;	// G=0x2ccd99; S=0x2ccd0d; converted property
@property(assign) XXStruct_qlg9jA verticalGap;	// G=0x2cbe5d; S=0x2cbe01; converted property
- (id)init;	// 0x2cb8c9
- (id)initWithLayout:(id)layout;	// 0x2cba29
- (BOOL)_allDisplayComplete;	// 0x2cfe9d
- (void)_animationDidStartInDisplayMode:(id)_animation;	// 0x2ceef1
- (void)_animationDidStartInEditModeMode:(id)_animation;	// 0x2ceef5
- (void)_animationDidStopInDisplayMode:(id)_animation finished:(BOOL)finished;	// 0x2ceef9
- (void)_animationDidStopInEditMode:(id)_animation finished:(BOOL)finished;	// 0x2ceefd
- (id)_completedIndexes;	// 0x2cfddd
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x2cf661
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x2cf179
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x2cf291
- (id)_controlsInRange:(NSRange)range;	// 0x2cf4e9
- (id)_createControlsInRange:(NSRange)range;	// 0x2cf409
- (void)_displayControlsForRowThatContainsIndex:(long)rowThatContainsIndex force:(bool)force;	// 0x2cfa91
- (void)_focusChanged:(id)changed;	// 0x2d08c9
- (void)_forceDisplayTimerFired:(id)fired;	// 0x2cfa55
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x2ce561
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x2ce6b1
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x2ce769
- (BOOL)_handleEventInDisplayMode:(id)displayMode;	// 0x2ceaad
- (BOOL)_handleEventInEditMode:(id)editMode;	// 0x2ced39
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x2cf055
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x2cf0a1
- (double)_heightToRange;	// 0x2ce355
- (long)_indexOfFocusedControl;	// 0x2cf391
- (void)_layoutSubcontrols;	// 0x2cdcc9
- (void)_loadControlWithIndex:(long)index start:(BOOL)start;	// 0x2cf6c9
- (BOOL)_okToLoadWithIndex:(long)index;	// 0x2cf995
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x2ce435
- (void)_reloadIfNeeded;	// 0x2d0945
- (void)_restorePersistentSavedSelection;	// 0x2d06bd
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x2ceff1
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x2cdba1
- (BOOL)_setMode:(int)mode;	// 0x2ce829
- (void)_setSelectedItemJiggling:(BOOL)jiggling;	// 0x2cff71
- (void)_stopForceDisplayTimer;	// 0x2cfa21
- (BOOL)_swapControlAtIndex:(long)index withControlAtIndex:(long)index2;	// 0x2d0151
- (id)_swapPositionAnimationFromIndex:(long)index toIndex:(long)index2;	// 0x2d0079
- (double)_totalHeight;	// 0x2ce251
- (void)_updatePersistentSavedSelection;	// 0x2d07fd
- (id)accessibilityControls;	// 0x2cc44d
- (void)animationDidStart:(id)animation;	// 0x2ccf89
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2ccfc1
// converted property getter: - (float)bottomMargin;	// 0x2cccfd
- (BOOL)brEventAction:(id)action;	// 0x2cca21
- (BOOL)canMoveItemAtIndex:(long)index;	// 0x2cd699
- (void)cancelContainerViewLoad;	// 0x2cd0a5
// converted property getter: - (XXStruct_qlg9jA)columnWidth;	// 0x2cbd85
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x2cd809
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x2cda81
- (CGRect)controlFrameAtIndex:(long)index;	// 0x2cd995
- (void)controlWasActivated;	// 0x2cc501
- (void)controlWasDeactivated;	// 0x2cc5a5
- (void)controlWasUnfocused;	// 0x2cc6c5
- (unsigned)countOfCells;	// 0x2cc469
// converted property getter: - (id)cursor;	// 0x2cdb91
- (long)dataCount;	// 0x2cbcf5
// converted property getter: - (id)dataSource;	// 0x2cbc95
- (void)dealloc;	// 0x2cbb81
// declared property getter: - (long)defaultFocusIndex;	// 0x2cd151
// converted property getter: - (id)delegate;	// 0x2cbcb5
- (void)didFocusItemAtIndex:(long)index;	// 0x2cd4e1
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x2cd641
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x2cd5e9
- (void)didUnFocusItemAtIndex:(long)index;	// 0x2cd591
- (void)focusControlAtIndex:(long)index;	// 0x2cd869
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x2cca61
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x2cd115
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x2cd121
- (void)grid:(id)grid didUnFocusItemAtIndex:(long)index;	// 0x2cd11d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x2cd109
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x2cd105
- (void)grid:(id)grid willDisplayItemAtIndex:(long)index;	// 0x2cd10d
- (long)grid:(id)grid willFocusItemAtIndex:(long)index;	// 0x2cd111
- (void)grid:(id)grid willUnFocusItemAtIndex:(long)index;	// 0x2cd119
- (float)heightForItemAtIndex:(long)index;	// 0x2cd3ad
- (float)heightOfControlAtIndex:(long)index;	// 0x2cc115
- (float)heightToMaximum:(float)maximum;	// 0x2cbfe9
// converted property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x2cbde5
- (long)indexForItemID:(id)itemID;	// 0x2cd351
- (unsigned)indexInCellsOfObject:(id)object;	// 0x2cc479
- (id)initialFocus;	// 0x2cc7d9
- (id)itemAtIndex:(long)index;	// 0x2cd299
// declared property getter: - (XXStruct_qlg9jA)itemHeight;	// 0x2cd125
- (id)itemIDAtIndex:(long)index;	// 0x2cd2f5
- (void)layoutSubcontrols;	// 0x2ccde9
// converted property getter: - (float)leftMargin;	// 0x2cbee9
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x2ccff9
- (BOOL)moveItemAtIndex:(long)index toIndex:(long)index2;	// 0x2cd74d
// declared property getter: - (int)navigationBehavior;	// 0x2cd171
- (long)numberOfColumns;	// 0x2cd279
- (long)numberOfColumnsInGrid:(id)grid;	// 0x2cd101
- (long)numberOfItems;	// 0x2cd259
- (long)numberOfItemsInGrid:(id)grid;	// 0x2cd0fd
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x2cc4c1
- (void)populateDataCache:(id)cache;	// 0x2cd191
- (float)positionOfColumn:(long)column;	// 0x2cc0c1
- (void)reload;	// 0x2cc149
- (void)reloadItemAtIndex:(long)index;	// 0x2cc29d
- (void)reloadItemsAtIndexes:(id)indexes;	// 0x2cc369
- (void)restorePersistentSavedSelection;	// 0x2cc43d
// converted property getter: - (float)rightMargin;	// 0x2cbf35
- (long)rowCount;	// 0x2cbd05
- (void)scrollingCompleted;	// 0x2ccf11
- (void)selectItemAtIndex:(long)index;	// 0x2cd249
- (long)selectedIndex;	// 0x2cd239
- (id)selectedObject;	// 0x2cbce5
// converted property getter: - (long)selection;	// 0x2cbcd5
// converted property setter: - (void)setBottomMargin:(float)margin;	// 0x2ccc71
// converted property setter: - (void)setColumnWidth:(XXStruct_qlg9jA)width;	// 0x2cbd75
// converted property setter: - (void)setCursor:(id)cursor;	// 0x2cdb55
// converted property setter: - (void)setDataSource:(id)source;	// 0x2cbc4d
// declared property setter: - (void)setDefaultFocusIndex:(long)index;	// 0x2cd161
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2cbca5
- (void)setFollowsLoadAndDisplayOnDemand;	// 0x2cd0d9
// converted property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x2cbda1
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x2cd0d5
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x2cd0ed
// declared property setter: - (void)setItemHeight:(XXStruct_qlg9jA)height;	// 0x2cd141
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x2cbead
// declared property setter: - (void)setNavigationBehavior:(int)behavior;	// 0x2cd181
- (void)setNeedsReload;	// 0x2cc3e9
- (void)setReadyToDisplay;	// 0x2cd0d1
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x2cbef9
// converted property setter: - (void)setSelection:(long)selection;	// 0x2cbcc5
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x2ccd0d
// converted property setter: - (void)setVerticalGap:(XXStruct_qlg9jA)gap;	// 0x2cbe01
- (void)setVerticalMargins:(float)margins;	// 0x2cbe79
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2ccdf9
- (BOOL)swapControlAtIndex:(long)index withControlAtIndex:(long)index2;	// 0x2cd7c9
- (long)targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x2cd6ed
// converted property getter: - (float)topMargin;	// 0x2ccd99
- (void)updatePersistentSavedSelection;	// 0x2cc42d
// converted property getter: - (XXStruct_qlg9jA)verticalGap;	// 0x2cbe5d
- (id)visibleControlAtIndex:(long)index;	// 0x2cbf99
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x2cbf45
- (NSRange)visibleRange;	// 0x2cbf81
- (void)visibleScrollRectChanged;	// 0x2ccda9
- (void)willDisplayItemAtIndex:(long)index;	// 0x2cd42d
- (long)willFocusItemAtIndex:(long)index;	// 0x2cd485
- (void)willUnFocusItemAtIndex:(long)index;	// 0x2cd539
- (void)windowMaxBoundsChanged;	// 0x2cc709
@end
