/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CICrop : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputRectangle;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x349f86dd; S=0x349f86ed; @synthesize
@property(copy, nonatomic) CIVector *inputRectangle;	// G=0x349f8711; S=0x349f8721; @synthesize
+ (id)customAttributes;	// 0x349f8389
- (id)_initFromProperties:(id)properties;	// 0x349f8859
- (id)_outputProperties;	// 0x349f8745
// declared property getter: - (id)inputImage;	// 0x349f86dd
// declared property getter: - (id)inputRectangle;	// 0x349f8711
- (id)outputImage;	// 0x349f8561
- (void)setDefaults;	// 0x349f850d
// declared property setter: - (void)setInputImage:(id)image;	// 0x349f86ed
// declared property setter: - (void)setInputRectangle:(id)rectangle;	// 0x349f8721
@end
