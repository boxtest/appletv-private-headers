/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPBrush.h"

@class NSArray;

@interface MFPGradientBrush : MFPBrush {
	CGAffineTransform mTransform;	// 4 = 0x4
	NSArray *mBlend;	// 28 = 0x1c
	NSArray *mColorBlend;	// 32 = 0x20
	int mWrapMode;	// 36 = 0x24
	NSArray *mStops;	// 40 = 0x28
	CGShadingRef mShading;	// 44 = 0x2c
	CGFunctionRef mShadingFunction;	// 48 = 0x30
}
- (id)init;	// 0x34cd8755
- (id).cxx_construct;	// 0x34cd89ed
- (id)color;	// 0x34cd8961
- (id)colorAtPosition:(float)position;	// 0x34cd89f9
- (void)createPhoneBrush;	// 0x34cd8975
- (void)createShading;	// 0x34cd8f19
- (void)createShadingFunction;	// 0x34cd8e05
- (void)createStopsFromBlend;	// 0x34cd8bc5
- (void)createStopsFromColorBlend;	// 0x34cd8b91
- (void)createStopsFromStartAndEndColors;	// 0x34cd8d3d
- (void)dealloc;	// 0x34cd87c1
- (id)endColor;	// 0x34cd89f5
- (void)fillPath:(CGPathRef)path evenOddRule:(BOOL)rule;	// 0x34cd8919
- (void)setBlend:(id)blend;	// 0x34cd8891
- (void)setColorBlend:(id)blend;	// 0x34cd88cd
- (void)setTransform:(CGAffineTransform)transform;	// 0x34cd885d
- (void)setWrapMode:(int)mode;	// 0x34cd8909
- (id)startColor;	// 0x34cd89f1
@end
