/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSData, NSMutableArray;

@interface GEODirectionsResponse : PBCodable {
	NSData *_directionsResponseID;	// 4 = 0x4
	int _instructionSignFillColor;	// 8 = 0x8
	int _localDistanceUnits;	// 12 = 0xc
	NSMutableArray *_placeSearchResponses;	// 16 = 0x10
	NSMutableArray *_routes;	// 20 = 0x14
	int _status;	// 24 = 0x18
	BOOL _isNavigable;	// 28 = 0x1c
	BOOL _routeDeviatesFromOriginal;	// 29 = 0x1d
	struct {
		unsigned eastLng : 1;
		unsigned northLat : 1;
		unsigned southLat : 1;
		unsigned westLng : 1;
	} _has;	// 30 = 0x1e
}
@property(retain, nonatomic) NSData *directionsResponseID;	// G=0x3393e8fd; S=0x3393e90d; @synthesize=_directionsResponseID
@property(readonly, assign, nonatomic) BOOL hasDirectionsResponseID;	// G=0x3393d4e5; 
@property(assign, nonatomic) BOOL hasInstructionSignFillColor;	// G=0x3393d5ed; S=0x3393d5d1; 
@property(assign, nonatomic) BOOL hasIsNavigable;	// G=0x3393d56d; S=0x3393d54d; 
@property(assign, nonatomic) BOOL hasLocalDistanceUnits;	// G=0x3393d44d; S=0x3393d42d; 
@property(assign, nonatomic) BOOL hasRouteDeviatesFromOriginal;	// G=0x3393d4d1; S=0x3393d4b1; 
@property(assign, nonatomic) int instructionSignFillColor;	// G=0x3393d581; S=0x3393d5a9; @synthesize=_instructionSignFillColor
@property(assign, nonatomic) BOOL isNavigable;	// G=0x3393d4fd; S=0x3393d525; @synthesize=_isNavigable
@property(assign, nonatomic) int localDistanceUnits;	// G=0x3393e8ed; S=0x3393d405; @synthesize=_localDistanceUnits
@property(retain, nonatomic) NSMutableArray *placeSearchResponses;	// G=0x3393e8cd; S=0x3393e8dd; @synthesize=_placeSearchResponses
@property(assign, nonatomic) BOOL routeDeviatesFromOriginal;	// G=0x3393d461; S=0x3393d489; @synthesize=_routeDeviatesFromOriginal
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x3393e8ad; S=0x3393e8bd; @synthesize=_routes
@property(assign, nonatomic) int status;	// G=0x3393e88d; S=0x3393e89d; @synthesize=_status
- (void)addPlaceSearchResponse:(id)response;	// 0x3393d359
- (void)addRoute:(id)route;	// 0x3393d28d
- (void)clearPlaceSearchResponses;	// 0x3393d339
- (void)clearRoutes;	// 0x3393d26d
- (void)copyTo:(id)to;	// 0x3393e329
- (void)dealloc;	// 0x3393d201
- (id)description;	// 0x3393d601
- (id)dictionaryRepresentation;	// 0x3393d671
// declared property getter: - (id)directionsResponseID;	// 0x3393e8fd
// declared property getter: - (BOOL)hasDirectionsResponseID;	// 0x3393d4e5
// declared property getter: - (BOOL)hasInstructionSignFillColor;	// 0x3393d5ed
// declared property getter: - (BOOL)hasIsNavigable;	// 0x3393d56d
// declared property getter: - (BOOL)hasLocalDistanceUnits;	// 0x3393d44d
// declared property getter: - (BOOL)hasRouteDeviatesFromOriginal;	// 0x3393d4d1
- (unsigned)hash;	// 0x3393e749
// declared property getter: - (int)instructionSignFillColor;	// 0x3393d581
- (BOOL)isEqual:(id)equal;	// 0x3393e579
// declared property getter: - (BOOL)isNavigable;	// 0x3393d4fd
// declared property getter: - (int)localDistanceUnits;	// 0x3393e8ed
- (id)placeSearchResponseAtIndex:(unsigned)index;	// 0x3393d3e5
// declared property getter: - (id)placeSearchResponses;	// 0x3393e8cd
- (unsigned)placeSearchResponsesCount;	// 0x3393d3c5
- (BOOL)readFrom:(id)from;	// 0x3393dfc1
- (id)routeAtIndex:(unsigned)index;	// 0x3393d319
// declared property getter: - (BOOL)routeDeviatesFromOriginal;	// 0x3393d461
// declared property getter: - (id)routes;	// 0x3393e8ad
- (unsigned)routesCount;	// 0x3393d2f9
// declared property setter: - (void)setDirectionsResponseID:(id)anId;	// 0x3393e90d
// declared property setter: - (void)setHasInstructionSignFillColor:(BOOL)color;	// 0x3393d5d1
// declared property setter: - (void)setHasIsNavigable:(BOOL)navigable;	// 0x3393d54d
// declared property setter: - (void)setHasLocalDistanceUnits:(BOOL)units;	// 0x3393d42d
// declared property setter: - (void)setHasRouteDeviatesFromOriginal:(BOOL)original;	// 0x3393d4b1
// declared property setter: - (void)setInstructionSignFillColor:(int)color;	// 0x3393d5a9
// declared property setter: - (void)setIsNavigable:(BOOL)navigable;	// 0x3393d525
// declared property setter: - (void)setLocalDistanceUnits:(int)units;	// 0x3393d405
// declared property setter: - (void)setPlaceSearchResponses:(id)responses;	// 0x3393e8dd
// declared property setter: - (void)setRouteDeviatesFromOriginal:(BOOL)original;	// 0x3393d489
// declared property setter: - (void)setRoutes:(id)routes;	// 0x3393e8bd
// declared property setter: - (void)setStatus:(int)status;	// 0x3393e89d
// declared property getter: - (int)status;	// 0x3393e88d
- (void)writeTo:(id)to;	// 0x3393dfcd
@end

