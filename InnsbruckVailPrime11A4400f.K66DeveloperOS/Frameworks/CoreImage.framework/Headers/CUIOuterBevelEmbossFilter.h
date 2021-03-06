/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CUIOuterBevelEmbossFilter : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputRadius;	// 40 = 0x28
	NSNumber *inputSize;	// 44 = 0x2c
	NSNumber *inputSoften;	// 48 = 0x30
	NSNumber *inputAngle;	// 52 = 0x34
	CIColor *inputHighlightColor;	// 56 = 0x38
	CIColor *inputShadowColor;	// 60 = 0x3c
}
@property(retain, nonatomic) NSNumber *inputAngle;	// G=0x2d76f6f5; S=0x2d76f705; @synthesize
@property(retain, nonatomic) CIColor *inputHighlightColor;	// G=0x2d76f715; S=0x2d76f725; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d76f675; S=0x2d76f685; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius;	// G=0x2d76f695; S=0x2d76f6a5; @synthesize
@property(retain, nonatomic) CIColor *inputShadowColor;	// G=0x2d76f735; S=0x2d76f745; @synthesize
@property(retain, nonatomic) NSNumber *inputSize;	// G=0x2d76f6b5; S=0x2d76f6c5; @synthesize
@property(retain, nonatomic) NSNumber *inputSoften;	// G=0x2d76f6d5; S=0x2d76f6e5; @synthesize
+ (id)customAttributes;	// 0x2d76e431
- (id)_kernel;	// 0x2d76e869
- (id)_kernelC;	// 0x2d76ea79
// declared property getter: - (id)inputAngle;	// 0x2d76f6f5
// declared property getter: - (id)inputHighlightColor;	// 0x2d76f715
// declared property getter: - (id)inputImage;	// 0x2d76f675
// declared property getter: - (id)inputRadius;	// 0x2d76f695
// declared property getter: - (id)inputShadowColor;	// 0x2d76f735
// declared property getter: - (id)inputSize;	// 0x2d76f6b5
// declared property getter: - (id)inputSoften;	// 0x2d76f6d5
- (id)outputImage;	// 0x2d76ed71
- (void)setDefaults;	// 0x2d76ec41
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x2d76f705
// declared property setter: - (void)setInputHighlightColor:(id)color;	// 0x2d76f725
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d76f685
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x2d76f6a5
// declared property setter: - (void)setInputShadowColor:(id)color;	// 0x2d76f745
// declared property setter: - (void)setInputSize:(id)size;	// 0x2d76f6c5
// declared property setter: - (void)setInputSoften:(id)soften;	// 0x2d76f6e5
@end

