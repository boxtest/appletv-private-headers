/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CITwirl : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint;	// 40 = 0x28
	NSNumber *inputAmount;	// 44 = 0x2c
	NSNumber *inputRotation;	// 48 = 0x30
}
@property(retain, nonatomic) NSNumber *inputAmount;	// G=0x30265959; S=0x30265969; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x302658f1; S=0x30265901; @synthesize
@property(retain, nonatomic) CIVector *inputPoint;	// G=0x30265925; S=0x30265935; @synthesize
@property(retain, nonatomic) NSNumber *inputRotation;	// G=0x3026598d; S=0x3026599d; @synthesize
+ (id)customAttributes;	// 0x3026538d
- (id)_kernel;	// 0x302651c9
// declared property getter: - (id)inputAmount;	// 0x30265959
// declared property getter: - (id)inputImage;	// 0x302658f1
// declared property getter: - (id)inputPoint;	// 0x30265925
// declared property getter: - (id)inputRotation;	// 0x3026598d
- (id)outputImage;	// 0x30265691
- (void)setDefaults;	// 0x3026561d
// declared property setter: - (void)setInputAmount:(id)amount;	// 0x30265969
// declared property setter: - (void)setInputImage:(id)image;	// 0x30265901
// declared property setter: - (void)setInputPoint:(id)point;	// 0x30265935
// declared property setter: - (void)setInputRotation:(id)rotation;	// 0x3026599d
@end
