/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface BRImage : XXUnknownSuperclass {
	CGImageRef _image;	// 4 = 0x4
	CGImageSourceRef _imageSource;	// 8 = 0x8
	float _imageWidth;	// 12 = 0xc
	float _imageHeight;	// 16 = 0x10
	int _imageOrientation;	// 20 = 0x14
	BOOL _enableCache;	// 24 = 0x18
	NSURL *_imageURL;	// 28 = 0x1c
	NSData *_imageData;	// 32 = 0x20
	BOOL _imageBufferInMemory;	// 36 = 0x24
	BOOL _rotationEnabled;	// 37 = 0x25
}
@property(assign) BOOL enableCache;	// G=0x27a531; S=0x27a501; converted property
@property(readonly, assign) CGImageRef image;	// G=0x27a355; converted property
@property(readonly, assign, getter=isImageBufferInMemory) BOOL imageBufferInMemory;	// G=0x27ac89; converted property
@property(readonly, assign, nonatomic) int orientation;	// G=0x27ac99; @synthesize=_imageOrientation
@property(readonly, assign, nonatomic) BOOL rotationEnabled;	// G=0x27aca9; @synthesize=_rotationEnabled
+ (id)imageWithCGImageRef:(CGImageRef)cgimageRef;	// 0x279be5
+ (id)imageWithData:(id)data;	// 0x279ba1
+ (id)imageWithName:(id)name ofType:(id)type inBundle:(id)bundle;	// 0x279d11
+ (id)imageWithPDFURL:(id)pdfurl;	// 0x279c29
+ (id)imageWithPath:(id)path;	// 0x279b35
+ (id)imageWithRotationFromData:(id)data;	// 0x279e05
+ (id)imageWithRotationFromPath:(id)path;	// 0x279dc1
+ (id)imageWithRotationFromURL:(id)url;	// 0x279d69
+ (id)imageWithURL:(id)url;	// 0x279af1
- (id)initWithCGImageRef:(CGImageRef)cgimageRef;	// 0x279e5d
- (id)initWithData:(id)data;	// 0x27a0d9
- (id)initWithURL:(id)url;	// 0x279f31
- (id)_initWithCGImageSourceRotationEnabled:(CGImageSourceRef)cgimageSourceRotationEnabled;	// 0x27acb9
- (void)_initializeCGImageWithRotation;	// 0x27ae09
- (float)aspectRatio;	// 0x27a45d
- (id)croppedImageForSize:(CGSize)size;	// 0x27a8d5
- (void)dealloc;	// 0x27a291
- (id)deletterboxedImage;	// 0x27a541
- (void)drawImageInContext:(CGContextRef)context rect:(CGRect)rect;	// 0x27a321
// converted property getter: - (BOOL)enableCache;	// 0x27a531
// converted property getter: - (CGImageRef)image;	// 0x27a355
- (BOOL)isAccessibilityElement;	// 0x27a801
// converted property getter: - (BOOL)isImageBufferInMemory;	// 0x27ac89
- (BOOL)isPowerOfTwo;	// 0x27a499
- (CGRect)largestSquareRect;	// 0x27aae1
- (id)mapImageWithSourceRect:(CGRect)sourceRect toSize:(CGSize)size;	// 0x27a81d
// declared property getter: - (int)orientation;	// 0x27ac99
- (CGSize)pixelBounds;	// 0x27a429
- (void)purgeRawData;	// 0x397ccd
- (id)rawData;	// 0x397cc9
// declared property getter: - (BOOL)rotationEnabled;	// 0x27aca9
// converted property setter: - (void)setEnableCache:(BOOL)cache;	// 0x27a501
- (BOOL)sourceRequiresRotation;	// 0x27a4e5
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)aspectRatioLimit;	// 0x27aba5
@end
