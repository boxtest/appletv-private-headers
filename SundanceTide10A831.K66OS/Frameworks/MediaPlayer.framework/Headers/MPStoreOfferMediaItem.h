/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPNondurableMediaItem.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, MPStoreOfferContentRating;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSCoding, NSCopying> {
	NSDictionary *_lookupCollectionPropertyValues;	// 12 = 0xc
	unsigned _indexInCollectionItems;	// 16 = 0x10
	int _preferredStoreOfferVariant;	// 20 = 0x14
	MPStoreOfferContentRating *_contentRating;	// 24 = 0x18
}
@property(readonly, assign) int preferredStoreOfferVariant;	// G=0x36f86ac9; converted property
+ (id)assetLookupKeyForItemMediaProperty:(id)itemMediaProperty;	// 0x36f89c95
+ (BOOL)canFilterByProperty:(id)property;	// 0x36f86629
+ (BOOL)canMergeStoreOfferMediaItemsLocalItems:(id)items;	// 0x36f86ad9
+ (id)collectionLookupKeyForMediaProperty:(id)mediaProperty;	// 0x36f8a001
+ (id)contentRatingForCollectionPropertyValues:(id)collectionPropertyValues itemIndex:(unsigned)index;	// 0x36f8a271
+ (id)fallbackPropertyValues;	// 0x36f85acd
+ (BOOL)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)storeLookupCollectionPropertyValues itemIndex:(unsigned)index;	// 0x36f8a321
+ (id)itemLookupKeyForMediaProperty:(id)mediaProperty;	// 0x36f89dd1
+ (id)localRepresentativeItemPropertyForMediaProperty:(id)mediaProperty;	// 0x36f8a169
+ (id)mediaItemsByMergingStoreOfferMediaItems:(id)items localItems:(id)items2;	// 0x36f86c55
+ (id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)storeLookupCollectionPropertyValues preferredStoreOfferVariant:(int)variant;	// 0x36f85f01
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)storeLookupCollectionPropertyValues itemIndex:(unsigned)index mediaProperty:(id)property;	// 0x36f8a37d
+ (id)mediaitemsByRemovingRestrictedContentFromMediaItems:(id)mediaItems;	// 0x36f87485
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)lookupCollectionPropertyValues itemIndex:(unsigned)index;	// 0x36f8aaf9
+ (id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)itemResponseDictionary;	// 0x36f8ab61
+ (id)offerLookupKeyForItemMediaProperty:(id)itemMediaProperty;	// 0x36f89d41
+ (id)preferredAssetDictionaryInOfferDictionary:(id)offerDictionary;	// 0x36f8ad5d
- (id)initWithCoder:(id)coder;	// 0x36f862e5
- (id)initWithLookupLookupCollectionPropertyValues:(id)lookupLookupCollectionPropertyValues preferredStoreOfferVariant:(int)variant itemID:(id)anId itemIndex:(unsigned)index;	// 0x36f86115
- (id)_lookupOfferDictionaries;	// 0x36f875b5
- (BOOL)_offeredItemAlreadyExists;	// 0x36f86769
- (id)buyOfferForVariant:(int)variant;	// 0x36f86985
- (id)copyWithZone:(NSZone *)zone;	// 0x36f862d5
- (void)dealloc;	// 0x36f86271
- (id)description;	// 0x36f86489
- (void)encodeWithCoder:(id)coder;	// 0x36f863d9
- (unsigned)hash;	// 0x36f865f1
- (BOOL)isDownloadable;	// 0x36f868f9
- (BOOL)isEqual:(id)equal;	// 0x36f86579
- (id)mediaLibrary;	// 0x36f8655d
// converted property getter: - (int)preferredStoreOfferVariant;	// 0x36f86ac9
- (void)setValue:(id)value forProperty:(id)property;	// 0x36f8662d
- (id)valueForProperty:(id)property;	// 0x36f86631
@end
