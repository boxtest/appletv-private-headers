/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADEffect.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGlowEffect : OADEffect {
@private
	OADColor *mColor;	// 8 = 0x8
	float mRadius;	// 12 = 0xc
}
@property(retain) id color;	// G=0x31abef95; S=0x31a6f7c5; converted property
@property(assign) float radius;	// G=0x31abefa5; S=0x31a6f7b5; converted property
- (id)init;	// 0x31a6f705
// converted property getter: - (id)color;	// 0x31abef95
- (id)copyWithZone:(NSZone *)zone;	// 0x31a90f15
- (void)dealloc;	// 0x31a6f80d
- (unsigned)hash;	// 0x31abf099
- (BOOL)isEqual:(id)equal;	// 0x31abefb5
// converted property getter: - (float)radius;	// 0x31abefa5
// converted property setter: - (void)setColor:(id)color;	// 0x31a6f7c5
// converted property setter: - (void)setRadius:(float)radius;	// 0x31a6f7b5
@end
