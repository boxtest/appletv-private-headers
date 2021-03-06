/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIViewController.h"

@class UITableViewDataSource, UITableView, UIRefreshControl;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
	int _tableViewStyle;	// 196 = 0xc4
	id _keyboardSupport;	// 200 = 0xc8
	id _staticDataSource;	// 204 = 0xcc
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	} _tableViewControllerFlags;	// 208 = 0xd0
}
@property(assign, nonatomic) BOOL clearsSelectionOnViewWillAppear;	// G=0x304a2c89; S=0x304a2c9d; 
@property(retain, nonatomic) UIRefreshControl *refreshControl;	// G=0x304a2ce9; S=0x304a2cbd; 
@property(retain, nonatomic, getter=_staticDataSource, setter=_setStaticDataSource:) UITableViewDataSource *staticDataSource;	// G=0x304a2ead; S=0x304a2ee5; 
@property(retain, nonatomic) UITableView *tableView;	// G=0x302d5fc5; S=0x304a2b61; 
- (id)init;	// 0x302f5905
- (id)initWithCoder:(id)coder;	// 0x304a29fd
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x302d2ac1
- (id)initWithStyle:(int)style;	// 0x302d2a6d
- (void)_adjustTableForKeyboardInfo:(id)keyboardInfo;	// 0x3038f569
- (id)_existingTableView;	// 0x3036f681
// declared property setter: - (void)_setStaticDataSource:(id)source;	// 0x304a2ee5
// declared property getter: - (id)_staticDataSource;	// 0x304a2ead
// declared property getter: - (BOOL)clearsSelectionOnViewWillAppear;	// 0x304a2c89
- (void)dealloc;	// 0x3036f57d
- (void)encodeWithCoder:(id)coder;	// 0x304a2ad1
- (void)loadView;	// 0x302d6019
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x303705c5
// declared property getter: - (id)refreshControl;	// 0x304a2ce9
- (BOOL)respondsToSelector:(SEL)selector;	// 0x302d6a95
// declared property setter: - (void)setClearsSelectionOnViewWillAppear:(BOOL)appear;	// 0x304a2c9d
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x302d5ebd
// declared property setter: - (void)setRefreshControl:(id)control;	// 0x304a2cbd
// declared property setter: - (void)setTableView:(id)view;	// 0x304a2b61
// declared property getter: - (id)tableView;	// 0x302d5fc5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x304a2d39
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;	// 0x304a2e99
- (float)tableView:(id)view heightForFooterInSection:(int)section;	// 0x304a2e01
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x304a2dd9
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x304a2e29
- (int)tableView:(id)view indentationLevelForRowAtIndexPath:(id)indexPath;	// 0x304a2e5d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x304a2d11
- (id)tableView:(id)view titleForFooterInSection:(int)section;	// 0x304a2d79
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x304a2d59
- (id)tableView:(id)view viewForFooterInSection:(int)section;	// 0x304a2db9
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x304a2d99
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;	// 0x304a2e85
- (void)viewDidAppear:(BOOL)view;	// 0x302e0fe5
- (void)viewWillAppear:(BOOL)view;	// 0x302dff95
- (void)viewWillDisappear:(BOOL)view;	// 0x302e105d
@end

