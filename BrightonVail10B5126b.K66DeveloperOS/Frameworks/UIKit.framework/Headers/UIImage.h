/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class _UIDecompressionInfo, CIImage, NSArray;

@interface UIImage : NSObject <NSCoding> {
	void *_imageRef;	// 4 = 0x4
	float _scale;	// 8 = 0x8
	struct {
		unsigned named : 1;
		unsigned imageOrientation : 3;
		unsigned cached : 1;
		unsigned hasPattern : 1;
		unsigned isCIImage : 1;
		unsigned imageSetIdentifer : 16;
	} _imageFlags;	// 12 = 0xc
	_UIDecompressionInfo *_decompressionInfo;	// 16 = 0x10
	UIEdgeInsets _alignmentRectInsets;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGImageRef CGImage;	// G=0x32aec0b1; 
@property(readonly, assign, nonatomic) CIImage *CIImage;	// G=0x32afeccd; 
@property(readonly, assign, nonatomic) UIEdgeInsets alignmentRectInsets;	// G=0x32b0a6e9; @synthesize=_alignmentRectInsets
@property(readonly, assign, nonatomic) UIEdgeInsets capInsets;	// G=0x32aec5f1; 
@property(readonly, assign, nonatomic) double duration;	// G=0x32aff2b9; 
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x32aec61d; 
@property(readonly, assign, nonatomic) NSArray *images;	// G=0x32b114e9; 
@property(readonly, assign, nonatomic) int leftCapWidth;	// G=0x32afec55; 
@property(readonly, assign, nonatomic) int resizingMode;	// G=0x32cbe025; 
@property(readonly, assign, nonatomic) float scale;	// G=0x32aec039; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x32aebed1; 
@property(readonly, assign, nonatomic) int topCapHeight;	// G=0x32afec91; 
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier format:(int)format;	// 0x32cbf821
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier format:(int)format scale:(float)scale;	// 0x32c78c65
+ (id)_backgroundGradientWithStartColor:(id)startColor andEndColor:(id)color;	// 0x32ba5f45
+ (id)_cachedImageForKey:(id)key fromBlock:(id)block;	// 0x32bb4d7d
+ (id)_defaultBackgroundGradient;	// 0x32ba5e0d
+ (id)_deviceSpecificImageNamed:(id)named;	// 0x32b7dfe9
+ (id)_deviceSpecificImageNamed:(id)named inBundle:(id)bundle;	// 0x32cbe93d
+ (void)_flushCache:(id)cache;	// 0x32b6e0ad
+ (void)_flushSharedImageCache;	// 0x32b6ed31
+ (id)_iconForResourceProxy:(id)resourceProxy format:(int)format;	// 0x32cbf84d
+ (id)_iconForResourceProxy:(id)resourceProxy variant:(int)variant variantsScale:(float)scale;	// 0x32c78ed5
+ (int)_iconVariantForUIApplicationIconFormat:(int)uiapplicationIconFormat scale:(float *)scale;	// 0x32c78cdd
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint effectsImage:(id)image maskImage:(id)image4 style:(int)style;	// 0x32bae585
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint maskImage:(id)image effectsImage:(id)image4 style:(int)style;	// 0x32ba3675
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint maskImage:(id)image effectsImage:(id)image4 style:(int)style edgeInsets:(UIEdgeInsets)insets;	// 0x32d76f65
+ (id)animatedImageNamed:(id)named duration:(double)duration;	// 0x32cbe02d
+ (id)animatedImageWithImages:(id)images duration:(double)duration;	// 0x32cbe3d9
+ (id)animatedResizableImageNamed:(id)named capInsets:(UIEdgeInsets)insets duration:(double)duration;	// 0x32cbe32d
+ (id)animatedResizableImageNamed:(id)named capInsets:(UIEdgeInsets)insets resizingMode:(int)mode duration:(double)duration;	// 0x32cbe375
+ (id)applicationImageNamed:(id)named;	// 0x32cbe4bd
+ (id)imageAtPath:(id)path;	// 0x32cbe9cd
+ (id)imageFromAlbumArtData:(id)albumArtData height:(int)height width:(int)width bytesPerRow:(int)row cache:(BOOL)cache;	// 0x32cbe659
+ (id)imageNamed:(id)named;	// 0x32af6b61
+ (id)imageNamed:(id)named inBundle:(id)bundle;	// 0x32af880d
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x32c2de4d
+ (id)imageWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x32afa1cd
+ (id)imageWithCIImage:(id)ciimage;	// 0x32cbd951
+ (id)imageWithCIImage:(id)ciimage scale:(float)scale orientation:(int)orientation;	// 0x32cbd999
+ (id)imageWithContentsOfCPBitmapFile:(id)cpbitmapFile flags:(int)flags;	// 0x32cbe745
+ (id)imageWithContentsOfFile:(id)file;	// 0x32b408a9
+ (id)imageWithData:(id)data;	// 0x32cbd8b9
+ (id)imageWithData:(id)data scale:(float)scale;	// 0x32cbd901
+ (void)initialize;	// 0x32b3e571
+ (id)kitImageNamed:(id)named;	// 0x32b35e9d
+ (void)setPreferredSharedImageScale:(float)scale;	// 0x32cbe9c5
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x32c2de99
- (id)initWithCGImage:(CGImageRef)cgimage imageOrientation:(int)orientation;	// 0x32bb1091
- (id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x32afa225
- (id)initWithCIImage:(id)ciimage;	// 0x32cbd9ed
- (id)initWithCIImage:(id)ciimage scale:(float)scale orientation:(int)orientation;	// 0x32cbda55
- (id)initWithCoder:(id)coder;	// 0x32cad091
- (id)initWithContentsOfFile:(id)file;	// 0x32b408f5
- (id)initWithContentsOfFile:(id)file cache:(BOOL)cache;	// 0x32cbe4c9
- (id)initWithData:(id)data;	// 0x32b786d9
- (id)initWithData:(id)data cache:(BOOL)cache;	// 0x32cbe9d9
- (id)initWithData:(id)data scale:(float)scale;	// 0x32c64f0d
- (id)initWithIOSurface:(IOSurfaceRef)iosurface;	// 0x32cbe645
// declared property getter: - (CGImageRef)CGImage;	// 0x32aec0b1
// declared property getter: - (id)CIImage;	// 0x32afeccd
- (id)_applicationIconImageForFormat:(int)format precomposed:(BOOL)precomposed;	// 0x32cbf8c5
- (id)_applicationIconImageForFormat:(int)format precomposed:(BOOL)precomposed scale:(float)scale;	// 0x32cbf919
- (id)_automationID;	// 0x32cbe4b5
- (id)_bezeledImageWithShadowRed:(float)shadowRed green:(float)green blue:(float)blue alpha:(float)alpha fillRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 drawShadow:(BOOL)shadow;	// 0x32b08fdd
- (BOOL)_canEncodeWithName:(id)name;	// 0x32cbdb01
- (CGRect)_contentStretchInPixels;	// 0x32aff51d
- (void)_decompressionComplete;	// 0x32cbcf31
- (void)_decompressionFallbackImageCreation;	// 0x32cbcf91
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)exteriorShadowRed green:(float)green blue:(float)blue alpha:(float)alpha interiorShadowRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 fillRed:(float)red9 green:(float)green10 blue:(float)blue11 alpha:(float)alpha12;	// 0x32cbf4bd
- (void)_encodeDataWithCoder:(id)coder imageName:(id)name;	// 0x32cbdb3d
- (void)_encodePropertiesWithCoder:(id)coder;	// 0x32cbddd5
- (id)_flatImageWithWhite:(float)white alpha:(float)alpha;	// 0x32cbf3dd
- (id)_imageScaledToProportion:(float)proportion interpolationQuality:(int)quality;	// 0x32c6e1b1
- (int)_imageSetIdentifier;	// 0x32cbf3b1
- (id)_initWithData:(id)data immediateLoadWithMaxSize:(CGSize)maxSize scale:(float)scale renderingIntent:(int)intent;	// 0x32cbd4ed
- (id)_initWithData:(id)data preserveScale:(BOOL)scale;	// 0x32cbe621
- (id)_initWithData:(id)data preserveScale:(BOOL)scale cache:(BOOL)cache;	// 0x32cbe56d
- (id)_initWithData:(id)data scale:(float)scale;	// 0x32b786a5
- (id)_initWithIOSurface:(IOSurfaceRef)iosurface imageOrientation:(int)orientation;	// 0x32c729bd
- (id)_initWithIOSurface:(IOSurfaceRef)iosurface scale:(float)scale orientation:(int)orientation;	// 0x32afa6e1
- (id)_initWithOtherImage:(id)otherImage;	// 0x32baa771
- (BOOL)_isCached;	// 0x32af6dad
- (BOOL)_isDecompressing;	// 0x32b3e755
- (BOOL)_isInvisible;	// 0x32b45021
- (BOOL)_isNamed;	// 0x32afa5ad
- (BOOL)_isResizable;	// 0x32afe751
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)size;	// 0x32aec615
- (CGColorRef)_patternColor;	// 0x32b8cb0d
- (void)_preheatBitmapData;	// 0x32cbf849
- (id)_resizableImageWithCapMask:(int)capMask;	// 0x32cbf9b9
- (void)_saveDecompressedImage:(CGImageRef)image;	// 0x32cbd02d
- (id)_selectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x32b79fb9
- (id)_serializedData;	// 0x32cbf791
- (void)_setAlignmentRectInsets:(UIEdgeInsets)insets;	// 0x32b0a711
- (void)_setAlwaysStretches:(BOOL)stretches;	// 0x32cbe021
- (void)_setCached:(BOOL)cached;	// 0x32afb0b9
- (void)_setImageSetIdentifier:(int)identifier;	// 0x32afded1
- (void)_setNamed:(BOOL)named;	// 0x32afb091
- (void)_startEagerDecompression;	// 0x32cbd069
- (id)_stretchableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x32b0a52d
- (id)_subimageInRect:(CGRect)rect;	// 0x32cfa849
- (CGColorRef)_tiledPatternColor;	// 0x32b8c861
- (id)_unselectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x32b79d4d
// declared property getter: - (UIEdgeInsets)alignmentRectInsets;	// 0x32b0a6e9
// declared property getter: - (UIEdgeInsets)capInsets;	// 0x32aec5f1
- (void)compositeToPoint:(CGPoint)point fromRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x32c41351
- (void)compositeToPoint:(CGPoint)point operation:(int)operation;	// 0x32c55d71
- (void)compositeToPoint:(CGPoint)point operation:(int)operation fraction:(float)fraction;	// 0x32c55d99
- (void)compositeToRect:(CGRect)rect fromRect:(CGRect)rect2 operation:(int)operation fraction:(float)fraction;	// 0x32b62f51
- (id)copyWithZone:(NSZone *)zone;	// 0x32cbe011
- (void)dealloc;	// 0x32afa459
- (void)draw1PartImageInRect:(CGRect)rect;	// 0x32cbf20d
- (void)draw1PartImageInRect:(CGRect)rect fraction:(float)fraction;	// 0x32cbf24d
- (void)draw1PartImageInRect:(CGRect)rect fraction:(float)fraction operation:(int)operation;	// 0x32c9cab1
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect;	// 0x32c40fad
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect fraction:(float)fraction;	// 0x32cbf17d
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x32c9ca1d
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect;	// 0x32cbea75
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect fraction:(float)fraction;	// 0x32cbef79
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x32cbf079
- (void)drawAsPatternInRect:(CGRect)rect;	// 0x32cbe451
- (void)drawAtPoint:(CGPoint)point;	// 0x32b8ae11
- (void)drawAtPoint:(CGPoint)point blendMode:(int)mode alpha:(float)alpha;	// 0x32aebe5d
- (void)drawInRect:(CGRect)rect;	// 0x32b35771
- (void)drawInRect:(CGRect)rect blendMode:(int)mode alpha:(float)alpha;	// 0x32aec13d
// declared property getter: - (double)duration;	// 0x32aff2b9
- (void)encodeWithCoder:(id)coder;	// 0x32cbdef9
// declared property getter: - (int)imageOrientation;	// 0x32aec61d
- (CGImageRef)imageRef;	// 0x32c4d45d
- (id)imageWithAlignmentRectInsets:(UIEdgeInsets)alignmentRectInsets;	// 0x32baa6f5
// declared property getter: - (id)images;	// 0x32b114e9
- (IOSurfaceRef)ioSurface;	// 0x32bae629
// declared property getter: - (int)leftCapWidth;	// 0x32afec55
- (id)patternColor;	// 0x32c65471
- (id)resizableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x32b0a56d
- (id)resizableImageWithCapInsets:(UIEdgeInsets)capInsets resizingMode:(int)mode;	// 0x32b0a599
// declared property getter: - (int)resizingMode;	// 0x32cbe025
// declared property getter: - (float)scale;	// 0x32aec039
// declared property getter: - (CGSize)size;	// 0x32aebed1
- (id)stretchableImageWithLeftCapWidth:(int)leftCapWidth topCapHeight:(int)height;	// 0x32b0a485
// declared property getter: - (int)topCapHeight;	// 0x32afec91
- (BOOL)writeToCPBitmapFile:(id)cpbitmapFile flags:(int)flags;	// 0x32cbe831
@end

