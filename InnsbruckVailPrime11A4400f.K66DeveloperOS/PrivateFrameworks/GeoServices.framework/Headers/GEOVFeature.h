/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class NSData, GEOVCharacteristics, NSMutableArray;

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
@property(assign, nonatomic) unsigned long long businessID;	// G=0x30e97361; S=0x30f56225; @synthesize=_businessID
@property(assign, nonatomic) unsigned centerlineCount;	// G=0x30f59b39; S=0x30f56aa9; @synthesize=_centerlineCount
@property(assign, nonatomic) unsigned centerlineStart;	// G=0x30f59b49; S=0x30f56b31; @synthesize=_centerlineStart
@property(retain, nonatomic) GEOVCharacteristics *characteristics;	// G=0x30f59af9; S=0x30e98039; @synthesize=_characteristics
@property(assign, nonatomic) float endLaneWidth;	// G=0x30f59b79; S=0x30f56cf5; @synthesize=_endLaneWidth
@property(assign, nonatomic) float endOffset;	// G=0x30f59b19; S=0x30f5698d; @synthesize=_endOffset
@property(assign, nonatomic) float endRoadOffset;	// G=0x30f59b99; S=0x30f56e0d; @synthesize=_endRoadOffset
@property(assign, nonatomic) unsigned entryPointMask;	// G=0x30f59ba9; S=0x30f56e95; @synthesize=_entryPointMask
@property(readonly, assign, nonatomic) int *extrusionHeights;	// G=0x30f567f1; 
@property(readonly, assign, nonatomic) unsigned extrusionHeightsCount;	// G=0x30f567dd; 
@property(assign, nonatomic) int formOfWay;	// G=0x30f59a99; S=0x30f56445; @synthesize=_formOfWay
@property(assign, nonatomic) BOOL hasBusinessID;	// G=0x30e97349; S=0x30f56261; 
@property(assign, nonatomic) BOOL hasCenterlineCount;	// G=0x30f56b1d; S=0x30f56ae1; 
@property(assign, nonatomic) BOOL hasCenterlineStart;	// G=0x30f56ba5; S=0x30f56b69; 
@property(readonly, assign, nonatomic) BOOL hasCharacteristics;	// G=0x30f568e5; 
@property(assign, nonatomic) BOOL hasEndLaneWidth;	// G=0x30f56d69; S=0x30f56d2d; 
@property(assign, nonatomic) BOOL hasEndOffset;	// G=0x30f56a01; S=0x30f569c5; 
@property(assign, nonatomic) BOOL hasEndRoadOffset;	// G=0x30f56e81; S=0x30f56e45; 
@property(assign, nonatomic) BOOL hasEntryPointMask;	// G=0x30f56f05; S=0x30f56ecd; 
@property(assign, nonatomic) BOOL hasFormOfWay;	// G=0x30f564bd; S=0x30f5647d; 
@property(assign, nonatomic) BOOL hasMinzoomRank;	// G=0x30e9737d; S=0x30f56a4d; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETECenterlines;	// G=0x30f56a91; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETEShieldLabelPositions;	// G=0x30f566a9; 
@property(readonly, assign, nonatomic) BOOL hasOBSOLETEVertexLabelPositions;	// G=0x30f56691; 
@property(assign, nonatomic) BOOL hasPlaceType;	// G=0x30f56315; S=0x30f562d5; 
@property(readonly, assign, nonatomic) BOOL hasPointLabelPosition;	// G=0x30f56679; 
@property(assign, nonatomic) BOOL hasPolyIsConvex;	// G=0x30f563a1; S=0x30f56365; 
@property(assign, nonatomic) BOOL hasRoadClass;	// G=0x30f56431; S=0x30f563f1; 
@property(assign, nonatomic) BOOL hasSectionCount;	// G=0x30f56665; S=0x30f56625; 
@property(assign, nonatomic) BOOL hasSectionStart;	// G=0x30f565d9; S=0x30f56599; 
@property(assign, nonatomic) BOOL hasSpeedLimit;	// G=0x30f567c9; S=0x30f56789; 
@property(assign, nonatomic) BOOL hasStartLaneWidth;	// G=0x30f56ce1; S=0x30f56cad; 
@property(assign, nonatomic) BOOL hasStartOffset;	// G=0x30f56975; S=0x30f56939; 
@property(assign, nonatomic) BOOL hasStartRoadOffset;	// G=0x30f56df5; S=0x30f56db9; 
@property(assign, nonatomic) BOOL hasStyleGroup;	// G=0x30f56739; S=0x30f566fd; 
@property(assign, nonatomic) BOOL hasTravelDirection;	// G=0x30f56549; S=0x30f5650d; 
@property(assign, nonatomic) BOOL hasType;	// G=0x30e973a5; S=0x30f56c39; 
@property(assign, nonatomic) BOOL hasUID;	// G=0x30f56211; S=0x30f561d5; 
@property(readonly, assign, nonatomic) int *labelOffsets;	// G=0x30e972bd; 
@property(readonly, assign, nonatomic) unsigned labelOffsetsCount;	// G=0x30e96dd9; 
@property(assign, nonatomic) float minzoomRank;	// G=0x30e97391; S=0x30f56a15; @synthesize=_minzoomRank
@property(retain, nonatomic) NSData *oBSOLETECenterlines;	// G=0x30f59b29; S=0x30e98049; @synthesize=_oBSOLETECenterlines
@property(retain, nonatomic) NSData *oBSOLETEShieldLabelPositions;	// G=0x30f59ad9; S=0x30e98029; @synthesize=_oBSOLETEShieldLabelPositions
@property(retain, nonatomic) NSData *oBSOLETEVertexLabelPositions;	// G=0x30f59ac9; S=0x30e98019; @synthesize=_oBSOLETEVertexLabelPositions
@property(assign, nonatomic) int placeType;	// G=0x30f59a69; S=0x30f5629d; @synthesize=_placeType
@property(retain, nonatomic) NSData *pointLabelPosition;	// G=0x30f59ab9; S=0x30e98009; @synthesize=_pointLabelPosition
@property(assign, nonatomic) BOOL polyIsConvex;	// G=0x30f59a79; S=0x30f56329; @synthesize=_polyIsConvex
@property(assign, nonatomic) int roadClass;	// G=0x30f59a89; S=0x30f563b9; @synthesize=_roadClass
@property(assign, nonatomic) int sectionCount;	// G=0x30e97669; S=0x30f565ed; @synthesize=_sectionCount
@property(assign, nonatomic) int sectionStart;	// G=0x30e97679; S=0x30f56561; @synthesize=_sectionStart
@property(readonly, assign, nonatomic) int *shieldLabelOffsets;	// G=0x30f55f9d; 
@property(readonly, assign, nonatomic) unsigned shieldLabelOffsetsCount;	// G=0x30e96df1; 
@property(readonly, assign, nonatomic) int *shieldLabelTypes;	// G=0x30f560a5; 
@property(readonly, assign, nonatomic) unsigned shieldLabelTypesCount;	// G=0x30f56091; 
@property(assign, nonatomic) int speedLimit;	// G=0x30f59ae9; S=0x30f56751; @synthesize=_speedLimit
@property(assign, nonatomic) float startLaneWidth;	// G=0x30f59b69; S=0x30f56c75; @synthesize=_startLaneWidth
@property(assign, nonatomic) float startOffset;	// G=0x30f59b09; S=0x30f568fd; @synthesize=_startOffset
@property(assign, nonatomic) float startRoadOffset;	// G=0x30f59b89; S=0x30f56d7d; @synthesize=_startRoadOffset
@property(retain, nonatomic) NSMutableArray *styleAttributes;	// G=0x30e975d1; S=0x30e98059; @synthesize=_styleAttributes
@property(assign, nonatomic) unsigned styleGroup;	// G=0x30e97321; S=0x30f566c1; @synthesize=_styleGroup
@property(assign, nonatomic) int travelDirection;	// G=0x30f59aa9; S=0x30f564d1; @synthesize=_travelDirection
@property(assign, nonatomic) int type;	// G=0x30f59b59; S=0x30f56bfd; @synthesize=_type
@property(assign, nonatomic) long long uID;	// G=0x30e97331; S=0x30f56199; @synthesize=_uID
- (void)addExtrusionHeight:(int)height;	// 0x30f56815
- (void)addLabelOffset:(int)offset;	// 0x30f55ec9
- (void)addShieldLabelOffset:(int)offset;	// 0x30f55fc1
- (void)addShieldLabelType:(int)type;	// 0x30f560c9
- (void)addStyleAttributes:(id)attributes;	// 0x30e96ac9
// declared property getter: - (unsigned long long)businessID;	// 0x30e97361
// declared property getter: - (unsigned)centerlineCount;	// 0x30f59b39
// declared property getter: - (unsigned)centerlineStart;	// 0x30f59b49
// declared property getter: - (id)characteristics;	// 0x30f59af9
- (void)clearExtrusionHeights;	// 0x30f56801
- (void)clearLabelOffsets;	// 0x30f55eb5
- (void)clearShieldLabelOffsets;	// 0x30f55fad
- (void)clearShieldLabelTypes;	// 0x30f560b5
- (void)clearStyleAttributes;	// 0x30f56bb9
- (void)copyTo:(id)to;	// 0x30f58209
- (void)dealloc;	// 0x30e97f19
- (id)description;	// 0x30f56f19
- (id)dictionaryRepresentation;	// 0x30f56f89
// declared property getter: - (float)endLaneWidth;	// 0x30f59b79
// declared property getter: - (float)endOffset;	// 0x30f59b19
// declared property getter: - (float)endRoadOffset;	// 0x30f59b99
// declared property getter: - (unsigned)entryPointMask;	// 0x30f59ba9
- (int)extrusionHeightAtIndex:(unsigned)index;	// 0x30f56829
// declared property getter: - (int *)extrusionHeights;	// 0x30f567f1
// declared property getter: - (unsigned)extrusionHeightsCount;	// 0x30f567dd
// declared property getter: - (int)formOfWay;	// 0x30f59a99
// declared property getter: - (BOOL)hasBusinessID;	// 0x30e97349
// declared property getter: - (BOOL)hasCenterlineCount;	// 0x30f56b1d
// declared property getter: - (BOOL)hasCenterlineStart;	// 0x30f56ba5
// declared property getter: - (BOOL)hasCharacteristics;	// 0x30f568e5
// declared property getter: - (BOOL)hasEndLaneWidth;	// 0x30f56d69
// declared property getter: - (BOOL)hasEndOffset;	// 0x30f56a01
// declared property getter: - (BOOL)hasEndRoadOffset;	// 0x30f56e81
// declared property getter: - (BOOL)hasEntryPointMask;	// 0x30f56f05
// declared property getter: - (BOOL)hasFormOfWay;	// 0x30f564bd
// declared property getter: - (BOOL)hasMinzoomRank;	// 0x30e9737d
// declared property getter: - (BOOL)hasOBSOLETECenterlines;	// 0x30f56a91
// declared property getter: - (BOOL)hasOBSOLETEShieldLabelPositions;	// 0x30f566a9
// declared property getter: - (BOOL)hasOBSOLETEVertexLabelPositions;	// 0x30f56691
// declared property getter: - (BOOL)hasPlaceType;	// 0x30f56315
// declared property getter: - (BOOL)hasPointLabelPosition;	// 0x30f56679
// declared property getter: - (BOOL)hasPolyIsConvex;	// 0x30f563a1
// declared property getter: - (BOOL)hasRoadClass;	// 0x30f56431
// declared property getter: - (BOOL)hasSectionCount;	// 0x30f56665
// declared property getter: - (BOOL)hasSectionStart;	// 0x30f565d9
// declared property getter: - (BOOL)hasSpeedLimit;	// 0x30f567c9
// declared property getter: - (BOOL)hasStartLaneWidth;	// 0x30f56ce1
// declared property getter: - (BOOL)hasStartOffset;	// 0x30f56975
// declared property getter: - (BOOL)hasStartRoadOffset;	// 0x30f56df5
// declared property getter: - (BOOL)hasStyleGroup;	// 0x30f56739
// declared property getter: - (BOOL)hasTravelDirection;	// 0x30f56549
// declared property getter: - (BOOL)hasType;	// 0x30e973a5
// declared property getter: - (BOOL)hasUID;	// 0x30f56211
- (unsigned)hash;	// 0x30f59259
- (BOOL)isEqual:(id)equal;	// 0x30f58acd
- (int)labelOffsetAtIndex:(unsigned)index;	// 0x30f55edd
// declared property getter: - (int *)labelOffsets;	// 0x30e972bd
// declared property getter: - (unsigned)labelOffsetsCount;	// 0x30e96dd9
// declared property getter: - (float)minzoomRank;	// 0x30e97391
// declared property getter: - (id)oBSOLETECenterlines;	// 0x30f59b29
// declared property getter: - (id)oBSOLETEShieldLabelPositions;	// 0x30f59ad9
// declared property getter: - (id)oBSOLETEVertexLabelPositions;	// 0x30f59ac9
// declared property getter: - (int)placeType;	// 0x30f59a69
// declared property getter: - (id)pointLabelPosition;	// 0x30f59ab9
// declared property getter: - (BOOL)polyIsConvex;	// 0x30f59a79
- (BOOL)readFrom:(id)from;	// 0x30f57985
// declared property getter: - (int)roadClass;	// 0x30f59a89
// declared property getter: - (int)sectionCount;	// 0x30e97669
// declared property getter: - (int)sectionStart;	// 0x30e97679
// declared property setter: - (void)setBusinessID:(unsigned long long)anId;	// 0x30f56225
// declared property setter: - (void)setCenterlineCount:(unsigned)count;	// 0x30f56aa9
// declared property setter: - (void)setCenterlineStart:(unsigned)start;	// 0x30f56b31
// declared property setter: - (void)setCharacteristics:(id)characteristics;	// 0x30e98039
// declared property setter: - (void)setEndLaneWidth:(float)width;	// 0x30f56cf5
// declared property setter: - (void)setEndOffset:(float)offset;	// 0x30f5698d
// declared property setter: - (void)setEndRoadOffset:(float)offset;	// 0x30f56e0d
// declared property setter: - (void)setEntryPointMask:(unsigned)mask;	// 0x30f56e95
- (void)setExtrusionHeights:(int *)heights count:(unsigned)count;	// 0x30f568cd
// declared property setter: - (void)setFormOfWay:(int)way;	// 0x30f56445
// declared property setter: - (void)setHasBusinessID:(BOOL)anId;	// 0x30f56261
// declared property setter: - (void)setHasCenterlineCount:(BOOL)count;	// 0x30f56ae1
// declared property setter: - (void)setHasCenterlineStart:(BOOL)start;	// 0x30f56b69
// declared property setter: - (void)setHasEndLaneWidth:(BOOL)width;	// 0x30f56d2d
// declared property setter: - (void)setHasEndOffset:(BOOL)offset;	// 0x30f569c5
// declared property setter: - (void)setHasEndRoadOffset:(BOOL)offset;	// 0x30f56e45
// declared property setter: - (void)setHasEntryPointMask:(BOOL)mask;	// 0x30f56ecd
// declared property setter: - (void)setHasFormOfWay:(BOOL)way;	// 0x30f5647d
// declared property setter: - (void)setHasMinzoomRank:(BOOL)rank;	// 0x30f56a4d
// declared property setter: - (void)setHasPlaceType:(BOOL)type;	// 0x30f562d5
// declared property setter: - (void)setHasPolyIsConvex:(BOOL)convex;	// 0x30f56365
// declared property setter: - (void)setHasRoadClass:(BOOL)aClass;	// 0x30f563f1
// declared property setter: - (void)setHasSectionCount:(BOOL)count;	// 0x30f56625
// declared property setter: - (void)setHasSectionStart:(BOOL)start;	// 0x30f56599
// declared property setter: - (void)setHasSpeedLimit:(BOOL)limit;	// 0x30f56789
// declared property setter: - (void)setHasStartLaneWidth:(BOOL)width;	// 0x30f56cad
// declared property setter: - (void)setHasStartOffset:(BOOL)offset;	// 0x30f56939
// declared property setter: - (void)setHasStartRoadOffset:(BOOL)offset;	// 0x30f56db9
// declared property setter: - (void)setHasStyleGroup:(BOOL)group;	// 0x30f566fd
// declared property setter: - (void)setHasTravelDirection:(BOOL)direction;	// 0x30f5650d
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x30f56c39
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x30f561d5
- (void)setLabelOffsets:(int *)offsets count:(unsigned)count;	// 0x30f55f81
// declared property setter: - (void)setMinzoomRank:(float)rank;	// 0x30f56a15
// declared property setter: - (void)setOBSOLETECenterlines:(id)centerlines;	// 0x30e98049
// declared property setter: - (void)setOBSOLETEShieldLabelPositions:(id)positions;	// 0x30e98029
// declared property setter: - (void)setOBSOLETEVertexLabelPositions:(id)positions;	// 0x30e98019
// declared property setter: - (void)setPlaceType:(int)type;	// 0x30f5629d
// declared property setter: - (void)setPointLabelPosition:(id)position;	// 0x30e98009
// declared property setter: - (void)setPolyIsConvex:(BOOL)convex;	// 0x30f56329
// declared property setter: - (void)setRoadClass:(int)aClass;	// 0x30f563b9
// declared property setter: - (void)setSectionCount:(int)count;	// 0x30f565ed
// declared property setter: - (void)setSectionStart:(int)start;	// 0x30f56561
- (void)setShieldLabelOffsets:(int *)offsets count:(unsigned)count;	// 0x30f56079
- (void)setShieldLabelTypes:(int *)types count:(unsigned)count;	// 0x30f56181
// declared property setter: - (void)setSpeedLimit:(int)limit;	// 0x30f56751
// declared property setter: - (void)setStartLaneWidth:(float)width;	// 0x30f56c75
// declared property setter: - (void)setStartOffset:(float)offset;	// 0x30f568fd
// declared property setter: - (void)setStartRoadOffset:(float)offset;	// 0x30f56d7d
// declared property setter: - (void)setStyleAttributes:(id)attributes;	// 0x30e98059
// declared property setter: - (void)setStyleGroup:(unsigned)group;	// 0x30f566c1
// declared property setter: - (void)setTravelDirection:(int)direction;	// 0x30f564d1
// declared property setter: - (void)setType:(int)type;	// 0x30f56bfd
// declared property setter: - (void)setUID:(long long)uid;	// 0x30f56199
- (int)shieldLabelOffsetAtIndex:(unsigned)index;	// 0x30f55fd5
// declared property getter: - (int *)shieldLabelOffsets;	// 0x30f55f9d
// declared property getter: - (unsigned)shieldLabelOffsetsCount;	// 0x30e96df1
- (int)shieldLabelTypeAtIndex:(unsigned)index;	// 0x30f560dd
// declared property getter: - (int *)shieldLabelTypes;	// 0x30f560a5
// declared property getter: - (unsigned)shieldLabelTypesCount;	// 0x30f56091
// declared property getter: - (int)speedLimit;	// 0x30f59ae9
// declared property getter: - (float)startLaneWidth;	// 0x30f59b69
// declared property getter: - (float)startOffset;	// 0x30f59b09
// declared property getter: - (float)startRoadOffset;	// 0x30f59b89
// declared property getter: - (id)styleAttributes;	// 0x30e975d1
- (id)styleAttributesAtIndex:(unsigned)index;	// 0x30f56bdd
- (unsigned)styleAttributesCount;	// 0x30e9755d
// declared property getter: - (unsigned)styleGroup;	// 0x30e97321
// declared property getter: - (int)travelDirection;	// 0x30f59aa9
// declared property getter: - (int)type;	// 0x30f59b59
// declared property getter: - (long long)uID;	// 0x30e97331
- (void)writeTo:(id)to;	// 0x30f57991
@end

