/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
@private
	NSMutableData *_data;	// 4 = 0x4
	unsigned _dataLength;	// 8 = 0x8
	const void *_bytes;	// 12 = 0xc
	unsigned _bookmarkOffset;	// 16 = 0x10
	unsigned _offset;	// 20 = 0x14
}
- (id)initWithData:(id)data;	// 0x34b11879
- (void)appendNetworkData:(id)data;	// 0x34b11999
- (void)dealloc;	// 0x34b1190d
- (BOOL)hasUnreadData;	// 0x34b11c11
- (void)markOffset;	// 0x34b11bd1
- (id)readData:(unsigned)data;	// 0x34b11b79
- (id)readString;	// 0x34b11a05
- (BOOL)readUnsignedInt:(unsigned *)int;	// 0x34b11b21
- (BOOL)readUnsignedShort:(unsigned short *)aShort;	// 0x34b11ac9
- (void)seekToMarkedOffset;	// 0x34b11bf1
@end
