/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import </libobjc.A.h>

@protocol OS_dispatch_queue;

@interface MPPipelineJPEGDecoder : NSObject {
	StackItem *stackTopBGRA;	// 4 = 0x4
	StackItem *stackTop420;	// 8 = 0x8
	StackItem *stackTopJPEG;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *stackQueueBGRA;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *stackQueue420;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *stackQueueJPEG;	// 24 = 0x18
	CFDictionaryRef acceleratorOptions;	// 28 = 0x1c
	CFDictionaryRef surfaceBGRAOptions;	// 32 = 0x20
	CGSize imageSize;	// 36 = 0x24
	unsigned requestedImageCount;	// 44 = 0x2c
	int currentBGRASurfaceCount;	// 48 = 0x30
	unsigned maxJPEGSize;	// 52 = 0x34
}
@property(assign) unsigned maxJPEGSize;	// G=0x2e33eab1; S=0x2e33eac5; @synthesize
+ (IOSurfaceAcceleratorRef)_createAccelerator;	// 0x2e33e0f1
+ (IOSurfaceAcceleratorRef)_popSurfaceAccelerator;	// 0x2e33e195
+ (void)_pushSurfaceAccelerator:(IOSurfaceAcceleratorRef)accelerator;	// 0x2e33e119
+ (id)_stackQueueTransferSession;	// 0x2e33e089
- (id)initWithSize:(CGSize)size cachedCount:(int)count;	// 0x2e33d831
- (void).cxx_destruct;	// 0x2e33eadd
- (IOSurfaceRef)_create420Surface;	// 0x2e33e249
- (IOSurfaceRef)_createBGRASurface;	// 0x2e33e3a1
- (IOSurfaceRef)_createJPEGSurface;	// 0x2e33e279
- (void)_decodeJPEG:(id)jpeg withInputSurface:(IOSurfaceRef)inputSurface toIOSurface:(IOSurfaceRef)iosurface;	// 0x2e33e925
- (id)_newImageFrom420Surface:(IOSurfaceRef)a420Surface;	// 0x2e33e851
- (IOSurfaceRef)_pop420Surface;	// 0x2e33e471
- (IOSurfaceRef)_popBGRASurface;	// 0x2e33e725
- (IOSurfaceRef)_popJPEGSurfaceOfSize:(unsigned)size;	// 0x2e33e59d
- (void)_push420Surface:(IOSurfaceRef)surface;	// 0x2e33e515
- (void)_pushBGRASurface:(IOSurfaceRef)surface;	// 0x2e33e7c9
- (void)_pushJPEGSurface:(IOSurfaceRef)surface;	// 0x2e33e69d
- (void)_receivedMemoryWarning:(id)warning;	// 0x2e33e9d5
- (BOOL)_removeBGRASurface;	// 0x2e33e3d5
- (void)dealloc;	// 0x2e33df6d
// declared property getter: - (unsigned)maxJPEGSize;	// 0x2e33eab1
- (id)newImageFrom420Data:(id)a420Data;	// 0x2e33dd69
- (id)newImageFromJPEGData:(id)jpegdata;	// 0x2e33deb1
// declared property setter: - (void)setMaxJPEGSize:(unsigned)size;	// 0x2e33eac5
@end

