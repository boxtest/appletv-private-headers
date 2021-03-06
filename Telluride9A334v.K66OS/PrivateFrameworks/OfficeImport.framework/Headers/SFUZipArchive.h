/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class SFUDataRepresentation, NSString, NSMutableDictionary, SFUCryptoKey, NSData;
@protocol SFUZipArchiveDataRepresentation;

__attribute__((visibility("hidden")))
@interface SFUZipArchive : NSObject {
@private
	NSMutableDictionary *mEntries;	// 4 = 0x4
	SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;	// 8 = 0x8
	NSData *mPassphraseVerifier;	// 12 = 0xc
	NSString *mPassphraseHint;	// 16 = 0x10
	SFUCryptoKey *mCryptoKey;	// 20 = 0x14
	NSData *mEncryptedDocumentUuid;	// 24 = 0x18
}
+ (BOOL)isZipArchiveAtPath:(id)path;	// 0x357c3dd5
- (id)initWithData:(id)data collapseCommonRootDirectory:(BOOL)directory;	// 0x356beb79
- (id)initWithPath:(id)path collapseCommonRootDirectory:(BOOL)directory;	// 0x3566244d
- (id)allEntryNames;	// 0x357c3d31
- (void)collapseCommonRootDirectory;	// 0x357c3e79
- (void)dealloc;	// 0x356815d5
- (id)encryptedDocumentUuid;	// 0x357c3ce9
- (id)entryWithName:(id)name;	// 0x35664b99
- (id)entryWithName:(id)name dataLength:(long long)length;	// 0x357c3cf9
- (BOOL)isEncrypted;	// 0x357c3cb1
- (id)passphraseHint;	// 0x357c3cd9
- (id)passphraseVerifier;	// 0x357c3cc9
- (SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)inputStream;	// 0x35663661
- (void)readEntries;	// 0x35662991
- (void)readExtraFieldFromBuffer:(const char *)buffer size:(unsigned long)size entry:(id)entry;	// 0x35690b45
- (id)readFilenameFromBuffer:(const char *)buffer size:(unsigned long)size;	// 0x35664541
- (SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)inputStream eocdOffset:(long long)offset;	// 0x357c42b5
- (SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)inputStream offset:(long long)offset;	// 0x357c416d
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)inputStream offset:(long long *)offset;	// 0x357c442d
- (void)setCryptoKey:(id)key;	// 0x357c3d51
@end

