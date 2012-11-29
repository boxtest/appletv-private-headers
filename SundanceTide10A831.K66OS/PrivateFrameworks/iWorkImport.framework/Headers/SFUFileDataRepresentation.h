/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUDataRepresentation.h"

@class NSString, SFUCryptoKey;
@protocol SFUInputStream;

@interface SFUFileDataRepresentation : SFUDataRepresentation {
	NSString *mPath;	// 20 = 0x14
	int mSharedFd;	// 24 = 0x18
	long long mFileLength;	// 28 = 0x1c
	unsigned long mFileType;	// 36 = 0x24
	BOOL mHasFileAttributes;	// 40 = 0x28
	long long mPlaintextDataLength;	// 44 = 0x2c
	SFUCryptoKey *mCryptoKey;	// 52 = 0x34
	id<SFUInputStream> mInputStream;	// 56 = 0x38
	BOOL mDeleteFileWhenDone;	// 60 = 0x3c
}
@property(assign) unsigned long fileType;	// G=0x35d6c309; S=0x35d6c331; converted property
- (id)initWithInputStream:(id)inputStream cryptoKey:(id)key dataLength:(long long)length;	// 0x35d6c181
- (id)initWithPath:(id)path;	// 0x35d6c061
- (id)initWithPath:(id)path cryptoKey:(id)key dataLength:(long long)length;	// 0x35d6c0b5
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor;	// 0x35d6c089
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor cryptoKey:(id)key dataLength:(long long)length;	// 0x35d6c0e1
- (long long)dataLength;	// 0x35d6c4f5
- (void)dealloc;	// 0x35d6c1fd
- (void)deleteFileWhenDone;	// 0x35d6c7a1
- (id)description;	// 0x35d6c2b1
- (long long)encodedLength;	// 0x35d6c52d
// converted property getter: - (unsigned long)fileType;	// 0x35d6c309
- (BOOL)hasSameLocationAs:(id)as;	// 0x35d6c729
- (id)inputStream;	// 0x35d6c5b9
- (BOOL)isCryptoKeyIdenticalToKey:(id)key;	// 0x35d6c571
- (BOOL)isEncrypted;	// 0x35d6c559
- (BOOL)isReadable;	// 0x35d6c4d9
- (id)path;	// 0x35d6c2f9
- (void)readFileAttributes;	// 0x35d6c7b5
// converted property setter: - (void)setFileType:(unsigned long)type;	// 0x35d6c331
@end
