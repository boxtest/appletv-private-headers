/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface IndexData : NSObject {
@private
	int flags;	// 4 = 0x4
	int ivSize;	// 8 = 0x8
	NSArray *chunkList;	// 12 = 0xc
}
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x3071c49c
- (void)dealloc;	// 0x3071c43c
- (id)getChunks;	// 0x3071c428
- (int)getFlags;	// 0x3071c400
- (int)getIVSize;	// 0x3071c414
@end

