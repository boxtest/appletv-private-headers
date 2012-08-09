/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOVConnectivity, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVTile : PBCodable {
	NSMutableArray *_coastlines;	// 4 = 0x4
	GEOVConnectivity *_connectivity;	// 8 = 0x8
	NSMutableArray *_labelLanguages;	// 12 = 0xc
	NSData *_labels;	// 16 = 0x10
	NSMutableArray *_lines;	// 20 = 0x14
	int _minZ;	// 24 = 0x18
	NSMutableArray *_points;	// 28 = 0x1c
	NSMutableArray *_polygons;	// 32 = 0x20
	unsigned _sectionDeltaLengthBits;	// 36 = 0x24
	unsigned _vertexBits;	// 40 = 0x28
	NSData *_vertices;	// 44 = 0x2c
	int _zBits;	// 48 = 0x30
	struct {
		unsigned eastLng : 1;
		unsigned northLat : 1;
		unsigned southLat : 1;
		unsigned westLng : 1;
	} _has;	// 52 = 0x34
}
@property(retain, nonatomic) NSMutableArray *coastlines;	// G=0x379eba05; S=0x379ecaed; @synthesize=_coastlines
@property(retain, nonatomic) GEOVConnectivity *connectivity;	// G=0x37a7e709; S=0x379ecadd; @synthesize=_connectivity
@property(readonly, assign, nonatomic) BOOL hasConnectivity;	// G=0x379ec0b9; 
@property(readonly, assign, nonatomic) BOOL hasLabels;	// G=0x379eb8ad; 
@property(assign, nonatomic) BOOL hasMinZ;	// G=0x37a7cc7d; S=0x37a7cc61; 
@property(assign, nonatomic) BOOL hasSectionDeltaLengthBits;	// G=0x37a7cee9; S=0x37a7cec9; 
@property(assign, nonatomic) BOOL hasVertexBits;	// G=0x37a7ce8d; S=0x37a7ce6d; 
@property(readonly, assign, nonatomic) BOOL hasVertices;	// G=0x37a7cc21; 
@property(assign, nonatomic) BOOL hasZBits;	// G=0x37a7ccd9; S=0x37a7ccb9; 
@property(retain, nonatomic) NSMutableArray *labelLanguages;	// G=0x37a7e729; S=0x379ecafd; @synthesize=_labelLanguages
@property(retain, nonatomic) NSData *labels;	// G=0x379eb8c5; S=0x379ecabd; @synthesize=_labels
@property(retain, nonatomic) NSMutableArray *lines;	// G=0x379eb7f1; S=0x379ec911; @synthesize=_lines
@property(assign, nonatomic) int minZ;	// G=0x37a7e719; S=0x37a7cc39; @synthesize=_minZ
@property(retain, nonatomic) NSMutableArray *points;	// G=0x379eb811; S=0x379ec931; @synthesize=_points
@property(retain, nonatomic) NSMutableArray *polygons;	// G=0x379eb801; S=0x379ec921; @synthesize=_polygons
@property(assign, nonatomic) unsigned sectionDeltaLengthBits;	// G=0x379eb9ad; S=0x37a7cea1; @synthesize=_sectionDeltaLengthBits
@property(assign, nonatomic) unsigned vertexBits;	// G=0x379eb9d5; S=0x37a7ce45; @synthesize=_vertexBits
@property(retain, nonatomic) NSData *vertices;	// G=0x379eb98d; S=0x379ecacd; @synthesize=_vertices
@property(assign, nonatomic) int zBits;	// G=0x379eb99d; S=0x37a7cc91; @synthesize=_zBits
- (void)addCoastlines:(id)coastlines;	// 0x37a7cd0d
- (void)addLabelLanguage:(id)language;	// 0x37a7cdb9
- (void)addLine:(id)line;	// 0x37a7ca89
- (void)addPoint:(id)point;	// 0x379e9f9d
- (void)addPolygon:(id)polygon;	// 0x37a7cb35
- (void)clearCoastlines;	// 0x37a7cced
- (void)clearLabelLanguages;	// 0x37a7cd99
- (void)clearLines;	// 0x37a7ca69
- (void)clearPoints;	// 0x37a7cbe1
- (void)clearPolygons;	// 0x37a7cb15
// declared property getter: - (id)coastlines;	// 0x379eba05
- (id)coastlinesAtIndex:(unsigned)index;	// 0x37a7cd79
- (unsigned)coastlinesCount;	// 0x379eb86d
// declared property getter: - (id)connectivity;	// 0x37a7e709
- (void)copyTo:(id)to;	// 0x37a7deb9
- (void)dealloc;	// 0x379ec841
- (id)description;	// 0x37a7cefd
- (id)dictionaryRepresentation;	// 0x37a7cf6d
// declared property getter: - (BOOL)hasConnectivity;	// 0x379ec0b9
// declared property getter: - (BOOL)hasLabels;	// 0x379eb8ad
// declared property getter: - (BOOL)hasMinZ;	// 0x37a7cc7d
// declared property getter: - (BOOL)hasSectionDeltaLengthBits;	// 0x37a7cee9
// declared property getter: - (BOOL)hasVertexBits;	// 0x37a7ce8d
// declared property getter: - (BOOL)hasVertices;	// 0x37a7cc21
// declared property getter: - (BOOL)hasZBits;	// 0x37a7ccd9
- (unsigned)hash;	// 0x37a7e555
- (BOOL)isEqual:(id)equal;	// 0x37a7e2a1
- (id)labelLanguageAtIndex:(unsigned)index;	// 0x37a7ce25
// declared property getter: - (id)labelLanguages;	// 0x37a7e729
- (unsigned)labelLanguagesCount;	// 0x379eb96d
// declared property getter: - (id)labels;	// 0x379eb8c5
- (id)lineAtIndex:(unsigned)index;	// 0x37a7caf5
// declared property getter: - (id)lines;	// 0x379eb7f1
- (unsigned)linesCount;	// 0x379eb84d
// declared property getter: - (int)minZ;	// 0x37a7e719
- (id)pointAtIndex:(unsigned)index;	// 0x37a7cc01
// declared property getter: - (id)points;	// 0x379eb811
- (unsigned)pointsCount;	// 0x379eb88d
- (id)polygonAtIndex:(unsigned)index;	// 0x37a7cbc1
// declared property getter: - (id)polygons;	// 0x379eb801
- (unsigned)polygonsCount;	// 0x37a7cba1
- (BOOL)readFrom:(id)from;	// 0x379e9859
// declared property getter: - (unsigned)sectionDeltaLengthBits;	// 0x379eb9ad
// declared property setter: - (void)setCoastlines:(id)coastlines;	// 0x379ecaed
// declared property setter: - (void)setConnectivity:(id)connectivity;	// 0x379ecadd
// declared property setter: - (void)setHasMinZ:(BOOL)z;	// 0x37a7cc61
// declared property setter: - (void)setHasSectionDeltaLengthBits:(BOOL)bits;	// 0x37a7cec9
// declared property setter: - (void)setHasVertexBits:(BOOL)bits;	// 0x37a7ce6d
// declared property setter: - (void)setHasZBits:(BOOL)bits;	// 0x37a7ccb9
// declared property setter: - (void)setLabelLanguages:(id)languages;	// 0x379ecafd
// declared property setter: - (void)setLabels:(id)labels;	// 0x379ecabd
// declared property setter: - (void)setLines:(id)lines;	// 0x379ec911
// declared property setter: - (void)setMinZ:(int)z;	// 0x37a7cc39
// declared property setter: - (void)setPoints:(id)points;	// 0x379ec931
// declared property setter: - (void)setPolygons:(id)polygons;	// 0x379ec921
// declared property setter: - (void)setSectionDeltaLengthBits:(unsigned)bits;	// 0x37a7cea1
// declared property setter: - (void)setVertexBits:(unsigned)bits;	// 0x37a7ce45
// declared property setter: - (void)setVertices:(id)vertices;	// 0x379ecacd
// declared property setter: - (void)setZBits:(int)bits;	// 0x37a7cc91
// declared property getter: - (unsigned)vertexBits;	// 0x379eb9d5
// declared property getter: - (id)vertices;	// 0x379eb98d
- (void)writeTo:(id)to;	// 0x37a7d7b9
// declared property getter: - (int)zBits;	// 0x379eb99d
@end
