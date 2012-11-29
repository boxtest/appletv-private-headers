/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GEOTileSetVersion : PBCodable {
	XXStruct_1aFH4A *_availableTiles;	// 4 = 0x4
	unsigned _availableTilesCount;	// 8 = 0x8
	unsigned _availableTilesSpace;	// 12 = 0xc
	XXStruct_2ta5gB *_genericTiles;	// 16 = 0x10
	unsigned _genericTilesCount;	// 20 = 0x14
	unsigned _genericTilesSpace;	// 24 = 0x18
	unsigned _identifier;	// 28 = 0x1c
	unsigned _supportedLanguagesVersion;	// 32 = 0x20
	unsigned _timeToLiveSeconds;	// 36 = 0x24
	XXStruct_$8RKkA _has;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) XXStruct_1aFH4A *availableTiles;	// G=0x302729a1; 
@property(readonly, assign, nonatomic) unsigned availableTilesCount;	// G=0x30272991; 
@property(readonly, assign, nonatomic) XXStruct_2ta5gB *genericTiles;	// G=0x30272c7d; 
@property(readonly, assign, nonatomic) unsigned genericTilesCount;	// G=0x30272c6d; 
@property(assign, nonatomic) BOOL hasSupportedLanguagesVersion;	// G=0x30272f19; S=0x30272efd; 
@property(assign, nonatomic) BOOL hasTimeToLiveSeconds;	// G=0x30272c59; S=0x30272c39; 
@property(assign, nonatomic) unsigned identifier;	// G=0x30273c85; S=0x30273c95; @synthesize=_identifier
@property(assign, nonatomic) unsigned supportedLanguagesVersion;	// G=0x30273cb5; S=0x30272ed5; @synthesize=_supportedLanguagesVersion
@property(assign, nonatomic) unsigned timeToLiveSeconds;	// G=0x30273ca5; S=0x30272c11; @synthesize=_timeToLiveSeconds
- (void)addAvailableTiles:(XXStruct_1aFH4A)tiles;	// 0x302729ed
- (void)addGenericTile:(XXStruct_2ta5gB)tile;	// 0x30272cc9
// declared property getter: - (XXStruct_1aFH4A *)availableTiles;	// 0x302729a1
- (XXStruct_1aFH4A)availableTilesAtIndex:(unsigned)index;	// 0x30272af9
// declared property getter: - (unsigned)availableTilesCount;	// 0x30272991
- (void)clearAvailableTiles;	// 0x302729b1
- (void)clearGenericTiles;	// 0x30272c8d
- (void)copyTo:(id)to;	// 0x30273875
- (void)dealloc;	// 0x3027293d
- (id)description;	// 0x30272f2d
- (id)dictionaryRepresentation;	// 0x30272f9d
- (XXStruct_2ta5gB)genericTileAtIndex:(unsigned)index;	// 0x30272dc5
// declared property getter: - (XXStruct_2ta5gB *)genericTiles;	// 0x30272c7d
// declared property getter: - (unsigned)genericTilesCount;	// 0x30272c6d
// declared property getter: - (BOOL)hasSupportedLanguagesVersion;	// 0x30272f19
// declared property getter: - (BOOL)hasTimeToLiveSeconds;	// 0x30272c59
- (unsigned)hash;	// 0x30273ba5
// declared property getter: - (unsigned)identifier;	// 0x30273c85
- (BOOL)isEqual:(id)equal;	// 0x30273a6d
- (BOOL)readFrom:(id)from;	// 0x30273659
- (void)setAvailableTiles:(XXStruct_1aFH4A *)tiles count:(unsigned)count;	// 0x30272bc1
- (void)setGenericTiles:(XXStruct_2ta5gB *)tiles count:(unsigned)count;	// 0x30272e85
// declared property setter: - (void)setHasSupportedLanguagesVersion:(BOOL)version;	// 0x30272efd
// declared property setter: - (void)setHasTimeToLiveSeconds:(BOOL)liveSeconds;	// 0x30272c39
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x30273c95
// declared property setter: - (void)setSupportedLanguagesVersion:(unsigned)version;	// 0x30272ed5
// declared property setter: - (void)setTimeToLiveSeconds:(unsigned)liveSeconds;	// 0x30272c11
// declared property getter: - (unsigned)supportedLanguagesVersion;	// 0x30273cb5
// declared property getter: - (unsigned)timeToLiveSeconds;	// 0x30273ca5
- (void)writeTo:(id)to;	// 0x30273665
@end
