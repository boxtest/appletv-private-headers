/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMNode.h"

@class NSString, DOMCSSStyleDeclaration;

@interface DOMElement : DOMNode {
}
@property(readonly, assign) unsigned childElementCount;	// G=0x31e0df35; 
@property(readonly, assign) int clientHeight;	// G=0x31e0d805; 
@property(readonly, assign) int clientLeft;	// G=0x31e0d505; 
@property(readonly, assign) int clientTop;	// G=0x31e0d605; 
@property(readonly, assign) int clientWidth;	// G=0x31e0d705; 
@property(readonly, assign) DOMElement *firstElementChild;	// G=0x31d517e1; 
@property(readonly, assign) NSString *innerText;	// G=0x31e0e035; 
@property(readonly, assign) DOMElement *lastElementChild;	// G=0x31e0dd15; 
@property(readonly, assign) DOMElement *nextElementSibling;	// G=0x31d518ed; 
@property(readonly, assign) int offsetHeight;	// G=0x31d47909; 
@property(readonly, assign) int offsetLeft;	// G=0x31e0d1f9; 
@property(readonly, assign) DOMElement *offsetParent;	// G=0x31e0d3f9; 
@property(readonly, assign) int offsetTop;	// G=0x31e0d2f9; 
@property(readonly, assign) int offsetWidth;	// G=0x31d47809; 
@property(readonly, assign) DOMElement *previousElementSibling;	// G=0x31e0de21; 
@property(readonly, assign) int scrollHeight;	// G=0x31d51b99; 
@property(assign) int scrollLeft;	// G=0x31e0d905; S=0x31e0da09; 
@property(assign) int scrollTop;	// G=0x31e0db0d; S=0x31e0dc11; 
@property(readonly, assign) int scrollWidth;	// G=0x31d51a5d; 
@property(readonly, assign) DOMCSSStyleDeclaration *style;	// G=0x31d0d7a5; 
@property(readonly, assign) NSString *tagName;	// G=0x31c40a99; 
- (GSFontRef)_font;	// 0x31df4459
- (id)_getURLAttribute:(id)attribute;	// 0x31d35389
- (void)blur;	// 0x31d4d841
// declared property getter: - (unsigned)childElementCount;	// 0x31e0df35
// declared property getter: - (int)clientHeight;	// 0x31e0d805
// declared property getter: - (int)clientLeft;	// 0x31e0d505
// declared property getter: - (int)clientTop;	// 0x31e0d605
// declared property getter: - (int)clientWidth;	// 0x31e0d705
// declared property getter: - (id)firstElementChild;	// 0x31d517e1
- (void)focus;	// 0x31e10dcd
- (id)getAttribute:(id)attribute;	// 0x31bf8cb5
- (id)getAttributeNS:(id)ns :(id)arg2;	// 0x31e0eed1
- (id)getAttributeNS:(id)ns localName:(id)name;	// 0x31e0ec75
- (id)getAttributeNode:(id)node;	// 0x31e0e559
- (id)getAttributeNodeNS:(id)ns :(id)arg2;	// 0x31e10375
- (id)getAttributeNodeNS:(id)ns localName:(id)name;	// 0x31e100d5
- (id)getElementsByClassName:(id)name;	// 0x31e112e1
- (id)getElementsByTagName:(id)name;	// 0x31e0ea69
- (id)getElementsByTagNameNS:(id)ns :(id)arg2;	// 0x31e0fe31
- (id)getElementsByTagNameNS:(id)ns localName:(id)name;	// 0x31e0fb8d
- (BOOL)hasAttribute:(id)attribute;	// 0x31e10799
- (BOOL)hasAttributeNS:(id)ns :(id)arg2;	// 0x31e10b89
- (BOOL)hasAttributeNS:(id)ns localName:(id)name;	// 0x31e10945
// declared property getter: - (id)innerText;	// 0x31e0e035
- (BOOL)isFocused;	// 0x31d4dbd9
// declared property getter: - (id)lastElementChild;	// 0x31e0dd15
// declared property getter: - (id)nextElementSibling;	// 0x31d518ed
// declared property getter: - (int)offsetHeight;	// 0x31d47909
// declared property getter: - (int)offsetLeft;	// 0x31e0d1f9
// declared property getter: - (id)offsetParent;	// 0x31e0d3f9
// declared property getter: - (int)offsetTop;	// 0x31e0d2f9
// declared property getter: - (int)offsetWidth;	// 0x31d47809
// declared property getter: - (id)previousElementSibling;	// 0x31e0de21
- (id)querySelector:(id)selector;	// 0x31e114ed
- (id)querySelectorAll:(id)all;	// 0x31e11705
- (void)removeAttribute:(id)attribute;	// 0x31cd41d9
- (void)removeAttributeNS:(id)ns :(id)arg2;	// 0x31e0f94d
- (void)removeAttributeNS:(id)ns localName:(id)name;	// 0x31e0f70d
- (id)removeAttributeNode:(id)node;	// 0x31e0e8e5
- (void)scrollByLines:(int)lines;	// 0x31e110e1
- (void)scrollByPages:(int)pages;	// 0x31e111e1
// declared property getter: - (int)scrollHeight;	// 0x31d51b99
- (void)scrollIntoView:(BOOL)view;	// 0x31e10ed1
- (void)scrollIntoViewIfNeeded:(BOOL)needed;	// 0x31e10fd9
// declared property getter: - (int)scrollLeft;	// 0x31e0d905
// declared property getter: - (int)scrollTop;	// 0x31e0db0d
// declared property getter: - (int)scrollWidth;	// 0x31d51a5d
- (void)setAttribute:(id)attribute :(id)arg2;	// 0x31e0e309
- (void)setAttribute:(id)attribute value:(id)value;	// 0x31cd7335
- (void)setAttributeNS:(id)ns :(id)arg2 :(id)arg3;	// 0x31e0f41d
- (void)setAttributeNS:(id)ns qualifiedName:(id)name value:(id)value;	// 0x31e0f12d
- (id)setAttributeNode:(id)node;	// 0x31e0e761
- (id)setAttributeNodeNS:(id)ns;	// 0x31e10615
// declared property setter: - (void)setScrollLeft:(int)left;	// 0x31e0da09
// declared property setter: - (void)setScrollTop:(int)top;	// 0x31e0dc11
- (int)structuralComplexityContribution;	// 0x31e7613d
// declared property getter: - (id)style;	// 0x31d0d7a5
// declared property getter: - (id)tagName;	// 0x31c40a99
- (BOOL)webkitMatchesSelector:(id)selector;	// 0x31e11921
- (id)webkitRegionOverflow;	// 0x31e0e1f1
@end

