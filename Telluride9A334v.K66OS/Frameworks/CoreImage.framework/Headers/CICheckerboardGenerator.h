/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, NSNumber, CIColor;

__attribute__((visibility("hidden")))
@interface CICheckerboardGenerator : CIFilter {
@private
	CIVector *inputCenter;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
	NSNumber *inputWidth;	// 48 = 0x30
	NSNumber *inputSharpness;	// 52 = 0x34
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x358c114d; S=0x358c115d; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x358c11e9; S=0x358c11f9; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x358c121d; S=0x358c122d; @synthesize
@property(retain, nonatomic) NSNumber *inputSharpness;	// G=0x358c11b5; S=0x358c11c5; @synthesize
@property(retain, nonatomic) NSNumber *inputWidth;	// G=0x358c1181; S=0x358c1191; @synthesize
+ (id)customAttributes;	// 0x358c0a69
- (id)_kernel;	// 0x358c0851
// declared property getter: - (id)inputCenter;	// 0x358c114d
// declared property getter: - (id)inputColor0;	// 0x358c11e9
// declared property getter: - (id)inputColor1;	// 0x358c121d
// declared property getter: - (id)inputSharpness;	// 0x358c11b5
// declared property getter: - (id)inputWidth;	// 0x358c1181
- (id)outputImage;	// 0x358c0f35
- (void)setDefaults;	// 0x358c0e29
// declared property setter: - (void)setInputCenter:(id)center;	// 0x358c115d
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x358c11f9
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x358c122d
// declared property setter: - (void)setInputSharpness:(id)sharpness;	// 0x358c11c5
// declared property setter: - (void)setInputWidth:(id)width;	// 0x358c1191
@end

