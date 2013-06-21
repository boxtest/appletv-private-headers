/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface SFUCryptoUtils : NSObject {
}
+ (BOOL)checkKey:(id)key againstPassphraseVerifier:(id)verifier;	// 0x34ac6899
+ (id)decodePassphraseHint:(id)hint;	// 0x34ac6cc1
+ (id)encodePassphraseHint:(id)hint;	// 0x34ac6cad
+ (id)generatePassphraseVerifierForKey:(id)key;	// 0x34ac6365
+ (BOOL)generateRandomDataInBuffer:(char *)buffer length:(unsigned long)length;	// 0x34ac62f5
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)passphraseVerifier;	// 0x34ac6b21
+ (unsigned)iterationCountFromPassphraseVerifier:(id)passphraseVerifier;	// 0x34ac67d1
+ (unsigned)ivLengthForKey:(id)key;	// 0x34ac6341
+ (id)retainedBufferedInputStreamForDecryptingFile:(id)decryptingFile key:(id)key isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x34ac6b65
+ (id)sha1HashFromStorage:(id)storage;	// 0x34ac6ee5
+ (id)sha256HashFromData:(id)data;	// 0x34ac6d3d
+ (id)sha256HashFromStorage:(id)storage;	// 0x34ac6dd9
+ (id)sha256HashFromString:(id)string;	// 0x34ac6eb1
@end
