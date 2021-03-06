/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library

@class EnhancementHistogram;

__attribute__((visibility("hidden")))
@interface EnhancementCalculation : NSObject {
	CGPoint originalFaceColor;	// 4 = 0x4
	EnhancementHistogram *lumHist;	// 12 = 0xc
	EnhancementHistogram *rgbSumHist;	// 16 = 0x10
	EnhancementHistogram *satHist;	// 20 = 0x14
	EnhancementHistogram *borderHist;	// 24 = 0x18
	float exposureValue;	// 28 = 0x1c
	float maxShadow;	// 32 = 0x20
	float minShadow;	// 36 = 0x24
	float exposureValueAtZeroShadow;	// 40 = 0x28
	float curvePercent;	// 44 = 0x2c
	BOOL faceInputSet;	// 48 = 0x30
	float percentFaceChange;	// 52 = 0x34
}
@property(readonly, assign) EnhancementHistogram *borderHist;	// G=0x31599b31; @synthesize
@property(readonly, assign) EnhancementHistogram *lumHist;	// G=0x31599af5; @synthesize
@property(readonly, assign) CGPoint originalFaceColor;	// G=0x31598b9d; @synthesize
@property(readonly, assign) EnhancementHistogram *rgbSumHist;	// G=0x31599b09; @synthesize
@property(readonly, assign) EnhancementHistogram *satHist;	// G=0x31599b1d; @synthesize
+ (float)bestWarmthForI:(float)i q:(float)q percentChange:(float *)change;	// 0x31598469
- (id)init;	// 0x315981e9
// declared property getter: - (id)borderHist;	// 0x31599b31
- (unsigned long)curveCount;	// 0x31598d19
- (CGPoint)curvePointAtIndex:(unsigned long)index;	// 0x31598d31
- (void)dealloc;	// 0x315982e1
- (void)downSampleHistogram:(id)histogram to:(unsigned)to storeIn:(float *)anIn;	// 0x315998f9
- (id)faceBalanceStrength;	// 0x31598ae1
- (id)faceBalanceWarmth;	// 0x31598b1d
// declared property getter: - (id)lumHist;	// 0x31599af5
// declared property getter: - (CGPoint)originalFaceColor;	// 0x31598b9d
- (void)printAnalysis;	// 0x31599a55
- (void)printHistogram:(id)histogram downsampledTo:(unsigned)to;	// 0x315999d1
- (void)printHistogramsDownsampledTo:(unsigned)to;	// 0x31599ad5
- (int)putShadowsAnalysisInto:(float *)into;	// 0x31599121
- (id)rawShadow;	// 0x31599769
// declared property getter: - (id)rgbSumHist;	// 0x31599b09
// declared property getter: - (id)satHist;	// 0x31599b1d
- (void)setBorderHistogram:(id)histogram;	// 0x31598419
- (void)setCurvePercent:(float)percent;	// 0x31598371
- (void)setExposureValue:(float)value;	// 0x31598a39
- (void)setFaceColorFromChromaI:(float)chromaI andChromaQ:(float)q;	// 0x315985a1
- (void)setLuminanceHistogram:(id)histogram;	// 0x315983c9
- (void)setRGBSumHistogram:(id)histogram;	// 0x315983f1
- (void)setSaturationHistogram:(id)histogram;	// 0x31598441
- (void)setShadowsMin:(float)min max:(float)max zeroExposure:(float)exposure;	// 0x31598a49
- (void)setupFaceColor:(id)color redIndex:(int)index greenIndex:(int)index3 blueIndex:(int)index4;	// 0x31598611
- (id)shadow;	// 0x315996b9
- (id)vibrance;	// 0x31598bb9
@end

