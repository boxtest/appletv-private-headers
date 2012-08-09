/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKit-Structs.h"

@class UIButton, UIPrintPanelViewController;

__attribute__((visibility("hidden")))
@interface UIPrintPanelTableViewController : UITableViewController {
	UIPrintPanelViewController *_printPanelViewController;	// 200 = 0xc8
	UIButton *_printButton;	// 204 = 0xcc
	int _rangeRow;	// 208 = 0xd0
	int _copiesRow;	// 212 = 0xd4
	int _duplexRow;	// 216 = 0xd8
	int _paperRow;	// 220 = 0xdc
	BOOL _contactingPrinter;	// 224 = 0xe0
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x30f5ba6d
- (void)_setupPrintButtons;	// 0x30f5ce31
- (void)_update:(BOOL)update;	// 0x30f5cfb5
- (void)_updateSize;	// 0x30f5d0d9
- (void)clearPrintPanelViewController;	// 0x30f5bef5
- (void)dealloc;	// 0x30f5baf5
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x30f5c109
- (void)setShowContactingPrinter:(BOOL)printer;	// 0x30f5bd81
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30f5c0c5
- (void)showCancelButton;	// 0x30f5bb61
- (void)showContacting;	// 0x30f5bbf1
- (unsigned)supportedInterfaceOrientations;	// 0x30f5c0e9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30f5c1e9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30f5cd2d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30f5c10d
- (void)updateCopies:(id)copies;	// 0x30f5cc15
- (void)updateDuplex:(id)duplex;	// 0x30f5ccf1
- (void)updatePageRange:(NSRange)range;	// 0x30f5cbc9
- (void)viewDidDisappear:(BOOL)view;	// 0x30f5c05d
- (void)viewDidLoad;	// 0x30f5bf09
- (void)viewDidUnload;	// 0x30f5bf95
- (void)viewWillAppear:(BOOL)view;	// 0x30f5bfe5
@end
