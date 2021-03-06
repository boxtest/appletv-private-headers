/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SFUMemoryDataRepresentation : SFUDataRepresentation {
@private
	NSData *mData;	// 12 = 0xc
}
- (id)initWithData:(id)data;	// 0x313c4901
- (id)initWithDataNoCopy:(id)dataNoCopy;	// 0x313c4e49
- (id)initWithDataRepresentation:(id)dataRepresentation;	// 0x313c4b0d
- (id)bufferedInputStream;	// 0x313c4a35
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x313c4a25
- (id)data;	// 0x313c48ed
- (long long)dataLength;	// 0x313c4a99
- (void)dealloc;	// 0x313c4ac1
- (BOOL)hasSameLocationAs:(id)as;	// 0x313c49b5
- (id)inputStream;	// 0x313c4a89
- (BOOL)isReadable;	// 0x313c48fd
- (unsigned long)readIntoData:(id)data;	// 0x313c4959
@end

