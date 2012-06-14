/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "UITableViewDelegate.h"
#import "MPAbstractAlternateTracksViewController.h"
#import "UITableViewDataSource.h"

@class UINavigationBar, UIView, UITextLabel, UITableView, UIProgressIndicator;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {
	UIView *_backgroundView;	// 176 = 0xb0
	UINavigationBar *_navigationBar;	// 180 = 0xb4
	UITableView *_table;	// 184 = 0xb8
	UIProgressIndicator *_progressIndicator;	// 188 = 0xbc
	UITextLabel *_loadingLabel;	// 192 = 0xc0
}
- (void)_cancelButtonAction:(id)action;	// 0x335e5091
- (void)_doneButtonAction:(id)action;	// 0x335e5069
- (void)_exitAnimated:(BOOL)animated;	// 0x335e4b99
- (void)_setCell:(id)cell isChecked:(BOOL)checked;	// 0x335e5545
- (void)addLoadingUI;	// 0x335e5d09
- (void)dealloc;	// 0x335e52a5
- (void)didChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x335e50d1
- (void)loadView;	// 0x335e5869
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x335e502d
- (void)reloadData;	// 0x335e5149
- (void)removeLoadingUI;	// 0x335e4bc1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x335e4d99
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x335e4c85
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x335e4b91
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x335e4c61
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x335e55fd
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x335e4c09
- (void)viewDidUnload;	// 0x335e5189
- (void)viewWillAppear:(BOOL)view;	// 0x335e523d
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x335e537d
@end
