/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class NSString, NSArray, ATVDataClient, ATVDataQuery;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface MEInternetRadioController : BRDataQueryController {
	id<BRMediaAsset> _nowPlayingStation;	// 156 = 0x9c
	NSArray *_favorites;	// 160 = 0xa0
	NSArray *_categories;	// 164 = 0xa4
	ATVDataClient *_tunerDataClient;	// 168 = 0xa8
	long _fetchingStationsForIndex;	// 172 = 0xac
	NSString *_selectedFavoriteStationName;	// 176 = 0xb0
	ATVDataQuery *_categoryQuery;	// 180 = 0xb4
	ATVDataQuery *_stationQuery;	// 184 = 0xb8
	ATVDataQuery *_favoriteCategoryQuery;	// 188 = 0xbc
	ATVDataQuery *_favoriteStationQuery;	// 192 = 0xc0
}
+ (void)initialize;	// 0x20b15d
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x20b1b9
- (void).cxx_destruct;	// 0x20ba91
- (void)_categoryQueryCompleted:(id)completed;	// 0x20c769
- (void)_favoriteAdded:(id)added;	// 0x20d599
- (void)_favoriteCategoryQueryComplete:(id)complete;	// 0x20d081
- (void)_favoriteRemoved:(id)removed;	// 0x20d695
- (void)_favoriteStationQueryComplete:(id)complete;	// 0x20d1b9
- (void)_getFavoriteCategoryFromString:(id)string;	// 0x20d8b9
- (void)_getStationInCategory:(id)category;	// 0x20da65
- (void)_handleContextMenuSelection:(id)selection;	// 0x20d315
- (void)_handleDidSelectRadioFavorite:(id)_handle;	// 0x20d791
- (void)_nowPlayingStateChanged:(id)changed;	// 0x20d415
- (void)_performStationsQueryForList:(id)list withIndexPath:(id)indexPath withFollowUpAction:(int)followUpAction;	// 0x20c8e9
- (void)_showSpinner:(BOOL)spinner delay:(BOOL)delay;	// 0x20ba8d
- (void)_stationsQueryComplete:(id)complete;	// 0x20ccf1
- (void)_updateNowPlaying;	// 0x20d441
- (BOOL)brEventAction:(id)action;	// 0x20b6a5
- (id)controlForContextMenuPositioning;	// 0x20c765
- (id)controlForContextMenuStart;	// 0x20c761
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x20b9d9
- (void)dealloc;	// 0x20b565
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x20c261
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x20c59d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x20c509
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x20bff5
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x20bee5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x20bb51
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x20bdc1
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x20be25
- (long)numberOfSectionsInList:(id)list;	// 0x20bd95
- (id)providersForContextMenu;	// 0x20c631
- (void)wasExhumed;	// 0x20b999
- (void)wasPushed;	// 0x20b82d
@end

