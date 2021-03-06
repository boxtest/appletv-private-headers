/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFavorite.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVInternetRadioFavorite : ATVFavorite {
	NSString *_stationID;	// 16 = 0x10
	NSString *_collectionTitle;	// 20 = 0x14
}
@property(retain) id category;	// G=0x14f17d; S=0x14f18d; converted property
@property(retain) NSString *stationID;	// G=0x14f205; S=0x14f1c9; converted property
+ (void)_stationFoundInCategory:(id)category;	// 0x14ecbd
+ (id)favoriteFromAsset:(id)asset;	// 0x14eeb1
+ (id)favoriteFromMediaItem:(id)mediaItem;	// 0x14ef3d
+ (void)initialize;	// 0x14ec45
- (id)initWithDictionary:(id)dictionary;	// 0x14ef89
- (id)_initWithMediaItem:(id)mediaItem;	// 0x14f371
- (void)_setItemIdForTitle:(id)title genre:(id)genre;	// 0x14f471
// converted property getter: - (id)category;	// 0x14f17d
- (void)dealloc;	// 0x14f02d
- (id)description;	// 0x14f10d
- (void)encodeWithDictionary:(id)dictionary;	// 0x14f091
- (BOOL)isPlayingOrPaused;	// 0x14f215
// converted property setter: - (void)setCategory:(id)category;	// 0x14f18d
// converted property setter: - (void)setStationID:(id)anId;	// 0x14f1c9
// converted property getter: - (id)stationID;	// 0x14f205
@end

