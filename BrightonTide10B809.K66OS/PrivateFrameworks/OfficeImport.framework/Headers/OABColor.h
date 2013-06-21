/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OABColor : NSObject {
}
+ (float)applyAlphaTransform:(id)transform toAlpha:(float)alpha;	// 0x34a3abb5
+ (id)applyExpTransformWithValue:(float)value toRgbColor:(id)rgbColor;	// 0x34a3afd1
+ (id)applyHSLTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x34a3adb9
+ (id)applyRGBTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x34a3ac2d
+ (id)applyTransforms:(id)transforms toRgbColor:(id)rgbColor;	// 0x34a3b0d1
+ (unsigned short)eshSchemeColorIndexWithOADMapColorIndex:(int)oadmapColorIndex;	// 0x34a3ab01
+ (int)oadMapColorIndexWithEshSchemeColorIndex:(unsigned short)eshSchemeColorIndex;	// 0x34816f3d
+ (EshColor)propertyColor:(int)color colorPropertiesManager:(id)manager;	// 0x34885ae1
+ (id)readColor:(const EshColor *)color colorPropertiesManager:(id)manager colorPalette:(id)palette;	// 0x3481dc89
+ (int)readColorAdjustmentType:(int)type;	// 0x34885b99
+ (int)readSystemColorID:(int)anId;	// 0x34a3ab29
+ (EshColor)writeColor:(id)color flatten:(BOOL)flatten state:(id)state;	// 0x34a3a695
+ (EshColor)writeColor:(id)color state:(id)state;	// 0x34a3a669
+ (float)writeOpacityOfColor:(id)color;	// 0x34a3aa4d
+ (int)writeSystemColorID:(int)anId;	// 0x34a3a5e1
@end
