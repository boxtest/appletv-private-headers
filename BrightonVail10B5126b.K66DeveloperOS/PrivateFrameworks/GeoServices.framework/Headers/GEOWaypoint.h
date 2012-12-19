/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, GEOLocation, GEOPlaceSearchRequest;

@interface GEOWaypoint : PBCodable {
	NSMutableArray *_entryPoints;	// 4 = 0x4
	GEOLocation *_location;	// 8 = 0x8
	GEOPlaceSearchRequest *_placeSearchRequest;	// 12 = 0xc
}
@property(retain, nonatomic) NSMutableArray *entryPoints;	// G=0x33fe2f11; S=0x33fe2f21; @synthesize=_entryPoints
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x33fe2435; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x33fe241d; 
@property(retain, nonatomic) GEOLocation *location;	// G=0x33fe2ef1; S=0x33fe2f01; @synthesize=_location
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x33fe2ed1; S=0x33fe2ee1; @synthesize=_placeSearchRequest
- (id)initWithLocation:(id)location;	// 0x33f7a871
- (void)addEntryPoint:(id)point;	// 0x33fe246d
- (void)clearEntryPoints;	// 0x33fe244d
- (void)copyTo:(id)to;	// 0x33fe2ca9
- (void)dealloc;	// 0x33fe23b1
- (id)description;	// 0x33fe2519
- (id)dictionaryRepresentation;	// 0x33fe2589
- (id)entryPointAtIndex:(unsigned)index;	// 0x33fe24f9
// declared property getter: - (id)entryPoints;	// 0x33fe2f11
- (unsigned)entryPointsCount;	// 0x33fe24d9
// declared property getter: - (BOOL)hasLocation;	// 0x33fe2435
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x33fe241d
- (unsigned)hash;	// 0x33fe2e75
- (BOOL)isEqual:(id)equal;	// 0x33fe2da5
// declared property getter: - (id)location;	// 0x33fe2ef1
- (id)locationForWaypoint;	// 0x33f7a8bd
// declared property getter: - (id)placeSearchRequest;	// 0x33fe2ed1
- (BOOL)readFrom:(id)from;	// 0x33fe2a35
// declared property setter: - (void)setEntryPoints:(id)points;	// 0x33fe2f21
// declared property setter: - (void)setLocation:(id)location;	// 0x33fe2f01
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x33fe2ee1
- (void)writeTo:(id)to;	// 0x33fe2a41
@end
