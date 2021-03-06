/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPWrappedBytes : NSObject {
	unsigned long long _offset;	// 4 = 0x4
	unsigned long long _capacity;	// 12 = 0xc
	BOOL _allocatedBytes;	// 20 = 0x14
	char *_bytes;	// 24 = 0x18
	int _fd;	// 28 = 0x1c
	BOOL _useByteBuffer;	// 32 = 0x20
	unsigned long long _excessDataLength;	// 36 = 0x24
}
@property(readonly, assign) unsigned long long excessDataLength;	// G=0x301f0815; converted property
@property(assign) unsigned long long length64;	// G=0x301f079d; S=0x301f07ad; converted property
+ (id)wrappedBytesWithBytes:(void *)bytes capacity64:(unsigned long long)a64;	// 0x301f0b29
+ (id)wrappedBytesWithCapacity64:(unsigned long long)capacity64;	// 0x301f0b81
- (id)init;	// 0x301f0b11
- (id)initWithBytes:(void *)bytes capacity64:(unsigned long long)a64;	// 0x301f0925
- (id)initWithCapacity64:(unsigned long long)capacity64;	// 0x301f09ad
- (id)initWithFileDescriptor:(int)fileDescriptor capacity64:(unsigned long long)a64;	// 0x301f089d
- (unsigned long long)appendBytes:(const void *)bytes length64:(unsigned long long)a64;	// 0x301f0c7d
- (unsigned long long)appendData:(id)data;	// 0x301f0e25
- (const void *)bytes;	// 0x301f07dd
- (unsigned long long)capacity64;	// 0x301f078d
- (void)dealloc;	// 0x301f0bc5
- (id)description;	// 0x301f0a45
// converted property getter: - (unsigned long long)excessDataLength;	// 0x301f0815
// converted property getter: - (unsigned long long)length64;	// 0x301f079d
- (void *)mutableBytes;	// 0x301f07ed
- (double)percentFull;	// 0x301f0825
- (unsigned long long)setCapacity64:(unsigned long long)a64;	// 0x301f0c11
// converted property setter: - (void)setLength64:(unsigned long long)a64;	// 0x301f07ad
- (BOOL)wasInitWithFD;	// 0x301f07fd
@end

