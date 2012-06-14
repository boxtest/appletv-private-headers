/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRViewController.h"

@class ATVThunderStandingsView, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsController : BRViewController {
@private
	ATVThunderStandingsView *_standingsView;	// 84 = 0x54
	NSDictionary *_data;	// 88 = 0x58
}
- (id)initWithDictionary:(id)dictionary;	// 0x3316afa5
- (float)_headerWidthOfColumn:(long)column forTableView:(id)tableView;	// 0x3316bab5
- (float)_widthOfColumn:(long)column forTableView:(id)tableView;	// 0x3316b9dd
- (id)accessibilityLabel;	// 0x3316b99d
- (id)accessibilityNonFocusableElements;	// 0x3316b9bd
- (void)dealloc;	// 0x3316b2ed
- (float)headerHeightForTableView:(id)tableView;	// 0x3316b98d
- (BOOL)isAccessibilityElement;	// 0x3316b999
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x3316b395
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x3316b3dd
- (long)numberOfRowsInTableView:(id)tableView;	// 0x3316b34d
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x3316b769
- (float)tableView:(id)view heightForRow:(long)row;	// 0x3316b981
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x3316b425
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x3316b951
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x3316b969
@end
