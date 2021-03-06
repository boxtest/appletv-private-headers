/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSString, GEOMapRegion, GEOPlaceSearchRequest, GEOLocation;

@interface GEOMapQuery : PBCodable {
	XXStruct_t9EeIA _sessionID;	// 4 = 0x4
	int _clientImgFmt;	// 20 = 0x14
	int _clientImgMaxHeight;	// 24 = 0x18
	int _clientImgMaxWidth;	// 28 = 0x1c
	int _mapCenterX;	// 32 = 0x20
	int _mapCenterY;	// 36 = 0x24
	GEOMapRegion *_mapRegion;	// 40 = 0x28
	int _mapSpanX;	// 44 = 0x2c
	int _mapSpanY;	// 48 = 0x30
	GEOPlaceSearchRequest *_placeSearchRequest;	// 52 = 0x34
	NSString *_query;	// 56 = 0x38
	int _requestType;	// 60 = 0x3c
	int _tilesizeX;	// 64 = 0x40
	int _tilesizeY;	// 68 = 0x44
	GEOLocation *_userLocation;	// 72 = 0x48
	int _zoomlevel;	// 76 = 0x4c
	struct {
		unsigned sessionID : 1;
		unsigned clientImgFmt : 1;
		unsigned clientImgMaxHeight : 1;
		unsigned clientImgMaxWidth : 1;
		unsigned mapCenterX : 1;
		unsigned mapCenterY : 1;
		unsigned mapSpanX : 1;
		unsigned mapSpanY : 1;
		unsigned requestType : 1;
		unsigned tilesizeX : 1;
		unsigned tilesizeY : 1;
		unsigned zoomlevel : 1;
	} _has;	// 80 = 0x50
}
@property(assign, nonatomic) int clientImgFmt;	// G=0x33f79279; S=0x33f77095; @synthesize=_clientImgFmt
@property(assign, nonatomic) int clientImgMaxHeight;	// G=0x33f792b9; S=0x33f77215; @synthesize=_clientImgMaxHeight
@property(assign, nonatomic) int clientImgMaxWidth;	// G=0x33f792a9; S=0x33f771b5; @synthesize=_clientImgMaxWidth
@property(assign, nonatomic) BOOL hasClientImgFmt;	// G=0x33f770e1; S=0x33f770bd; 
@property(assign, nonatomic) BOOL hasClientImgMaxHeight;	// G=0x33f77261; S=0x33f7723d; 
@property(assign, nonatomic) BOOL hasClientImgMaxWidth;	// G=0x33f77201; S=0x33f771dd; 
@property(assign, nonatomic) BOOL hasMapCenterX;	// G=0x33f76f01; S=0x33f76edd; 
@property(assign, nonatomic) BOOL hasMapCenterY;	// G=0x33f76f61; S=0x33f76f3d; 
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x33f77275; 
@property(assign, nonatomic) BOOL hasMapSpanX;	// G=0x33f76fc1; S=0x33f76f9d; 
@property(assign, nonatomic) BOOL hasMapSpanY;	// G=0x33f77021; S=0x33f76ffd; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x33f7731d; 
@property(readonly, assign, nonatomic) BOOL hasQuery;	// G=0x33f76e39; 
@property(assign, nonatomic) BOOL hasRequestType;	// G=0x33f76e9d; S=0x33f76e79; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x33f77309; S=0x33f772e5; 
@property(assign, nonatomic) BOOL hasTilesizeX;	// G=0x33f77141; S=0x33f7711d; 
@property(assign, nonatomic) BOOL hasTilesizeY;	// G=0x33f771a1; S=0x33f7717d; 
@property(readonly, assign, nonatomic) BOOL hasUserLocation;	// G=0x33f7728d; 
@property(assign, nonatomic) BOOL hasZoomlevel;	// G=0x33f77081; S=0x33f7705d; 
@property(assign, nonatomic) int mapCenterX;	// G=0x33f79229; S=0x33f76eb5; @synthesize=_mapCenterX
@property(assign, nonatomic) int mapCenterY;	// G=0x33f79239; S=0x33f76f15; @synthesize=_mapCenterY
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x33f792c9; S=0x33f792d9; @synthesize=_mapRegion
@property(assign, nonatomic) int mapSpanX;	// G=0x33f79249; S=0x33f76f75; @synthesize=_mapSpanX
@property(assign, nonatomic) int mapSpanY;	// G=0x33f79259; S=0x33f76fd5; @synthesize=_mapSpanY
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x33f7932d; S=0x33f7933d; @synthesize=_placeSearchRequest
@property(retain, nonatomic) NSString *query;	// G=0x33f791f9; S=0x33f79209; @synthesize=_query
@property(assign, nonatomic) int requestType;	// G=0x33f79219; S=0x33f76e51; @synthesize=_requestType
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x33f79309; S=0x33f772a5; @synthesize=_sessionID
@property(assign, nonatomic) int tilesizeX;	// G=0x33f79289; S=0x33f770f5; @synthesize=_tilesizeX
@property(assign, nonatomic) int tilesizeY;	// G=0x33f79299; S=0x33f77155; @synthesize=_tilesizeY
@property(retain, nonatomic) GEOLocation *userLocation;	// G=0x33f792e9; S=0x33f792f9; @synthesize=_userLocation
@property(assign, nonatomic) int zoomlevel;	// G=0x33f79269; S=0x33f77035; @synthesize=_zoomlevel
// declared property getter: - (int)clientImgFmt;	// 0x33f79279
// declared property getter: - (int)clientImgMaxHeight;	// 0x33f792b9
// declared property getter: - (int)clientImgMaxWidth;	// 0x33f792a9
- (void)copyTo:(id)to;	// 0x33f78791
- (void)dealloc;	// 0x33f76db9
- (id)description;	// 0x33f77335
- (id)dictionaryRepresentation;	// 0x33f773a5
// declared property getter: - (BOOL)hasClientImgFmt;	// 0x33f770e1
// declared property getter: - (BOOL)hasClientImgMaxHeight;	// 0x33f77261
// declared property getter: - (BOOL)hasClientImgMaxWidth;	// 0x33f77201
// declared property getter: - (BOOL)hasMapCenterX;	// 0x33f76f01
// declared property getter: - (BOOL)hasMapCenterY;	// 0x33f76f61
// declared property getter: - (BOOL)hasMapRegion;	// 0x33f77275
// declared property getter: - (BOOL)hasMapSpanX;	// 0x33f76fc1
// declared property getter: - (BOOL)hasMapSpanY;	// 0x33f77021
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x33f7731d
// declared property getter: - (BOOL)hasQuery;	// 0x33f76e39
// declared property getter: - (BOOL)hasRequestType;	// 0x33f76e9d
// declared property getter: - (BOOL)hasSessionID;	// 0x33f77309
// declared property getter: - (BOOL)hasTilesizeX;	// 0x33f77141
// declared property getter: - (BOOL)hasTilesizeY;	// 0x33f771a1
// declared property getter: - (BOOL)hasUserLocation;	// 0x33f7728d
// declared property getter: - (BOOL)hasZoomlevel;	// 0x33f77081
- (unsigned)hash;	// 0x33f78f45
- (BOOL)isEqual:(id)equal;	// 0x33f78ba1
// declared property getter: - (int)mapCenterX;	// 0x33f79229
// declared property getter: - (int)mapCenterY;	// 0x33f79239
// declared property getter: - (id)mapRegion;	// 0x33f792c9
// declared property getter: - (int)mapSpanX;	// 0x33f79249
// declared property getter: - (int)mapSpanY;	// 0x33f79259
// declared property getter: - (id)placeSearchRequest;	// 0x33f7932d
// declared property getter: - (id)query;	// 0x33f791f9
- (BOOL)readFrom:(id)from;	// 0x33f78329
// declared property getter: - (int)requestType;	// 0x33f79219
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x33f79309
// declared property setter: - (void)setClientImgFmt:(int)fmt;	// 0x33f77095
// declared property setter: - (void)setClientImgMaxHeight:(int)height;	// 0x33f77215
// declared property setter: - (void)setClientImgMaxWidth:(int)width;	// 0x33f771b5
// declared property setter: - (void)setHasClientImgFmt:(BOOL)fmt;	// 0x33f770bd
// declared property setter: - (void)setHasClientImgMaxHeight:(BOOL)height;	// 0x33f7723d
// declared property setter: - (void)setHasClientImgMaxWidth:(BOOL)width;	// 0x33f771dd
// declared property setter: - (void)setHasMapCenterX:(BOOL)x;	// 0x33f76edd
// declared property setter: - (void)setHasMapCenterY:(BOOL)y;	// 0x33f76f3d
// declared property setter: - (void)setHasMapSpanX:(BOOL)x;	// 0x33f76f9d
// declared property setter: - (void)setHasMapSpanY:(BOOL)y;	// 0x33f76ffd
// declared property setter: - (void)setHasRequestType:(BOOL)type;	// 0x33f76e79
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x33f772e5
// declared property setter: - (void)setHasTilesizeX:(BOOL)x;	// 0x33f7711d
// declared property setter: - (void)setHasTilesizeY:(BOOL)y;	// 0x33f7717d
// declared property setter: - (void)setHasZoomlevel:(BOOL)zoomlevel;	// 0x33f7705d
// declared property setter: - (void)setMapCenterX:(int)x;	// 0x33f76eb5
// declared property setter: - (void)setMapCenterY:(int)y;	// 0x33f76f15
// declared property setter: - (void)setMapRegion:(id)region;	// 0x33f792d9
// declared property setter: - (void)setMapSpanX:(int)x;	// 0x33f76f75
// declared property setter: - (void)setMapSpanY:(int)y;	// 0x33f76fd5
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x33f7933d
// declared property setter: - (void)setQuery:(id)query;	// 0x33f79209
// declared property setter: - (void)setRequestType:(int)type;	// 0x33f76e51
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x33f772a5
// declared property setter: - (void)setTilesizeX:(int)x;	// 0x33f770f5
// declared property setter: - (void)setTilesizeY:(int)y;	// 0x33f77155
// declared property setter: - (void)setUserLocation:(id)location;	// 0x33f792f9
// declared property setter: - (void)setZoomlevel:(int)zoomlevel;	// 0x33f77035
// declared property getter: - (int)tilesizeX;	// 0x33f79289
// declared property getter: - (int)tilesizeY;	// 0x33f79299
// declared property getter: - (id)userLocation;	// 0x33f792e9
- (void)writeTo:(id)to;	// 0x33f78335
// declared property getter: - (int)zoomlevel;	// 0x33f79269
@end

