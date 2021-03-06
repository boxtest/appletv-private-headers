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
@interface CICircularScreen : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputWidth;	// 44 = 0x2c
	NSNumber *inputSharpness;	// 48 = 0x30
}
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x315b3c59; S=0x315b3c6d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x315b3c39; S=0x315b3c49; @synthesize
@property(copy, nonatomic) NSNumber *inputSharpness;	// G=0x315b3ca1; S=0x315b3cb5; @synthesize
@property(copy, nonatomic) NSNumber *inputWidth;	// G=0x315b3c7d; S=0x315b3c91; @synthesize
+ (id)customAttributes;	// 0x315b35a1
- (id)_kernel;	// 0x315b38d9
// declared property getter: - (id)inputCenter;	// 0x315b3c59
// declared property getter: - (id)inputImage;	// 0x315b3c39
// declared property getter: - (id)inputSharpness;	// 0x315b3ca1
// declared property getter: - (id)inputWidth;	// 0x315b3c7d
- (id)outputImage;	// 0x315b3aa1
- (void)setDefaults;	// 0x315b34f9
// declared property setter: - (void)setInputCenter:(id)center;	// 0x315b3c6d
// declared property setter: - (void)setInputImage:(id)image;	// 0x315b3c49
// declared property setter: - (void)setInputSharpness:(id)sharpness;	// 0x315b3cb5
// declared property setter: - (void)setInputWidth:(id)width;	// 0x315b3c91
@end

