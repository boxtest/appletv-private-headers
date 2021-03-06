/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"

@class OADColor;

@interface OADShadowEffect : OADEffect {
	OADColor *mColor;	// 8 = 0x8
	float mBlurRadius;	// 12 = 0xc
	float mDistance;	// 16 = 0x10
	float mAngle;	// 20 = 0x14
}
@property(assign) float angle;	// G=0x370568c1; S=0x36fd92d9; converted property
@property(assign) float blurRadius;	// G=0x370568a1; S=0x36fd92b9; converted property
@property(retain) id color;	// G=0x370567cd; S=0x36fd92e9; converted property
@property(assign) float distance;	// G=0x370568b1; S=0x36fd92c9; converted property
- (id)initWithShadowEffect:(id)shadowEffect type:(int)type;	// 0x37056719
- (id)initWithType:(int)type;	// 0x36fd8f31
// converted property getter: - (float)angle;	// 0x370568c1
// converted property getter: - (float)blurRadius;	// 0x370568a1
// converted property getter: - (id)color;	// 0x370567cd
- (void)dealloc;	// 0x37002f01
// converted property getter: - (float)distance;	// 0x370568b1
- (unsigned)hash;	// 0x3714cab9
- (BOOL)isEqual:(id)equal;	// 0x370ab761
// converted property setter: - (void)setAngle:(float)angle;	// 0x36fd92d9
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x36fd92b9
// converted property setter: - (void)setColor:(id)color;	// 0x36fd92e9
// converted property setter: - (void)setDistance:(float)distance;	// 0x36fd92c9
- (void)setStyleColor:(id)color;	// 0x370568d1
@end

