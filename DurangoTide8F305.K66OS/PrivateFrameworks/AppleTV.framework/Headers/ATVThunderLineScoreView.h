/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRControl.h> // Unknown library

@class BRTextControl, NSDictionary, BRImageControl, BRAsyncImageControl, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVThunderLineScoreView : BRControl {
@private
	NSDictionary *_data;	// 44 = 0x2c
	BRTextControl *_homeTeamName;	// 48 = 0x30
	BRTextControl *_awayTeamName;	// 52 = 0x34
	BRTextControl *_homeTeamScore;	// 56 = 0x38
	BRTextControl *_awayTeamScore;	// 60 = 0x3c
	BRAsyncImageControl *_homeTeamLogo;	// 64 = 0x40
	BRAsyncImageControl *_awayTeamLogo;	// 68 = 0x44
	BRTextControl *_gamePeriod;	// 72 = 0x48
	BRTextControl *_gameTime;	// 76 = 0x4c
	BRTextControl *_gameState;	// 80 = 0x50
	BRImageControl *_lineScoreBG;	// 84 = 0x54
	BRTableView *_lineScoreTable;	// 88 = 0x58
}
- (id)initWithDictionary:(id)dictionary;	// 0x307ac869
- (id)_gamePeriodAttributes;	// 0x307ad00d
- (id)_gameStateAttributes;	// 0x307acf59
- (id)_gameTimeAttributes;	// 0x307acf7d
- (id)_scoreAttributes;	// 0x307acfa1
- (id)_tableCellAttributes;	// 0x307acf35
- (id)_tableHeaderAttributes;	// 0x307acfe9
- (id)_teamNameAttributes;	// 0x307acfc5
- (id)accessibilityLabel;	// 0x307ace59
- (void)dealloc;	// 0x307ac759
- (float)headerHeightForTableView:(id)tableView;	// 0x307ac73d
- (void)layoutSubcontrols;	// 0x307ad40d
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x307ac72d
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x307ac731
- (long)numberOfRowsInTableView:(id)tableView;	// 0x307ac729
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x307acde5
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x307ad1d5
- (float)tableView:(id)view heightForRow:(long)row;	// 0x307ac735
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x307ad031
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x307ace15
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x307ac745
@end
