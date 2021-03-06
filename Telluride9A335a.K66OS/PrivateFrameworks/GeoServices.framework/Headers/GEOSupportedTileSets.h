/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOSupportedTileSets : PBCodable {
	NSMutableArray *_tileSets;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *tileSets;	// G=0x31cfbc3d; S=0x31cfbc4d; @synthesize=_tileSets
- (void)addTileSet:(id)set;	// 0x31cfb735
- (void)dealloc;	// 0x31cfb6f1
- (id)description;	// 0x31cfb7d9
- (id)dictionaryRepresentation;	// 0x31cfb849
- (BOOL)readFrom:(id)from;	// 0x31cfb9b5
// declared property setter: - (void)setTileSets:(id)sets;	// 0x31cfbc4d
- (id)tileSetAtIndex:(unsigned)index;	// 0x31cfb7b9
// declared property getter: - (id)tileSets;	// 0x31cfbc3d
- (unsigned)tileSetsCount;	// 0x31cfb799
- (void)writeTo:(id)to;	// 0x31cfbb29
@end

