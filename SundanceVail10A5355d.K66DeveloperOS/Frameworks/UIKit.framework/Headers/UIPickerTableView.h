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
	CGRect _selectionBarRect;	// 780 = 0x30c
	int _selectionBarRow;	// 796 = 0x31c
	NSMutableIndexSet *_checkedRows;	// 800 = 0x320
	float _lastClickedOffset;	// 804 = 0x324
	struct {
		unsigned allowsMultipleSelection : 1;
		unsigned scrollingDirection : 2;
		unsigned didSelectDisabled : 1;
		unsigned skipRowChangeNotifications : 1;
		unsigned scrollingForSelection : 1;
		unsigned pickerViewImplementsSelectionBarChanged : 2;
		unsigned cancellingAnimation : 1;
	} _pickerTableFlags;	// 808 = 0x328
}
@property(assign, nonatomic) CGRect selectionBarRect;	// G=0x33d5a64d; S=0x33b66945; @synthesize=_selectionBarRect
@property(assign, nonatomic) int selectionBarRow;	// G=0x33b6867d; @synthesize=_selectionBarRow
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x33b664c5
- (int)_actualSelectionBarRow;	// 0x33d5a16d
- (BOOL)_beginTrackingWithEvent:(id)event;	// 0x33d5a1a1
- (id)_checkedRows;	// 0x33b67071
- (id)_pickerView;	// 0x33b670c1
- (void)_playClickIfNecessary;	// 0x33b66aa1
- (void)_rectChangedWithNewSize:(CGSize)newSize oldSize:(CGSize)size;	// 0x33b66775
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)selectionBar animated:(BOOL)animated;	// 0x33b67f71
- (void)_scrollViewAnimationEnded:(id)ended finished:(BOOL)finished;	// 0x33d5a125
- (void)_scrollingFinished;	// 0x33b691d5
- (CGRect)_selectionBarRectForBounds:(CGRect)bounds;	// 0x33b69295
- (void)_setSelectionBarRow:(int)row;	// 0x33b680b9
- (void)_updateContentInsets;	// 0x33b667bd
- (CGPoint)contentOffsetForRowAtIndexPath:(id)indexPath;	// 0x33d5a435
- (void)dealloc;	// 0x33b6a061
- (BOOL)didSelectDisabled:(BOOL)disabled;	// 0x33b69741
- (BOOL)isRowChecked:(int)checked;	// 0x33d5a17d
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x33b691c5
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x33b691ad
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;	// 0x33b6970d
- (BOOL)scrollViewShouldScrollToTop:(id)scrollView;	// 0x33d5a4d5
- (void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint *)offset;	// 0x33d5a1ed
- (BOOL)selectRow:(int)row animated:(BOOL)animated notify:(BOOL)notify;	// 0x33b66d49
// declared property getter: - (CGRect)selectionBarRect;	// 0x33d5a64d
// declared property getter: - (int)selectionBarRow;	// 0x33b6867d
- (void)setContentOffset:(CGPoint)offset;	// 0x33b665a9
// declared property setter: - (void)setSelectionBarRect:(CGRect)rect;	// 0x33b66945
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x33d5a4d9
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x33d5a529
@end
