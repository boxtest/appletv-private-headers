/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSXMLParserDelegate.h"
#import "IMFoundation-Structs.h"

@class NSXMLParser, IMXMLParserContext, IMXMLParserFrame, NSMutableArray;

@interface IMXMLParser : NSObject <NSXMLParserDelegate> {
	NSXMLParser *_parser;	// 4 = 0x4
	IMXMLParserContext *_context;	// 8 = 0x8
	IMXMLParserFrame *_topFrame;	// 12 = 0xc
	NSMutableArray *_otherFrames;	// 16 = 0x10
	TidyDoc *_tidyDoc;	// 20 = 0x14
	CFDictionaryRef _framespace;	// 24 = 0x18
}
+ (id)sharedInstance;	// 0x3693bc0d
- (id)_newDataByTidyingData:(id)data;	// 0x3693be05
- (void)_setupTidy;	// 0x3693bcb9
- (void)_teardownTidy;	// 0x3693bde1
- (BOOL)parseContext:(id)context;	// 0x3693bf55
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x3692ef45
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x3692eba1
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x3692ed7d
- (void)parser:(id)parser foundIgnorableWhitespace:(id)whitespace;	// 0x3693c421
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;	// 0x3693c46d
@end

