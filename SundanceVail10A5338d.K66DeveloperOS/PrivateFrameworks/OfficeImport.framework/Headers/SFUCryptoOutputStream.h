/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library

@class SFUCryptor;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {
	id<SFUOutputStream> mBaseStream;	// 4 = 0x4
	SFUCryptor *mCryptor;	// 8 = 0x8
	BOOL mIsClosed;	// 12 = 0xc
	BOOL mComputeCrc32;	// 13 = 0xd
	unsigned mCrc32;	// 16 = 0x10
}
+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)dataLength key:(id)key;	// 0x33c18e95
- (id)initForEncryptionWithOutputStream:(id)outputStream key:(id)key;	// 0x33c18f0d
- (id)initForEncryptionWithOutputStream:(id)outputStream key:(id)key computeCrc32:(BOOL)a32;	// 0x33c18f31
- (BOOL)canCreateInputStream;	// 0x33c19541
- (BOOL)canSeek;	// 0x33c194a1
- (void)close;	// 0x33c19669
- (id)closeLocalStream;	// 0x33c196a5
- (unsigned)crc32;	// 0x33c195c1
- (void)dealloc;	// 0x33c192f9
- (id)inputStream;	// 0x33c19545
- (long long)offset;	// 0x33c19521
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x33c194a5
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x33c1937d
@end

