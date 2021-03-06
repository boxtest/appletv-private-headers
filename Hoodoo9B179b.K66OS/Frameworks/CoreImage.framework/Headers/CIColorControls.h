/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIColorControls : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputSaturation;	// 40 = 0x28
	NSNumber *inputBrightness;	// 44 = 0x2c
	NSNumber *inputContrast;	// 48 = 0x30
}
@property(copy, nonatomic) NSNumber *inputBrightness;	// G=0x36d6a765; S=0x36d6a775; @synthesize
@property(copy, nonatomic) NSNumber *inputContrast;	// G=0x36d6a799; S=0x36d6a7a9; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36d6a6fd; S=0x36d6a70d; @synthesize
@property(copy, nonatomic) NSNumber *inputSaturation;	// G=0x36d6a731; S=0x36d6a741; @synthesize
+ (id)customAttributes;	// 0x36d6a091
// declared property getter: - (id)inputBrightness;	// 0x36d6a765
// declared property getter: - (id)inputContrast;	// 0x36d6a799
// declared property getter: - (id)inputImage;	// 0x36d6a6fd
// declared property getter: - (id)inputSaturation;	// 0x36d6a731
- (id)outputImage;	// 0x36d6a4cd
- (void)setDefaults;	// 0x36d6a451
// declared property setter: - (void)setInputBrightness:(id)brightness;	// 0x36d6a775
// declared property setter: - (void)setInputContrast:(id)contrast;	// 0x36d6a7a9
// declared property setter: - (void)setInputImage:(id)image;	// 0x36d6a70d
// declared property setter: - (void)setInputSaturation:(id)saturation;	// 0x36d6a741
@end

