/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface TSUColor : NSObject <NSCopying> {
@private
	CGColorRef mCGColor;	// 4 = 0x4
}
@property(readonly, assign) CGColorRef CGColor;	// G=0x32a055b1; @synthesize=mCGColor
+ (id)blackColor;	// 0x32a0597d
+ (id)blueColor;	// 0x32a057e1
+ (id)brownColor;	// 0x32a0560d
+ (id)clearColor;	// 0x32a059bd
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x32a05abd
+ (id)colorWithCalibratedHue:(float)calibratedHue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x32a02ced
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x32a02ccd
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x32a05a6d
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x32a05a2d
+ (id)cyanColor;	// 0x32a05799
+ (id)grayColor;	// 0x32a058fd
+ (id)greenColor;	// 0x32a05829
+ (id)lightGrayColor;	// 0x32a058b9
+ (id)magentaColor;	// 0x32a05705
+ (id)orangeColor;	// 0x32a056b5
+ (id)purpleColor;	// 0x32a05669
+ (id)randomColor;	// 0x32a059f9
+ (id)redColor;	// 0x32a05871
+ (id)whiteColor;	// 0x32a0593d
+ (id)yellowColor;	// 0x32a0574d
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x32a055c1
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x32a06169
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x32a06119
// declared property getter: - (CGColorRef)CGColor;	// 0x32a055b1
- (float)alphaComponent;	// 0x32a05f15
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x32a05b85
- (float)blueComponent;	// 0x32a05f31
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x32a05db9
- (id)copy;	// 0x32a02c7d
- (id)copyWithZone:(NSZone *)zone;	// 0x32a06011
- (void)dealloc;	// 0x32a060d9
- (id)grayscaleColor;	// 0x32a05e6d
- (float)greenComponent;	// 0x32a05f45
- (unsigned)hash;	// 0x32a060bd
- (id)invertedColor;	// 0x32a05dfd
- (BOOL)isEqual:(id)equal;	// 0x32a0603d
- (BOOL)isOpaque;	// 0x32a05cf9
- (float)luminance;	// 0x32a05d29
- (float)p_rgbComponentWithIndex:(unsigned char)index;	// 0x32a05f6d
- (void)paintPath:(CGPathRef)path inContext:(CGContextRef)context;	// 0x32a05af9
- (void)paintRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x32a05b35
- (float)redComponent;	// 0x32a05f59
- (void)set;	// 0x32a02c79
@end

