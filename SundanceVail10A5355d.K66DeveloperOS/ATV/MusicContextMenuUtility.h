/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMusicContextMenuUtility.h"


__attribute__((visibility("hidden")))
@interface MusicContextMenuUtility : BRMusicContextMenuUtility {
}
+ (void)initialize;	// 0x1aa5c5
- (BOOL)_favoriteExists:(id)exists;	// 0x1ab99d
- (void)_handleAddRadioStationToFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x1ac209
- (void)_handleAddToOnTheGoForObject:(id)object sender:(id)sender context:(id)context;	// 0x1abd0d
- (void)_handleAirTunesSetSpeakerForObject:(id)object sender:(id)sender context:(id)context;	// 0x1abd6d
- (void)_handleAirTunesSettingsForObject:(id)object sender:(id)sender context:(id)context;	// 0x1abe25
- (void)_handleBrowseAlbumForObject:(id)object sender:(id)sender context:(id)context;	// 0x1ac059
- (void)_handleBrowseArtistForObject:(id)object sender:(id)sender context:(id)context;	// 0x1abea9
- (void)_handleRemoveRadioStationFromFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x1ac2c1
- (void)_handleStartGeniusForObject:(id)object sender:(id)sender context:(id)context;	// 0x1abb4d
- (id)_providerForCollection:(id)collection target:(id)target selector:(SEL)selector;	// 0x1ab1e1
- (id)_providerForFavorite:(id)favorite target:(id)target selector:(SEL)selector;	// 0x1ab341
- (id)_providerForMediaItem:(id)mediaItem target:(id)target selector:(SEL)selector;	// 0x1aaaf5
- (id)_providerForPodcast:(id)podcast target:(id)target selector:(SEL)selector;	// 0x1aa9e1
- (id)_providerForSpeakersWithHandler:(id)handler;	// 0x1ab475
- (BOOL)_shouldShowAddToFavoritesItem:(id)favoritesItem;	// 0x1ab941
- (BOOL)_shouldShowBrowseAlbumItem:(id)item;	// 0x1ab8d1
- (BOOL)_shouldShowBrowseArtistItem:(id)item;	// 0x1ab861
- (BOOL)_shouldShowGeniusItem:(id)item;	// 0x1ab739
- (BOOL)_shouldShowOnTheGoItem:(id)item;	// 0x1ab7c1
- (BOOL)_shouldShowRemoveFromFavoritesItem:(id)favoritesItem;	// 0x1abaf5
- (BOOL)_shouldShowSpeakersItem:(id)item;	// 0x1aba49
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x1aa781
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x1aa8c1
@end

