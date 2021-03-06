/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSInputStream.h> // Unknown library


@interface NSInputStream (NSInputStream)
+ (id)allocWithZone:(NSZone *)zone;	// 0x310a0f85
+ (id)inputStreamWithData:(id)data;	// 0x310a0fdd
+ (id)inputStreamWithFileAtPath:(id)path;	// 0x310a101d
+ (id)inputStreamWithURL:(id)url;	// 0x310a105d
- (unsigned long)_cfTypeID;	// 0x310a110d
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x310a10c5
- (BOOL)hasBytesAvailable;	// 0x310a10e9
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x310a109d
@end

@interface NSInputStream (NSCFInputStreamAdditions)
- (XXStruct_K5nmsA)_cfStreamError;	// 0x310a12c1
@end

