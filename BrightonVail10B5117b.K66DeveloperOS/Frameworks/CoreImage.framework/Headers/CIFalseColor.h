/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CIFalseColor : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
}
@property(copy, nonatomic) CIColor *inputColor0;	// G=0x31564699; S=0x315646ad; @synthesize
@property(copy, nonatomic) CIColor *inputColor1;	// G=0x315646bd; S=0x315646d1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x31564679; S=0x31564689; @synthesize
+ (id)customAttributes;	// 0x31564499
- (id)_kernel;	// 0x31564191
// declared property getter: - (id)inputColor0;	// 0x31564699
// declared property getter: - (id)inputColor1;	// 0x315646bd
// declared property getter: - (id)inputImage;	// 0x31564679
- (id)outputImage;	// 0x31564351
- (void)setDefaults;	// 0x31564419
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x315646ad
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x315646d1
// declared property setter: - (void)setInputImage:(id)image;	// 0x31564689
@end
