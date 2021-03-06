/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OADOrientedBounds : NSObject {
	CGRect mBounds;	// 4 = 0x4
	float mRotation;	// 20 = 0x14
	unsigned mFlipX : 1;	// 24 = 0x18
	unsigned mFlipY : 1;	// 24 = 0x18
	int mModeX;	// 28 = 0x1c
	int mModeY;	// 32 = 0x20
}
@property(assign) CGRect bounds;	// G=0x36a35a09; S=0x369eabe9; converted property
@property(assign) BOOL flipX;	// G=0x36a3f6b1; S=0x369eab39; converted property
@property(assign) BOOL flipY;	// G=0x36a3f6c5; S=0x369eab55; converted property
@property(assign) float rotation;	// G=0x369eab75; S=0x369eab29; converted property
@property(assign) int xMode;	// G=0x36a3f6d9; S=0x36b723b9; converted property
@property(assign) int yMode;	// G=0x36a3f6e9; S=0x36b723c9; converted property
+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)horizontal;	// 0x369eab85
+ (id)orientedBoundsWithBounds:(CGRect)bounds;	// 0x36a40739
+ (id)orientedBoundsWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x36a40771
- (id)init;	// 0x369eaa81
- (id)initWithBounds:(CGRect)bounds;	// 0x369e1ca1
- (id)initWithBounds:(CGRect)bounds rotation:(float)rotation flipX:(BOOL)x flipY:(BOOL)y;	// 0x369e1cd9
- (id).cxx_construct;	// 0x369e1c9d
// converted property getter: - (CGRect)bounds;	// 0x36a35a09
// converted property getter: - (BOOL)flipX;	// 0x36a3f6b1
// converted property getter: - (BOOL)flipY;	// 0x36a3f6c5
- (unsigned)hash;	// 0x36c17061
- (BOOL)isEqual:(id)equal;	// 0x36a35889
- (BOOL)isEqualToOrientedBounds:(id)orientedBounds;	// 0x36c16f85
// converted property getter: - (float)rotation;	// 0x369eab75
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x369eabe9
// converted property setter: - (void)setFlipX:(BOOL)x;	// 0x369eab39
// converted property setter: - (void)setFlipY:(BOOL)y;	// 0x369eab55
- (void)setOrientedBounds:(id)bounds;	// 0x36c16edd
// converted property setter: - (void)setRotation:(float)rotation;	// 0x369eab29
// converted property setter: - (void)setXMode:(int)mode;	// 0x36b723b9
// converted property setter: - (void)setYMode:(int)mode;	// 0x36b723c9
// converted property getter: - (int)xMode;	// 0x36a3f6d9
// converted property getter: - (int)yMode;	// 0x36a3f6e9
@end

