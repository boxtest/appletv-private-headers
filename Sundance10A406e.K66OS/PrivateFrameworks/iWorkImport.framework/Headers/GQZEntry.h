/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@protocol GQZArchiveInputStream;

@interface GQZEntry : NSObject {
	id<GQZArchiveInputStream> mInput;	// 4 = 0x4
	int mCompressionMethod;	// 8 = 0x8
	unsigned long long mCompressedSize;	// 12 = 0xc
	unsigned long long mUncompressedSize;	// 20 = 0x14
	unsigned long long mOffset;	// 28 = 0x1c
	unsigned mCrc;	// 36 = 0x24
}
- (id)initFromCentralFileHeader:(const char *)centralFileHeader inputStream:(id)stream;	// 0x3248fded
- (id)data;	// 0x3249026d
- (void)dealloc;	// 0x32490059
- (id)inputStream;	// 0x324900a5
- (void)readZip64ExtraField:(const char *)field size:(unsigned long)size;	// 0x324909b5
- (xmlDoc *)recoverXmlDocument;	// 0x324906c5
- (xmlDoc *)xmlDocument;	// 0x324903b1
- (xmlTextReader *)xmlReader:(BOOL)reader;	// 0x32490825
@end

