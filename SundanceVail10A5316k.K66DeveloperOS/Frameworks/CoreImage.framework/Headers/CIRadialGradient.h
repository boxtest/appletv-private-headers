/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIColor, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRadialGradient : CIFilter {
@private
	CIVector *inputCenter;	// 36 = 0x24
	NSNumber *inputRadius0;	// 40 = 0x28
	NSNumber *inputRadius1;	// 44 = 0x2c
	CIColor *inputColor0;	// 48 = 0x30
	CIColor *inputColor1;	// 52 = 0x34
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x36becb91; S=0x36becba1; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x36becc2d; S=0x36becc3d; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x36becc61; S=0x36becc71; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius0;	// G=0x36becbc5; S=0x36becbd5; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius1;	// G=0x36becbf9; S=0x36becc09; @synthesize
+ (id)customAttributes;	// 0x36bec481
- (id)_kernel;	// 0x36bec279
// declared property getter: - (id)inputCenter;	// 0x36becb91
// declared property getter: - (id)inputColor0;	// 0x36becc2d
// declared property getter: - (id)inputColor1;	// 0x36becc61
// declared property getter: - (id)inputRadius0;	// 0x36becbc5
// declared property getter: - (id)inputRadius1;	// 0x36becbf9
- (id)outputImage;	// 0x36bec919
- (void)setDefaults;	// 0x36bec809
// declared property setter: - (void)setInputCenter:(id)center;	// 0x36becba1
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x36becc3d
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x36becc71
// declared property setter: - (void)setInputRadius0:(id)a0;	// 0x36becbd5
// declared property setter: - (void)setInputRadius1:(id)a1;	// 0x36becc09
@end
