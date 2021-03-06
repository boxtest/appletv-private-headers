/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMediaMenuController.h"
#import "BRTabControlDelegate.h"

@class BRPreferences, NSString, NSMutableDictionary, BRTabControl, NSSet;
@protocol BRProvider;

@interface BRSeriesMediaMenuController : BRMediaMenuController <BRTabControlDelegate> {
@private
	NSSet *_mediaTypes;	// 160 = 0xa0
	long _errorNumberForNoContent;	// 164 = 0xa4
	BOOL _forSharedContent;	// 168 = 0xa8
	BOOL _showUnwatchedOnly;	// 169 = 0xa9
	NSString *_series;	// 172 = 0xac
	int _sortState;	// 176 = 0xb0
	BRPreferences *_prefs;	// 180 = 0xb4
	NSMutableDictionary *_savedSelectionBySortState;	// 184 = 0xb8
	BRTabControl *_tabControl;	// 188 = 0xbc
	id<BRProvider> _playlistProvider;	// 192 = 0xc0
	id<BRProvider> _dateProvider;	// 196 = 0xc4
	id<BRProvider> _showProvider;	// 200 = 0xc8
	id<BRProvider> _unwatchedProvider;	// 204 = 0xcc
}
@property(assign) long errorNumberForNoContent;	// G=0x3299fdc9; S=0x3299fdb9; converted property
@property(readonly, assign) BOOL forSharedContent;	// G=0x3299faed; converted property
@property(assign) int sortState;	// G=0x3299fd15; S=0x3299fafd; converted property
@property(retain) BRTabControl *tabControl;	// G=0x3299fda9; S=0x3299fd25; converted property
+ (id)seriesControllerForTypes:(id)types;	// 0x3299f415
+ (id)seriesControllerForTypes:(id)types forSeries:(id)series;	// 0x3299f4c5
+ (id)seriesUnwatchedControllerForTypes:(id)types forSeries:(id)series;	// 0x3299f521
+ (id)sharedSeriesControllerForTypes:(id)types;	// 0x3299f46d
- (id)init;	// 0x3299f57d
- (id)initWithTypes:(id)types forSeries:(id)series forSharedContent:(BOOL)sharedContent;	// 0x3299f7d9
- (id)initWithTypes:(id)types forSharedContent:(BOOL)sharedContent;	// 0x3299f5bd
- (void)_buildPlaylistsMenu;	// 0x329a17b5
- (BOOL)_checkProviderOK:(id)ok;	// 0x329a1955
- (id)_currentProviders;	// 0x329a0fa1
- (id)_deepestFocusedControl;	// 0x329a19e1
- (void)_handleContextMenuSelection:(id)selection;	// 0x329a11fd
- (id)_hashForIndex:(long)index;	// 0x329a1565
- (id)_identifierFromTypes:(id)types;	// 0x329a0f15
- (id)_initWithTypes:(id)types forSeries:(id)series forSharedContent:(BOOL)sharedContent forceFilterOutWatched:(BOOL)watched;	// 0x329a0a41
- (void)_itemSelected;	// 0x329a105d
- (id)_playlistProvider;	// 0x329a15a9
- (id)_playlistsParade;	// 0x329a186d
- (long)_rowForHash:(id)hash;	// 0x329a14d1
- (id)_sortOrderFilterPrefKey;	// 0x329a0605
- (id)actionItemAtIndex:(long)index;	// 0x3299ff09
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x3299fe55
- (void)arrayItemSelected:(id)selected;	// 0x329a06c9
- (BOOL)brEventAction:(id)action;	// 0x3299f9d1
- (id)controlForContextMenuPositioning;	// 0x329a05f5
- (id)controlForContextMenuStart;	// 0x329a05e5
- (void)controlWasActivated;	// 0x3299f919
- (void)dealloc;	// 0x3299f7fd
- (int)defaultSortItem;	// 0x329a0681
// converted property getter: - (long)errorNumberForNoContent;	// 0x3299fdc9
// converted property getter: - (BOOL)forSharedContent;	// 0x3299faed
- (BOOL)isValidAfterDataUpdate;	// 0x3299fdd9
- (id)itemForContextMenuFromSelection:(id)selection;	// 0x329a08a9
- (id)keyForSortState:(int)sortState;	// 0x329a0a25
- (void)layoutSubcontrols;	// 0x3299ffd5
- (void)mediaAssetSelected:(id)selected;	// 0x329a07e9
- (BOOL)okToShowNoItemsWithCurrentProvider:(id)currentProvider;	// 0x329a0855
- (id)providerForSortState:(int)sortState;	// 0x329a0685
- (id)providersForContextMenu;	// 0x329a0155
- (void)setDefaultSelection;	// 0x329a0915
// converted property setter: - (void)setErrorNumberForNoContent:(long)noContent;	// 0x3299fdb9
// converted property setter: - (void)setSortState:(int)state;	// 0x3299fafd
// converted property setter: - (void)setTabControl:(id)control;	// 0x3299fd25
- (BOOL)showPlaylists;	// 0x329a0825
- (BOOL)showUnwatched;	// 0x3299fadd
// converted property getter: - (int)sortState;	// 0x3299fd15
// converted property getter: - (id)tabControl;	// 0x3299fda9
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x3299ff65
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x3299ffcd
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x3299ffd1
@end

