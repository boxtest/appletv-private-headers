/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEONameInfoList : PBCodable {
	NSMutableArray *_nameInfos;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *nameInfos;	// G=0x341b6e29; S=0x341b6e39; @synthesize=_nameInfos
- (void)addNameInfo:(id)info;	// 0x341b6765
- (void)clearNameInfos;	// 0x341b6745
- (void)copyTo:(id)to;	// 0x341b6d19
- (void)dealloc;	// 0x341b6701
- (id)description;	// 0x341b6811
- (id)dictionaryRepresentation;	// 0x341b6881
- (unsigned)hash;	// 0x341b6e09
- (BOOL)isEqual:(id)equal;	// 0x341b6d99
- (id)nameInfoAtIndex:(unsigned)index;	// 0x341b67f1
// declared property getter: - (id)nameInfos;	// 0x341b6e29
- (unsigned)nameInfosCount;	// 0x341b67d1
- (BOOL)readFrom:(id)from;	// 0x341b6bc9
// declared property setter: - (void)setNameInfos:(id)infos;	// 0x341b6e39
- (void)writeTo:(id)to;	// 0x341b6bd5
@end

