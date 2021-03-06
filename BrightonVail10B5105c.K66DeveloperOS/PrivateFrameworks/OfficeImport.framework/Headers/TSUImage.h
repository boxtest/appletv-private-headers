/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class UIImage;

@interface TSUImage : NSObject {
	CGImageRef mCGImage;	// 4 = 0x4
	CGSize mSize;	// 8 = 0x8
	float mScale;	// 16 = 0x10
	int mOrientation;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGImageRef CGImage;	// G=0x3797237d; @synthesize=mCGImage
@property(readonly, assign, nonatomic) UIImage *UIImage;	// G=0x37b7def1; 
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x37b7de3d; @synthesize=mOrientation
@property(readonly, assign, nonatomic) float scale;	// G=0x37972351; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x379722c9; 
+ (id)imageNamed:(id)named;	// 0x37b7da7d
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x37b7db31
+ (id)imageWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x37b7db6d
+ (id)imageWithContentsOfFile:(id)file;	// 0x37b7dab9
+ (id)imageWithData:(id)data;	// 0x37b7daf5
+ (id)imageWithUIImage:(id)uiimage;	// 0x37b7de4d
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x37b7dd35
- (id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x37971fd1
- (id)initWithContentsOfFile:(id)file;	// 0x37b7dbb5
- (id)initWithData:(id)data;	// 0x37971e3d
- (id)initWithImageSourceRef:(CGImageSourceRef)imageSourceRef;	// 0x37971f19
- (id)initWithUIImage:(id)uiimage;	// 0x37b7de89
// declared property getter: - (CGImageRef)CGImage;	// 0x3797237d
- (id)JPEGRepresentationWithCompressionQuality:(float)compressionQuality;	// 0x37b7dd6d
- (id)PNGRepresentation;	// 0x37b7dd59
// declared property getter: - (id)UIImage;	// 0x37b7def1
- (void)dealloc;	// 0x379737e9
- (void)drawInRect:(CGRect)rect fromRect:(CGRect)rect2 isFlipped:(BOOL)flipped;	// 0x37972081
// declared property getter: - (int)imageOrientation;	// 0x37b7de3d
- (BOOL)isEmpty;	// 0x37b7dd81
// declared property getter: - (float)scale;	// 0x37972351
// declared property getter: - (CGSize)size;	// 0x379722c9
@end

