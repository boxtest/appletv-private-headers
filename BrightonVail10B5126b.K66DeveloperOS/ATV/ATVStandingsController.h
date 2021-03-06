/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"

@class NSArray, BRPageStripView;

__attribute__((visibility("hidden")))
@interface ATVStandingsController : ATVFeedController {
	BRPageStripView *_pageStripView;	// 104 = 0x68
	NSArray *_items;	// 108 = 0x6c
}
- (id)initWithDictionary:(id)dictionary;	// 0x11d00d
- (id)initWithFeedElement:(id)feedElement;	// 0x11ce81
- (float)_widthOfColumn:(long)column forTableView:(id)tableView;	// 0x11de91
- (void)dealloc;	// 0x11d1e1
- (float)headerHeightForTableView:(id)tableView;	// 0x11de7d
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x11d525
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x11d5bd
- (long)numberOfPagesInPageStripView:(id)pageStripView;	// 0x11d245
- (long)numberOfRowsInTableView:(id)tableView;	// 0x11d48d
- (id)pageStripView:(id)view pageAtIndex:(long)index;	// 0x11d265
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x11dc85
- (float)tableView:(id)view heightForRow:(long)row;	// 0x11de65
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x11d5cd
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x11de3d
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x11de55
- (float)xPagePositionOffsetForPageStripView:(id)pageStripView;	// 0x11d481
@end

