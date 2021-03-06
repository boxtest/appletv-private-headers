/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRBaseParserDelegate.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacParserDelegate : BRBaseParserDelegate {
@private
	NSMutableArray *_entries;	// 12 = 0xc
	BOOL _entryCreated;	// 16 = 0x10
	int _curIndex;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *entries;	// G=0x33693bd9; converted property
+ (id)delegate;	// 0x33693d09
- (id)init;	// 0x33693c99
- (void)__atv_end_entry;	// 0x33693991
- (void)__atv_start_entry:(id)entry;	// 0x33693c05
- (id)_selectorForElement:(id)element qName:(id)name end:(BOOL)end;	// 0x336939b9
- (void)dealloc;	// 0x33693c51
- (id)endSelectors;	// 0x336939b5
// converted property getter: - (id)entries;	// 0x33693bd9
- (id)modDate;	// 0x3369398d
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x33693a09
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x33693ab9
- (void)setEntryObject:(id)object forKey:(id)key;	// 0x33693b71
- (id)startSelectors;	// 0x336939b1
@end

