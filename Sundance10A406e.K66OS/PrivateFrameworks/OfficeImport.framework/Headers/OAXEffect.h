/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXEffect : NSObject {
}
+ (id)presetShadowTypeEnumMap;	// 0x3501aa69
+ (id)readEffectsFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x34f35c81
+ (void)readGlow:(id)glow fromXmlNode:(xmlNode *)xmlNode;	// 0x35008d91
+ (void)readOuterShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x34f35f99
+ (void)readPresetShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x3501a9c9
+ (void)readReflection:(id)reflection fromXmlNode:(xmlNode *)xmlNode;	// 0x3500a1e9
+ (void)readShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x34f36179
@end

