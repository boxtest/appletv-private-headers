/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBumpDistortionLinear : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
	NSNumber *inputAngle;	// 48 = 0x30
	NSNumber *inputScale;	// 52 = 0x34
}
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x33d08341; S=0x33d08355; @synthesize
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x33d082d5; S=0x33d082e9; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x33d082b5; S=0x33d082c5; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x33d082f9; S=0x33d0830d; @synthesize
@property(copy, nonatomic) NSNumber *inputScale;	// G=0x33d0831d; S=0x33d08331; @synthesize
+ (id)customAttributes;	// 0x33d070c9
- (id)_kernel;	// 0x33d07539
// declared property getter: - (id)inputAngle;	// 0x33d08341
// declared property getter: - (id)inputCenter;	// 0x33d082d5
// declared property getter: - (id)inputImage;	// 0x33d082b5
// declared property getter: - (id)inputRadius;	// 0x33d082f9
// declared property getter: - (id)inputScale;	// 0x33d0831d
- (id)outputImage;	// 0x33d076f1
- (void)setDefaults;	// 0x33d074b9
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x33d08355
// declared property setter: - (void)setInputCenter:(id)center;	// 0x33d082e9
// declared property setter: - (void)setInputImage:(id)image;	// 0x33d082c5
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x33d0830d
// declared property setter: - (void)setInputScale:(id)scale;	// 0x33d08331
@end

