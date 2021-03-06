/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIHoleDistortion : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x2d751ab9; S=0x2d751ac9; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d751a99; S=0x2d751aa9; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius;	// G=0x2d751ad9; S=0x2d751ae9; @synthesize
+ (id)customAttributes;	// 0x2d750af9
- (id)_colorKernel;	// 0x2d751005
- (id)_geomKernel;	// 0x2d750e49
- (BOOL)_isIdentity;	// 0x2d750e01
- (CGRect)computeDOD;	// 0x2d7511f1
// declared property getter: - (id)inputCenter;	// 0x2d751ab9
// declared property getter: - (id)inputImage;	// 0x2d751a99
// declared property getter: - (id)inputRadius;	// 0x2d751ad9
- (id)outputImage;	// 0x2d751641
- (void)setDefaults;	// 0x2d750d79
// declared property setter: - (void)setInputCenter:(id)center;	// 0x2d751ac9
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d751aa9
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x2d751ae9
@end

