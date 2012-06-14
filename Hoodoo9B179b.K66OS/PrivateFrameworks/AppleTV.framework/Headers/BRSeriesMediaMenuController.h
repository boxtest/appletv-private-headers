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
@property(assign) long errorNumberForNoContent;	// G=0x3025d54d; S=0x3025d53d; converted property
@property(readonly, assign) BOOL forSharedContent;	// G=0x3025d271; converted property
@property(assign) int sortState;	// G=0x3025d499; S=0x3025d281; converted property
@property(retain) BRTabControl *tabControl;	// G=0x3025d52d; S=0x3025d4a9; converted property
+ (id)seriesControllerForTypes:(id)types;	// 0x3025cb99
+ (id)seriesControllerForTypes:(id)types forSeries:(id)series;	// 0x3025cc49
+ (id)seriesUnwatchedControllerForTypes:(id)types forSeries:(id)series;	// 0x3025cca5
+ (id)sharedSeriesControllerForTypes:(id)types;	// 0x3025cbf1
- (id)init;	// 0x3025cd01
- (id)initWithTypes:(id)types forSeries:(id)series forSharedContent:(BOOL)sharedContent;	// 0x3025cf5d
- (id)initWithTypes:(id)types forSharedContent:(BOOL)sharedContent;	// 0x3025cd41
- (void)_buildPlaylistsMenu;	// 0x3025ef39
- (BOOL)_checkProviderOK:(id)ok;	// 0x3025f0d9
- (id)_currentProviders;	// 0x3025e725
- (id)_deepestFocusedControl;	// 0x3025f165
- (void)_handleContextMenuSelection:(id)selection;	// 0x3025e981
- (id)_hashForIndex:(long)index;	// 0x3025ece9
- (id)_identifierFromTypes:(id)types;	// 0x3025e699
- (id)_initWithTypes:(id)types forSeries:(id)series forSharedContent:(BOOL)sharedContent forceFilterOutWatched:(BOOL)watched;	// 0x3025e1c5
- (void)_itemSelected;	// 0x3025e7e1
- (id)_playlistProvider;	// 0x3025ed2d
- (id)_playlistsParade;	// 0x3025eff1
- (long)_rowForHash:(id)hash;	// 0x3025ec55
- (id)_sortOrderFilterPrefKey;	// 0x3025dd89
- (id)actionItemAtIndex:(long)index;	// 0x3025d68d
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x3025d5d9
- (void)arrayItemSelected:(id)selected;	// 0x3025de4d
- (BOOL)brEventAction:(id)action;	// 0x3025d155
- (id)controlForContextMenuPositioning;	// 0x3025dd79
- (id)controlForContextMenuStart;	// 0x3025dd69
- (void)controlWasActivated;	// 0x3025d09d
- (void)dealloc;	// 0x3025cf81
- (int)defaultSortItem;	// 0x3025de05
// converted property getter: - (long)errorNumberForNoContent;	// 0x3025d54d
// converted property getter: - (BOOL)forSharedContent;	// 0x3025d271
- (BOOL)isValidAfterDataUpdate;	// 0x3025d55d
- (id)itemForContextMenuFromSelection:(id)selection;	// 0x3025e02d
- (id)keyForSortState:(int)sortState;	// 0x3025e1a9
- (void)layoutSubcontrols;	// 0x3025d759
- (void)mediaAssetSelected:(id)selected;	// 0x3025df6d
- (BOOL)okToShowNoItemsWithCurrentProvider:(id)currentProvider;	// 0x3025dfd9
- (id)providerForSortState:(int)sortState;	// 0x3025de09
- (id)providersForContextMenu;	// 0x3025d8d9
- (void)setDefaultSelection;	// 0x3025e099
// converted property setter: - (void)setErrorNumberForNoContent:(long)noContent;	// 0x3025d53d
// converted property setter: - (void)setSortState:(int)state;	// 0x3025d281
// converted property setter: - (void)setTabControl:(id)control;	// 0x3025d4a9
- (BOOL)showPlaylists;	// 0x3025dfa9
- (BOOL)showUnwatched;	// 0x3025d261
// converted property getter: - (int)sortState;	// 0x3025d499
// converted property getter: - (id)tabControl;	// 0x3025d52d
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x3025d6e9
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x3025d751
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x3025d755
@end
