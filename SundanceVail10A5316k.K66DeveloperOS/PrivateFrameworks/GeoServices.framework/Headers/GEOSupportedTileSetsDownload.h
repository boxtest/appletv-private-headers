/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOSupportedTileSets, GEODownloadMetadata;

@interface GEOSupportedTileSetsDownload : PBCodable {
@private
	GEODownloadMetadata *_metadata;	// 4 = 0x4
	GEOSupportedTileSets *_tileSets;	// 8 = 0x8
}
@property(retain, nonatomic) GEODownloadMetadata *metadata;	// G=0x34b16319; S=0x34b16329; @synthesize=_metadata
@property(retain, nonatomic) GEOSupportedTileSets *tileSets;	// G=0x34b162f9; S=0x34b16309; @synthesize=_tileSets
- (void)copyTo:(id)to;	// 0x34b161c1
- (void)dealloc;	// 0x34b15d19
- (id)description;	// 0x34b15d71
- (id)dictionaryRepresentation;	// 0x34b15de1
- (unsigned)hash;	// 0x34b162b9
- (BOOL)isEqual:(id)equal;	// 0x34b16219
// declared property getter: - (id)metadata;	// 0x34b16319
- (BOOL)readFrom:(id)from;	// 0x34b160b1
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x34b16329
// declared property setter: - (void)setTileSets:(id)sets;	// 0x34b16309
// declared property getter: - (id)tileSets;	// 0x34b162f9
- (void)writeTo:(id)to;	// 0x34b160bd
@end
