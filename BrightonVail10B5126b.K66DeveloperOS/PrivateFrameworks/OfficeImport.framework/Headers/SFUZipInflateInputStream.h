/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library

@protocol SFUBufferedInputStream;

@interface SFUZipInflateInputStream : NSObject <SFUInputStream> {
	z_stream_s mStream;	// 4 = 0x4
	long long mOffset;	// 60 = 0x3c
	id<SFUBufferedInputStream> mInput;	// 68 = 0x44
	char *mOutBuffer;	// 72 = 0x48
	unsigned long mOutBufferSize;	// 76 = 0x4c
	BOOL mReachedEnd;	// 80 = 0x50
	BOOL mIsFromZip;	// 81 = 0x51
	unsigned long mCalculatedCrc;	// 84 = 0x54
	unsigned long mCheckCrc;	// 88 = 0x58
}
- (id)initWithInput:(id)input;	// 0x34ad03c1
- (id)initWithOffset:(long long)offset end:(long long)end uncompressedSize:(unsigned long long)size crc:(unsigned long)crc dataRepresentation:(id)representation;	// 0x348d2a4d
- (BOOL)canSeek;	// 0x34ad068d
- (void)close;	// 0x348d2e19
- (id)closeLocalStream;	// 0x348d2e55
- (void)dealloc;	// 0x348d2e65
- (void)disableSystemCaching;	// 0x34ad0691
- (void)enableSystemCaching;	// 0x34ad06b1
- (long long)offset;	// 0x348d2cd1
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x348d2ce5
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x34ad055d
- (void)seekToOffset:(long long)offset;	// 0x34ad0611
- (void)setupInflateStream;	// 0x348d2c45
- (long long)totalCompressedBytesConsumed;	// 0x34ad06d1
@end
