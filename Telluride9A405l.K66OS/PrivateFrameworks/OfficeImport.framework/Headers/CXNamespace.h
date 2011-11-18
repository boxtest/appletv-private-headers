/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CXNamespace : NSObject {
@private
	char *mUri;	// 4 = 0x4
	xmlDoc *mDocument;	// 8 = 0x8
	xmlNs *mDocumentNamespace;	// 12 = 0xc
}
+ (void)clearRegisteredNamespaces;	// 0x30eb0819
+ (BOOL)isNamespaceSupported:(const char *)supported;	// 0x30eb097d
+ (BOOL)isPrefixSupportedFromNodeContext:(xmlNode *)nodeContext prefix:(const char *)prefix;	// 0x30eb090d
+ (BOOL)isPrefixSupportedFromStream:(xmlTextReader *)stream prefix:(const char *)prefix;	// 0x30eb08e1
+ (void)registerNamespace:(id)aNamespace;	// 0x30cb3099
- (id)initWithUri:(const char *)uri;	// 0x30cb3035
- (BOOL)containsAttribute:(xmlAttr *)attribute;	// 0x30d6c13d
- (BOOL)containsNode:(xmlNode *)node;	// 0x30d69771
- (const char *)uri;	// 0x30cb3235
@end

