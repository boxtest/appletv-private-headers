/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class MPMediaItemCollection, NSSet, MPMediaLibrary, NSArray, MPMediaQuerySectionInfo;

@interface MPMediaQuery : NSObject <NSCoding, NSCopying> {
	MPMediaQueryInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) unsigned _countOfCollections;	// G=0x33708af9; 
@property(readonly, assign, nonatomic) unsigned _countOfItems;	// G=0x33708ad5; 
@property(readonly, assign, nonatomic) BOOL _hasCollections;	// G=0x33708aa9; 
@property(readonly, assign, nonatomic) BOOL _hasItems;	// G=0x33708a7d; 
@property(assign, nonatomic) MPMediaQueryInternal _internal;	// G=0x33709af5; S=0x33709b1d; @synthesize
@property(readonly, assign, nonatomic) MPMediaItemCollection *collectionByJoiningCollections;	// G=0x337521a9; 
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;	// G=0x337089e1; S=0x33708a29; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *collectionSectionInfo;	// G=0x33708b45; 
@property(readonly, assign, nonatomic) NSArray *collectionSections;	// G=0x337090b1; 
@property(readonly, assign, nonatomic) NSArray *collections;	// G=0x33708369; 
@property(retain) id criteria;	// G=0x33709a9d; S=0x33709ab1; converted property
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;	// G=0x33708cad; 
@property(retain, nonatomic) NSSet *filterPredicates;	// G=0x33708065; S=0x337080ad; 
@property(assign, nonatomic) int groupingType;	// G=0x337083a1; S=0x337083c5; 
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;	// G=0x33708969; S=0x3370898d; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *itemSectionInfo;	// G=0x33708b1d; 
@property(readonly, assign, nonatomic) NSArray *itemSections;	// G=0x33709089; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x33708355; 
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary;	// G=0x33708215; S=0x33708225; 
@property(copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;	// G=0x33708bc1; S=0x33708b6d; 
@property(assign, nonatomic) BOOL sortItems;	// G=0x33708c39; S=0x33708c09; 
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;	// G=0x33708fe9; 
@property(assign, nonatomic) BOOL useSections;	// G=0x33708c89; S=0x33708c65; 
@property(readonly, assign, nonatomic) BOOL willGroupEntities;	// G=0x33709015; 
+ (id)ITunesUAudioQuery;	// 0x33707b61
+ (id)activeGeniusPlaylist;	// 0x33751af5
+ (id)albumsQuery;	// 0x337077bd
+ (id)artistsQuery;	// 0x3370788d
+ (id)audibleAudiobooksQuery;	// 0x33707e61
+ (id)audiobooksQuery;	// 0x33707da9
+ (id)compilationsQuery;	// 0x33707edd
+ (id)composersQuery;	// 0x33707fad
+ (id)geniusMixesQuery;	// 0x33708869
+ (id)genresQuery;	// 0x33708009
+ (void)initialize;	// 0x33706bc9
+ (id)movieRentalsQuery;	// 0x33708735
+ (id)moviesQuery;	// 0x3370867d
+ (id)musicVideosQuery;	// 0x3370850d
+ (id)playlistsQuery;	// 0x33707a35
+ (id)podcastsQuery;	// 0x33707a91
+ (void)setFilteringDisabled:(BOOL)disabled;	// 0x33708415
+ (id)songsQuery;	// 0x3370795d
+ (id)tvShowsQuery;	// 0x337085c5
+ (id)videoITunesUAudioQuery;	// 0x33707c85
+ (id)videoPodcastsQuery;	// 0x337087b1
+ (id)videosQuery;	// 0x33708455
- (id)init;	// 0x33706c19
- (id)initWithCoder:(id)coder;	// 0x337071b5
- (id)initWithCriteria:(id)criteria library:(id)library;	// 0x33706c2d
- (id)initWithEntities:(id)entities entityType:(int)type;	// 0x33706da9
- (id)initWithFilterPredicates:(id)filterPredicates;	// 0x33706d35
- (id)initWithFilterPredicatesInternal:(id)filterPredicatesInternal;	// 0x33706ca1
// declared property getter: - (unsigned)_countOfCollections;	// 0x33708af9
// declared property getter: - (unsigned)_countOfItems;	// 0x33708ad5
- (void)_enumerateCollectionsUsingBlock:(id)block;	// 0x33709735
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x337095a5
// declared property getter: - (BOOL)_hasCollections;	// 0x33708aa9
// declared property getter: - (BOOL)_hasItems;	// 0x33708a7d
// declared property getter: - (MPMediaQueryInternal)_internal;	// 0x33709af5
- (BOOL)_isFilteringDisabled;	// 0x33709559
- (id)_itemsImmediately:(BOOL)immediately;	// 0x33708269
// declared property getter: - (id)_orderingProperties;	// 0x33708bc1
- (id)_sanitizedQuery;	// 0x337090d9
// declared property setter: - (void)_setOrderingProperties:(id)properties;	// 0x33708b6d
- (BOOL)_updatePredicateForProperty:(id)property withPropertyPredicate:(id)propertyPredicate;	// 0x33751f95
- (id)_valueForAggregateFunction:(id)aggregateFunction onProperty:(id)property entityType:(int)type;	// 0x3370914d
- (void)addFilterPredicate:(id)predicate;	// 0x33708101
// declared property getter: - (id)collectionByJoiningCollections;	// 0x337521a9
// declared property getter: - (id)collectionPropertiesToFetch;	// 0x337089e1
// declared property getter: - (id)collectionSectionInfo;	// 0x33708b45
// declared property getter: - (id)collectionSections;	// 0x337090b1
// declared property getter: - (id)collections;	// 0x33708369
- (id)copyByRemovingStaticEntities;	// 0x33707765
- (id)copyWithZone:(NSZone *)zone;	// 0x337075e9
// converted property getter: - (id)criteria;	// 0x33709a9d
- (void)dealloc;	// 0x33706df9
- (id)description;	// 0x33706e51
- (void)encodeWithCoder:(id)coder;	// 0x33707421
// declared property getter: - (BOOL)excludesEntitiesWithBlankNames;	// 0x33708cad
// declared property getter: - (id)filterPredicates;	// 0x33708065
- (unsigned)groupingThreshold;	// 0x33709011
// declared property getter: - (int)groupingType;	// 0x337083a1
- (unsigned)hash;	// 0x33707175
- (BOOL)isEqual:(id)equal;	// 0x337070b9
// declared property getter: - (id)itemPropertiesToFetch;	// 0x33708969
// declared property getter: - (id)itemSectionInfo;	// 0x33708b1d
// declared property getter: - (id)itemSections;	// 0x33709089
// declared property getter: - (id)items;	// 0x33708355
// declared property getter: - (id)mediaLibrary;	// 0x33708215
- (id)predicateForProperty:(id)property;	// 0x33751ca1
- (void)removeFilterPredicate:(id)predicate;	// 0x33708189
- (void)removePredicatesForProperty:(id)property;	// 0x33751dc9
// declared property setter: - (void)setCollectionPropertiesToFetch:(id)fetch;	// 0x33708a29
// converted property setter: - (void)setCriteria:(id)criteria;	// 0x33709ab1
- (void)setFilterPredicate:(id)predicate forProperty:(id)property;	// 0x33751f05
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x337080ad
- (void)setFilterPropertyPredicate:(id)predicate;	// 0x33751f61
// declared property setter: - (void)setGroupingType:(int)type;	// 0x337083c5
// declared property setter: - (void)setItemPropertiesToFetch:(id)fetch;	// 0x3370898d
// declared property setter: - (void)setMediaLibrary:(id)library;	// 0x33708225
// declared property setter: - (void)setSortItems:(BOOL)items;	// 0x33708c09
- (void)setStaticEntities:(id)entities entityType:(int)type;	// 0x33709a55
// declared property setter: - (void)setUseSections:(BOOL)sections;	// 0x33708c65
// declared property setter: - (void)set_internal:(MPMediaQueryInternal)internal;	// 0x33709b1d
// declared property getter: - (BOOL)sortItems;	// 0x33708c39
// declared property getter: - (BOOL)specifiesPlaylistItems;	// 0x33708fe9
- (BOOL)updateFilterPredicatesToHideUnreachableWhenOfflineCloudContent:(BOOL)hideUnreachableWhenOfflineCloudContent;	// 0x33752015
// declared property getter: - (BOOL)useSections;	// 0x33708c89
- (id)valueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property;	// 0x33709535
- (id)valueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property;	// 0x33709511
// declared property getter: - (BOOL)willGroupEntities;	// 0x33709015
@end

