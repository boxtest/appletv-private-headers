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
@property(assign) unsigned long fileType;	// G=0x3692d309; S=0x3692d331; converted property
- (id)initWithInputStream:(id)inputStream cryptoKey:(id)key dataLength:(long long)length;	// 0x3692d181
- (id)initWithPath:(id)path;	// 0x3692d061
- (id)initWithPath:(id)path cryptoKey:(id)key dataLength:(long long)length;	// 0x3692d0b5
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor;	// 0x3692d089
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor cryptoKey:(id)key dataLength:(long long)length;	// 0x3692d0e1
- (long long)dataLength;	// 0x3692d4f5
- (void)dealloc;	// 0x3692d1fd
- (void)deleteFileWhenDone;	// 0x3692d7a1
- (id)description;	// 0x3692d2b1
- (long long)encodedLength;	// 0x3692d52d
// converted property getter: - (unsigned long)fileType;	// 0x3692d309
- (BOOL)hasSameLocationAs:(id)as;	// 0x3692d729
- (id)inputStream;	// 0x3692d5b9
- (BOOL)isCryptoKeyIdenticalToKey:(id)key;	// 0x3692d571
- (BOOL)isEncrypted;	// 0x3692d559
- (BOOL)isReadable;	// 0x3692d4d9
- (id)path;	// 0x3692d2f9
- (void)readFileAttributes;	// 0x3692d7b5
// converted property setter: - (void)setFileType:(unsigned long)type;	// 0x3692d331
@end
