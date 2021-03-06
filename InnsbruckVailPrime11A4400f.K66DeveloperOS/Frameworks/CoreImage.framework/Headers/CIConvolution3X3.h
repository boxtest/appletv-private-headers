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
@interface CIConvolution3X3 : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputWeights;	// 40 = 0x28
	NSNumber *inputBias;	// 44 = 0x2c
}
@property(retain, nonatomic) NSNumber *inputBias;	// G=0x2d76b231; S=0x2d76b241; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d76b1f1; S=0x2d76b201; @synthesize
@property(retain, nonatomic) CIVector *inputWeights;	// G=0x2d76b211; S=0x2d76b221; @synthesize
+ (id)customAttributes;	// 0x2d76acd9
- (BOOL)_isIdentity;	// 0x2d76af29
// declared property getter: - (id)inputBias;	// 0x2d76b231
// declared property getter: - (id)inputImage;	// 0x2d76b1f1
// declared property getter: - (id)inputWeights;	// 0x2d76b211
- (id)outputImage;	// 0x2d76afb9
- (void)setDefaults;	// 0x2d76aea1
// declared property setter: - (void)setInputBias:(id)bias;	// 0x2d76b241
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d76b201
// declared property setter: - (void)setInputWeights:(id)weights;	// 0x2d76b221
@end

