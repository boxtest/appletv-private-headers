/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, GMMClientCapabilities;

@interface GMMOutgoingTile : PBCodable {
	GMMClientCapabilities *_clientCapabilities;	// 4 = 0x4
	int _tileSize;	// 8 = 0x8
	int _zoom;	// 12 = 0xc
	NSMutableArray *_indexs;	// 16 = 0x10
}
@property(retain, nonatomic) GMMClientCapabilities *clientCapabilities;	// G=0x315951b9; S=0x315951c9; @synthesize=_clientCapabilities
@property(retain, nonatomic) NSMutableArray *indexs;	// G=0x3159522d; S=0x3159523d; @synthesize=_indexs
@property(assign, nonatomic) int tileSize;	// G=0x315951ed; S=0x315951fd; @synthesize=_tileSize
@property(assign, nonatomic) int zoom;	// G=0x3159520d; S=0x3159521d; @synthesize=_zoom
- (void)addIndex:(id)index;	// 0x31594be9
// declared property getter: - (id)clientCapabilities;	// 0x315951b9
- (void)dealloc;	// 0x31594b91
- (id)description;	// 0x31594c8d
- (id)dictionaryRepresentation;	// 0x31594cfd
- (id)indexAtIndex:(unsigned)index;	// 0x31594c6d
// declared property getter: - (id)indexs;	// 0x3159522d
- (unsigned)indexsCount;	// 0x31594c4d
- (BOOL)readFrom:(id)from;	// 0x31594df5
// declared property setter: - (void)setClientCapabilities:(id)capabilities;	// 0x315951c9
// declared property setter: - (void)setIndexs:(id)indexs;	// 0x3159523d
// declared property setter: - (void)setTileSize:(int)size;	// 0x315951fd
// declared property setter: - (void)setZoom:(int)zoom;	// 0x3159521d
// declared property getter: - (int)tileSize;	// 0x315951ed
- (void)writeTo:(id)to;	// 0x31595021
// declared property getter: - (int)zoom;	// 0x3159520d
@end

