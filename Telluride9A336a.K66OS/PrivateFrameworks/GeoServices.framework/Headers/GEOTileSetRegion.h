/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOTileSetRegion : PBCodable {
	unsigned _minX;	// 4 = 0x4
	unsigned _minY;	// 8 = 0x8
	unsigned _maxX;	// 12 = 0xc
	unsigned _maxY;	// 16 = 0x10
	unsigned _minZ;	// 20 = 0x14
	unsigned _maxZ;	// 24 = 0x18
}
@property(assign, nonatomic) unsigned maxX;	// G=0x36717ee5; S=0x36717ef5; @synthesize=_maxX
@property(assign, nonatomic) unsigned maxY;	// G=0x36717f05; S=0x36717f15; @synthesize=_maxY
@property(assign, nonatomic) unsigned maxZ;	// G=0x36717f45; S=0x36717f55; @synthesize=_maxZ
@property(assign, nonatomic) unsigned minX;	// G=0x36717ea5; S=0x36717eb5; @synthesize=_minX
@property(assign, nonatomic) unsigned minY;	// G=0x36717ec5; S=0x36717ed5; @synthesize=_minY
@property(assign, nonatomic) unsigned minZ;	// G=0x36717f25; S=0x36717f35; @synthesize=_minZ
- (BOOL)containsTileKey:(const GEOTileKey *)key enforceZoomLevel:(BOOL)level;	// 0x3671b1a5
- (void)dealloc;	// 0x36717aa5
- (id)description;	// 0x36717ad1
- (id)dictionaryRepresentation;	// 0x36717b41
// declared property getter: - (unsigned)maxX;	// 0x36717ee5
// declared property getter: - (unsigned)maxY;	// 0x36717f05
// declared property getter: - (unsigned)maxZ;	// 0x36717f45
// declared property getter: - (unsigned)minX;	// 0x36717ea5
// declared property getter: - (unsigned)minY;	// 0x36717ec5
// declared property getter: - (unsigned)minZ;	// 0x36717f25
- (BOOL)readFrom:(id)from;	// 0x36717ca5
// declared property setter: - (void)setMaxX:(unsigned)x;	// 0x36717ef5
// declared property setter: - (void)setMaxY:(unsigned)y;	// 0x36717f15
// declared property setter: - (void)setMaxZ:(unsigned)z;	// 0x36717f55
// declared property setter: - (void)setMinX:(unsigned)x;	// 0x36717eb5
// declared property setter: - (void)setMinY:(unsigned)y;	// 0x36717ed5
// declared property setter: - (void)setMinZ:(unsigned)z;	// 0x36717f35
- (void)writeTo:(id)to;	// 0x36717dfd
@end
