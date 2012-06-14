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
@interface CIHighlightShadowAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputShadowAmount;	// 40 = 0x28
	NSNumber *inputHighlightAmount;	// 44 = 0x2c
}
@property(copy, nonatomic) NSNumber *inputHighlightAmount;	// G=0x36d7bd9d; S=0x36d7bdad; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36d7bd35; S=0x36d7bd45; @synthesize
@property(copy, nonatomic) NSNumber *inputShadowAmount;	// G=0x36d7bd69; S=0x36d7bd79; @synthesize
+ (id)customAttributes;	// 0x36d7ade5
- (id)_initFromProperties:(id)properties;	// 0x36d7bf91
- (BOOL)_isIdentity;	// 0x36d7b795
- (id)_kernelS;	// 0x36d7b3dd
- (id)_kernelSH;	// 0x36d7b225
- (id)_kernelS_noblur;	// 0x36d7b595
- (id)_outputProperties;	// 0x36d7bdd1
// declared property getter: - (id)inputHighlightAmount;	// 0x36d7bd9d
// declared property getter: - (id)inputImage;	// 0x36d7bd35
// declared property getter: - (id)inputShadowAmount;	// 0x36d7bd69
- (id)outputImage;	// 0x36d7b879
- (void)setDefaults;	// 0x36d7b725
// declared property setter: - (void)setInputHighlightAmount:(id)amount;	// 0x36d7bdad
// declared property setter: - (void)setInputImage:(id)image;	// 0x36d7bd45
// declared property setter: - (void)setInputShadowAmount:(id)amount;	// 0x36d7bd79
@end
