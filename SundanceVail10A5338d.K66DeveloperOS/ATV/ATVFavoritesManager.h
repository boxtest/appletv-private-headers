/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSTimer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVFavoritesManager : BRSingleton {
	NSMutableArray *_favorites;	// 4 = 0x4
	NSTimer *_saveTimer;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *favorites;	// G=0x12736d; converted property
+ (void)setSingleton:(id)singleton;	// 0x126efd
+ (id)singleton;	// 0x126eed
- (id)init;	// 0x126f0d
- (void)_keyValueStoreAccountDidSignOut:(id)_keyValueStoreAccount;	// 0x127c69
- (void)_keyValueStoreIsAvailable:(id)available;	// 0x127c55
- (void)_loadFavorites;	// 0x1273a9
- (void)_musicStoreItemAcquired:(id)acquired;	// 0x127c99
- (unsigned)_nextUserOrderForType:(int)type;	// 0x12a8b5
- (int)_normalizeItemType:(int)type;	// 0x12a8a5
- (id)_orderedFavoritesForType:(int)type orderedBy:(int)by;	// 0x12aabd
- (void)_removeFavorites:(id)favorites;	// 0x127475
- (void)_saveFavorites;	// 0x127d31
- (void)_saveTimerFired:(id)fired;	// 0x127241
- (void)_updateFavoritesFromDictionaryRepresentations:(id)dictionaryRepresentations;	// 0x1276e1
- (void)_updateFromKeyValueStoreIfAvailable:(id)keyValueStoreIfAvailable;	// 0x12767d
- (void)_updateFromKeyValueStoreInternal:(id)keyValueStoreInternal;	// 0x127aa5
- (void)dealloc;	// 0x127045
- (BOOL)favoriteExistsForItemID:(id)itemID;	// 0x127351
- (id)favoriteForItemID:(id)itemID;	// 0x1272cd
// converted property getter: - (id)favorites;	// 0x12736d
- (id)favoritesForType:(int)type;	// 0x12a989
- (id)orderedFavoritesForType:(int)type;	// 0x12ad75
- (id)radioFavorites;	// 0x128f99
- (void)reloadFavorites;	// 0x127f25
- (void)removeFavorite:(id)favorite;	// 0x127261
- (void)removeFavorites:(id)favorites;	// 0x12729d
- (void)saveFavorite:(id)favorite;	// 0x1270c1
- (void)saveFavorites;	// 0x1271d5
- (void)setNeedsSave;	// 0x1271e5
- (void)sortModeChangedFrom:(int)from to:(int)to;	// 0x12adcd
- (void)updateFromKeyValueStore:(id)keyValueStore;	// 0x127399
@end

