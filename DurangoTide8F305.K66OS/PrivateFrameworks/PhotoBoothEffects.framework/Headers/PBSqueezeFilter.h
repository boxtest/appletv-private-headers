/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import "PBFilter.h"


@interface PBSqueezeFilter : PBFilter {
	float _inputAmount;	// 8 = 0x8
	CGPoint inputPoint;	// 12 = 0xc
}
@property(assign) float inputAmount;	// G=0x310b0d41; S=0x310b0e19; @dynamic
@property(assign) CGPoint inputPoint;	// G=0x310b1179; S=0x310b114d; @synthesize
- (const char *)_fragmentShaderSource;	// 0x310b0d51
- (id)_glesUniforms;	// 0x310b0d6d
// declared property getter: - (float)inputAmount;	// 0x310b0d41
// declared property getter: - (CGPoint)inputPoint;	// 0x310b1179
- (unsigned long)kernelArgCount;	// 0x310b0d5d
- (/*function-pointer*/ void *)kernelWrapper;	// 0x310b0d61
- (void)renderWithContext:(id)context inputSize:(CGSize)size outputRect:(CGRect)rect mirrored:(BOOL)mirrored;	// 0x310b0f8d
- (void)setDefaults;	// 0x310b0dc5
// declared property setter: - (void)setInputAmount:(float)amount;	// 0x310b0e19
// declared property setter: - (void)setInputPoint:(CGPoint)point;	// 0x310b114d
- (void)setupKernelArguments:(id)arguments mirrored:(BOOL)mirrored;	// 0x310b0e65
@end

