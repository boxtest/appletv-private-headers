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
@interface CIBumpDistortion : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
	NSNumber *inputScale;	// 48 = 0x30
}
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x36bae059; S=0x36bae06d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36bae039; S=0x36bae049; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x36bae07d; S=0x36bae091; @synthesize
@property(copy, nonatomic) NSNumber *inputScale;	// G=0x36bae0a1; S=0x36bae0b5; @synthesize
+ (id)customAttributes;	// 0x36bad241
- (id)_kernel;	// 0x36bad5f1
// declared property getter: - (id)inputCenter;	// 0x36bae059
// declared property getter: - (id)inputImage;	// 0x36bae039
// declared property getter: - (id)inputRadius;	// 0x36bae07d
// declared property getter: - (id)inputScale;	// 0x36bae0a1
- (id)outputImage;	// 0x36bad789
- (void)setDefaults;	// 0x36bad591
// declared property setter: - (void)setInputCenter:(id)center;	// 0x36bae06d
// declared property setter: - (void)setInputImage:(id)image;	// 0x36bae049
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x36bae091
// declared property setter: - (void)setInputScale:(id)scale;	// 0x36bae0b5
@end
