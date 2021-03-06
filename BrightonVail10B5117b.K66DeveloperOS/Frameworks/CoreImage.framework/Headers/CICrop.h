/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CICrop : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputRectangle;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x315580cd; S=0x315580dd; @synthesize
@property(copy, nonatomic) CIVector *inputRectangle;	// G=0x315580ed; S=0x31558101; @synthesize
+ (id)customAttributes;	// 0x31557e5d
- (id)_initFromProperties:(id)properties;	// 0x31558225
- (id)_outputProperties;	// 0x31558111
// declared property getter: - (id)inputImage;	// 0x315580cd
// declared property getter: - (id)inputRectangle;	// 0x315580ed
- (id)outputImage;	// 0x3155803d
- (void)setDefaults;	// 0x31557fe9
// declared property setter: - (void)setInputImage:(id)image;	// 0x315580dd
// declared property setter: - (void)setInputRectangle:(id)rectangle;	// 0x31558101
@end

