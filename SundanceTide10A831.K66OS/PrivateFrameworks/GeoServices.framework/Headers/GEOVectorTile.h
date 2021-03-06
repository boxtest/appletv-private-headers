/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSMutableArray, NSMutableData;

@interface GEOVectorTile : NSObject {
	GEOTileKey _key;	// 4 = 0x4
	XXStruct_IJc5WD *_lines;	// 20 = 0x14
	unsigned _linesCount;	// 24 = 0x18
	unsigned _linesVertexCount;	// 28 = 0x1c
	GEOTileKey **_namedRoads;	// 32 = 0x20
	unsigned _namedRoadsCount;	// 36 = 0x24
	unsigned _namedRoadsVertexCount;	// 40 = 0x28
	GEOTileKey **_namedPoints;	// 44 = 0x2c
	unsigned _namedPointsCount;	// 48 = 0x30
	GEOTileKey **_namedPolygons;	// 52 = 0x34
	unsigned _namedPolygonsCount;	// 56 = 0x38
	XXStruct_IJc5WD *_coastlines;	// 60 = 0x3c
	unsigned _coastlinesCount;	// 64 = 0x40
	XXStruct_5hFgMD *_polygons;	// 68 = 0x44
	unsigned _polygonsCount;	// 72 = 0x48
	unsigned _polygonsVertexCount;	// 76 = 0x4c
	XXStruct_4WiXgC *_polygonLabelPositions;	// 80 = 0x50
	unsigned _polygonLabelPositionsCount;	// 84 = 0x54
	XXStruct_nzTP9A *_buildingFootprints;	// 88 = 0x58
	NSMutableData *_extrusionHeightsPool;	// 92 = 0x5c
	unsigned _buildingFootprintsCount;	// 96 = 0x60
	XXStruct_5JvWtA *_threeDBuildings;	// 100 = 0x64
	unsigned _threeDBuildingsCount;	// 104 = 0x68
	XXStruct_wFsE0D *_pois;	// 108 = 0x6c
	unsigned _poisCount;	// 112 = 0x70
	Angle *_overpasses;	// 116 = 0x74
	XXStruct_qFPbxC *_junctions;	// 120 = 0x78
	unsigned _junctionsCount;	// 124 = 0x7c
	BOOL _hasComputedJunctions;	// 128 = 0x80
	XXStruct_qFPbxC *_laneConnections;	// 132 = 0x84
	unsigned _laneConnectionsCount;	// 136 = 0x88
	XXStruct_qFPbxC *_pointsOnRoad;	// 140 = 0x8c
	unsigned _pointsOnRoadCount;	// 144 = 0x90
	GEOTileKey **_sortedPointsOnRoad;	// 148 = 0x94
	XXStruct_uYp3tB *_laneGeometry;	// 152 = 0x98
	XXStruct__qQs$B *_curveLineVertices;	// 156 = 0x9c
	unsigned *_curveToLineMapping;	// 160 = 0xa0
	XXStruct__qQs$B *_lineVertices;	// 164 = 0xa4
	XXStruct__qQs$B *_polygonVertices;	// 168 = 0xa8
	XXStruct__qQs$B *_coastlineVertices;	// 172 = 0xac
	XXStruct__qQs$B *_footprintVertices;	// 176 = 0xb0
	NSData *_labelPool;	// 180 = 0xb4
	XXStruct_xKvFHA *_labelPoolLanguages;	// 184 = 0xb8
	unsigned _labelPoolLanguagesLength;	// 188 = 0xbc
	NSMutableData *_localizedLabelPool;	// 192 = 0xc0
	char *_localizedLabelsLanguage;	// 196 = 0xc4
	XXStruct_BdOxqA *_labelIndex;	// 200 = 0xc8
	unsigned _labelIndexCount;	// 204 = 0xcc
	GEOFeatureShield *_shieldIndex;	// 208 = 0xd0
	unsigned _shieldIndexCount;	// 212 = 0xd4
	XXStruct_fJSKzC *_localizationTable;	// 216 = 0xd8
	unsigned _localizationTableCount;	// 220 = 0xdc
	NSMutableArray *_uniqueAttributes;	// 224 = 0xe0
	XXStruct_Jn2zBA *_lineCharacteristicPoints;	// 228 = 0xe4
	unsigned _lineCharacteristicPointCount;	// 232 = 0xe8
	XXStruct_Jn2zBA *_polygonCharacteristicPoints;	// 236 = 0xec
	unsigned _polygonCharacteristicPointCount;	// 240 = 0xf0
	XXStruct_Jn2zBA *_coastlineCharacteristicPoints;	// 244 = 0xf4
	unsigned _coastlineCharacteristicPointCount;	// 248 = 0xf8
}
@property(readonly, assign, nonatomic) XXStruct_nzTP9A *buildingFootprints;	// G=0x302b6de5; @synthesize=_buildingFootprints
@property(readonly, assign, nonatomic) unsigned buildingFootprintsCount;	// G=0x302b6df5; @synthesize=_buildingFootprintsCount
@property(readonly, assign, nonatomic) unsigned coastlineCharacteristicPointCount;	// G=0x302b6ed5; @synthesize=_coastlineCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *coastlineCharacteristicPoints;	// G=0x302b6ec5; @synthesize=_coastlineCharacteristicPoints
@property(readonly, assign, nonatomic) XXStruct_IJc5WD *coastlines;	// G=0x30238c8d; @synthesize=_coastlines
@property(readonly, assign, nonatomic) unsigned coastlinesCount;	// G=0x30238c7d; @synthesize=_coastlinesCount
@property(readonly, assign, nonatomic) XXStruct__qQs$B *curveLineVertices;	// G=0x302b680d; 
@property(readonly, assign, nonatomic) BOOL dataIncludesConnectivity;	// G=0x302b6dc5; 
@property(readonly, retain) NSMutableData *extrusionHeightsPool;	// G=0x302b681d; converted property
@property(readonly, assign, nonatomic) BOOL hasComputedJunctions;	// G=0x302b6e65; @synthesize=_hasComputedJunctions
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *junctions;	// G=0x302388a5; @synthesize=_junctions
@property(readonly, assign, nonatomic) unsigned junctionsCount;	// G=0x302b6e55; @synthesize=_junctionsCount
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *laneConnections;	// G=0x302b6e85; @synthesize=_laneConnections
@property(readonly, assign, nonatomic) unsigned laneConnectionsCount;	// G=0x302b6e95; @synthesize=_laneConnectionsCount
@property(readonly, assign, nonatomic) unsigned lineCharacteristicPointCount;	// G=0x30238a1d; @synthesize=_lineCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *lineCharacteristicPoints;	// G=0x30238a2d; @synthesize=_lineCharacteristicPoints
@property(readonly, assign, nonatomic) XXStruct__qQs$B *lineVertices;	// G=0x302b67fd; 
@property(readonly, assign, nonatomic) XXStruct_IJc5WD *lines;	// G=0x302388b5; @synthesize=_lines
@property(readonly, assign, nonatomic) unsigned linesCount;	// G=0x30238995; @synthesize=_linesCount
@property(readonly, assign, nonatomic) unsigned linesVertexCount;	// G=0x302b6bcd; @synthesize=_linesVertexCount
@property(readonly, assign, nonatomic) GEOTileKey **namedPoints;	// G=0x302386b5; @synthesize=_namedPoints
@property(readonly, assign, nonatomic) unsigned namedPointsCount;	// G=0x302386a5; @synthesize=_namedPointsCount
@property(readonly, assign, nonatomic) GEOTileKey **namedPolygons;	// G=0x30238cad; @synthesize=_namedPolygons
@property(readonly, assign, nonatomic) unsigned namedPolygonsCount;	// G=0x30238c9d; @synthesize=_namedPolygonsCount
@property(readonly, assign, nonatomic) GEOTileKey **namedRoads;	// G=0x30238885; @synthesize=_namedRoads
@property(readonly, assign, nonatomic) unsigned namedRoadsCount;	// G=0x30238875; @synthesize=_namedRoadsCount
@property(readonly, assign, nonatomic) unsigned namedRoadsVertexCount;	// G=0x302b6c79; 
@property(readonly, assign, nonatomic) Angle *overpasses;	// G=0x302b6e45; @synthesize=_overpasses
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *pointsOnRoad;	// G=0x30238895; @synthesize=_pointsOnRoad
@property(readonly, assign, nonatomic) unsigned pointsOnRoadCount;	// G=0x302b6e75; @synthesize=_pointsOnRoadCount
@property(readonly, assign, nonatomic) XXStruct_wFsE0D *pois;	// G=0x302b6e25; @synthesize=_pois
@property(readonly, assign, nonatomic) unsigned poisCount;	// G=0x302b6e35; @synthesize=_poisCount
@property(readonly, assign, nonatomic) unsigned polygonCharacteristicPointCount;	// G=0x302b6eb5; @synthesize=_polygonCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *polygonCharacteristicPoints;	// G=0x302b6ea5; @synthesize=_polygonCharacteristicPoints
@property(readonly, assign) XXStruct_4WiXgC *polygonLabelPositions;	// G=0x302b682d; converted property
@property(readonly, assign, nonatomic) XXStruct_5hFgMD *polygons;	// G=0x30238c6d; @synthesize=_polygons
@property(readonly, assign, nonatomic) unsigned polygonsCount;	// G=0x30238c5d; @synthesize=_polygonsCount
@property(readonly, assign, nonatomic) unsigned polygonsVertexCount;	// G=0x302b6d19; @synthesize=_polygonsVertexCount
@property(readonly, assign) GEOTileKey **sortedPointsOnRoad;	// G=0x302388c5; converted property
@property(readonly, assign, nonatomic) XXStruct_5JvWtA *threeDBuildings;	// G=0x302b6e05; @synthesize=_threeDBuildings
@property(readonly, assign, nonatomic) unsigned threeDBuildingsCount;	// G=0x302b6e15; @synthesize=_threeDBuildingsCount
@property(readonly, assign, nonatomic) GEOTileKey tileKey;	// G=0x302389a5; @synthesize=_key
- (id)initWithTileData:(id)tileData localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x3022a431
- (BOOL)_addGenericPolygonWithAttributes:(int *)attributes;	// 0x302cf85d
- (void)_attachRoadPoints;	// 0x3022feb1
- (void)_buildSortedFeatureLists;	// 0x3022ff65
- (void)_findJunctions;	// 0x302302f9
- (void)_findOverpasses;	// 0x3023072d
- (BOOL)_handleGenericTile:(XXStruct_tf976D *)tile;	// 0x302cfaa1
- (id)_initWithVMP3:(id)vmp3 localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x3022a771
- (id)_initWithVMP4:(id)vmp4 localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x3023090d
- (unsigned)_makeSpaceForLabels:(unsigned)labels;	// 0x30234f99
- (unsigned)_makeSpaceForShields:(unsigned)shields;	// 0x3023500d
- (BOOL)_read3DBuildings:(XXStruct_tf976D *)buildings;	// 0x30237279
- (BOOL)_readCoastlines:(XXStruct_tf976D *)coastlines;	// 0x30237199
- (BOOL)_readInfoChapter:(XXStruct_tf976D *)chapter;	// 0x30230e99
- (BOOL)_readLabels:(XXStruct_tf976D *)labels;	// 0x30231265
- (BOOL)_readLines:(XXStruct_tf976D *)lines;	// 0x3023166d
- (BOOL)_readPois:(XXStruct_tf976D *)pois;	// 0x3023615d
- (BOOL)_readPolygons:(XXStruct_tf976D *)polygons;	// 0x302352d5
- (BOOL)_readPolygons:(XXStruct_tf976D *)polygons ofType:(unsigned short)type;	// 0x30235315
- (BOOL)_readSimpleCoastlines:(XXStruct_g8x3EB *)coastlines tile:(XXStruct_tf976D *)tile;	// 0x302cefd1
- (BOOL)_readWrappingCoastlines:(XXStruct_g8x3EB *)coastlines tile:(XXStruct_tf976D *)tile;	// 0x30237d25
- (void)_sortStyleAttributes;	// 0x3022fdcd
- (void)_trimWhitespace;	// 0x302ce619
// declared property getter: - (XXStruct_nzTP9A *)buildingFootprints;	// 0x302b6de5
// declared property getter: - (unsigned)buildingFootprintsCount;	// 0x302b6df5
// declared property getter: - (unsigned)coastlineCharacteristicPointCount;	// 0x302b6ed5
// declared property getter: - (XXStruct_Jn2zBA *)coastlineCharacteristicPoints;	// 0x302b6ec5
// declared property getter: - (XXStruct_IJc5WD *)coastlines;	// 0x30238c8d
// declared property getter: - (unsigned)coastlinesCount;	// 0x30238c7d
// declared property getter: - (XXStruct__qQs$B *)curveLineVertices;	// 0x302b680d
// declared property getter: - (BOOL)dataIncludesConnectivity;	// 0x302b6dc5
- (void)dealloc;	// 0x30246c81
- (id)description;	// 0x302b670d
// converted property getter: - (id)extrusionHeightsPool;	// 0x302b681d
- (void)forEachEdgeInRoad:(XXStruct_IJc5WD *)road visitTwice:(BOOL)twice visitor:(id)visitor;	// 0x302b6a2d
- (void)forEachEdgeOnJunction:(XXStruct_qFPbxC *)eachEdgeOnJunction visitor:(id)visitor;	// 0x302b688d
- (void)forEachJunction:(id)eachJunction;	// 0x302b696d
- (void)forEachJunctionInRoad:(XXStruct_IJc5WD *)road visitor:(id)visitor;	// 0x302b6b45
- (void)forEachRoad:(id)eachRoad;	// 0x302b683d
// declared property getter: - (BOOL)hasComputedJunctions;	// 0x302b6e65
// declared property getter: - (XXStruct_qFPbxC *)junctions;	// 0x302388a5
// declared property getter: - (unsigned)junctionsCount;	// 0x302b6e55
// declared property getter: - (XXStruct_qFPbxC *)laneConnections;	// 0x302b6e85
// declared property getter: - (unsigned)laneConnectionsCount;	// 0x302b6e95
// declared property getter: - (unsigned)lineCharacteristicPointCount;	// 0x30238a1d
// declared property getter: - (XXStruct_Jn2zBA *)lineCharacteristicPoints;	// 0x30238a2d
// declared property getter: - (XXStruct__qQs$B *)lineVertices;	// 0x302b67fd
// declared property getter: - (XXStruct_IJc5WD *)lines;	// 0x302388b5
// declared property getter: - (unsigned)linesCount;	// 0x30238995
// declared property getter: - (unsigned)linesVertexCount;	// 0x302b6bcd
// declared property getter: - (GEOTileKey **)namedPoints;	// 0x302386b5
// declared property getter: - (unsigned)namedPointsCount;	// 0x302386a5
// declared property getter: - (GEOTileKey **)namedPolygons;	// 0x30238cad
// declared property getter: - (unsigned)namedPolygonsCount;	// 0x30238c9d
// declared property getter: - (GEOTileKey **)namedRoads;	// 0x30238885
// declared property getter: - (unsigned)namedRoadsCount;	// 0x30238875
// declared property getter: - (unsigned)namedRoadsVertexCount;	// 0x302b6c79
// declared property getter: - (Angle *)overpasses;	// 0x302b6e45
// declared property getter: - (XXStruct_qFPbxC *)pointsOnRoad;	// 0x30238895
// declared property getter: - (unsigned)pointsOnRoadCount;	// 0x302b6e75
// declared property getter: - (XXStruct_wFsE0D *)pois;	// 0x302b6e25
// declared property getter: - (unsigned)poisCount;	// 0x302b6e35
// declared property getter: - (unsigned)polygonCharacteristicPointCount;	// 0x302b6eb5
// declared property getter: - (XXStruct_Jn2zBA *)polygonCharacteristicPoints;	// 0x302b6ea5
// converted property getter: - (XXStruct_4WiXgC *)polygonLabelPositions;	// 0x302b682d
// declared property getter: - (XXStruct_5hFgMD *)polygons;	// 0x30238c6d
// declared property getter: - (unsigned)polygonsCount;	// 0x30238c5d
// declared property getter: - (unsigned)polygonsVertexCount;	// 0x302b6d19
// converted property getter: - (GEOTileKey **)sortedPointsOnRoad;	// 0x302388c5
// declared property getter: - (XXStruct_5JvWtA *)threeDBuildings;	// 0x302b6e05
// declared property getter: - (unsigned)threeDBuildingsCount;	// 0x302b6e15
// declared property getter: - (GEOTileKey)tileKey;	// 0x302389a5
@end

