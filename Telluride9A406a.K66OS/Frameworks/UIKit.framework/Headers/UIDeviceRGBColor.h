/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIColor.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIDeviceRGBColor : UIColor {
@private
	float redComponent;	// 8 = 0x8
	float greenComponent;	// 12 = 0xc
	float blueComponent;	// 16 = 0x10
	float alphaComponent;	// 20 = 0x14
	CGColorRef cachedColor;	// 24 = 0x18
}
@property(readonly, assign) float alphaComponent;	// G=0x3574c019; converted property
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x356e8f1d
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x358a2539
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x356bc3f5
- (CGColorRef)CGColor;	// 0x356846fd
- (CGColorRef)_createCGColorWithAlpha:(float)alpha;	// 0x356bc811
// converted property getter: - (float)alphaComponent;	// 0x3574c019
- (id)colorSpaceName;	// 0x35749ed5
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x3574c029
- (void)dealloc;	// 0x356dfb15
- (id)description;	// 0x358a26dd
- (BOOL)getHue:(float *)hue saturation:(float *)saturation brightness:(float *)brightness alpha:(float *)alpha;	// 0x358a278d
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x358a2821
- (unsigned)hash;	// 0x35747ce1
- (BOOL)isEqual:(id)equal;	// 0x35749db1
- (void)set;	// 0x356846a5
- (void)setFill;	// 0x35744749
- (void)setStroke;	// 0x358a26b1
@end
