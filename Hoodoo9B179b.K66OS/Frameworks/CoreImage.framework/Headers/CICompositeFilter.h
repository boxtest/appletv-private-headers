/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CICompositeFilter : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputBackgroundImage;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x36d7725d; S=0x36d7726d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36d77229; S=0x36d77239; @synthesize
+ (id)_filter_display_name;	// 0x36d76db5
+ (id)_kernel;	// 0x36d76ec5
+ (id)_kernel_name;	// 0x36d76db9
+ (id)_kernel_source;	// 0x36d76dbd
+ (id)customAttributes;	// 0x36d76dc1
- (CGRect)_extentForInputExtent:(CGRect)inputExtent backgroundExtent:(CGRect)extent;	// 0x36d770c9
// declared property getter: - (id)inputBackgroundImage;	// 0x36d7725d
// declared property getter: - (id)inputImage;	// 0x36d77229
- (id)outputImage;	// 0x36d770fd
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x36d7726d
// declared property setter: - (void)setInputImage:(id)image;	// 0x36d77239
@end
