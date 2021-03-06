/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFavorite.h"
#import "AppleTV-Structs.h"

@class NSString;

@interface ATVInternetRadioFavorite : ATVFavorite {
@private
	NSString *_stationID;	// 16 = 0x10
	NSString *_collectionTitle;	// 20 = 0x14
}
@property(retain) id category;	// G=0x336e33e9; S=0x336e3659; converted property
@property(retain) NSString *stationID;	// G=0x336e33fd; S=0x336e3529; converted property
+ (void)_stationFoundInCategory:(id)category;	// 0x336e3931
+ (id)favoriteFromAsset:(id)asset;	// 0x336e38b9
+ (id)favoriteFromMediaItem:(ATVMediaItemRef)mediaItem;	// 0x336e3875
+ (void)initialize;	// 0x336e3b09
- (id)initWithDictionary:(id)dictionary;	// 0x336e37d5
- (id)_initWithMediaItem:(ATVMediaItemRef)mediaItem;	// 0x336e3b79
- (void)_setItemIdForTitle:(id)title genre:(id)genre;	// 0x336e34e1
// converted property getter: - (id)category;	// 0x336e33e9
- (void)dealloc;	// 0x336e3779
- (id)description;	// 0x336e3691
- (void)encodeWithDictionary:(id)dictionary;	// 0x336e3705
- (BOOL)isPlayingOrPaused;	// 0x336e3c65
- (id)mediaAsset;	// 0x336e3561
- (ATVMediaItemRef)mediaItemRef;	// 0x336e33f9
// converted property setter: - (void)setCategory:(id)category;	// 0x336e3659
// converted property setter: - (void)setStationID:(id)anId;	// 0x336e3529
// converted property getter: - (id)stationID;	// 0x336e33fd
@end

