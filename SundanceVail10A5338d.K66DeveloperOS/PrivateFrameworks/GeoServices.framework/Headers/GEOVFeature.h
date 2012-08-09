/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, NSData, GEOVCharacteristics;

__attribute__((visibility("hidden")))
@interface GEOVFeature : PBCodable {
	XXStruct_WmZAAA _extrusionHeights;	// 4 = 0x4
	XXStruct_WmZAAA _labelOffsets;	// 16 = 0x10
	XXStruct_WmZAAA _shieldLabelOffsets;	// 28 = 0x1c
	XXStruct_WmZAAA _shieldLabelTypes;	// 40 = 0x28
	unsigned long long _businessID;	// 52 = 0x34
	long long _uID;	// 60 = 0x3c
	unsigned _centerlineCount;	// 68 = 0x44
	unsigned _centerlineStart;	// 72 = 0x48
	GEOVCharacteristics *_characteristics;	// 76 = 0x4c
	float _endLaneWidth;	// 80 = 0x50
	float _endOffset;	// 84 = 0x54
	float _endRoadOffset;	// 88 = 0x58
	unsigned _entryPointMask;	// 92 = 0x5c
	int _formOfWay;	// 96 = 0x60
	float _minzoomRank;	// 100 = 0x64
	NSData *_oBSOLETECenterlines;	// 104 = 0x68
	NSData *_oBSOLETEShieldLabelPositions;	// 108 = 0x6c
	NSData *_oBSOLETEVertexLabelPositions;	// 112 = 0x70
	int _placeType;	// 116 = 0x74
	NSData *_pointLabelPosition;	// 120 = 0x78
	int _roadClass;	// 124 = 0x7c
	int _sectionCount;	// 128 = 0x80
	int _sectionStart;	// 132 = 0x84
	int _speedLimit;	// 136 = 0x88
	float _startLaneWidth;	// 140 = 0x8c
	float _startOffset;	// 144 = 0x90
	float _startRoadOffset;	// 148 = 0x94
	NSMutableArray *_styleAttributes;	// 152 = 0x98
	unsigned _styleGroup;	// 156 = 0x9c
	int _travelDirection;	// 160 = 0xa0
	int _type;	// 164 = 0xa4
	BOOL _polyIsConvex;	// 168 = 0xa8
	struct {
		unsigned businessID : 1;
		unsigned uID : 1;
		unsigned centerlineCount : 1;
		unsigned centerlineStart : 1;
		unsigned endLaneWidth : 1;
		unsigned endOffset : 1;
		unsigned endRoadOffset : 1;
		unsigned entryPointMask : 1;
		unsigned formOfWay : 1;
		unsigned minzoomRank : 1;
		unsigned placeType : 1;
		unsigned roadClass : 1;
		unsigned sectionCount : 1;
		unsigned sectionStart : 1;
		unsigned speedLimit : 1;
		unsigned startLaneWidth : 1;
		unsigned startOffset : 1;
		unsigned startRoadOffset : 1;
		unsigned styleGroup : 1;
		unsigned travelDirection : 1;
		unsigned type : 1;
		unsigned polyIsConvex : 1;
	} _has;	// 169 = 0xa9
}
@property(assign, nonatomic) unsigned long long businessID;	// G=0x324ceac1; S=0x324ca205; @synthesize=_businessID
@property(assign, nonatomic) unsigned centerlineCount;	// G=0x324cec39; S=0x324ca875; @synthesize=_centerlineCount
@property(assign, nonatomic) unsigned centerlineStart;	// G=0x324cec49; S=0x324ca8d5; @synthesize=_centerlineStart
@property(retain, nonatomic) GEOVCharacteristics *characteristics;	// G=0x324cebc9; S=0x324cebd9; @synthesize=_characteristics
@property(assign, nonatomic) float endLaneWidth;	// G=0x324cec99; S=0x324caab9; @synthesize=_endLaneWidth
@property(assign, nonatomic) float endOffset;	// G=0x324cebf9; S=0x324ca79d; @synthesize=_endOffset
@property(assign, nonatomic) float endRoadOffset;	// G=0x324cecb9; S=0x324cab79; @synthesize=_endRoadOffset
@property(assign, nonatomic) unsigned entryPointMask;	// G=0x324cecc9; S=0x324cabd9; @synthesize=_entryPointMask
@property(readonly, assign, nonatomic) int *extrusionHeights;	// G=0x324ca631; 
@property(readonly, assign, nonatomic) unsigned extrusionHeightsCount;	// G=0x324ca61d; 
@property(assign, nonatomic) int formOfWay;	// G=0x324ceb09; S=0x324ca391; @synthesize=_formOfWay
@property(assign, nonatomic) BOOL hasBusinessID;	// G=0x324ca25d; S=0x324ca239; 
@property(assign, nonatomic) BOOL hasCenterlineCount;	// G=0x324ca8c1; S=0x324ca89d; 
@property(assign, nonatomic) BOOL hasCenterlineStart;	// G=0x324ca921; S=0x324ca8fd; 
@property(readonly, assign, nonatomic) BOOL hasCharacteristics;	// G=0x324ca725; 
@property(assign, nonatomic) BOOL hasEndLaneWidth;	// G=0x324cab05; S=0x324caae1; 
@property(assign, nonatomic) BOOL hasEndOffset;	// G=0x324ca7e9; S=0x324ca7c5; 
@property(assign, nonatomic) BOOL hasEndRoadOffset;	// G=0x324cabc5; S=0x324caba1; 
@property(assign, nonatomic) BOOL hasEntryPointMask;	// G=0x324cac25; S=0x324cac01; 
@property(assign, nonatomic) BOOL hasFormOfWay;	// G=0x324ca3dd; S=0x324ca3b9; 
@property(assign, nonatomic) BOOL hasMinzoomRank;	// G=0x324ca849; S=0x324ca825; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETECenterlines;	// G=0x324ca85d; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETEShieldLabelPositions;	// G=0x324ca545; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETEVertexLabelPositions;	// G=0x324ca52d; 
@property(assign, nonatomic) BOOL hasPlaceType;	// G=0x324ca2bd; S=0x324ca299; 
@property(readonly, assign, nonatomic) BOOL hasPointLabelPosition;	// G=0x324ca515; 
@property(assign, nonatomic) BOOL hasPolyIsConvex;	// G=0x324ca319; S=0x324ca2f9; 
@property(assign, nonatomic) BOOL hasRoadClass;	// G=0x324ca37d; S=0x324ca359; 
@property(assign, nonatomic) BOOL hasSectionCount;	// G=0x324ca501; S=0x324ca4dd; 
@property(assign, nonatomic) BOOL hasSectionStart;	// G=0x324ca4a1; S=0x324ca47d; 
@property(assign, nonatomic) BOOL hasSpeedLimit;	// G=0x324ca609; S=0x324ca5e5; 
@property(assign, nonatomic) BOOL hasStartLaneWidth;	// G=0x324caaa5; S=0x324caa89; 
@property(assign, nonatomic) BOOL hasStartOffset;	// G=0x324ca785; S=0x324ca765; 
@property(assign, nonatomic) BOOL hasStartRoadOffset;	// G=0x324cab61; S=0x324cab41; 
@property(assign, nonatomic) BOOL hasStyleGroup;	// G=0x324ca5a5; S=0x324ca585; 
@property(assign, nonatomic) BOOL hasTravelDirection;	// G=0x324ca43d; S=0x324ca41d; 
@property(assign, nonatomic) BOOL hasType;	// G=0x324caa49; S=0x324caa29; 
@property(assign, nonatomic) BOOL hasUID;	// G=0x324ca1f1; S=0x324ca1cd; 
@property(readonly, assign, nonatomic) int *labelOffsets;	// G=0x324c9e95; 
@property(readonly, assign, nonatomic) unsigned labelOffsetsCount;	// G=0x324c9e81; 
@property(assign, nonatomic) float minzoomRank;	// G=0x324cec09; S=0x324ca7fd; @synthesize=_minzoomRank
@property(retain, nonatomic) NSData *oBSOLETECenterlines;	// G=0x324cec19; S=0x324cec29; @synthesize=_oBSOLETECenterlines
@property(retain, nonatomic) NSData *oBSOLETEShieldLabelPositions;	// G=0x324ceb89; S=0x324ceb99; @synthesize=_oBSOLETEShieldLabelPositions
@property(retain, nonatomic) NSData *oBSOLETEVertexLabelPositions;	// G=0x324ceb69; S=0x324ceb79; @synthesize=_oBSOLETEVertexLabelPositions
@property(assign, nonatomic) int placeType;	// G=0x324cead9; S=0x324ca271; @synthesize=_placeType
@property(retain, nonatomic) NSData *pointLabelPosition;	// G=0x324ceb49; S=0x324ceb59; @synthesize=_pointLabelPosition
@property(assign, nonatomic) BOOL polyIsConvex;	// G=0x324ceae9; S=0x324ca2d1; @synthesize=_polyIsConvex
@property(assign, nonatomic) int roadClass;	// G=0x324ceaf9; S=0x324ca331; @synthesize=_roadClass
@property(assign, nonatomic) int sectionCount;	// G=0x324ceb39; S=0x324ca4b5; @synthesize=_sectionCount
@property(assign, nonatomic) int sectionStart;	// G=0x324ceb29; S=0x324ca455; @synthesize=_sectionStart
@property(readonly, assign, nonatomic) int *shieldLabelOffsets;	// G=0x324c9f9d; 
@property(readonly, assign, nonatomic) unsigned shieldLabelOffsetsCount;	// G=0x324c9f89; 
@property(readonly, assign, nonatomic) int *shieldLabelTypes;	// G=0x324ca0a5; 
@property(readonly, assign, nonatomic) unsigned shieldLabelTypesCount;	// G=0x324ca091; 
@property(assign, nonatomic) int speedLimit;	// G=0x324cebb9; S=0x324ca5bd; @synthesize=_speedLimit
@property(assign, nonatomic) float startLaneWidth;	// G=0x324cec89; S=0x324caa61; @synthesize=_startLaneWidth
@property(assign, nonatomic) float startOffset;	// G=0x324cebe9; S=0x324ca73d; @synthesize=_startOffset
@property(assign, nonatomic) float startRoadOffset;	// G=0x324ceca9; S=0x324cab19; @synthesize=_startRoadOffset
@property(retain, nonatomic) NSMutableArray *styleAttributes;	// G=0x324cec59; S=0x324cec69; @synthesize=_styleAttributes
@property(assign, nonatomic) unsigned styleGroup;	// G=0x324ceba9; S=0x324ca55d; @synthesize=_styleGroup
@property(assign, nonatomic) int travelDirection;	// G=0x324ceb19; S=0x324ca3f5; @synthesize=_travelDirection
@property(assign, nonatomic) int type;	// G=0x324cec79; S=0x324caa01; @synthesize=_type
@property(assign, nonatomic) long long uID;	// G=0x324ceaa9; S=0x324ca199; @synthesize=_uID
- (void)addExtrusionHeight:(int)height;	// 0x324ca655
- (void)addLabelOffset:(int)offset;	// 0x324c9eb9
- (void)addShieldLabelOffset:(int)offset;	// 0x324c9fc1
- (void)addShieldLabelType:(int)type;	// 0x324ca0c9
- (void)addStyleAttributes:(id)attributes;	// 0x324ca955
// declared property getter: - (unsigned long long)businessID;	// 0x324ceac1
// declared property getter: - (unsigned)centerlineCount;	// 0x324cec39
// declared property getter: - (unsigned)centerlineStart;	// 0x324cec49
// declared property getter: - (id)characteristics;	// 0x324cebc9
- (void)clearExtrusionHeights;	// 0x324ca641
- (void)clearLabelOffsets;	// 0x324c9ea5
- (void)clearShieldLabelOffsets;	// 0x324c9fad
- (void)clearShieldLabelTypes;	// 0x324ca0b5
- (void)clearStyleAttributes;	// 0x324ca935
- (void)copyTo:(id)to;	// 0x324cd2c5
- (void)dealloc;	// 0x324c9d91
- (id)description;	// 0x324cac39
- (id)dictionaryRepresentation;	// 0x324caca9
// declared property getter: - (float)endLaneWidth;	// 0x324cec99
// declared property getter: - (float)endOffset;	// 0x324cebf9
// declared property getter: - (float)endRoadOffset;	// 0x324cecb9
// declared property getter: - (unsigned)entryPointMask;	// 0x324cecc9
- (int)extrusionHeightAtIndex:(unsigned)index;	// 0x324ca669
// declared property getter: - (int *)extrusionHeights;	// 0x324ca631
// declared property getter: - (unsigned)extrusionHeightsCount;	// 0x324ca61d
// declared property getter: - (int)formOfWay;	// 0x324ceb09
// declared property getter: - (BOOL)hasBusinessID;	// 0x324ca25d
// declared property getter: - (BOOL)hasCenterlineCount;	// 0x324ca8c1
// declared property getter: - (BOOL)hasCenterlineStart;	// 0x324ca921
// declared property getter: - (BOOL)hasCharacteristics;	// 0x324ca725
// declared property getter: - (BOOL)hasEndLaneWidth;	// 0x324cab05
// declared property getter: - (BOOL)hasEndOffset;	// 0x324ca7e9
// declared property getter: - (BOOL)hasEndRoadOffset;	// 0x324cabc5
// declared property getter: - (BOOL)hasEntryPointMask;	// 0x324cac25
// declared property getter: - (BOOL)hasFormOfWay;	// 0x324ca3dd
// declared property getter: - (BOOL)hasMinzoomRank;	// 0x324ca849
// declared property getter: - (BOOL)hasOBSOLETECenterlines;	// 0x324ca85d
// declared property getter: - (BOOL)hasOBSOLETEShieldLabelPositions;	// 0x324ca545
// declared property getter: - (BOOL)hasOBSOLETEVertexLabelPositions;	// 0x324ca52d
// declared property getter: - (BOOL)hasPlaceType;	// 0x324ca2bd
// declared property getter: - (BOOL)hasPointLabelPosition;	// 0x324ca515
// declared property getter: - (BOOL)hasPolyIsConvex;	// 0x324ca319
// declared property getter: - (BOOL)hasRoadClass;	// 0x324ca37d
// declared property getter: - (BOOL)hasSectionCount;	// 0x324ca501
// declared property getter: - (BOOL)hasSectionStart;	// 0x324ca4a1
// declared property getter: - (BOOL)hasSpeedLimit;	// 0x324ca609
// declared property getter: - (BOOL)hasStartLaneWidth;	// 0x324caaa5
// declared property getter: - (BOOL)hasStartOffset;	// 0x324ca785
// declared property getter: - (BOOL)hasStartRoadOffset;	// 0x324cab61
// declared property getter: - (BOOL)hasStyleGroup;	// 0x324ca5a5
// declared property getter: - (BOOL)hasTravelDirection;	// 0x324ca43d
// declared property getter: - (BOOL)hasType;	// 0x324caa49
// declared property getter: - (BOOL)hasUID;	// 0x324ca1f1
- (unsigned)hash;	// 0x324ce2d1
- (BOOL)isEqual:(id)equal;	// 0x324cdb89
- (int)labelOffsetAtIndex:(unsigned)index;	// 0x324c9ecd
// declared property getter: - (int *)labelOffsets;	// 0x324c9e95
// declared property getter: - (unsigned)labelOffsetsCount;	// 0x324c9e81
// declared property getter: - (float)minzoomRank;	// 0x324cec09
// declared property getter: - (id)oBSOLETECenterlines;	// 0x324cec19
// declared property getter: - (id)oBSOLETEShieldLabelPositions;	// 0x324ceb89
// declared property getter: - (id)oBSOLETEVertexLabelPositions;	// 0x324ceb69
// declared property getter: - (int)placeType;	// 0x324cead9
// declared property getter: - (id)pointLabelPosition;	// 0x324ceb49
// declared property getter: - (BOOL)polyIsConvex;	// 0x324ceae9
- (BOOL)readFrom:(id)from;	// 0x324ccafd
// declared property getter: - (int)roadClass;	// 0x324ceaf9
// declared property getter: - (int)sectionCount;	// 0x324ceb39
// declared property getter: - (int)sectionStart;	// 0x324ceb29
// declared property setter: - (void)setBusinessID:(unsigned long long)anId;	// 0x324ca205
// declared property setter: - (void)setCenterlineCount:(unsigned)count;	// 0x324ca875
// declared property setter: - (void)setCenterlineStart:(unsigned)start;	// 0x324ca8d5
// declared property setter: - (void)setCharacteristics:(id)characteristics;	// 0x324cebd9
// declared property setter: - (void)setEndLaneWidth:(float)width;	// 0x324caab9
// declared property setter: - (void)setEndOffset:(float)offset;	// 0x324ca79d
// declared property setter: - (void)setEndRoadOffset:(float)offset;	// 0x324cab79
// declared property setter: - (void)setEntryPointMask:(unsigned)mask;	// 0x324cabd9
- (void)setExtrusionHeights:(int *)heights count:(unsigned)count;	// 0x324ca70d
// declared property setter: - (void)setFormOfWay:(int)way;	// 0x324ca391
// declared property setter: - (void)setHasBusinessID:(BOOL)anId;	// 0x324ca239
// declared property setter: - (void)setHasCenterlineCount:(BOOL)count;	// 0x324ca89d
// declared property setter: - (void)setHasCenterlineStart:(BOOL)start;	// 0x324ca8fd
// declared property setter: - (void)setHasEndLaneWidth:(BOOL)width;	// 0x324caae1
// declared property setter: - (void)setHasEndOffset:(BOOL)offset;	// 0x324ca7c5
// declared property setter: - (void)setHasEndRoadOffset:(BOOL)offset;	// 0x324caba1
// declared property setter: - (void)setHasEntryPointMask:(BOOL)mask;	// 0x324cac01
// declared property setter: - (void)setHasFormOfWay:(BOOL)way;	// 0x324ca3b9
// declared property setter: - (void)setHasMinzoomRank:(BOOL)rank;	// 0x324ca825
// declared property setter: - (void)setHasPlaceType:(BOOL)type;	// 0x324ca299
// declared property setter: - (void)setHasPolyIsConvex:(BOOL)convex;	// 0x324ca2f9
// declared property setter: - (void)setHasRoadClass:(BOOL)aClass;	// 0x324ca359
// declared property setter: - (void)setHasSectionCount:(BOOL)count;	// 0x324ca4dd
// declared property setter: - (void)setHasSectionStart:(BOOL)start;	// 0x324ca47d
// declared property setter: - (void)setHasSpeedLimit:(BOOL)limit;	// 0x324ca5e5
// declared property setter: - (void)setHasStartLaneWidth:(BOOL)width;	// 0x324caa89
// declared property setter: - (void)setHasStartOffset:(BOOL)offset;	// 0x324ca765
// declared property setter: - (void)setHasStartRoadOffset:(BOOL)offset;	// 0x324cab41
// declared property setter: - (void)setHasStyleGroup:(BOOL)group;	// 0x324ca585
// declared property setter: - (void)setHasTravelDirection:(BOOL)direction;	// 0x324ca41d
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x324caa29
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x324ca1cd
- (void)setLabelOffsets:(int *)offsets count:(unsigned)count;	// 0x324c9f71
// declared property setter: - (void)setMinzoomRank:(float)rank;	// 0x324ca7fd
// declared property setter: - (void)setOBSOLETECenterlines:(id)centerlines;	// 0x324cec29
// declared property setter: - (void)setOBSOLETEShieldLabelPositions:(id)positions;	// 0x324ceb99
// declared property setter: - (void)setOBSOLETEVertexLabelPositions:(id)positions;	// 0x324ceb79
// declared property setter: - (void)setPlaceType:(int)type;	// 0x324ca271
// declared property setter: - (void)setPointLabelPosition:(id)position;	// 0x324ceb59
// declared property setter: - (void)setPolyIsConvex:(BOOL)convex;	// 0x324ca2d1
// declared property setter: - (void)setRoadClass:(int)aClass;	// 0x324ca331
// declared property setter: - (void)setSectionCount:(int)count;	// 0x324ca4b5
// declared property setter: - (void)setSectionStart:(int)start;	// 0x324ca455
- (void)setShieldLabelOffsets:(int *)offsets count:(unsigned)count;	// 0x324ca079
- (void)setShieldLabelTypes:(int *)types count:(unsigned)count;	// 0x324ca181
// declared property setter: - (void)setSpeedLimit:(int)limit;	// 0x324ca5bd
// declared property setter: - (void)setStartLaneWidth:(float)width;	// 0x324caa61
// declared property setter: - (void)setStartOffset:(float)offset;	// 0x324ca73d
// declared property setter: - (void)setStartRoadOffset:(float)offset;	// 0x324cab19
// declared property setter: - (void)setStyleAttributes:(id)attributes;	// 0x324cec69
// declared property setter: - (void)setStyleGroup:(unsigned)group;	// 0x324ca55d
// declared property setter: - (void)setTravelDirection:(int)direction;	// 0x324ca3f5
// declared property setter: - (void)setType:(int)type;	// 0x324caa01
// declared property setter: - (void)setUID:(long long)uid;	// 0x324ca199
- (int)shieldLabelOffsetAtIndex:(unsigned)index;	// 0x324c9fd5
// declared property getter: - (int *)shieldLabelOffsets;	// 0x324c9f9d
// declared property getter: - (unsigned)shieldLabelOffsetsCount;	// 0x324c9f89
- (int)shieldLabelTypeAtIndex:(unsigned)index;	// 0x324ca0dd
// declared property getter: - (int *)shieldLabelTypes;	// 0x324ca0a5
// declared property getter: - (unsigned)shieldLabelTypesCount;	// 0x324ca091
// declared property getter: - (int)speedLimit;	// 0x324cebb9
// declared property getter: - (float)startLaneWidth;	// 0x324cec89
// declared property getter: - (float)startOffset;	// 0x324cebe9
// declared property getter: - (float)startRoadOffset;	// 0x324ceca9
// declared property getter: - (id)styleAttributes;	// 0x324cec59
- (id)styleAttributesAtIndex:(unsigned)index;	// 0x324ca9e1
- (unsigned)styleAttributesCount;	// 0x324ca9c1
// declared property getter: - (unsigned)styleGroup;	// 0x324ceba9
// declared property getter: - (int)travelDirection;	// 0x324ceb19
// declared property getter: - (int)type;	// 0x324cec79
// declared property getter: - (long long)uID;	// 0x324ceaa9
- (void)writeTo:(id)to;	// 0x324ccb09
@end
