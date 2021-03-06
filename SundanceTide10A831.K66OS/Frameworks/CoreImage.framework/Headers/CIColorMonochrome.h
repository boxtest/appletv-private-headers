/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSNumber, CIColor;

__attribute__((visibility("hidden")))
@interface CIColorMonochrome : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
	NSNumber *inputIntensity;	// 44 = 0x2c
}
@property(retain, nonatomic) CIColor *inputColor;	// G=0x30d5f5c1; S=0x30d5f5d1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x30d5f5a1; S=0x30d5f5b1; @synthesize
@property(retain, nonatomic) NSNumber *inputIntensity;	// G=0x30d5f5e1; S=0x30d5f5f1; @synthesize
+ (id)customAttributes;	// 0x30d5f169
- (id)_kernel;	// 0x30d5efa1
// declared property getter: - (id)inputColor;	// 0x30d5f5c1
// declared property getter: - (id)inputImage;	// 0x30d5f5a1
// declared property getter: - (id)inputIntensity;	// 0x30d5f5e1
- (id)outputImage;	// 0x30d5f481
- (void)setDefaults;	// 0x30d5f3f1
// declared property setter: - (void)setInputColor:(id)color;	// 0x30d5f5d1
// declared property setter: - (void)setInputImage:(id)image;	// 0x30d5f5b1
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x30d5f5f1
@end

