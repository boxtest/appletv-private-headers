/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSUserLocation, LBSGRectangle, NSString;

@interface LBSGeocodeParams : PBCodable {
	NSString *_resultLanguage;	// 4 = 0x4
	int _numFeatureLimit;	// 8 = 0x8
	BOOL _hasIncludeBoundingBoxes;	// 12 = 0xc
	BOOL _includeBoundingBoxes;	// 13 = 0xd
	LBSUserLocation *_location;	// 16 = 0x10
	LBSGRectangle *_boundingBox;	// 20 = 0x14
	BOOL _hasAddressLinesLimit;	// 24 = 0x18
	int _addressLinesLimit;	// 28 = 0x1c
}
@property(assign, nonatomic) int addressLinesLimit;	// G=0x31599101; S=0x31599125; @synthesize=_addressLinesLimit
@property(retain, nonatomic) LBSGRectangle *boundingBox;	// G=0x31599859; S=0x31599869; @synthesize=_boundingBox
@property(assign, nonatomic) BOOL hasAddressLinesLimit;	// G=0x3159988d; S=0x3159989d; @synthesize=_hasAddressLinesLimit
@property(readonly, assign, nonatomic) BOOL hasBoundingBox;	// G=0x315990e9; 
@property(assign, nonatomic) BOOL hasIncludeBoundingBoxes;	// G=0x315997f5; S=0x31599805; @synthesize=_hasIncludeBoundingBoxes
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x315990d1; 
@property(assign, nonatomic) BOOL includeBoundingBoxes;	// G=0x31599815; S=0x315990ad; @synthesize=_includeBoundingBoxes
@property(retain, nonatomic) LBSUserLocation *location;	// G=0x31599825; S=0x31599835; @synthesize=_location
@property(assign, nonatomic) int numFeatureLimit;	// G=0x315997d5; S=0x315997e5; @synthesize=_numFeatureLimit
@property(retain, nonatomic) NSString *resultLanguage;	// G=0x315997a1; S=0x315997b1; @synthesize=_resultLanguage
// declared property getter: - (int)addressLinesLimit;	// 0x31599101
// declared property getter: - (id)boundingBox;	// 0x31599859
- (void)dealloc;	// 0x31599041
- (id)description;	// 0x31599149
- (id)dictionaryRepresentation;	// 0x315991b9
// declared property getter: - (BOOL)hasAddressLinesLimit;	// 0x3159988d
// declared property getter: - (BOOL)hasBoundingBox;	// 0x315990e9
// declared property getter: - (BOOL)hasIncludeBoundingBoxes;	// 0x315997f5
// declared property getter: - (BOOL)hasLocation;	// 0x315990d1
// declared property getter: - (BOOL)includeBoundingBoxes;	// 0x31599815
// declared property getter: - (id)location;	// 0x31599825
// declared property getter: - (int)numFeatureLimit;	// 0x315997d5
- (BOOL)readFrom:(id)from;	// 0x31599329
// declared property getter: - (id)resultLanguage;	// 0x315997a1
// declared property setter: - (void)setAddressLinesLimit:(int)limit;	// 0x31599125
// declared property setter: - (void)setBoundingBox:(id)box;	// 0x31599869
// declared property setter: - (void)setHasAddressLinesLimit:(BOOL)limit;	// 0x3159989d
// declared property setter: - (void)setHasIncludeBoundingBoxes:(BOOL)boxes;	// 0x31599805
// declared property setter: - (void)setIncludeBoundingBoxes:(BOOL)boxes;	// 0x315990ad
// declared property setter: - (void)setLocation:(id)location;	// 0x31599835
// declared property setter: - (void)setNumFeatureLimit:(int)limit;	// 0x315997e5
// declared property setter: - (void)setResultLanguage:(id)language;	// 0x315997b1
- (void)writeTo:(id)to;	// 0x315995c5
@end

