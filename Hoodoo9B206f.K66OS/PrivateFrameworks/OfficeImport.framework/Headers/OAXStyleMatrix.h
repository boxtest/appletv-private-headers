/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXStyleMatrix : NSObject {
}
+ (void)readFromNode:(xmlNode *)node toStyleMatrix:(id)styleMatrix packagePart:(id)part drawingState:(id)state;	// 0x344fc229
+ (id)readReferenceFromNode:(xmlNode *)node;	// 0x3452d569
+ (BOOL)readReferenceFromParentNode:(xmlNode *)parentNode name:(const char *)name inNamespace:(id)aNamespace color:(id *)color index:(unsigned *)index;	// 0x345215d1
@end

