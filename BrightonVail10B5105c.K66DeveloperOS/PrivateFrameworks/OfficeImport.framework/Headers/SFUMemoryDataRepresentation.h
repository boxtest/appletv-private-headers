/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"

@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {
	NSData *mData;	// 20 = 0x14
}
- (id)initWithData:(id)data;	// 0x37b6f0fd
- (id)initWithDataNoCopy:(id)dataNoCopy;	// 0x37b6f151
- (id)initWithDataRepresentation:(id)dataRepresentation;	// 0x37b6f1a5
- (id)bufferedInputStream;	// 0x37b6f4dd
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x37b6f531
- (id)data;	// 0x37b6f491
- (long long)dataLength;	// 0x37b6f4a5
- (void)dealloc;	// 0x37b6f445
- (BOOL)hasSameLocationAs:(id)as;	// 0x37b6f541
- (id)inputStream;	// 0x37b6f4cd
- (BOOL)isReadable;	// 0x37b6f4a1
- (unsigned long)readIntoData:(id)data;	// 0x37b6f5b1
@end
