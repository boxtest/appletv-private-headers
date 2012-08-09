/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXBaseTypes : NSObject {
}
+ (float)readOptionalAngleFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31c6eba1
+ (float)readOptionalFractionFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31c607d9
+ (float)readOptionalLengthFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31d18ce9
+ (long)readOptionalLongFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31c60811
+ (CGPoint)readPoint2DFromXmlNode:(xmlNode *)xmlNode;	// 0x31c6eac9
+ (id)readPoint3DFromXmlNode:(xmlNode *)xmlNode;	// 0x31dd9aa1
+ (int)readRectAlignmentFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31c602e1
+ (id)readRelativeRectFromXmlNode:(xmlNode *)xmlNode;	// 0x31c606d1
+ (float)readRequiredAngleFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31ce4329
+ (float)readRequiredFractionFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31c5f2a1
+ (float)readRequiredLengthFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31c6eb19
+ (long)readRequiredLongFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31c5f2d9
+ (id)readRotation3DFromXmlNode:(xmlNode *)xmlNode;	// 0x31ce4281
+ (CGSize)readSize2DFromXmlNode:(xmlNode *)xmlNode;	// 0x31c6eb51
+ (id)readVector3DFromXmlNode:(xmlNode *)xmlNode;	// 0x31dd99f9
+ (id)rectAlignmentEnumMap;	// 0x31cde7e1
@end
