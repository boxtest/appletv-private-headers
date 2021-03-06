/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUCryptoKey.h"


@interface SFUTangierCryptoKey : SFUCryptoKey {
	char *mKey;	// 8 = 0x8
	unsigned long mKeyLength;	// 12 = 0xc
}
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length;	// 0x36c8dd55
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length iterationCount:(unsigned)count;	// 0x36c8dd79
- (void)dealloc;	// 0x36c8de1d
- (const char *)keyData;	// 0x36c8de65
- (unsigned long)keyLength;	// 0x36c8de75
@end

