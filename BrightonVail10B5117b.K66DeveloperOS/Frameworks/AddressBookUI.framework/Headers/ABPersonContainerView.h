/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPersonTabsLayoutManager.h"
#import <UIView.h> // Unknown library

@class UIScrollView, UIImageView, ABPersonTableViewDataSource, UISegmentedControl, ABPersonTableView, ABPersonOverlayingContainerView;
@protocol ABPersonTabsScrollView;

@interface ABPersonContainerView : UIView <ABPersonTabsLayoutManager> {
	UISegmentedControl *_contentSwitchingTabs;	// 84 = 0x54
	UIView *_nonScrollableHeaderView;	// 88 = 0x58
	ABPersonTableView *_tableView;	// 92 = 0x5c
	ABPersonTableViewDataSource *_dataSource;	// 96 = 0x60
	ABPersonOverlayingContainerView *_overlayingContainerView;	// 100 = 0x64
	UIImageView *_contentSwitchingTabsPocketShadow;	// 104 = 0x68
	UIImageView *_contentSwitchingTabsBorder;	// 108 = 0x6c
	BOOL _hidesContentSwitchingTabs;	// 112 = 0x70
}
@property(retain, nonatomic) UISegmentedControl *contentSwitchingTabs;	// G=0x3090cd1d; S=0x3090cc19; @synthesize=_contentSwitchingTabs
@property(retain, nonatomic) UIImageView *contentSwitchingTabsBorder;	// G=0x3096d505; S=0x3090ce31; @synthesize=_contentSwitchingTabsBorder
@property(retain, nonatomic) UIImageView *contentSwitchingTabsPocketShadow;	// G=0x3096d4f5; S=0x3090cd2d; @synthesize=_contentSwitchingTabsPocketShadow
@property(readonly, assign, nonatomic) UIScrollView<ABPersonTabsScrollView> *currentScrollView;	// G=0x3090d961; 
@property(assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x3096d4e5; S=0x3090bf35; @synthesize=_dataSource
@property(assign, nonatomic) BOOL hidesContentSwitchingTabs;	// G=0x3096d515; S=0x3090cf9d; @synthesize=_hidesContentSwitchingTabs
@property(retain, nonatomic) UIView *nonScrollableHeaderView;	// G=0x3096d4c5; S=0x3096d135; @synthesize=_nonScrollableHeaderView
@property(retain, nonatomic) ABPersonOverlayingContainerView *overlayingContainerView;	// G=0x3090d2f5; S=0x3096cf39; @synthesize=_overlayingContainerView
@property(retain, nonatomic) ABPersonTableView *tableView;	// G=0x3096d4d5; S=0x309003bd; @synthesize=_tableView
// declared property getter: - (id)contentSwitchingTabs;	// 0x3090cd1d
// declared property getter: - (id)contentSwitchingTabsBorder;	// 0x3096d505
// declared property getter: - (id)contentSwitchingTabsPocketShadow;	// 0x3096d4f5
// declared property getter: - (id)currentScrollView;	// 0x3090d961
// declared property getter: - (id)dataSource;	// 0x3096d4e5
- (void)dealloc;	// 0x3091d15d
- (void)didChangeContentOffset:(CGPoint)offset inScrollView:(id)scrollView;	// 0x3090d8f1
- (float)heightForHeaderAndContentSwitchingTabs;	// 0x3096d255
- (float)heightNeededForContentSwitchingTabs;	// 0x3096d1d1
// declared property getter: - (BOOL)hidesContentSwitchingTabs;	// 0x3096d515
- (void)layoutSubviews;	// 0x3090e8c9
- (void)moveContentSwitchingTabsAboveView:(id)view inScrollView:(id)scrollView;	// 0x309194f5
// declared property getter: - (id)nonScrollableHeaderView;	// 0x3096d4c5
// declared property getter: - (id)overlayingContainerView;	// 0x3090d2f5
- (id)prepareToRestoreTabsPosition;	// 0x3096d2d1
- (void)repositionContentSwitchingTabs;	// 0x30919599
- (void)restoreTabsPosition:(id)position;	// 0x3096d361
// declared property setter: - (void)setContentSwitchingTabs:(id)tabs;	// 0x3090cc19
// declared property setter: - (void)setContentSwitchingTabsBorder:(id)border;	// 0x3090ce31
// declared property setter: - (void)setContentSwitchingTabsPocketShadow:(id)shadow;	// 0x3090cd2d
// declared property setter: - (void)setDataSource:(id)source;	// 0x3090bf35
- (void)setFrame:(CGRect)frame;	// 0x30900211
// declared property setter: - (void)setHidesContentSwitchingTabs:(BOOL)tabs;	// 0x3090cf9d
// declared property setter: - (void)setNonScrollableHeaderView:(id)view;	// 0x3096d135
// declared property setter: - (void)setOverlayingContainerView:(id)view;	// 0x3096cf39
// declared property setter: - (void)setTableView:(id)view;	// 0x309003bd
// declared property getter: - (id)tableView;	// 0x3096d4d5
- (id)viewContainingHeaderView;	// 0x3096cf05
@end
