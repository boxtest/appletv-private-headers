/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"


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
@property(readonly, assign, nonatomic) XXStruct_1aFH4A *availableTiles;	// G=0x33fa24b5; 
@property(readonly, assign, nonatomic) unsigned availableTilesCount;	// G=0x33fa24a5; 
@property(readonly, assign, nonatomic) XXStruct_2ta5gB *genericTiles;	// G=0x33fa2791; 
@property(readonly, assign, nonatomic) unsigned genericTilesCount;	// G=0x33fa2781; 
@property(assign, nonatomic) BOOL hasSupportedLanguagesVersion;	// G=0x33fa2a2d; S=0x33fa2a11; 
@property(assign, nonatomic) BOOL hasTimeToLiveSeconds;	// G=0x33fa276d; S=0x33fa274d; 
@property(assign, nonatomic) unsigned identifier;	// G=0x33fa3799; S=0x33fa37a9; @synthesize=_identifier
@property(assign, nonatomic) unsigned supportedLanguagesVersion;	// G=0x33fa37c9; S=0x33fa29e9; @synthesize=_supportedLanguagesVersion
@property(assign, nonatomic) unsigned timeToLiveSeconds;	// G=0x33fa37b9; S=0x33fa2725; @synthesize=_timeToLiveSeconds
- (void)addAvailableTiles:(XXStruct_1aFH4A)tiles;	// 0x33fa2501
- (void)addGenericTile:(XXStruct_2ta5gB)tile;	// 0x33fa27dd
// declared property getter: - (XXStruct_1aFH4A *)availableTiles;	// 0x33fa24b5
- (XXStruct_1aFH4A)availableTilesAtIndex:(unsigned)index;	// 0x33fa260d
// declared property getter: - (unsigned)availableTilesCount;	// 0x33fa24a5
- (void)clearAvailableTiles;	// 0x33fa24c5
- (void)clearGenericTiles;	// 0x33fa27a1
- (void)copyTo:(id)to;	// 0x33fa3389
- (void)dealloc;	// 0x33fa2451
- (id)description;	// 0x33fa2a41
- (id)dictionaryRepresentation;	// 0x33fa2ab1
- (XXStruct_2ta5gB)genericTileAtIndex:(unsigned)index;	// 0x33fa28d9
// declared property getter: - (XXStruct_2ta5gB *)genericTiles;	// 0x33fa2791
// declared property getter: - (unsigned)genericTilesCount;	// 0x33fa2781
// declared property getter: - (BOOL)hasSupportedLanguagesVersion;	// 0x33fa2a2d
// declared property getter: - (BOOL)hasTimeToLiveSeconds;	// 0x33fa276d
- (unsigned)hash;	// 0x33fa36b9
// declared property getter: - (unsigned)identifier;	// 0x33fa3799
- (BOOL)isEqual:(id)equal;	// 0x33fa3581
- (BOOL)readFrom:(id)from;	// 0x33fa316d
- (void)setAvailableTiles:(XXStruct_1aFH4A *)tiles count:(unsigned)count;	// 0x33fa26d5
- (void)setGenericTiles:(XXStruct_2ta5gB *)tiles count:(unsigned)count;	// 0x33fa2999
// declared property setter: - (void)setHasSupportedLanguagesVersion:(BOOL)version;	// 0x33fa2a11
// declared property setter: - (void)setHasTimeToLiveSeconds:(BOOL)liveSeconds;	// 0x33fa274d
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x33fa37a9
// declared property setter: - (void)setSupportedLanguagesVersion:(unsigned)version;	// 0x33fa29e9
// declared property setter: - (void)setTimeToLiveSeconds:(unsigned)liveSeconds;	// 0x33fa2725
// declared property getter: - (unsigned)supportedLanguagesVersion;	// 0x33fa37c9
// declared property getter: - (unsigned)timeToLiveSeconds;	// 0x33fa37b9
- (void)writeTo:(id)to;	// 0x33fa3179
@end
