/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface Face : NSObject {
@private
	int size;	// 4 = 0x4
	int centerX;	// 8 = 0x8
	int centerY;	// 12 = 0xc
	double I;	// 16 = 0x10
	double Q;	// 24 = 0x18
}
@property(readonly, assign) double I;	// G=0x34a0bd4d; @synthesize
@property(readonly, assign) double Q;	// G=0x34a0bd81; @synthesize
@property(readonly, assign) int centerX;	// G=0x34a0bd2d; @synthesize
@property(readonly, assign) int centerY;	// G=0x34a0bd3d; @synthesize
@property(readonly, assign) int size;	// G=0x34a0bd1d; @synthesize
- (id)initWithBounds:(CGRect)bounds andImage:(id)image usingContext:(id)context;	// 0x34a0b855
// declared property getter: - (double)I;	// 0x34a0bd4d
// declared property getter: - (double)Q;	// 0x34a0bd81
// declared property getter: - (int)centerX;	// 0x34a0bd2d
// declared property getter: - (int)centerY;	// 0x34a0bd3d
- (id)description;	// 0x34a0bc21
- (CGRect)faceRect;	// 0x34a0bcb9
// declared property getter: - (int)size;	// 0x34a0bd1d
@end

