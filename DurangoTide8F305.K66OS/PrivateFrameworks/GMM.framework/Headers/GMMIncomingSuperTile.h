/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMIncomingSuperTile : PBCodable {
@private
	NSData *_superTileData;	// 4 = 0x4
}
@property(retain, nonatomic) NSData *superTileData;	// G=0x32bb81ed; S=0x32bb8459; @synthesize=_superTileData
- (id)init;	// 0x32bb81fd
- (void)dealloc;	// 0x32bb8411
- (id)description;	// 0x32bb8271
- (id)dictionaryRepresentation;	// 0x32bb8229
- (BOOL)readFrom:(id)from;	// 0x32bb8339
// declared property setter: - (void)setSuperTileData:(id)data;	// 0x32bb8459
// declared property getter: - (id)superTileData;	// 0x32bb81ed
- (void)writeTo:(id)to;	// 0x32bb830d
@end
