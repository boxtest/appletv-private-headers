/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOLocationShiftResponse : PBCodable {
	XXStruct_jtcFHA _shiftedPixel;	// 4 = 0x4
}
@property(readonly, assign) XXStruct_zYrK5D shiftedCoordinate;	// G=0x37a41a85; 
@property(assign, nonatomic) XXStruct_jtcFHA shiftedPixel;	// G=0x37a3703d; S=0x37a37071; @synthesize=_shiftedPixel
- (void)copyTo:(id)to;	// 0x37a36f69
- (void)dealloc;	// 0x37a36c81
- (id)description;	// 0x37a36cad
- (id)dictionaryRepresentation;	// 0x37a36d1d
- (unsigned)hash;	// 0x37a37029
- (BOOL)isEqual:(id)equal;	// 0x37a36fd1
- (BOOL)readFrom:(id)from;	// 0x37a36ed5
// declared property setter: - (void)setShiftedPixel:(XXStruct_jtcFHA)pixel;	// 0x37a37071
// declared property getter: - (XXStruct_zYrK5D)shiftedCoordinate;	// 0x37a41a85
// declared property getter: - (XXStruct_jtcFHA)shiftedPixel;	// 0x37a3703d
- (void)writeTo:(id)to;	// 0x37a36ee1
@end
