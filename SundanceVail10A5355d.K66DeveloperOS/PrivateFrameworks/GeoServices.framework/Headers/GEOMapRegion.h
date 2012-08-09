/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOMapRegion : PBCodable {
	double _eastLng;	// 4 = 0x4
	double _northLat;	// 12 = 0xc
	double _southLat;	// 20 = 0x14
	double _westLng;	// 28 = 0x1c
	NSMutableArray *_vertexs;	// 36 = 0x24
	struct {
		unsigned eastLng : 1;
		unsigned northLat : 1;
		unsigned southLat : 1;
		unsigned westLng : 1;
	} _has;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) double centerLat;	// G=0x3450e8b9; 
@property(readonly, assign, nonatomic) double centerLng;	// G=0x3450e909; 
@property(assign, nonatomic) double eastLng;	// G=0x3451dfa9; S=0x3451cfb5; @synthesize=_eastLng
@property(assign, nonatomic) BOOL hasEastLng;	// G=0x3451d005; S=0x3451cfe9; 
@property(assign, nonatomic) BOOL hasNorthLat;	// G=0x3451cfa1; S=0x3451cf81; 
@property(assign, nonatomic) BOOL hasSouthLat;	// G=0x3451ced1; S=0x3451ceb1; 
@property(assign, nonatomic) BOOL hasWestLng;	// G=0x3451cf39; S=0x3451cf19; 
@property(assign, nonatomic) double northLat;	// G=0x3451df91; S=0x3451cf4d; @synthesize=_northLat
@property(assign, nonatomic) double southLat;	// G=0x3451df61; S=0x3451ce7d; @synthesize=_southLat
@property(readonly, assign, nonatomic) double spanLat;	// G=0x3450e959; 
@property(readonly, assign, nonatomic) double spanLng;	// G=0x3450e9a5; 
@property(retain, nonatomic) NSMutableArray *vertexs;	// G=0x3451dfc1; S=0x3451dfd1; @synthesize=_vertexs
@property(assign, nonatomic) double westLng;	// G=0x3451df79; S=0x3451cee5; @synthesize=_westLng
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x3450e431
- (id)initWithMapRect:(XXStruct_03F4WD)mapRect;	// 0x3450e4e1
- (id)initWithSpannedRegion:(XXStruct_SnKRpD)spannedRegion;	// 0x3450e551
- (void)addVertex:(id)vertex;	// 0x3451d039
// declared property getter: - (double)centerLat;	// 0x3450e8b9
// declared property getter: - (double)centerLng;	// 0x3450e909
- (void)clearVertexs;	// 0x3451d019
- (BOOL)containsCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x3450e9f1
- (void)copyTo:(id)to;	// 0x3451da05
- (void)dealloc;	// 0x3451ce39
- (id)description;	// 0x3451d0e5
- (id)dictionaryRepresentation;	// 0x3451d155
// declared property getter: - (double)eastLng;	// 0x3451dfa9
// declared property getter: - (BOOL)hasEastLng;	// 0x3451d005
// declared property getter: - (BOOL)hasNorthLat;	// 0x3451cfa1
// declared property getter: - (BOOL)hasSouthLat;	// 0x3451ced1
// declared property getter: - (BOOL)hasWestLng;	// 0x3451cf39
- (unsigned)hash;	// 0x3451dd01
- (BOOL)isEqual:(id)equal;	// 0x3451db85
// declared property getter: - (double)northLat;	// 0x3451df91
- (BOOL)readFrom:(id)from;	// 0x3451d7d1
// declared property setter: - (void)setEastLng:(double)lng;	// 0x3451cfb5
// declared property setter: - (void)setHasEastLng:(BOOL)lng;	// 0x3451cfe9
// declared property setter: - (void)setHasNorthLat:(BOOL)lat;	// 0x3451cf81
// declared property setter: - (void)setHasSouthLat:(BOOL)lat;	// 0x3451ceb1
// declared property setter: - (void)setHasWestLng:(BOOL)lng;	// 0x3451cf19
- (void)setMapRect:(XXStruct_03F4WD)rect;	// 0x3450e5c1
// declared property setter: - (void)setNorthLat:(double)lat;	// 0x3451cf4d
// declared property setter: - (void)setSouthLat:(double)lat;	// 0x3451ce7d
- (void)setSpannedRegion:(XXStruct_SnKRpD)region;	// 0x3450e845
// declared property setter: - (void)setVertexs:(id)vertexs;	// 0x3451dfd1
// declared property setter: - (void)setWestLng:(double)lng;	// 0x3451cee5
// declared property getter: - (double)southLat;	// 0x3451df61
// declared property getter: - (double)spanLat;	// 0x3450e959
// declared property getter: - (double)spanLng;	// 0x3450e9a5
- (id)vertexAtIndex:(unsigned)index;	// 0x3451d0c5
// declared property getter: - (id)vertexs;	// 0x3451dfc1
- (unsigned)vertexsCount;	// 0x3451d0a5
// declared property getter: - (double)westLng;	// 0x3451df79
- (void)writeTo:(id)to;	// 0x3451d7dd
@end
