/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUBufferedInputStream.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream> {
	NSData *mData;	// 4 = 0x4
	const char *mStart;	// 8 = 0x8
	const char *mCurrent;	// 12 = 0xc
	const char *mEnd;	// 16 = 0x10
}
- (id)initWithData:(id)data;	// 0x34ac960d
- (id)initWithData:(id)data offset:(unsigned long)offset length:(unsigned long)length;	// 0x3499775d
- (BOOL)canSeek;	// 0x34ac96a9
- (void)close;	// 0x349979a9
- (id)closeLocalStream;	// 0x34ac9721
- (void)dealloc;	// 0x3499795d
- (void)disableSystemCaching;	// 0x34ac9719
- (void)enableSystemCaching;	// 0x34ac971d
- (long long)offset;	// 0x34ac9645
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x34ac9669
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x3499791d
- (void)seekToOffset:(long long)offset;	// 0x34997885
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x34ac96ad
@end
