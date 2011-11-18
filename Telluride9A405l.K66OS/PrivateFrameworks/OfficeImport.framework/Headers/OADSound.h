/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedMedia.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OADSound : OCDDelayedMedia {
@private
	NSData *mSoundData;	// 12 = 0xc
	NSString *mName;	// 16 = 0x10
	int mSizeInBytes;	// 20 = 0x14
}
@property(retain) id name;	// G=0x30e8f61d; S=0x30dbaa11; converted property
@property(assign) long sizeInBytes;	// G=0x30e8f62d; S=0x30e8f63d; converted property
@property(retain) id soundData;	// G=0x30e8f60d; S=0x30e8f699; converted property
- (id)init;	// 0x30dba9e5
- (void)dealloc;	// 0x30dbaa55
- (bool)isLoaded;	// 0x30e8f64d
// converted property getter: - (id)name;	// 0x30e8f61d
// converted property setter: - (void)setName:(id)name;	// 0x30dbaa11
// converted property setter: - (void)setSizeInBytes:(long)bytes;	// 0x30e8f63d
// converted property setter: - (void)setSoundData:(id)data;	// 0x30e8f699
// converted property getter: - (long)sizeInBytes;	// 0x30e8f62d
// converted property getter: - (id)soundData;	// 0x30e8f60d
@end

