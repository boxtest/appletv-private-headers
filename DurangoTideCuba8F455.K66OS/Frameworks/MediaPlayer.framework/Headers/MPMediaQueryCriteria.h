/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSMutableSet, NSSet;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
@private
	NSMutableSet *_filterPredicates;	// 4 = 0x4
	int _entityOrder;	// 8 = 0x8
	int _groupingType;	// 12 = 0xc
	NSSet *_itemPropertiesToFetch;	// 16 = 0x10
	NSSet *_collectionPropertiesToFetch;	// 20 = 0x14
}
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;	// G=0x33656561; S=0x336574bd; @synthesize=_collectionPropertiesToFetch
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;	// G=0x3365731d; 
@property(copy, nonatomic) NSSet *filterPredicates;	// G=0x33656531; S=0x336567dd; @synthesize=_filterPredicates
@property(assign, nonatomic) int groupingType;	// G=0x33656541; S=0x33656551; @synthesize=_groupingType
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;	// G=0x33656521; S=0x336574e9; @synthesize=_itemPropertiesToFetch
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;	// G=0x33656d0d; 
- (id)init;	// 0x33656571
- (id)ML3CollectionsQueryInLibrary:(id)library;	// 0x33649221
- (id)ML3ItemsQueryInLibrary:(id)library;	// 0x33648b95
- (id)ML3ItemsQueryInLibrary:(id)library orderingProperties:(id)properties nameBlankProperty:(id)property;	// 0x33648e59
- (id)ML3OrderingPropertiesForGroupingType:(int)groupingType;	// 0x33648bc1
- (void)addFilterPredicate:(id)predicate;	// 0x336568d5
// declared property getter: - (id)collectionPropertiesToFetch;	// 0x33656561
- (id)copyWithZone:(NSZone *)zone;	// 0x33656a95
- (void)dealloc;	// 0x33656c29
- (id)description;	// 0x33656c95
// declared property getter: - (BOOL)excludesEntitiesWithBlankNames;	// 0x3365731d
// declared property getter: - (id)filterPredicates;	// 0x33656531
// declared property getter: - (int)groupingType;	// 0x33656541
- (unsigned)hash;	// 0x33657131
- (BOOL)isEqual:(id)equal;	// 0x33656b4d
// declared property getter: - (id)itemPropertiesToFetch;	// 0x33656521
- (id)predicateForProperty:(id)property;	// 0x33657019
- (void)removeFilterPredicate:(id)predicate;	// 0x33656885
- (void)removePredicatesForProperty:(id)property;	// 0x33656e31
- (id)sanitizedQueryCriteria;	// 0x336565ad
// declared property setter: - (void)setCollectionPropertiesToFetch:(id)fetch;	// 0x336574bd
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x336567dd
// declared property setter: - (void)setGroupingType:(int)type;	// 0x33656551
// declared property setter: - (void)setItemPropertiesToFetch:(id)fetch;	// 0x336574e9
// declared property getter: - (BOOL)specifiesPlaylistItems;	// 0x33656d0d
@end
