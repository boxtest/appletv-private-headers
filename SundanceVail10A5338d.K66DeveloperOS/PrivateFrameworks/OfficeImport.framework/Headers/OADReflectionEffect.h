/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"
#import "OfficeImport-Structs.h"


@interface OADReflectionEffect : OADEffect {
	float mBlurRadius;	// 8 = 0x8
	float mStartOpacity;	// 12 = 0xc
	float mStartPosition;	// 16 = 0x10
	float mEndOpacity;	// 20 = 0x14
	float mEndPosition;	// 24 = 0x18
	float mDistance;	// 28 = 0x1c
	float mDirection;	// 32 = 0x20
	float mFadeDirection;	// 36 = 0x24
	float mXScale;	// 40 = 0x28
	float mYScale;	// 44 = 0x2c
	float mXSkew;	// 48 = 0x30
	float mYSkew;	// 52 = 0x34
	int mAlignment;	// 56 = 0x38
	BOOL mRotateWithShape;	// 60 = 0x3c
}
@property(assign) int alignment;	// G=0x33ba4475; S=0x33b05d31; converted property
@property(assign) float blurRadius;	// G=0x33ba4365; S=0x33b05cd1; converted property
@property(assign) float direction;	// G=0x33ba43d5; S=0x33b05d11; converted property
@property(assign) float distance;	// G=0x33ba43c5; S=0x33b06dad; converted property
@property(assign) float endOpacity;	// G=0x33ba43a5; S=0x33b05cf1; converted property
@property(assign) float endPosition;	// G=0x33ba43b5; S=0x33b05d01; converted property
@property(assign) float fadeDirection;	// G=0x33ba43e5; S=0x33ba43f5; converted property
@property(assign) BOOL rotateWithShape;	// G=0x33ba4485; S=0x33b05d41; converted property
@property(assign) float startOpacity;	// G=0x33ba4375; S=0x33b05ce1; converted property
@property(assign) float startPosition;	// G=0x33ba4385; S=0x33ba4395; converted property
@property(assign) float xScale;	// G=0x33ba4405; S=0x33ba4415; converted property
@property(assign) float xSkew;	// G=0x33ba4435; S=0x33ba4445; converted property
@property(assign) float yScale;	// G=0x33ba4425; S=0x33b05d21; converted property
@property(assign) float ySkew;	// G=0x33ba4455; S=0x33ba4465; converted property
- (id)init;	// 0x33b05789
// converted property getter: - (int)alignment;	// 0x33ba4475
// converted property getter: - (float)blurRadius;	// 0x33ba4365
- (id)copyWithZone:(NSZone *)zone;	// 0x33ba41dd
// converted property getter: - (float)direction;	// 0x33ba43d5
// converted property getter: - (float)distance;	// 0x33ba43c5
// converted property getter: - (float)endOpacity;	// 0x33ba43a5
// converted property getter: - (float)endPosition;	// 0x33ba43b5
// converted property getter: - (float)fadeDirection;	// 0x33ba43e5
- (unsigned)hash;	// 0x33ba4495
- (BOOL)isEqual:(id)equal;	// 0x33b083b1
// converted property getter: - (BOOL)rotateWithShape;	// 0x33ba4485
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x33b05d31
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x33b05cd1
// converted property setter: - (void)setDirection:(float)direction;	// 0x33b05d11
// converted property setter: - (void)setDistance:(float)distance;	// 0x33b06dad
// converted property setter: - (void)setEndOpacity:(float)opacity;	// 0x33b05cf1
// converted property setter: - (void)setEndPosition:(float)position;	// 0x33b05d01
// converted property setter: - (void)setFadeDirection:(float)direction;	// 0x33ba43f5
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x33b05d41
// converted property setter: - (void)setStartOpacity:(float)opacity;	// 0x33b05ce1
// converted property setter: - (void)setStartPosition:(float)position;	// 0x33ba4395
- (void)setStyleColor:(id)color;	// 0x33ba4361
// converted property setter: - (void)setXScale:(float)scale;	// 0x33ba4415
// converted property setter: - (void)setXSkew:(float)skew;	// 0x33ba4445
// converted property setter: - (void)setYScale:(float)scale;	// 0x33b05d21
// converted property setter: - (void)setYSkew:(float)skew;	// 0x33ba4465
// converted property getter: - (float)startOpacity;	// 0x33ba4375
// converted property getter: - (float)startPosition;	// 0x33ba4385
// converted property getter: - (float)xScale;	// 0x33ba4405
// converted property getter: - (float)xSkew;	// 0x33ba4435
// converted property getter: - (float)yScale;	// 0x33ba4425
// converted property getter: - (float)ySkew;	// 0x33ba4455
@end
