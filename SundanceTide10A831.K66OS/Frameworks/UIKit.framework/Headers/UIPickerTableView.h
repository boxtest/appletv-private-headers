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
@property(assign, nonatomic) CGRect selectionBarRect;	// G=0x31d8abcd; S=0x31d87e75; @synthesize=_selectionBarRect
@property(assign, nonatomic) int selectionBarRow;	// G=0x31d89bbd; @synthesize=_selectionBarRow
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x31d879c5
- (BOOL)_beginTrackingWithEvent:(id)event;	// 0x31f5a121
- (id)_checkedRows;	// 0x31d88741
- (id)_pickerView;	// 0x31d88115
- (void)_playClickIfNecessary;	// 0x31d88169
- (void)_rectChangedWithNewSize:(CGSize)newSize oldSize:(CGSize)size;	// 0x31d87c79
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)selectionBar animated:(BOOL)animated;	// 0x31d8a9c9
- (void)_scrollViewAnimationEnded:(id)ended finished:(BOOL)finished;	// 0x31d8be59
- (void)_scrollingFinished;	// 0x31d8bead
- (CGRect)_selectionBarRectForBounds:(CGRect)bounds;	// 0x31f59f75
- (void)_setSelectionBarRow:(int)row;	// 0x31d88041
- (void)_updateContentInsets;	// 0x31d87cc1
- (CGPoint)contentOffsetForRowAtIndexPath:(id)indexPath;	// 0x31d8ab2d
- (void)dealloc;	// 0x31d8cf91
- (BOOL)didSelectDisabled:(BOOL)disabled;	// 0x31d8bf6d
- (BOOL)isRowChecked:(int)checked;	// 0x31f5a0fd
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x31f5a3cd
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x31f5a3b5
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;	// 0x31d8be9d
- (BOOL)scrollViewShouldScrollToTop:(id)scrollView;	// 0x31f5a3dd
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint *)offset;	// 0x31f5a16d
- (BOOL)selectRow:(int)row animated:(BOOL)animated notify:(BOOL)notify;	// 0x31d88411
// declared property getter: - (CGRect)selectionBarRect;	// 0x31d8abcd
// declared property getter: - (int)selectionBarRow;	// 0x31d89bbd
- (void)setContentOffset:(CGPoint)offset;	// 0x31d87aad
// declared property setter: - (void)setSelectionBarRect:(CGRect)rect;	// 0x31d87e75
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31f5a3e1
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x31f5a431
@end

