/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, GEOMapRegion;

@interface GEOPlaceSearchResponse : PBCodable {
	int _status;	// 4 = 0x4
	NSMutableArray *_placeResults;	// 8 = 0x8
	GEOMapRegion *_mapRegion;	// 12 = 0xc
	NSMutableArray *_searchs;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x3144dff9; 
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x3144e855; S=0x3144e865; @synthesize=_mapRegion
@property(retain, nonatomic) NSMutableArray *placeResults;	// G=0x3144e821; S=0x3144e831; @synthesize=_placeResults
@property(retain, nonatomic) NSMutableArray *searchs;	// G=0x3144e889; S=0x3144e899; @synthesize=_searchs
@property(assign, nonatomic) int status;	// G=0x3144e801; S=0x3144e811; @synthesize=_status
- (void)addPlaceResult:(id)result;	// 0x3144df55
- (void)addSearch:(id)search;	// 0x3144e011
- (void)dealloc;	// 0x3144dee9
- (id)description;	// 0x3144e0b5
- (id)dictionaryRepresentation;	// 0x3144e125
// declared property getter: - (BOOL)hasMapRegion;	// 0x3144dff9
// declared property getter: - (id)mapRegion;	// 0x3144e855
- (id)placeResultAtIndex:(unsigned)index;	// 0x3144dfd9
// declared property getter: - (id)placeResults;	// 0x3144e821
- (unsigned)placeResultsCount;	// 0x3144dfb9
- (BOOL)readFrom:(id)from;	// 0x3144e345
- (id)searchAtIndex:(unsigned)index;	// 0x3144e095
// declared property getter: - (id)searchs;	// 0x3144e889
- (unsigned)searchsCount;	// 0x3144e075
// declared property setter: - (void)setMapRegion:(id)region;	// 0x3144e865
// declared property setter: - (void)setPlaceResults:(id)results;	// 0x3144e831
// declared property setter: - (void)setSearchs:(id)searchs;	// 0x3144e899
// declared property setter: - (void)setStatus:(int)status;	// 0x3144e811
// declared property getter: - (int)status;	// 0x3144e801
- (void)writeTo:(id)to;	// 0x3144e5a5
@end

