/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
	NSMutableData *_data;	// 4 = 0x4
	unsigned _dataLength;	// 8 = 0x8
	const void *_bytes;	// 12 = 0xc
	unsigned _bookmarkOffset;	// 16 = 0x10
	unsigned _offset;	// 20 = 0x14
}
- (id)initWithData:(id)data;	// 0x302701d1
- (id)allData;	// 0x302702f1
- (void)appendNetworkData:(id)data;	// 0x30270301
- (void)dealloc;	// 0x30270265
- (BOOL)hasUnreadData;	// 0x30270579
- (void)markOffset;	// 0x30270539
- (id)readData:(unsigned)data;	// 0x302704e1
- (id)readString;	// 0x3027036d
- (BOOL)readUnsignedInt:(unsigned *)int;	// 0x30270489
- (BOOL)readUnsignedShort:(unsigned short *)aShort;	// 0x30270431
- (void)seekToMarkedOffset;	// 0x30270559
@end

