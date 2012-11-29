/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "RTF_OIXMLNode.h"

@class RTF_OIXMLElement, NSString;

__attribute__((visibility("hidden")))
@interface RTF_OIXMLDocument : RTF_OIXMLNode {
	RTF_OIXMLElement *_rootElement;	// 16 = 0x10
	NSString *_version;	// 20 = 0x14
	NSString *_encoding;	// 24 = 0x18
}
@property(retain) RTF_OIXMLElement *rootElement;	// G=0x3329f7a5; S=0x3329f761; converted property
- (id)initWithRootElement:(id)rootElement;	// 0x3329f585
- (id)XMLString;	// 0x3329f8a1
- (id)closingTagString;	// 0x3329f8e5
- (id)contentString;	// 0x3329f8d5
- (id)copyMutableXMLString;	// 0x3329f831
- (id)copyWithZone:(NSZone *)zone;	// 0x3329f645
- (void)dealloc;	// 0x3329f5cd
- (id)description;	// 0x3329f821
- (id)openingTagString;	// 0x3329f8c9
// converted property getter: - (id)rootElement;	// 0x3329f7a5
- (void)setCharacterEncoding:(id)encoding;	// 0x3329f7dd
// converted property setter: - (void)setRootElement:(id)element;	// 0x3329f761
- (void)setVersion:(id)version;	// 0x3329f71d
@end
