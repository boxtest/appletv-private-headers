/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOMapRegion, NSMutableArray;

@interface GEOPlaceSearchResponse : PBCodable {
	int _localSearchProviderID;	// 4 = 0x4
	GEOMapRegion *_mapRegion;	// 8 = 0x8
	NSMutableArray *_placeResults;	// 12 = 0xc
	NSMutableArray *_searchs;	// 16 = 0x10
	int _status;	// 20 = 0x14
	int _statusCodeInfo;	// 24 = 0x18
	BOOL _abTestResponse;	// 28 = 0x1c
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 29 = 0x1d
}
@property(assign, nonatomic) BOOL abTestResponse;	// G=0x33f9b899; S=0x33f9afb9; @synthesize=_abTestResponse
@property(assign, nonatomic) BOOL hasAbTestResponse;	// G=0x33f9b001; S=0x33f9afe1; 
@property(assign, nonatomic) BOOL hasLocalSearchProviderID;	// G=0x33f9afa5; S=0x33f9af89; 
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x33f9ae7d; 
@property(assign, nonatomic) BOOL hasStatusCodeInfo;	// G=0x33f9b05d; S=0x33f9b03d; 
@property(assign, nonatomic) int localSearchProviderID;	// G=0x33f9b889; S=0x33f9af61; @synthesize=_localSearchProviderID
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x33f6f075; S=0x33f6eae9; @synthesize=_mapRegion
@property(retain, nonatomic) NSMutableArray *placeResults;	// G=0x33f6eb55; S=0x33f6e92d; @synthesize=_placeResults
@property(retain, nonatomic) NSMutableArray *searchs;	// G=0x33f6e625; S=0x33f6eaf9; @synthesize=_searchs
@property(assign, nonatomic) int status;	// G=0x33f6e615; S=0x33f9b879; @synthesize=_status
@property(assign, nonatomic) int statusCodeInfo;	// G=0x33f9b8a9; S=0x33f9b015; @synthesize=_statusCodeInfo
// declared property getter: - (BOOL)abTestResponse;	// 0x33f9b899
- (void)addPlaceResult:(id)result;	// 0x33f68d95
- (void)addSearch:(id)search;	// 0x33f9aeb5
- (void)clearPlaceResults;	// 0x33f9ae5d
- (void)clearSearchs;	// 0x33f9ae95
- (void)copyTo:(id)to;	// 0x33f9b3d5
- (void)dealloc;	// 0x33f6e8c1
- (id)description;	// 0x33f9b071
- (id)dictionaryRepresentation;	// 0x33f9b0e1
// declared property getter: - (BOOL)hasAbTestResponse;	// 0x33f9b001
// declared property getter: - (BOOL)hasLocalSearchProviderID;	// 0x33f9afa5
// declared property getter: - (BOOL)hasMapRegion;	// 0x33f9ae7d
// declared property getter: - (BOOL)hasStatusCodeInfo;	// 0x33f9b05d
- (unsigned)hash;	// 0x33f9b769
- (BOOL)isEqual:(id)equal;	// 0x33f9b5e5
// declared property getter: - (int)localSearchProviderID;	// 0x33f9b889
// declared property getter: - (id)mapRegion;	// 0x33f6f075
- (id)placeResultAtIndex:(unsigned)index;	// 0x33f6f0a5
// declared property getter: - (id)placeResults;	// 0x33f6eb55
- (unsigned)placeResultsCount;	// 0x33f6f085
- (BOOL)readFrom:(id)from;	// 0x33f68891
- (id)searchAtIndex:(unsigned)index;	// 0x33f9af41
// declared property getter: - (id)searchs;	// 0x33f6e625
- (unsigned)searchsCount;	// 0x33f9af21
// declared property setter: - (void)setAbTestResponse:(BOOL)response;	// 0x33f9afb9
// declared property setter: - (void)setHasAbTestResponse:(BOOL)response;	// 0x33f9afe1
// declared property setter: - (void)setHasLocalSearchProviderID:(BOOL)anId;	// 0x33f9af89
// declared property setter: - (void)setHasStatusCodeInfo:(BOOL)info;	// 0x33f9b03d
// declared property setter: - (void)setLocalSearchProviderID:(int)anId;	// 0x33f9af61
// declared property setter: - (void)setMapRegion:(id)region;	// 0x33f6eae9
// declared property setter: - (void)setPlaceResults:(id)results;	// 0x33f6e92d
// declared property setter: - (void)setSearchs:(id)searchs;	// 0x33f6eaf9
// declared property setter: - (void)setStatus:(int)status;	// 0x33f9b879
// declared property setter: - (void)setStatusCodeInfo:(int)info;	// 0x33f9b015
// declared property getter: - (int)status;	// 0x33f6e615
// declared property getter: - (int)statusCodeInfo;	// 0x33f9b8a9
- (void)writeTo:(id)to;	// 0x33f6f0f9
@end

