/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BRXMLNode.h"


__attribute__((visibility("hidden")))
@interface BRXMLNode : XXUnknownSuperclass {
	xmlNode *_privateXmlNode;	// 4 = 0x4
}
@property(retain) id associatedObject;	// G=0x37b895; S=0x37b7dd; converted property
@property(retain) id textContent;	// G=0x37b0b9; S=0x37b249; converted property
- (id)XMLString;	// 0x3796b5
- (BOOL)_insertChild:(id)child otherChild:(id)child2 insertFunction:(/*function-pointer*/ void *)function error:(id *)error;	// 0x37a28d
- (BOOL)appendChild:(id)child error:(id *)error;	// 0x379f9d
// converted property getter: - (id)associatedObject;	// 0x37b895
- (id)children;	// 0x379dd9
- (id)copyWithZone:(NSZone *)zone;	// 0x3790c5
- (id)description;	// 0x379295
- (id)getAttribute:(id)attribute;	// 0x37b489
- (BOOL)insertChild:(id)child after:(id)after error:(id *)error;	// 0x37a695
- (BOOL)insertChild:(id)child before:(id)before error:(id *)error;	// 0x37a669
- (BOOL)isEqual:(id)equal;	// 0x379495
- (id)name;	// 0x37a745
- (id)nextSibling;	// 0x37a921
- (id)nextSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x37aa91
- (id)nodesForXPath:(id)xpath error:(id *)error;	// 0x3798d1
- (id)objectValue;	// 0x37b2c1
- (id)ownerDocument;	// 0x37b9f9
- (id)parent;	// 0x37ac35
- (id)previousSibling;	// 0x37ada5
- (id)previousSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x37af15
- (void)removeAttribute:(id)attribute;	// 0x37b749
- (void)removeFromParent;	// 0x37a709
- (BOOL)replaceChild:(id)child with:(id)with error:(id *)error;	// 0x37a6c1
// converted property setter: - (void)setAssociatedObject:(id)object;	// 0x37b7dd
- (void)setAttribute:(id)attribute withValue:(id)value;	// 0x37b65d
// converted property setter: - (void)setTextContent:(id)content;	// 0x37b249
- (id)stringValue;	// 0x37b2d1
// converted property getter: - (id)textContent;	// 0x37b0b9
@end

@interface BRXMLNode (Private)
+ (void)load;	// 0x37bc55
+ (id)nodeWithXmlNode:(xmlNode *)xmlNode;	// 0x37bd85
- (id)init;	// 0x37bfa1
- (id)initWithXmlNode:(xmlNode *)xmlNode;	// 0x37be09
- (void)clearNode;	// 0x37c1b1
- (void)dealloc;	// 0x37bfe9
- (void)lockNode:(id)node;	// 0x37c179
@end

