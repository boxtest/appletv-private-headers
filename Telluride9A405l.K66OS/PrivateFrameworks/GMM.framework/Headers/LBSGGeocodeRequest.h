/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class LBSGRectangle;

@interface LBSGGeocodeRequest : PBRequest {
	BOOL _hasNumFeatureLimit;	// 4 = 0x4
	unsigned _numFeatureLimit;	// 8 = 0x8
	BOOL _hasIncludeBoundingBoxes;	// 12 = 0xc
	BOOL _includeBoundingBoxes;	// 13 = 0xd
	LBSGRectangle *_boundingBox;	// 16 = 0x10
	BOOL _hasAddressLinesLimit;	// 20 = 0x14
	int _addressLinesLimit;	// 24 = 0x18
}
@property(assign, nonatomic) int addressLinesLimit;	// G=0x3159a179; S=0x3159a19d; @synthesize=_addressLinesLimit
@property(retain, nonatomic) LBSGRectangle *boundingBox;	// G=0x3159a6f1; S=0x3159a701; @synthesize=_boundingBox
@property(assign, nonatomic) BOOL hasAddressLinesLimit;	// G=0x3159a725; S=0x3159a735; @synthesize=_hasAddressLinesLimit
@property(readonly, assign, nonatomic) BOOL hasBoundingBox;	// G=0x3159a161; 
@property(assign, nonatomic) BOOL hasIncludeBoundingBoxes;	// G=0x3159a6d1; S=0x3159a6e1; @synthesize=_hasIncludeBoundingBoxes
@property(assign, nonatomic) BOOL hasNumFeatureLimit;	// G=0x3159a6b1; S=0x3159a6c1; @synthesize=_hasNumFeatureLimit
@property(assign, nonatomic) BOOL includeBoundingBoxes;	// G=0x3159a119; S=0x3159a13d; @synthesize=_includeBoundingBoxes
@property(assign, nonatomic) unsigned numFeatureLimit;	// G=0x3159a0d1; S=0x3159a0f5; @synthesize=_numFeatureLimit
// declared property getter: - (int)addressLinesLimit;	// 0x3159a179
// declared property getter: - (id)boundingBox;	// 0x3159a6f1
- (void)dealloc;	// 0x3159a08d
- (id)description;	// 0x3159a1c1
- (id)dictionaryRepresentation;	// 0x3159a231
// declared property getter: - (BOOL)hasAddressLinesLimit;	// 0x3159a725
// declared property getter: - (BOOL)hasBoundingBox;	// 0x3159a161
// declared property getter: - (BOOL)hasIncludeBoundingBoxes;	// 0x3159a6d1
// declared property getter: - (BOOL)hasNumFeatureLimit;	// 0x3159a6b1
// declared property getter: - (BOOL)includeBoundingBoxes;	// 0x3159a119
// declared property getter: - (unsigned)numFeatureLimit;	// 0x3159a0d1
- (BOOL)readFrom:(id)from;	// 0x3159a38d
// declared property setter: - (void)setAddressLinesLimit:(int)limit;	// 0x3159a19d
// declared property setter: - (void)setBoundingBox:(id)box;	// 0x3159a701
// declared property setter: - (void)setHasAddressLinesLimit:(BOOL)limit;	// 0x3159a735
// declared property setter: - (void)setHasIncludeBoundingBoxes:(BOOL)boxes;	// 0x3159a6e1
// declared property setter: - (void)setHasNumFeatureLimit:(BOOL)limit;	// 0x3159a6c1
// declared property setter: - (void)setIncludeBoundingBoxes:(BOOL)boxes;	// 0x3159a13d
// declared property setter: - (void)setNumFeatureLimit:(unsigned)limit;	// 0x3159a0f5
- (void)writeTo:(id)to;	// 0x3159a575
@end

