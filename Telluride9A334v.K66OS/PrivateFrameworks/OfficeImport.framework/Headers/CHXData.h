/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHXData : NSObject {
}
+ (id)chdDataFromXmlDataElement:(xmlNode *)xmlDataElement state:(id)state;	// 0x356c45ad
+ (bool)isHiddenDataElement:(xmlNode *)element data:(id)data;	// 0x356c4ec1
+ (void)readNumDataFromXmlNumDataElement:(xmlNode *)xmlNumDataElement data:(id)data state:(id)state;	// 0x356c4d59
+ (void)readStrDataFromXmlMultiLevelStrDataElement:(xmlNode *)xmlMultiLevelStrDataElement data:(id)data state:(id)state;	// 0x356c4ce5
+ (void)readStrDataFromXmlStrDataElement:(xmlNode *)xmlStrDataElement data:(id)data state:(id)state;	// 0x356c4c41
@end
