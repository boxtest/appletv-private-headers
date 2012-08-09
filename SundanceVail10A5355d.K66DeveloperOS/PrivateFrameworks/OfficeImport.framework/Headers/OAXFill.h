/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXFill : NSObject {
}
+ (id)pathGradientFillTypeEnumMap;	// 0x31c60679
+ (id)presetPatternFillTypeEnumMap;	// 0x31d4e3b9
+ (id)readBlipRefFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state forBullet:(BOOL)bullet;	// 0x31c6daed
+ (id)readFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x31c5ec99
+ (id)readGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x31c5ef31
+ (void)readGradientFillFromXmlNode:(xmlNode *)xmlNode toGradientFill:(id)gradientFill;	// 0x31c5f0ed
+ (id)readGroupFillFromXmlNode:(xmlNode *)xmlNode;	// 0x31dd9dbd
+ (id)readImageFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x31c6d8d1
+ (id)readLinearGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x31c5ef81
+ (id)readNullFillFromXmlNode:(xmlNode *)xmlNode;	// 0x31c6d6c1
+ (id)readPathGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x31c60381
+ (id)readPresetPatternFillFromXmlNode:(xmlNode *)xmlNode;	// 0x31d4e22d
+ (id)readSolidFillFromXmlNode:(xmlNode *)xmlNode;	// 0x31c5ed81
+ (void)readStretch:(xmlNode *)stretch stretch:(id)stretch2;	// 0x31c6dae5
+ (void)readTile:(xmlNode *)tile tile:(id)tile2;	// 0x31d18b41
+ (id)tileFlipModeEnumMap;	// 0x31d13881
@end
