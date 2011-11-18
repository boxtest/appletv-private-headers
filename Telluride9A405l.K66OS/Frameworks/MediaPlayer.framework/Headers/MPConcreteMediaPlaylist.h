/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaPlaylist.h"

@class MPMediaQuery, NSMutableDictionary;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist {
@private
	NSMutableDictionary *_properties;	// 4 = 0x4
	MPMediaQuery *_itemsQuery;	// 8 = 0x8
	void *_clusterPlaylist;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x33c308ed
- (id)initWithProperties:(id)properties itemsQuery:(id)query;	// 0x33c306dd
- (void)addItem:(id)item completionBlock:(id)block;	// 0x33c310d5
- (void)addItems:(id)items completionBlock:(id)block;	// 0x33c31209
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)seedItems error:(id *)error;	// 0x33c31835
- (id)copyWithZone:(NSZone *)zone;	// 0x33c30891
- (unsigned)count;	// 0x33c30be1
- (void)dealloc;	// 0x33c30755
- (void)encodeWithCoder:(id)coder;	// 0x33c309bd
- (void)endGeneratingGeniusClusterItems;	// 0x33c31a79
- (BOOL)existsInLibrary;	// 0x33c30a2d
- (id)geniusClusterItemsWithCount:(unsigned)count error:(id *)error;	// 0x33c31975
- (unsigned)hash;	// 0x33c30871
- (BOOL)isEqual:(id)equal;	// 0x33c307f5
- (id)items;	// 0x33c30b79
- (int)mediaTypes;	// 0x33c30c09
- (void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 completionBlock:(id)block;	// 0x33c31631
- (void)populateWithSeedItem:(id)seedItem completionBlock:(id)block;	// 0x33c316f5
- (void)removeAllItems;	// 0x33c31595
- (void)removeItems:(id)items atFilteredIndexes:(id)filteredIndexes completionBlock:(id)block;	// 0x33c313d1
- (id)representativeItem;	// 0x33c30b99
- (void)setValue:(id)value forProperty:(id)property;	// 0x33c30a7d
- (id)valueForProperty:(id)property;	// 0x33c30cd9
@end

