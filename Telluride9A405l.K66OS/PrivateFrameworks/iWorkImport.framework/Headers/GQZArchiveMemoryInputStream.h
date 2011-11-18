/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQZArchiveInputStream.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface GQZArchiveMemoryInputStream : NSObject <GQZArchiveInputStream> {
@private
	NSData *mData;	// 4 = 0x4
	char *mBytes;	// 8 = 0x8
	long long mSize;	// 12 = 0xc
}
- (id)initWithData:(id)data;	// 0x3427f721
- (const char *)dataAtOffset:(long long)offset size:(unsigned long)size end:(long long)end readSize:(unsigned *)size4;	// 0x3427f7ad
- (void)dealloc;	// 0x3427f8f5
- (void)readFromOffset:(long long)offset size:(unsigned long)size buffer:(char *)buffer;	// 0x3427f941
- (long long)size;	// 0x3427f709
@end

