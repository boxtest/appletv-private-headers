/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"


__attribute__((visibility("hidden")))
@interface ATVFeedItemDetailController : ATVFeedController {
}
- (id)initWithDictionary:(id)dictionary;	// 0x15692d
- (id)initWithFeedElement:(id)feedElement;	// 0x1568e1
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x157791
- (BOOL)_hasHeader:(id)header;	// 0x1582b9
- (id)_initWithData:(id)data;	// 0x157b55
- (int)_mainImageStyleForData:(id)data;	// 0x1585b1
- (BOOL)_relatedShelfIsFocused;	// 0x158805
- (id)_tableData;	// 0x1587b1
- (id)_tableElement;	// 0x158775
- (float)_widthOfColumn:(long)column tableView:(id)view;	// 0x158481
- (BOOL)brEventAction:(id)action;	// 0x156a0d
- (void)dealloc;	// 0x156979
- (float)headerHeightForTableView:(id)tableView;	// 0x157765
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x156c0d
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x156c91
- (long)numberOfRowsInTableView:(id)tableView;	// 0x156b89
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x157569
- (float)tableView:(id)view heightForRow:(long)row;	// 0x157759
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x156ca1
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x157731
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x157749
- (void)transitionToMoreInfo;	// 0x156ac1
- (id)transitionType;	// 0x1569fd
@end
