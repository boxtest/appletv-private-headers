/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUOutputStream.h"

@class SFUCryptor;

__attribute__((visibility("hidden")))
@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {
@private
	id<SFUOutputStream> mBaseStream;	// 4 = 0x4
	SFUCryptor *mCryptor;	// 8 = 0x8
	BOOL mIsClosed;	// 12 = 0xc
	BOOL mComputeCrc32;	// 13 = 0xd
	unsigned mCrc32;	// 16 = 0x10
}
+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)dataLength key:(id)key;	// 0x31b6f595
- (id)initForEncryptionWithOutputStream:(id)outputStream key:(id)key;	// 0x31b6f571
- (id)initForEncryptionWithOutputStream:(id)outputStream key:(id)key computeCrc32:(BOOL)a32;	// 0x31b6f605
- (BOOL)canCreateInputStream;	// 0x31b6f185
- (BOOL)canSeek;	// 0x31b6f181
- (void)close;	// 0x31b6f279
- (id)closeLocalStream;	// 0x31b6f189
- (unsigned)crc32;	// 0x31b6f2a9
- (void)dealloc;	// 0x31b6f9b5
- (id)inputStream;	// 0x31b6f349
- (long long)offset;	// 0x31b6f3c5
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x31b6f3e5
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x31b6f45d
@end

