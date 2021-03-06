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
- (id)initWithData:(id)data;	// 0x36c9360d
- (id)initWithData:(id)data offset:(unsigned long)offset length:(unsigned long)length;	// 0x36b6175d
- (BOOL)canSeek;	// 0x36c936a9
- (void)close;	// 0x36b619a9
- (id)closeLocalStream;	// 0x36c93721
- (void)dealloc;	// 0x36b6195d
- (void)disableSystemCaching;	// 0x36c93719
- (void)enableSystemCaching;	// 0x36c9371d
- (long long)offset;	// 0x36c93645
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x36c93669
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x36b6191d
- (void)seekToOffset:(long long)offset;	// 0x36b61885
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x36c936ad
@end

