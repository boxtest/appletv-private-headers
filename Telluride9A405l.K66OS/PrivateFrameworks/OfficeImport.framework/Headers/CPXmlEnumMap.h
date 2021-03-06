/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CPXmlEnumMap : NSObject {
@private
	CFDictionaryRef mNameToValueMap;	// 4 = 0x4
}
- (id)initWithDescriptions:(const CPXmlEnumDescription *)descriptions;	// 0x30d93011
- (void)dealloc;	// 0x30eb06cd
- (int)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name;	// 0x30d930c9
- (int)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name def:(int)def;	// 0x30daa559
- (BOOL)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name value:(int *)value;	// 0x30d9312d
@end

