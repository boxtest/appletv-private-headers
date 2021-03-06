/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABPersonTabsScrollView.h"
#import "AddressBookUI-Structs.h"
#import <UITableView.h> // Unknown library

@class UIView, ABPersonViewControllerHelper;
@protocol ABPersonTabsLayoutManager;

@interface ABPersonTableView : UITableView <ABPersonTabsScrollView> {
	float _minimumBottomInset;	// 784 = 0x310
	UIEdgeInsets _savedContentInset;	// 788 = 0x314
	ABPersonViewControllerHelper *_helper;	// 804 = 0x324
	id<ABPersonTabsLayoutManager> _tabsLayoutManager;	// 808 = 0x328
}
@property(retain, nonatomic) UIView *backgroundView;
@property(assign, nonatomic) ABPersonViewControllerHelper *helper;	// G=0x3096c9d1; S=0x309003a9; @synthesize=_helper
@property(assign, nonatomic) float minimumBottomInset;	// G=0x3096c9bd; S=0x3090d98d; 
@property(assign, nonatomic) id<ABPersonTabsLayoutManager> tabsLayoutManager;	// G=0x3096c9e1; S=0x30900471; @synthesize=_tabsLayoutManager
// declared property getter: - (id)helper;	// 0x3096c9d1
- (void)layoutSubviews;	// 0x3090e9cd
// declared property getter: - (float)minimumBottomInset;	// 0x3096c9bd
- (void)setContentInset:(UIEdgeInsets)inset;	// 0x30922935
- (void)setContentOffset:(CGPoint)offset;	// 0x309002c9
// declared property setter: - (void)setHelper:(id)helper;	// 0x309003a9
// declared property setter: - (void)setMinimumBottomInset:(float)inset;	// 0x3090d98d
// declared property setter: - (void)setTabsLayoutManager:(id)manager;	// 0x30900471
// declared property getter: - (id)tabsLayoutManager;	// 0x3096c9e1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30921839
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x3096c9b5
@end

