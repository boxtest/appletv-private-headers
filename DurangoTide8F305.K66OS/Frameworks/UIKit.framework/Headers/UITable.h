/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScroller.h"

@class UIFloatArray, UITableCountView, _UITableDeleteAnimationSupport, _UITableReorderingSupport, NSMutableArray;

@interface UITable : UIScroller {
	id _dataSource;	// 344 = 0x158
	NSMutableArray *_tableColumns;	// 348 = 0x15c
	SEL _doubleAction;	// 352 = 0x160
	UIFloatArray *_rowHeights;	// 356 = 0x164
	NSRange _visibleRows;	// 360 = 0x168
	NSRange _visibleCols;	// 368 = 0x170
	NSMutableArray *_visibleCells;	// 376 = 0x178
	_UITableDeleteAnimationSupport *_deleteAnimationSupport;	// 380 = 0x17c
	unsigned _selectedRow;	// 384 = 0x180
	unsigned _lastHighlightedRow;	// 388 = 0x184
	int _rowCount;	// 392 = 0x188
	int _tableReloadingSuspendedCount;	// 396 = 0x18c
	float _padding;	// 400 = 0x190
	UIView *_accessoryView;	// 404 = 0x194
	UITableCountView *_countLabel;	// 408 = 0x198
	NSMutableArray *_reusableTableCells;	// 412 = 0x19c
	int _reusableCapacity;	// 416 = 0x1a0
	NSMutableArray *_extraSeparators;	// 420 = 0x1a4
	int _swipeToDeleteRow;	// 424 = 0x1a8
	struct {
		unsigned separatorStyle : 3;
		unsigned rowDeletionEnabled : 1;
		unsigned allowSelectionDuringRowDeletion : 1;
		unsigned dataSourceHeightForRow : 1;
		unsigned dataSourceSetObjectValue : 1;
		unsigned dataShowDisclosureForRow : 1;
		unsigned dataDisclosureClickableForRow : 1;
		unsigned dataSourceWantsHints : 1;
		unsigned dataSourceCanDeleteRow : 1;
		unsigned dataSourceConfirmDeleteRow : 1;
		unsigned delegateTableSelectionDidChange : 1;
		unsigned scrollsToSelection : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned reuseTableCells : 1;
		unsigned delegateUpdateVisibleCellsNote : 1;
		unsigned delegateTableRowSelected : 1;
		unsigned rowAlreadyHighlighted : 1;
		unsigned needsReload : 1;
		unsigned delegateCanSwipe : 1;
		unsigned updatingVisibleCellsManually : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned warnForForcedCellUpdateDisabled : 1;
		unsigned delaySendingSelectionChanged : 1;
		unsigned dataSourceCanInsertAtRow : 1;
		unsigned shouldDisplayTopSeparator : 1;
		unsigned displayTopSeparator : 1;
		unsigned needToAdjustExtraSeparators : 1;
		unsigned ignoreDragSwipe : 1;
		unsigned lastHighlightedRowActive : 1;
		unsigned reloading : 1;
		unsigned countStringInsignificantRowCount : 4;
		unsigned dataSourceCanReuseCell : 1;
		unsigned reserved : 27;
	} _tableFlags;	// 428 = 0x1ac
	_UITableReorderingSupport *_reorderingSupport;	// 436 = 0x1b4
}
@property(retain) UIView *accessoryView;	// G=0x3215af59; S=0x3215ce85; converted property
@property(retain) id dataSource;	// G=0x3215ae45; S=0x32033161; converted property
@property(assign) int deleteConfirmationRow;	// G=0x3215c03d; S=0x3215ecb9; converted property
@property(assign) SEL doubleAction;	// G=0x3215ae7d; S=0x3215ae6d; converted property
@property(assign) float rowHeight;	// G=0x32034281; S=0x32031165; converted property
@property(assign) int separatorStyle;	// G=0x3215af45; S=0x3215b841; converted property
@property(readonly, retain) NSMutableArray *tableColumns;	// G=0x3215ae55; converted property
@property(readonly, retain) NSMutableArray *visibleCells;	// G=0x3215bcd1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x320307a5
- (void)_addSubview:(id)subview atTop:(BOOL)top;	// 0x3203ac19
- (void)_adjustCountLabel;	// 0x32032dd5
- (void)_adjustExtraSeparators;	// 0x32037fcd
- (void)_adjustReusableTableCells;	// 0x32033845
- (void)_animateNewCells:(id)cells bySlidingDownAmount:(float)amount;	// 0x3215c6f1
- (void)_animateNewCells:(id)cells bySlidingUpAmount:(float)amount;	// 0x3215c801
- (void)_animateRemovalOfCell:(id)cell atRow:(int)row col:(int)col viaEdge:(int)edge withAmountToSlideUp:(float *)slideUp;	// 0x3215dc39
- (void)_animateRemovalOfVisibleRows:(id)visibleRows viaEdge:(int)edge withAmountToSlideUp:(float *)slideUp;	// 0x3215eb19
- (void)_animateRowsForDeletionOfRow:(int)row withSep:(id)sep;	// 0x32162379
- (void)_autoscroll:(id)autoscroll;	// 0x32162ee5
- (void)_beginReorderingForCell:(id)cell;	// 0x3215c9dd
- (BOOL)_checkCanSelectRow:(int)row view:(id)view;	// 0x3204738d
- (unsigned)_countStringRowCount;	// 0x320344b5
- (void)_delaySendSelectionDidChange;	// 0x3215bae5
- (void)_deleteRowAlertDidEndContinuation:(id)_deleteRowAlert;	// 0x3215b4ad
- (void)_deleteRowAlertDidEndWithResult:(BOOL)_deleteRowAlert contextInfo:(id)info;	// 0x3215b50d
- (void)_didDeleteRowForTableCell:(id)tableCell;	// 0x3215af6d
- (void)_didInsertRowForTableCell:(id)tableCell;	// 0x3215aff1
- (void)_disableInteraction;	// 0x3215bf75
- (void)_enableAndRestoreTableStateAfterAnimation;	// 0x3215b0a9
- (void)_enableInteraction;	// 0x3215bf51
- (void)_enableRowDeletion:(BOOL)deletion forCell:(id)cell atRow:(int)row allowInsert:(BOOL)insert allowReorder:(BOOL)reorder animated:(BOOL)animated;	// 0x3215c121
- (void)_endCellReorderAnimation;	// 0x32160049
- (void)_endReorderingForCell:(id)cell;	// 0x32161895
- (void)_fadeCellOutAnimationDidStop:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x3215b0d1
- (void)_finishedAnimatingCellReorder:(id)reorder finished:(id)finished context:(id)context;	// 0x3215e76d
- (void)_finishedRemovingRemovalButtonForTableCell:(id)tableCell;	// 0x3215b04d
- (void)_getRowCount:(int *)count andHeight:(float *)height beforeVisibleCellsForRows:(id)rows;	// 0x3215c911
- (float)_partOfRow:(int)row thatIsHidden:(BOOL)hidden;	// 0x3215ffa9
- (CGRect)_rectOfRow:(int)row usingRowHeights:(id)heights;	// 0x32032889
- (void)_reloadRowHeights;	// 0x320341b5
- (void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x3215bf99
- (int)_removeFromVisibleRows:(id)visibleRows;	// 0x3215e9f9
- (void)_reorderPositionChangedForCell:(id)cell;	// 0x32161b6d
- (void)_restoreTableStateAfterAnimation;	// 0x3215b165
- (id)_resuableObjectForTableCell:(id)tableCell;	// 0x3215aec1
- (void)_resumeReloads;	// 0x3203b871
- (int)_rowForTableCell:(id)tableCell;	// 0x3215b5c9
- (void)_saveTableStateBeforeAnimationForRow:(int)row;	// 0x3215b2b5
- (void)_scheduleAdjustExtraSeparators;	// 0x32032da5
- (id)_scriptingInfo;	// 0x3215d145
- (void)_selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible withSelectionNotifications:(BOOL)selectionNotifications;	// 0x3215ef99
- (void)_sendSelectionDidChange;	// 0x3215bb15
- (void)_setNeedsVisibleCellsUpdate:(BOOL)update;	// 0x32032e6d
- (void)_setRowCount:(int)count;	// 0x32033381
- (BOOL)_shouldDeleteRowForTableCell:(id)tableCell;	// 0x3215b35d
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x3203254d
- (void)_stopAutoscrollTimer;	// 0x3215b669
- (void)_suspendReloads;	// 0x32038fa9
- (void)_tableCellAnimationDidStop:(id)_tableCellAnimation finished:(id)finished;	// 0x3215b655
- (void)_updateContentSize;	// 0x3203271d
- (void)_updateOriginOfCells:(NSRange)cells;	// 0x32032eb9
- (void)_updateVisibleCellsImmediatelyIfNecessary;	// 0x32040d91
- (void)_updateVisibleCellsNow;	// 0x32038365
- (BOOL)_userCanDeleteRows;	// 0x3215c321
- (void)_userSelectRow:(int)row;	// 0x3215bbd9
- (void)_willDeleteRow:(int)row forTableCell:(id)tableCell viaEdge:(int)edge animateOthers:(BOOL)others;	// 0x3215d549
// converted property getter: - (id)accessoryView;	// 0x3215af59
- (void)addTableColumn:(id)column;	// 0x320336ed
- (UIEdgeInsets)adornmentMargins;	// 0x3215b7c1
- (void)animateDeletionOfCellAtRow:(int)row column:(int)column viaEdge:(int)edge;	// 0x3215e8d1
- (void)animateDeletionOfRowWithCell:(id)cell;	// 0x3215c3a9
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge;	// 0x3215c3c1
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge animatingOthersUp:(BOOL)up;	// 0x3215c3e5
- (float)animationDuration;	// 0x3215ae65
- (BOOL)canDeleteRow:(int)row;	// 0x3203acb9
- (BOOL)canHandleSwipes;	// 0x3215af69
- (BOOL)canInsertAtRow:(int)row;	// 0x3215c365
- (BOOL)canSelectRow:(int)row;	// 0x32047401
- (BOOL)cancelMouseTracking;	// 0x32047ce5
- (BOOL)cancelTouchTracking;	// 0x3215d201
- (id)cellAtRow:(int)row column:(int)column;	// 0x32040d1d
- (void)clearAllData;	// 0x3215c501
- (int)columnAtPoint:(CGPoint)point;	// 0x3215aedd
- (int)columnWithIdentifier:(id)identifier;	// 0x3215c56d
- (NSRange)columnsInRect:(CGRect)rect;	// 0x32038ffd
- (void)completeRowDeletionAnimation;	// 0x3215ae8d
- (void)contentMouseUpInView:(id)view withEvent:(GSEventRef)event;	// 0x3215e2d5
- (id)createPreparedCellForRow:(int)row column:(int)column;	// 0x3203900d
// converted property getter: - (id)dataSource;	// 0x3215ae45
- (id)dataSourceCreateCellForRow:(int)row column:(int)column reusing:(id)reusing;	// 0x3203953d
- (int)dataSourceGetRowCount;	// 0x320342f5
- (BOOL)dataSourceSupportsVariableRowHeights;	// 0x32031201
- (void)dealloc;	// 0x3204695d
// converted property getter: - (int)deleteConfirmationRow;	// 0x3215c03d
- (void)deleteRows:(id)rows viaEdge:(int)edge;	// 0x32160f49
- (void)deleteRows:(id)rows viaEdge:(int)edge animated:(BOOL)animated;	// 0x3215b151
// converted property getter: - (SEL)doubleAction;	// 0x3215ae7d
- (void)drawExtraSeparator:(CGRect)separator;	// 0x3215e611
- (void)enableRowDeletion:(BOOL)deletion;	// 0x3215c34d
- (void)enableRowDeletion:(BOOL)deletion animated:(BOOL)animated;	// 0x3215eddd
- (void)floatArray:(id)array getValueCount:(int *)count gapIndexCount:(int *)count3;	// 0x320313d9
- (BOOL)floatArray:(id)array loadValues:(float *)values count:(int)count;	// 0x3215b6b9
- (CGRect)frameOfCellAtColumn:(int)column row:(int)row;	// 0x3215cf55
- (CGRect)frameOfCellAtRow:(int)row column:(int)column;	// 0x32034569
- (BOOL)getRow:(int *)row column:(int *)column ofTableCell:(id)tableCell;	// 0x3215bc15
- (BOOL)highlightNextRowByDelta:(int)delta;	// 0x3215b911
- (BOOL)highlightRow:(int)row;	// 0x3215b9f1
- (void)highlightView:(id)view state:(BOOL)state;	// 0x32047191
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3203e9a9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3203e965
- (void)insertRows:(id)rows deleteRows:(id)rows2 reloadRows:(id)rows3;	// 0x3215f3ed
- (BOOL)isRowDeletionEnabled;	// 0x3215ae91
- (int)lastHighlightedRow;	// 0x3215af19
- (void)layoutSubviews;	// 0x32037f15
- (void)mouseDown:(GSEventRef)down;	// 0x3203f011
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3203f6c5
- (void)noteNumberOfRowsChanged;	// 0x32034155
- (int)numberOfColumns;	// 0x32034135
- (int)numberOfRows;	// 0x320313f9
- (UIEdgeInsets)pressedAdornmentMargins;	// 0x3215b741
- (CGRect)rectOfColumn:(int)column;	// 0x3215aec5
- (CGRect)rectOfRow:(int)row;	// 0x3203281d
- (CGRect)rectOfViewAtColumn:(int)column row:(int)row;	// 0x3203458d
- (void)reloadCellAtRow:(int)row column:(int)column animated:(BOOL)animated;	// 0x3215dd91
- (void)reloadData;	// 0x320339c9
- (void)reloadDataForInsertionOfRows:(NSRange)rows;	// 0x3215c42d
- (void)reloadDataForInsertionOfRows:(NSRange)rows animated:(BOOL)animated;	// 0x32160491
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x3215bfb1
- (void)removeFromSuperview;	// 0x32046029
- (void)removeTableColumn:(id)column;	// 0x3215c5fd
- (int)rowAtPoint:(CGPoint)point;	// 0x32163189
// converted property getter: - (float)rowHeight;	// 0x32034281
- (NSRange)rowsInRect:(CGRect)rect;	// 0x32035229
- (void)scrollAndCenterTableCell:(id)cell animated:(BOOL)animated;	// 0x3215e649
- (void)scrollRowToVisible:(int)visible;	// 0x3215d48d
- (void)selectCell:(id)cell inRow:(int)row column:(int)column withFade:(BOOL)fade;	// 0x3215bac9
- (BOOL)selectHighlightedRow;	// 0x3215b87d
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection;	// 0x3215bb9d
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade;	// 0x3215ba39
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible;	// 0x3215ba7d
- (int)selectedRow;	// 0x3215af09
// converted property getter: - (int)separatorStyle;	// 0x3215af45
// converted property setter: - (void)setAccessoryView:(id)view;	// 0x3215ce85
- (void)setAllowSelectionDuringRowDeletion:(BOOL)deletion;	// 0x3215aea5
- (void)setAllowsReordering:(BOOL)reordering;	// 0x3215bd4d
- (void)setCountString:(id)string;	// 0x321631d1
- (void)setCountStringInsignificantRowCount:(unsigned)count;	// 0x3215d415
// converted property setter: - (void)setDataSource:(id)source;	// 0x32033161
- (void)setDelegate:(id)delegate;	// 0x32033455
// converted property setter: - (void)setDeleteConfirmationRow:(int)row;	// 0x3215ecb9
// converted property setter: - (void)setDoubleAction:(SEL)action;	// 0x3215ae6d
- (void)setFrame:(CGRect)frame;	// 0x32030ab9
- (void)setNeedsDisplayInRowRange:(NSRange)rowRange;	// 0x3215e811
- (void)setOffset:(CGPoint)offset;	// 0x32033fbd
- (void)setPadding:(float)padding;	// 0x32032685
- (void)setResusesTableCells:(BOOL)cells;	// 0x3215b729
- (void)setReusesTableCells:(BOOL)cells;	// 0x3203380d
// converted property setter: - (void)setRowHeight:(float)height;	// 0x32031165
- (void)setScrollsToSelection:(BOOL)selection;	// 0x3215af29
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x3215b841
- (BOOL)shouldDelaySendingSelectionChanged;	// 0x3215aef5
- (BOOL)shouldIndentRow:(int)row;	// 0x3215bcf9
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x3215df8d
- (id)tableColumnWithIdentifier:(id)identifier;	// 0x3215c52d
// converted property getter: - (id)tableColumns;	// 0x3215ae55
- (void)updateDisclosures;	// 0x3215be7d
- (BOOL)validateDataSource;	// 0x320333d5
- (id)viewAtColumn:(int)column row:(int)row;	// 0x3215be61
- (id)visibleCellForRow:(int)row column:(int)column;	// 0x3215e971
// converted property getter: - (id)visibleCells;	// 0x3215bcd1
- (id)visibleCellsWithoutUpdatingLayout;	// 0x3215aee5
- (NSRange)visibleRowsInRect:(CGRect)rect;	// 0x32038fbd
@end

