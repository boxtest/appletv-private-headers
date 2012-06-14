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
@property(retain) id color;	// G=0x329e29e1; S=0x329057e1; converted property
@property(assign) float radius;	// G=0x329e29f1; S=0x329057d1; converted property
- (id)init;	// 0x32905711
// converted property getter: - (id)color;	// 0x329e29e1
- (id)copyWithZone:(NSZone *)zone;	// 0x32922b1d
- (void)dealloc;	// 0x32905831
- (unsigned)hash;	// 0x329e2af5
- (BOOL)isEqual:(id)equal;	// 0x329e2a01
// converted property getter: - (float)radius;	// 0x329e29f1
// converted property setter: - (void)setColor:(id)color;	// 0x329057e1
// converted property setter: - (void)setRadius:(float)radius;	// 0x329057d1
@end
