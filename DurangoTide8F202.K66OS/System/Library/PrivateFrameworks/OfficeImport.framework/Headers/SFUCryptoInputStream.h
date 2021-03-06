/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library

@class SFUCryptor;

__attribute__((visibility("hidden")))
@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
@private
	id<SFUInputStream> mBaseStream;	// 4 = 0x4
	SFUCryptor *mCryptor;	// 8 = 0x8
	long long mOffset;	// 12 = 0xc
}
- (id)initForDecryptionWithInputStream:(id)inputStream key:(id)key;	// 0x31b6ec65
- (BOOL)canSeek;	// 0x31b6ea9d
- (void)close;	// 0x31b6eab1
- (id)closeLocalStream;	// 0x31b6eaa1
- (void)dealloc;	// 0x31b6ef71
- (void)disableSystemCaching;	// 0x31b6eaf1
- (void)enableSystemCaching;	// 0x31b6ead1
- (long long)offset;	// 0x31b6ea8d
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x31b6eb89
- (void)seekToOffset:(long long)offset;	// 0x31b6eb11
@end

