/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UILabel, NSString, UIViewController, UISearchBar, UIPopoverController, UIView, UITableView;
@protocol UITableViewDelegate, UISearchDisplayDelegate, UITableViewDataSource;

@interface UISearchDisplayController : NSObject {
	UIViewController *_viewController;	// 4 = 0x4
	UITableView *_tableView;	// 8 = 0x8
	UIView *_dimmingView;	// 12 = 0xc
	UISearchBar *_searchBar;	// 16 = 0x10
	UILabel *_noResultsLabel;	// 20 = 0x14
	NSString *_noResultsMessage;	// 24 = 0x18
	NSString *_resultsTitle;	// 28 = 0x1c
	id<UISearchDisplayDelegate> _delegate;	// 32 = 0x20
	id<UITableViewDataSource> _tableViewDataSource;	// 36 = 0x24
	id<UITableViewDelegate> _tableViewDelegate;	// 40 = 0x28
	CFArrayRef _containingScrollViews;	// 44 = 0x2c
	float _lastKeyboardAdjustment;	// 48 = 0x30
	float _lastFooterAdjustment;	// 52 = 0x34
	UIPopoverController *_popoverController;	// 56 = 0x38
	int _searchResultsTableViewStyle;	// 60 = 0x3c
	id _navigationControllerBookkeeper;	// 64 = 0x40
	struct {
		unsigned visible : 1;
		unsigned animating : 1;
		unsigned hidIndexBar : 1;
		unsigned hidNavigationBar : 1;
		unsigned noResultsMessageVisible : 1;
		unsigned noResultsMessageAutoDisplay : 1;
		unsigned navigationBarHidingEnabled : 1;
		unsigned dimTableViewOnEmptySearchString : 1;
		unsigned isRotatingWithPopover : 1;
		unsigned cancelButtonManagementDisabled : 1;
		unsigned allowDisablingNavigationBarHiding : 1;
		unsigned showsResultsForEmptyField : 1;
		unsigned adjustsSearchBarContentInsetForIndexBar : 1;
	} _searchDisplayControllerFlags;	// 68 = 0x44
}
@property(assign, nonatomic, getter=isActive) BOOL active;	// G=0x32d29da9; S=0x32dff54d; 
@property(assign, nonatomic) BOOL automaticallyShowsNoResultsMessage;	// G=0x32f61d8d; S=0x32d295d5; 
@property(assign, nonatomic, getter=_isCancelButtonManagementDisabled, setter=_setCancelButtonManagementDisabled:) BOOL cancelButtonManagementDisabled;	// G=0x32f61f09; S=0x32d298c5; 
@property(assign, nonatomic) id<UISearchDisplayDelegate> delegate;	// G=0x32dd2bc1; S=0x32d29849; @synthesize=_delegate
@property(assign, nonatomic) BOOL dimTableViewOnEmptySearchString;	// G=0x32dec6ad; S=0x32d297b9; 
@property(readonly, assign, nonatomic) BOOL hidNavigationBar;	// G=0x32f615d5; 
@property(assign, nonatomic, getter=isNavigationBarHidingEnabled) BOOL navigationBarHidingEnabled;	// G=0x32dec4c5; S=0x32d297dd; 
@property(copy, nonatomic) NSString *noResultsMessage;	// G=0x32f61e19; S=0x32f61da1; 
@property(assign, nonatomic) BOOL noResultsMessageVisible;	// G=0x32f61d79; S=0x32e4b871; 
@property(readonly, assign, nonatomic) UISearchBar *searchBar;	// G=0x32d523d1; @synthesize=_searchBar
@property(readonly, assign, nonatomic) UIViewController *searchContentsController;	// G=0x32f61f49; @synthesize=_viewController
@property(assign, nonatomic) id<UITableViewDataSource> searchResultsDataSource;	// G=0x32f61f59; S=0x32d29859; @synthesize=_tableViewDataSource
@property(assign, nonatomic) id<UITableViewDelegate> searchResultsDelegate;	// G=0x32f61f69; S=0x32d2988d; @synthesize=_tableViewDelegate
@property(readonly, assign, nonatomic) UITableView *searchResultsTableView;	// G=0x32d608d9; @synthesize=_tableView
@property(copy, nonatomic) NSString *searchResultsTitle;	// G=0x32f61f79; S=0x32f61f8d; @synthesize=_resultsTitle
- (id)init;	// 0x32f6119d
- (id)initWithCoder:(id)coder;	// 0x32f611b1
- (id)initWithSearchBar:(id)searchBar contentsController:(id)controller;	// 0x32d28bd9
- (id)initWithSearchBar:(id)searchBar contentsController:(id)controller searchResultsTableViewStyle:(int)style;	// 0x32d28bfd
- (void)_adjustTableViewContentInsets;	// 0x32df1851
- (BOOL)_adjustsSearchBarContentInsetForIndexBar;	// 0x32f61edd
- (BOOL)_allowDisablingNavigationBarHiding;	// 0x32f61e95
- (BOOL)_areSearchContentsSplitViewMaster;	// 0x32d28f71
- (void)_cleanUpSearchBar;	// 0x32d61401
- (void)_clearViewController;	// 0x32f61ef5
- (void)_configureNewSearchBar;	// 0x32d28cb1
- (void)_configureSearchBarForTableView;	// 0x32d290dd
- (id)_containingTableView;	// 0x32d2919d
- (id)_containingViewOfClass:(Class)aClass;	// 0x32d291dd
- (id)_createPopoverController;	// 0x32f6171d
- (void)_destroyManagedTableView;	// 0x32def6ed
- (void)_disableParentScrollViews;	// 0x32decaad
- (void)_enableParentScrollViews;	// 0x32deef9d
- (void)_indexBarFrameChanged:(id)changed;	// 0x32d29c6d
// declared property getter: - (BOOL)_isCancelButtonManagementDisabled;	// 0x32f61f09
- (BOOL)_isSearchBarInBar;	// 0x32dec241
- (void)_keyboardWillHide:(id)_keyboard;	// 0x32df2879
- (void)_keyboardWillShow:(id)_keyboard;	// 0x32decd0d
- (void)_managedTableViewDidScroll;	// 0x32df2c2d
- (id)_noResultsMessageLabel;	// 0x32f61f21
- (void)_popoverClearButtonPressed:(id)pressed;	// 0x32f616d5
- (void)_popoverKeyboardDidHide:(id)_popoverKeyboard;	// 0x32f61675
- (void)_popoverKeyboardDidShow:(id)_popoverKeyboard;	// 0x32f615ed
- (void)_searchBarSuperviewChanged;	// 0x32d614b5
- (void)_searchBarSuperviewWillChange;	// 0x32d613ed
- (void)_setAdjustsSearchBarContentInsetForIndexBar:(BOOL)indexBar;	// 0x32d29805
- (void)_setAllowDisablingNavigationBarHiding:(BOOL)hiding;	// 0x32f61e71
// declared property setter: - (void)_setCancelButtonManagementDisabled:(BOOL)disabled;	// 0x32d298c5
- (void)_setShowsResultsForEmptyField:(BOOL)emptyField;	// 0x32f61ea9
- (void)_setTableViewVisible:(BOOL)visible inView:(id)view;	// 0x32def0fd
- (void)_setupNoResultsLabelIfNecessary;	// 0x32f6139d
- (BOOL)_showsResultsForEmptyField;	// 0x32dec6c9
- (CGRect)_tableViewFrame;	// 0x32df1949
- (id)_topShadowView;	// 0x32df7959
- (void)_updateNoSearchResultsMessageVisiblity;	// 0x32d29615
- (void)_updateSearchBarForTableViewIndexBar:(id)tableViewIndexBar;	// 0x32d292c1
// declared property getter: - (BOOL)automaticallyShowsNoResultsMessage;	// 0x32f61d8d
- (void)dealloc;	// 0x32df7c5d
// declared property getter: - (id)delegate;	// 0x32dd2bc1
// declared property getter: - (BOOL)dimTableViewOnEmptySearchString;	// 0x32dec6ad
- (void)encodeWithCoder:(id)coder;	// 0x32f61235
// declared property getter: - (BOOL)hidNavigationBar;	// 0x32f615d5
// declared property getter: - (BOOL)isActive;	// 0x32d29da9
// declared property getter: - (BOOL)isNavigationBarHidingEnabled;	// 0x32dec4c5
- (void)navigationControllerDidShowViewController:(id)navigationController;	// 0x32df4189
- (void)navigationControllerWillShowViewController:(id)navigationController;	// 0x32df37e9
// declared property getter: - (id)noResultsMessage;	// 0x32f61e19
// declared property getter: - (BOOL)noResultsMessageVisible;	// 0x32f61d79
- (void)popoverController:(id)controller animationCompleted:(int)completed;	// 0x32f61d5d
// declared property getter: - (id)searchBar;	// 0x32d523d1
- (void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;	// 0x32df14b1
- (void)searchBar:(id)bar textDidChange:(id)text;	// 0x32deee75
- (void)searchBarCancelButtonClicked:(id)clicked;	// 0x32deec45
- (void)searchBarResultsListButtonClicked:(id)clicked;	// 0x32f61cd9
- (void)searchBarSearchButtonClicked:(id)clicked;	// 0x32df2841
- (void)searchBarTextDidBeginEditing:(id)searchBarText;	// 0x32dec1f1
// declared property getter: - (id)searchContentsController;	// 0x32f61f49
// declared property getter: - (id)searchResultsDataSource;	// 0x32f61f59
// declared property getter: - (id)searchResultsDelegate;	// 0x32f61f69
// declared property getter: - (id)searchResultsTableView;	// 0x32d608d9
// declared property getter: - (id)searchResultsTitle;	// 0x32f61f79
// declared property setter: - (void)setActive:(BOOL)active;	// 0x32dff54d
- (void)setActive:(BOOL)active animated:(BOOL)animated;	// 0x32dd2bd1
// declared property setter: - (void)setAutomaticallyShowsNoResultsMessage:(BOOL)message;	// 0x32d295d5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32d29849
// declared property setter: - (void)setDimTableViewOnEmptySearchString:(BOOL)string;	// 0x32d297b9
// declared property setter: - (void)setNavigationBarHidingEnabled:(BOOL)enabled;	// 0x32d297dd
// declared property setter: - (void)setNoResultsMessage:(id)message;	// 0x32f61da1
// declared property setter: - (void)setNoResultsMessageVisible:(BOOL)visible;	// 0x32e4b871
- (void)setSearchBar:(id)bar;	// 0x32f61271
- (void)setSearchContentsController:(id)controller;	// 0x32f614f9
// declared property setter: - (void)setSearchResultsDataSource:(id)source;	// 0x32d29859
// declared property setter: - (void)setSearchResultsDelegate:(id)delegate;	// 0x32d2988d
// declared property setter: - (void)setSearchResultsTitle:(id)title;	// 0x32f61f8d
- (void)showHideAnimationDidFinish;	// 0x32decd65
- (void)windowDidRotate:(id)window;	// 0x32f61c79
- (void)windowWillAnimateRotation:(id)window;	// 0x32f61945
@end
