/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableView.h"

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface UIPickerTableView : UITableView <UITableViewDelegate> {
	CGRect _selectionBarRect;	// 784 = 0x310
	int _selectionBarRow;	// 800 = 0x320
	NSMutableIndexSet *_checkedRows;	// 804 = 0x324
	float _lastClickedOffset;	// 808 = 0x328
	struct {
		unsigned allowsMultipleSelection : 1;
		unsigned scrollingDirection : 2;
		unsigned didSelectDisabled : 1;
		unsigned skipRowChangeNotifications : 1;
		unsigned scrollingForSelection : 1;
		unsigned pickerViewImplementsSelectionBarChanged : 2;
		unsigned cancellingAnimation : 1;
	} _pickerTableFlags;	// 812 = 0x32c
}
@property(assign, nonatomic) CGRect selectionBarRect;	// G=0x30a64bcd; S=0x30a61e75; @synthesize=_selectionBarRect
@property(assign, nonatomic) int selectionBarRow;	// G=0x30a63bbd; @synthesize=_selectionBarRow
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x30a619c5
- (BOOL)_beginTrackingWithEvent:(id)event;	// 0x30c34121
- (id)_checkedRows;	// 0x30a62741
- (id)_pickerView;	// 0x30a62115
- (void)_playClickIfNecessary;	// 0x30a62169
- (void)_rectChangedWithNewSize:(CGSize)newSize oldSize:(CGSize)size;	// 0x30a61c79
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)selectionBar animated:(BOOL)animated;	// 0x30a649c9
- (void)_scrollViewAnimationEnded:(id)ended finished:(BOOL)finished;	// 0x30a65e59
- (void)_scrollingFinished;	// 0x30a65ead
- (CGRect)_selectionBarRectForBounds:(CGRect)bounds;	// 0x30c33f75
- (void)_setSelectionBarRow:(int)row;	// 0x30a62041
- (void)_updateContentInsets;	// 0x30a61cc1
- (CGPoint)contentOffsetForRowAtIndexPath:(id)indexPath;	// 0x30a64b2d
- (void)dealloc;	// 0x30a66f91
- (BOOL)didSelectDisabled:(BOOL)disabled;	// 0x30a65f6d
- (BOOL)isRowChecked:(int)checked;	// 0x30c340fd
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x30c343cd
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x30c343b5
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;	// 0x30a65e9d
- (BOOL)scrollViewShouldScrollToTop:(id)scrollView;	// 0x30c343dd
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint *)offset;	// 0x30c3416d
- (BOOL)selectRow:(int)row animated:(BOOL)animated notify:(BOOL)notify;	// 0x30a62411
// declared property getter: - (CGRect)selectionBarRect;	// 0x30a64bcd
// declared property getter: - (int)selectionBarRow;	// 0x30a63bbd
- (void)setContentOffset:(CGPoint)offset;	// 0x30a61aad
// declared property setter: - (void)setSelectionBarRect:(CGRect)rect;	// 0x30a61e75
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30c343e1
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x30c34431
@end

