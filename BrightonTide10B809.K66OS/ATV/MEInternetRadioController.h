/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class NSArray, ATVDataClient, ATVDataQuery, NSString;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface MEInternetRadioController : BRDataQueryController {
	id<BRMediaAsset> _nowPlayingStation;	// 164 = 0xa4
	NSArray *_favorites;	// 168 = 0xa8
	NSArray *_categories;	// 172 = 0xac
	ATVDataClient *_tunerDataClient;	// 176 = 0xb0
	long _fetchingStationsForIndex;	// 180 = 0xb4
	NSString *_selectedFavoriteStationName;	// 184 = 0xb8
	ATVDataQuery *_categoryQuery;	// 188 = 0xbc
	ATVDataQuery *_stationQuery;	// 192 = 0xc0
	ATVDataQuery *_favoriteCategoryQuery;	// 196 = 0xc4
	ATVDataQuery *_favoriteStationQuery;	// 200 = 0xc8
	BOOL _showNowPlayingMenu;	// 204 = 0xcc
}
@property(assign, nonatomic) BOOL showNowPlayingMenu;	// G=0x233cb9; S=0x233cc9; @synthesize=_showNowPlayingMenu
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x232c5d
- (void).cxx_destruct;	// 0x233cd9
- (void)_favoriteAdded:(id)added;	// 0x235671
- (void)_favoriteCategoryQueryComplete:(id)complete;	// 0x235159
- (void)_favoriteRemoved:(id)removed;	// 0x23576d
- (void)_favoriteStationQueryComplete:(id)complete;	// 0x235291
- (void)_getFavoriteCategoryFromString:(id)string;	// 0x235991
- (void)_getStationInCategory:(id)category;	// 0x235b3d
- (void)_handleContextMenuSelection:(id)selection;	// 0x2353ed
- (void)_handleDidSelectRadioFavorite:(id)_handle;	// 0x235869
- (void)_nowPlayingStateChanged:(id)changed;	// 0x2354ed
- (void)_performStationsQueryForList:(id)list withIndexPath:(id)indexPath withFollowUpAction:(int)followUpAction;	// 0x2349c1
- (void)_showSpinner:(BOOL)spinner delay:(BOOL)delay;	// 0x233585
- (void)_stationsQueryComplete:(id)complete;	// 0x234dc9
- (void)_updateNowPlaying;	// 0x235519
- (BOOL)brEventAction:(id)action;	// 0x2331b1
- (id)controlForContextMenuPositioning;	// 0x2349bd
- (id)controlForContextMenuStart;	// 0x2349b9
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x2334d1
- (BOOL)dataQueryComplete:(id)complete;	// 0x233445
- (void)dealloc;	// 0x233059
- (id)errorForNoContent;	// 0x2334b1
- (id)identifier;	// 0x233199
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2344b9
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x2347f5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x234761
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x23424d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x23413d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x233d99
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x234009
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x23407d
- (id)newDataQuery;	// 0x2333d1
- (long)numberOfSectionsInList:(id)list;	// 0x233fdd
- (id)providersForContextMenu;	// 0x234889
// declared property setter: - (void)setShowNowPlayingMenu:(BOOL)menu;	// 0x233cc9
// declared property getter: - (BOOL)showNowPlayingMenu;	// 0x233cb9
- (BOOL)typeaheadPhraseAccumulator:(id)accumulator phraseChanged:(id)changed;	// 0x233589
- (void)wasExhumed;	// 0x233391
- (void)wasPushed;	// 0x233339
@end
