/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTumblerDelegate.h"
#import "BRTumblerDataSource.h"
#import "ATVGenericCollectionController.h"
#import "BRTabControlDelegate.h"

@class ATVURLDocument, ATVTabWithTitleListHeaderControl, ATVTumblerWithTextListHeaderControl;

__attribute__((visibility("hidden")))
@interface ATVListByNavigationController : ATVGenericCollectionController <BRTumblerDelegate, BRTumblerDataSource, BRTabControlDelegate> {
@private
	ATVTumblerWithTextListHeaderControl *_tumblerListHeader;	// 144 = 0x90
	ATVTabWithTitleListHeaderControl *_tabListHeader;	// 148 = 0x94
	ATVURLDocument *_documentForTumblerChange;	// 152 = 0x98
}
- (id)initWithDictionary:(id)dictionary;	// 0x35d4e269
- (id)initWithFeedElement:(id)feedElement;	// 0x35d4e1f5
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x35d4fbc9
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x35d4fb19
- (void)_cancelAllDocumentRequests;	// 0x35d4f92d
- (void)_didNavigateToIndex:(unsigned)index;	// 0x35d4f9bd
- (void)_documentReadyNotification:(id)notification;	// 0x35d4eb05
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x35d4fc15
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x35d4fb89
- (void)_initWithStartingIndex:(unsigned)startingIndex;	// 0x35d4e7e9
- (void)_loadListForURL:(id)url;	// 0x35d4e985
- (id)_tumblerCustomTextAttributes;	// 0x35d4e961
- (id)_tumblerTextAttributes;	// 0x35d4e93d
- (void)_updateListHeader;	// 0x35d4efbd
- (void)_willNavigate;	// 0x35d4f97d
- (id)accessibilityLabel;	// 0x35d4fc55
- (void)dealloc;	// 0x35d4e349
- (unsigned)itemCountForTumbler:(id)tumbler;	// 0x35d4e54d
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x35d4e7a5
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x35d4e7d5
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x35d4e7e5
- (void)tumblerControl:(id)control didTumbleToItemAtIndex:(unsigned)index;	// 0x35d4e769
- (id)tumblerControl:(id)control itemAtIndex:(unsigned)index;	// 0x35d4e5e1
- (void)tumblerControlWillTumble:(id)tumblerControl;	// 0x35d4e759
- (void)wasPushed;	// 0x35d4e3e9
@end

