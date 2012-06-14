/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVThunderXMLParser.h"

@class ATVThunderGame, NSMutableArray, NSDate, NSDateFormatter, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVThunderGamesByDayParser : NSObject <ATVThunderXMLParser> {
@private
	NSMutableArray *_daysGames;	// 4 = 0x4
	ATVThunderGame *_currentGame;	// 8 = 0x8
	NSString *_currentDate;	// 12 = 0xc
	NSDate *_currentGameDate;	// 16 = 0x10
	BOOL _anyLiveGames;	// 20 = 0x14
	NSDateFormatter *_dateReadingFormatter;	// 24 = 0x18
	NSDateFormatter *_gameTimeFormatter;	// 28 = 0x1c
}
@property(retain, nonatomic) NSArray *daysGames;	// G=0x32fcc52d; S=0x32fcc53d; @synthesize=_daysGames
- (id)init;	// 0x32fcb389
- (id)createStorePage;	// 0x32fcb549
- (id)createStorePageForError:(int)error;	// 0x32fcbd79
// declared property getter: - (id)daysGames;	// 0x32fcc52d
- (void)dealloc;	// 0x32fcb4ad
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x32fcc4b9
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x32fcbe71
// declared property setter: - (void)setDaysGames:(id)games;	// 0x32fcc53d
@end
