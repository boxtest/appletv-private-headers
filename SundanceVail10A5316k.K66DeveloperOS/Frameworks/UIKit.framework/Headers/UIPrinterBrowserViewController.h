/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "PKPrinterBrowserDelegate.h"
#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class PKPrinter, PKPrinterBrowser, UIPrintPanelViewController, NSMutableArray, UIPrinterSearchingView;

__attribute__((visibility("hidden")))
@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
@private
	UIPrintPanelViewController *_printPanelViewController;	// 200 = 0xc8
	PKPrinterBrowser *_printerBrowser;	// 204 = 0xcc
	NSMutableArray *_printers;	// 208 = 0xd0
	PKPrinter *_lockedPrinter;	// 212 = 0xd4
	BOOL _loaded;	// 216 = 0xd8
	UIPrinterSearchingView *_searchingView;	// 220 = 0xdc
	BOOL _clearCurrentPrinter;	// 224 = 0xe0
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x303cf8a1
- (void)addPrinter:(id)printer moreComing:(BOOL)coming;	// 0x303d0751
- (void)adjustPopoverSize;	// 0x303cfa9d
- (void)dealloc;	// 0x303cf9e5
- (void)loadView;	// 0x303cfc81
- (void)removePrinter:(id)printer moreGoing:(BOOL)going;	// 0x303d0a55
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x303d0051
- (void)startPrinterBrowser;	// 0x303cfce9
- (void)stopPrinterBrowser;	// 0x303cfd45
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x303d0095
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x303d04d5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x303d0075
- (void)updateSearching;	// 0x303cfdb5
- (void)viewDidDisappear:(BOOL)view;	// 0x303cffe9
- (void)viewWillAppear:(BOOL)view;	// 0x303cfee1
- (void)viewWillDisappear:(BOOL)view;	// 0x303cff55
- (void)willEnterForeground;	// 0x303cfe91
@end
