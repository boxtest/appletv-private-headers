/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
 */

#import <NSObject.h> // Unknown library
#import "NSXMLParserDelegate.h"

@class NSMutableString, NSMutableDictionary;

@interface MobileActivationNSXMLParserDelegate : NSObject <NSXMLParserDelegate> {
	int _state;	// 4 = 0x4
	bool _renderHTML;	// 8 = 0x8
	NSMutableString *_currentPlist;	// 12 = 0xc
	NSMutableDictionary *_activationTicket;	// 16 = 0x10
}
- (id)init;	// 0x30084eed
- (id)activationTicket:(id *)ticket;	// 0x3008557d
- (id)activationTicket:(id *)ticket andRenderHTML:(bool *)html;	// 0x300853d1
- (void)appendClosingTagForElementName:(id)elementName;	// 0x30085155
- (void)appendOpeningTagForElementName:(id)elementName andAttributes:(id)attributes;	// 0x300851fd
- (void)dealloc;	// 0x30085599
- (id)flattenedDictString:(id)string;	// 0x300852cd
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x300850fd
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x30084fd9
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x30084f59
- (id)stringForState:(int)state;	// 0x30084eb1
@end
