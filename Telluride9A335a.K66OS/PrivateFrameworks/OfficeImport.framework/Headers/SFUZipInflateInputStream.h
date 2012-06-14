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

__attribute__((visibility("hidden")))
@interface SFUZipInflateInputStream : NSObject <SFUInputStream> {
@private
	z_stream_s mStream;	// 4 = 0x4
	long long mOffset;	// 60 = 0x3c
	id<SFUBufferedInputStream> mInput;	// 68 = 0x44
	char *mOutBuffer;	// 72 = 0x48
	unsigned mOutBufferSize;	// 76 = 0x4c
	BOOL mReachedEnd;	// 80 = 0x50
	BOOL mIsFromZip;	// 81 = 0x51
	unsigned mCalculatedCrc;	// 84 = 0x54
	unsigned mCheckCrc;	// 88 = 0x58
}
- (id)initWithInput:(id)input;	// 0x3540e2c9
- (id)initWithOffset:(long long)offset end:(long long)end uncompressedSize:(unsigned long long)size crc:(unsigned long)crc dataRepresentation:(id)representation;	// 0x352aa6b5
- (BOOL)canSeek;	// 0x3540e1e9
- (void)close;	// 0x352aaa5d
- (id)closeLocalStream;	// 0x352aaa95
- (void)dealloc;	// 0x352aaaa5
- (void)disableSystemCaching;	// 0x3540e289
- (void)enableSystemCaching;	// 0x3540e2a9
- (long long)offset;	// 0x352aa939
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x352aa94d
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x3540e465
- (void)seekToOffset:(long long)offset;	// 0x3540e201
- (void)setupInflateStream;	// 0x352aa8b5
- (long long)totalCompressedBytesConsumed;	// 0x3540e1ed
@end
