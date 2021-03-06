/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaPlaylist.h"

@class NSMutableDictionary, MPMediaQuery, NSArray;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist {
@private
	NSMutableDictionary *_properties;	// 4 = 0x4
	MPMediaQuery *_itemsQuery;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
	void *_clusterPlaylist;	// 16 = 0x10
	BOOL _ignoreNextLibraryChange;	// 20 = 0x14
}
@property(readonly, retain) NSArray *items;	// G=0x31de3a51; converted property
- (id)initWithCoder:(id)coder;	// 0x31de5159
- (id)initWithProperties:(id)properties itemsQuery:(id)query;	// 0x31de52c5
- (void)_mediaLibraryDidChangeNotification:(id)_mediaLibrary;	// 0x31de3cc5
- (void)addItem:(id)item completionBlock:(id)block;	// 0x31de367d
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)seedItems error:(id *)error;	// 0x31de7175
- (id)copyWithZone:(NSZone *)zone;	// 0x31de3c75
- (unsigned)count;	// 0x31de39f5
- (void)dealloc;	// 0x31de5221
- (void)encodeWithCoder:(id)coder;	// 0x31de3c11
- (void)endGeneratingGeniusClusterItems;	// 0x31de2fbd
- (BOOL)existsInLibrary;	// 0x31de3bc5
- (id)geniusClusterItemsWithCount:(unsigned)count error:(id *)error;	// 0x31de7089
- (unsigned)hash;	// 0x31de3d3d
- (void)insertItem:(id)item atIndex:(unsigned)index completionBlock:(id)block;	// 0x31de3639
- (void)insertItems:(id)items atIndex:(unsigned)index completionBlock:(id)block;	// 0x31de7e35
- (BOOL)isEqual:(id)equal;	// 0x31de3d5d
// converted property getter: - (id)items;	// 0x31de3a51
- (int)mediaTypes;	// 0x31de6391
- (void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 completionBlock:(id)block;	// 0x31de3115
- (void)populateWithSeedItem:(id)seedItem completionBlock:(id)block;	// 0x31de3015
- (void)removeAllItems;	// 0x31de3389
- (void)removeItemAtIndex:(unsigned)index completionBlock:(id)block;	// 0x31de3455
- (id)representativeItem;	// 0x31de3a19
- (void)setValue:(id)value forProperty:(id)property;	// 0x31de3ae5
- (id)valueForProperty:(id)property;	// 0x31de386d
@end

