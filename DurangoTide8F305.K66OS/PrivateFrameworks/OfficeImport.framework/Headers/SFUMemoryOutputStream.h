/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUOutputStream.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SFUMemoryOutputStream : NSObject <SFUOutputStream> {
@private
	NSMutableData *mData;	// 4 = 0x4
}
- (id)initWithData:(id)data;	// 0x3464ad8d
- (BOOL)canCreateInputStream;	// 0x3464acbd
- (BOOL)canSeek;	// 0x3464acb9
- (void)close;	// 0x3464acc5
- (id)closeLocalStream;	// 0x3464acc9
- (void)dealloc;	// 0x3464adc5
- (id)inputStream;	// 0x3464acc1
- (long long)offset;	// 0x3464accd
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x3464acf5
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x3464ad6d
@end
