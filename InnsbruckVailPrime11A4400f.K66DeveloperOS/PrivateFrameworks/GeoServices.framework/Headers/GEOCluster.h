/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class GEOPlaceResult;

@interface GEOCluster : PBCodable {
	XXStruct_WmZAAA _indexs;	// 4 = 0x4
	GEOPlaceResult *_container;	// 16 = 0x10
}
@property(retain, nonatomic) GEOPlaceResult *container;	// G=0x30fbe73d; S=0x30fbe74d; @synthesize=_container
@property(readonly, assign, nonatomic) BOOL hasContainer;	// G=0x30fbdf65; 
@property(readonly, assign, nonatomic) int *indexs;	// G=0x30fbdf91; 
@property(readonly, assign, nonatomic) unsigned indexsCount;	// G=0x30fbdf7d; 
- (void)addIndex:(int)index;	// 0x30fbdfb5
- (void)clearIndexs;	// 0x30fbdfa1
// declared property getter: - (id)container;	// 0x30fbe73d
- (void)copyTo:(id)to;	// 0x30fbe5bd
- (void)dealloc;	// 0x30fbdf11
- (id)description;	// 0x30fbe085
- (id)dictionaryRepresentation;	// 0x30fbe0f5
// declared property getter: - (BOOL)hasContainer;	// 0x30fbdf65
- (unsigned)hash;	// 0x30fbe701
- (int)indexAtIndex:(unsigned)index;	// 0x30fbdfc9
// declared property getter: - (int *)indexs;	// 0x30fbdf91
// declared property getter: - (unsigned)indexsCount;	// 0x30fbdf7d
- (BOOL)isEqual:(id)equal;	// 0x30fbe679
- (BOOL)readFrom:(id)from;	// 0x30fbe4cd
// declared property setter: - (void)setContainer:(id)container;	// 0x30fbe74d
- (void)setIndexs:(int *)indexs count:(unsigned)count;	// 0x30fbe06d
- (void)writeTo:(id)to;	// 0x30fbe4d9
@end

