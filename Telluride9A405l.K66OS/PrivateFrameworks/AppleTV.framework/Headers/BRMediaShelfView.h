/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"

@class NSMutableArray, NSTimer, NSDictionary;

@interface BRMediaShelfView : BRControl <BRContainerViewCell> {
@private
	id _dataSource;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	NSDictionary *_controlActions;	// 56 = 0x38
	NSDictionary *_titleActions;	// 60 = 0x3c
	BOOL _centered;	// 64 = 0x40
	BOOL _scrollable;	// 65 = 0x41
	NSRange _flatRange;	// 68 = 0x44
	CATransform3D _leftTransform;	// 76 = 0x4c
	CATransform3D _rightTransform;	// 140 = 0x8c
	NSMutableArray *_cells;	// 204 = 0xcc
	NSMutableArray *_titles;	// 208 = 0xd0
	NSTimer *_scrollTimer;	// 212 = 0xd4
	BOOL _scrolling;	// 216 = 0xd8
	int _collapsedState;	// 220 = 0xdc
	BOOL _ordered;	// 224 = 0xe0
	BOOL _needToReloadDataOnActivate;	// 225 = 0xe1
	long _numberOfItems;	// 228 = 0xe4
	NSRange _refillVisibleRange;	// 232 = 0xe8
	BOOL _restoreLastFocus;	// 240 = 0xf0
	NSTimer *_forceDisplayTimer;	// 244 = 0xf4
	id _loadCompletionBlock;	// 248 = 0xf8
	BOOL _okToLoad;	// 252 = 0xfc
	BOOL _displayComplete;	// 253 = 0xfd
	BOOL _explicitlyAcceptsFocus;	// 254 = 0xfe
	long _columnCount;	// 256 = 0x100
	float _horizontalGap;	// 260 = 0x104
	float _coverflowMargin;	// 264 = 0x108
}
@property(assign) BOOL centered;	// G=0x35dbc38d; S=0x35dbc35d; converted property
@property(assign) int collapsedState;	// G=0x35dbc939; S=0x35dbc90d; converted property
@property(assign, nonatomic) long columnCount;	// G=0x35dbd0cd; S=0x35dbc0a5; @synthesize=_columnCount
@property(assign, nonatomic) float coverflowMargin;	// G=0x35dbd0ed; S=0x35dbd0fd; @synthesize=_coverflowMargin
@property(retain) id dataSource;	// G=0x35dbc24d; S=0x35dbc199; converted property
@property(assign) id delegate;	// G=0x35dbc26d; S=0x35dbc25d; converted property
@property(retain) id focusedIndexPath;	// G=0x35dbc771; S=0x35dbc7fd; converted property
@property(assign, nonatomic) float horizontalGap;	// G=0x35dbd0dd; S=0x35dbc0d9; @synthesize=_horizontalGap
@property(assign) BOOL ordered;	// G=0x35dbc3cd; S=0x35dbc39d; converted property
@property(assign) BOOL scrollable;	// G=0x35dbc34d; S=0x35dbc309; converted property
- (id)init;	// 0x35dbbc2d
- (long)_columnCount;	// 0x35dbd1ed
- (id)_controlActions;	// 0x35dbee05
- (id)_controlsInRange:(NSRange)range oldRange:(NSRange)range2;	// 0x35dbf42d
- (float)_coverflowMargin;	// 0x35dbd2bd
- (id)_createControlAtIndex:(int)index;	// 0x35dbf1ad
- (id)_createControlsInRange:(NSRange)range;	// 0x35dbf58d
- (void)_displayCellsForce:(BOOL)force;	// 0x35dbf9f9
- (NSRange)_dividedRangeForRange:(NSRange)range andDirection:(int)direction;	// 0x35dbfc11
- (unsigned)_dividerCountInRange:(NSRange)range;	// 0x35dbfd35
- (unsigned)_firstScrollableIndex;	// 0x35dbd435
- (void)_focusChanged:(id)changed;	// 0x35dbd375
- (void)_forceDisplayTimerFired:(id)fired;	// 0x35dbfbdd
- (float)_horizontalGap;	// 0x35dbd249
- (long)_indexFromIndexPath:(id)indexPath;	// 0x35dc01ed
- (id)_indexPathFromIndex:(long)index sectionIndex:(long *)index2;	// 0x35dc02a1
- (BOOL)_isDividerAtIndex:(long)index;	// 0x35dbfd81
- (unsigned)_lastScrollableIndex;	// 0x35dbd3f5
- (void)_layoutShelfContents;	// 0x35dbd9dd
- (BOOL)_leftButtonEvent;	// 0x35dbd51d
- (void)_loadControlWithStartIndex:(long)startIndex start:(BOOL)start;	// 0x35dbf6d5
- (void)_loadControlsInRange:(NSRange)range;	// 0x35dbf631
- (unsigned)_nextFocusableIndexInDirection:(int)direction;	// 0x35dbd445
- (long)_numberOfItems;	// 0x35dc00fd
- (void)_purgeControls;	// 0x35dbd199
- (void)_refillShelf;	// 0x35dbd10d
- (void)_reloadTitles;	// 0x35dbfe21
- (void)_removeSectionHeaderTitleControls;	// 0x35dc0059
- (BOOL)_rightButtonEvent;	// 0x35dbd4bd
- (BOOL)_scrollInDirection:(int)direction;	// 0x35dbd57d
- (BOOL)_scrollIndexToVisible:(long)visible;	// 0x35dbd9a9
- (BOOL)_scrollLeft;	// 0x35dbd791
- (BOOL)_scrollRight;	// 0x35dbd779
- (long)_sectionIndexForIndex:(long)index;	// 0x35dc03bd
- (id)_setControlRange:(NSRange)range oldRange:(NSRange)range2;	// 0x35dbf235
- (void)_setDimness:(float)dimness forLayer:(id)layer;	// 0x35dbecc9
- (void)_setFlatRange:(NSRange)range delayedLayout:(BOOL)layout;	// 0x35dbf04d
- (void)_stopForceDisplayTimer;	// 0x35dbfba1
- (id)_titleActions;	// 0x35dbff3d
- (id)_updateFlatRangeForScrollDirection:(int)scrollDirection;	// 0x35dbef99
- (void)_updateSublayerTransform;	// 0x35dbd891
- (NSRange)_visibleRange;	// 0x35dbd7ad
- (id)accessibilityControls;	// 0x35dbcac9
- (id)accessibilityLabel;	// 0x35dc0471
- (BOOL)brEventAction:(id)action;	// 0x35dbc3dd
- (void)cancelContainerViewLoad;	// 0x35dbce0d
// converted property getter: - (BOOL)centered;	// 0x35dbc38d
// converted property getter: - (int)collapsedState;	// 0x35dbc939
// declared property getter: - (long)columnCount;	// 0x35dbd0cd
- (void)controlWasActivated;	// 0x35dbbeb9
- (void)controlWasDeactivated;	// 0x35dbbf75
- (unsigned)countOfCells;	// 0x35dbcae5
// declared property getter: - (float)coverflowMargin;	// 0x35dbd0ed
- (long)dataCount;	// 0x35dbc27d
// converted property getter: - (id)dataSource;	// 0x35dbc24d
- (void)dealloc;	// 0x35dbbda1
// converted property getter: - (id)delegate;	// 0x35dbc26d
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x35dbca29
// converted property getter: - (id)focusedIndexPath;	// 0x35dbc771
// declared property getter: - (float)horizontalGap;	// 0x35dbd0dd
- (unsigned)indexInCellsOfObject:(id)object;	// 0x35dbcb6d
- (void)layoutSubcontrols;	// 0x35dbc949
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x35dbcd69
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x35dbcc59
// converted property getter: - (BOOL)ordered;	// 0x35dbc3cd
- (void)reloadData;	// 0x35dbc115
- (BOOL)restorePersistentSavedSelection;	// 0x35dbce61
// converted property getter: - (BOOL)scrollable;	// 0x35dbc34d
- (void)scrollingCompleted;	// 0x35dbcd1d
- (id)selectedControl;	// 0x35dbc8fd
- (void)setAcceptsFocus:(BOOL)focus;	// 0x35dbbe6d
// converted property setter: - (void)setCentered:(BOOL)centered;	// 0x35dbc35d
// converted property setter: - (void)setCollapsedState:(int)state;	// 0x35dbc90d
// declared property setter: - (void)setColumnCount:(long)count;	// 0x35dbc0a5
// declared property setter: - (void)setCoverflowMargin:(float)margin;	// 0x35dbd0fd
// converted property setter: - (void)setDataSource:(id)source;	// 0x35dbc199
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35dbc25d
// converted property setter: - (void)setFocusedIndexPath:(id)path;	// 0x35dbc7fd
// declared property setter: - (void)setHorizontalGap:(float)gap;	// 0x35dbc0d9
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x35dbce3d
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x35dbce51
// converted property setter: - (void)setOrdered:(BOOL)ordered;	// 0x35dbc39d
- (void)setReadyToDisplay;	// 0x35dbce39
// converted property setter: - (void)setScrollable:(BOOL)scrollable;	// 0x35dbc309
- (void)updatePersistentSavedSelection;	// 0x35dbcfa1
- (void)visibleScrollRectChanged;	// 0x35dbccb5
@end
