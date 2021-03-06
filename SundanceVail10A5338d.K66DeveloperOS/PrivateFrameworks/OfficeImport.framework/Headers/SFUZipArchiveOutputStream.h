/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUSimpleOutputStream.h"
#import <NSObject.h> // Unknown library

@class SFUZipFreeSpaceEntry, SFUMoveableFileOutputStream, NSMutableArray, NSData, SFUCryptoKey, SFUZipOutputEntry;
@protocol SFUOutputStream;

@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {
	SFUMoveableFileOutputStream *mOutputStream;	// 4 = 0x4
	SFUCryptoKey *mCryptoKey;	// 8 = 0x8
	NSData *mPassphraseHint;	// 12 = 0xc
	NSData *mEncryptedDocumentUuid;	// 16 = 0x10
	NSMutableArray *mEntries;	// 20 = 0x14
	SFUZipOutputEntry *mCurrentEntry;	// 24 = 0x18
	SFUZipOutputEntry *mLastEntryInFile;	// 28 = 0x1c
	id<SFUOutputStream> mEntryOutputStream;	// 32 = 0x20
	char *mBuffer;	// 36 = 0x24
	NSMutableArray *mFreeList;	// 40 = 0x28
	SFUZipFreeSpaceEntry *mCurrentFreeSpace;	// 44 = 0x2c
	unsigned long long mFreeBytes;	// 48 = 0x30
}
+ (unsigned long)approximateBytesForEntryHeaderWithName:(id)name;	// 0x33c20cf9
- (id)initWithOutputStream:(id)outputStream cryptoKey:(id)key passphraseHint:(id)hint;	// 0x33c20d29
- (id)initWithPath:(id)path;	// 0x33c20f61
- (id)initWithPath:(id)path cryptoKey:(id)key passphraseHint:(id)hint;	// 0x33c20f81
- (void)beginEntryWithName:(id)name isCompressed:(BOOL)compressed uncompressedSize:(unsigned long long)size;	// 0x33c21195
- (id)beginUncompressedUnknownSizeEntryWithName:(id)name;	// 0x33c216b1
- (void)beginUnknownSizeEntryWithName:(id)name isCompressed:(BOOL)compressed;	// 0x33c21689
- (BOOL)canRemoveEntryWithName:(id)name;	// 0x33c21929
- (void)close;	// 0x33c22005
- (void)coalesceAndTruncateFreeSpace;	// 0x33c23489
- (unsigned)crc32ForEntry:(id)entry;	// 0x33c22a49
- (void)dealloc;	// 0x33c210bd
- (id)entriesAtPath:(id)path;	// 0x33c22741
- (id)entryNames;	// 0x33c22699
- (void)finishEntry;	// 0x33c22b51
- (void)flush;	// 0x33c22955
- (unsigned long long)freeBytes;	// 0x33c22975
- (void)moveToPath:(id)path;	// 0x33c22479
- (void)removeEntryWithName:(id)name;	// 0x33c21a9d
- (void)reset;	// 0x33c2298d
- (void)setCrc32ForCurrentEntry:(unsigned)currentEntry;	// 0x33c217ad
- (void)setEncryptedDocumentUuid:(id)uuid;	// 0x33c21f89
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x33c217e1
- (void)writeCentralFileHeaderUsingEntry:(id)entry isFirstEntry:(BOOL)entry2;	// 0x33c23b01
- (void)writeEndOfCentralDirectoryWithOffset:(long long)offset;	// 0x33c24079
- (unsigned)writeLocalFileHeaderForEntry:(id)entry;	// 0x33c23889
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)offset;	// 0x33c24301
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)offset;	// 0x33c241dd
@end

