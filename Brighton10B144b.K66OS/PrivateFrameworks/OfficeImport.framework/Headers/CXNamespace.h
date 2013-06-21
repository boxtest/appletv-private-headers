/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CXNamespace : NSObject {
	const char *mUri;	// 4 = 0x4
	xmlDoc *mDocument;	// 8 = 0x8
	xmlNs *mDocumentNamespace;	// 12 = 0xc
}
+ (void)clearRegisteredNamespaces;	// 0x349fcf09
+ (BOOL)isNamespaceSupported:(const char *)supported;	// 0x34995a49
+ (BOOL)isPrefixSupportedFromNodeContext:(xmlNode *)nodeContext prefix:(const char *)prefix;	// 0x349959e1
+ (BOOL)isPrefixSupportedFromStream:(xmlTextReader *)stream prefix:(const char *)prefix;	// 0x349fcedd
+ (void)registerNamespace:(id)aNamespace;	// 0x347fc9c9
- (id)initUnsupportedNsWithUri:(const char *)uri;	// 0x347fc989
- (id)initWithUri:(const char *)uri;	// 0x347fc94d
- (BOOL)containsAttribute:(xmlAttr *)attribute;	// 0x348ddcd5
- (BOOL)containsNode:(xmlNode *)node;	// 0x348daff1
- (const char *)uri;	// 0x347fcb79
@end
