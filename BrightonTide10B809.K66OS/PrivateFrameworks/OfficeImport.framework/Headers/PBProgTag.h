/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface PBProgTag : NSObject {
}
+ (id)binaryTagDataWithName:(const unsigned short *)name inProgTags:(id)progTags;	// 0x34819c01
+ (id)binaryTagDataWithName:(const unsigned short *)name inProgTagsParent:(id)progTagsParent;	// 0x34819bc1
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)name inProgTags:(id)progTags;	// 0x34a7b471
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)name inProgTagsParent:(id)progTagsParent;	// 0x34a7b41d
+ (void)readBulletImagesFromContainerParent:(id)containerParent state:(id)state;	// 0x3495856d
+ (void)readBulletImagesFromDocumentList:(id)documentList state:(id)state;	// 0x34819d6d
+ (id)readBulletStyleFromClientData:(id)clientData;	// 0x3486a899
+ (void)readBulletStylesFromDocumentList:(id)documentList state:(id)state;	// 0x34819ae9
+ (void)readBulletStylesFromMainMaster:(id)mainMaster state:(id)state;	// 0x3481ff1d
+ (void)readClientData:(id)data state:(id)state;	// 0x3486a845
+ (void)readDocumentList:(id)list state:(id)state;	// 0x34819a85
+ (void)readHyperlinkScreenTipsFromDocumentList:(id)documentList state:(id)state;	// 0x34819e8d
+ (id)readMacCharStyleFromClientData:(id)clientData;	// 0x3486a8dd
+ (void)readMacCharStylesFromDocumentList:(id)documentList state:(id)state;	// 0x34819db5
+ (const PBTextFormatProgTagInfo *)textFormatInfoForProgTagName:(const unsigned short *)progTagName;	// 0x34a7b3e1
@end
