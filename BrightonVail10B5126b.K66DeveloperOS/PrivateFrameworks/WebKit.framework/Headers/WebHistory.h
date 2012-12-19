/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebHistoryPrivate;

@interface WebHistory : NSObject {
	WebHistoryPrivate *_historyPrivate;	// 4 = 0x4
}
@property(assign) int historyAgeInDaysLimit;	// G=0x365df37d; S=0x365df35d; converted property
@property(assign) int historyItemLimit;	// G=0x365df33d; S=0x365df31d; converted property
+ (void)_removeAllVisitedLinks;	// 0x365df3c9
+ (void)_setVisitedLinkTrackingEnabled:(BOOL)enabled;	// 0x365df3bd
+ (id)optionalSharedHistory;	// 0x3659de69
+ (void)setOptionalSharedHistory:(id)history;	// 0x36590eb5
- (id)init;	// 0x36590ced
- (void)_addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x365a1a65
- (id)_data;	// 0x3658d099
- (id)_itemForURLString:(id)urlstring;	// 0x365aa5e9
- (void)_sendNotification:(id)notification entries:(id)entries;	// 0x3659e93d
- (void)_visitedURL:(id)url withTitle:(id)title method:(id)method wasFailure:(BOOL)failure increaseVisitCount:(BOOL)count;	// 0x3659de79
- (void)addItems:(id)items;	// 0x365df265
- (id)allItems;	// 0x365df39d
- (BOOL)containsURL:(id)url;	// 0x365df2b1
- (void)dealloc;	// 0x365df0b1
- (void)finalize;	// 0x365df13d
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x365df37d
// converted property getter: - (int)historyItemLimit;	// 0x365df33d
- (id)itemForURL:(id)url;	// 0x3659aead
- (BOOL)loadFromURL:(id)url error:(id *)error;	// 0x3658b121
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x365ac5fd
- (id)orderedLastVisitedDays;	// 0x365ac251
- (void)removeAllItems;	// 0x365df201
- (void)removeItems:(id)items;	// 0x365df1ad
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x365df2d5
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x365df35d
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x365df31d
- (void)timeZoneChanged:(id)changed;	// 0x365df091
@end
