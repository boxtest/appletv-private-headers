/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVCaptureStillImageRequest : NSObject <NSCopying> {
	id _sbufCompletionBlock;	// 4 = 0x4
	id _iosurfaceCompletionBlock;	// 8 = 0x8
	int _stillImageOrientation;	// 12 = 0xc
	BOOL _stillImageMirrored;	// 16 = 0x10
	CGSize _previewImageSize;	// 20 = 0x14
	unsigned long _imageDataFormatType;	// 28 = 0x1c
	BOOL _isHDRImage;	// 32 = 0x20
	BOOL _isEV0Image;	// 33 = 0x21
	BOOL _chromaNoiseReductionEnabled;	// 34 = 0x22
	BOOL _suspendsVideoProcessing;	// 35 = 0x23
}
@property(assign) BOOL chromaNoiseReductionEnabled;	// G=0x326de1c1; S=0x326de1d1; @synthesize=_chromaNoiseReductionEnabled
@property(assign) unsigned long imageDataFormatType;	// G=0x326de0b1; S=0x326de0c1; @synthesize=_imageDataFormatType
@property(copy) id iosurfaceCompletionBlock;	// G=0x326de149; S=0x326de15d; @synthesize=_iosurfaceCompletionBlock
@property(assign) BOOL isEV0Image;	// G=0x326de1a1; S=0x326de1b1; @synthesize=_isEV0Image
@property(assign) BOOL isHDRImage;	// G=0x326de181; S=0x326de191; @synthesize=_isHDRImage
@property(assign) CGSize previewImageSize;	// G=0x326de081; S=0x326de09d; @synthesize=_previewImageSize
@property(copy) id sbufCompletionBlock;	// G=0x326de111; S=0x326de125; @synthesize=_sbufCompletionBlock
@property(assign, getter=isStillImageMirrored) BOOL stillImageMirrored;	// G=0x326de0d1; S=0x326de0e1; @synthesize=_stillImageMirrored
@property(assign) int stillImageOrientation;	// G=0x326de0f1; S=0x326de101; @synthesize=_stillImageOrientation
@property(assign) BOOL suspendsVideoProcessing;	// G=0x326de1e1; S=0x326de1f1; @synthesize=_suspendsVideoProcessing
+ (id)request;	// 0x326dde11
// declared property getter: - (BOOL)chromaNoiseReductionEnabled;	// 0x326de1c1
- (id)copyWithZone:(NSZone *)zone;	// 0x326dde55
- (void)dealloc;	// 0x326de029
// declared property getter: - (unsigned long)imageDataFormatType;	// 0x326de0b1
// declared property getter: - (id)iosurfaceCompletionBlock;	// 0x326de149
// declared property getter: - (BOOL)isEV0Image;	// 0x326de1a1
// declared property getter: - (BOOL)isHDRImage;	// 0x326de181
// declared property getter: - (BOOL)isStillImageMirrored;	// 0x326de0d1
// declared property getter: - (CGSize)previewImageSize;	// 0x326de081
// declared property getter: - (id)sbufCompletionBlock;	// 0x326de111
// declared property setter: - (void)setChromaNoiseReductionEnabled:(BOOL)enabled;	// 0x326de1d1
// declared property setter: - (void)setImageDataFormatType:(unsigned long)type;	// 0x326de0c1
// declared property setter: - (void)setIosurfaceCompletionBlock:(id)block;	// 0x326de15d
// declared property setter: - (void)setIsEV0Image:(BOOL)image;	// 0x326de1b1
// declared property setter: - (void)setIsHDRImage:(BOOL)image;	// 0x326de191
// declared property setter: - (void)setPreviewImageSize:(CGSize)size;	// 0x326de09d
// declared property setter: - (void)setSbufCompletionBlock:(id)block;	// 0x326de125
// declared property setter: - (void)setStillImageMirrored:(BOOL)mirrored;	// 0x326de0e1
// declared property setter: - (void)setStillImageOrientation:(int)orientation;	// 0x326de101
// declared property setter: - (void)setSuspendsVideoProcessing:(BOOL)processing;	// 0x326de1f1
// declared property getter: - (int)stillImageOrientation;	// 0x326de0f1
// declared property getter: - (BOOL)suspendsVideoProcessing;	// 0x326de1e1
@end
