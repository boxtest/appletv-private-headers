/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLNode : NSObject <NSCopying> {
@private
	unsigned _kind;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(readonly, assign) unsigned kind;	// G=0x3437c6a9; converted property
@property(retain) NSString *name;	// G=0x3437c4e9; S=0x343753b5; converted property
@property(retain) id objectValue;	// G=0x34643431; S=0x343753f9; converted property
@property(retain) id stringValue;	// G=0x3437c6b9; S=0x34377665; converted property
+ (void)_escapeCharacters:(const unsigned short *)characters amount:(unsigned)amount escapeWhiteSpaces:(BOOL)spaces inString:(id)string appendingToString:(CFStringRef)string5;	// 0x3437c6d9
+ (void)_escapeHTMLAttributeCharacters:(id)characters withQuote:(unsigned short)quote appendingToString:(CFStringRef)string;	// 0x346434f5
+ (id)attributeWithName:(id)name stringValue:(id)value;	// 0x3437530d
+ (id)elementWithName:(id)name;	// 0x343775bd
+ (id)elementWithName:(id)name stringValue:(id)value;	// 0x34413239
+ (id)textWithStringValue:(id)stringValue;	// 0x3437bb79
- (id)initWithKind:(unsigned)kind;	// 0x343753a5
- (id)initWithKind:(unsigned)kind name:(id)name stringValue:(id)value;	// 0x34375361
- (id)XMLString;	// 0x3437c2a9
- (void)_appendXMLStringToString:(CFStringRef)string level:(int)level;	// 0x3437c561
- (id)closingTagString;	// 0x3464344d
- (id)contentString;	// 0x34643575
- (id)copyWithZone:(NSZone *)zone;	// 0x34643459
- (void)dealloc;	// 0x344012f9
- (id)description;	// 0x34643585
// converted property getter: - (unsigned)kind;	// 0x3437c6a9
// converted property getter: - (id)name;	// 0x3437c4e9
// converted property getter: - (id)objectValue;	// 0x34643431
- (id)openingTagString;	// 0x34643441
// converted property setter: - (void)setName:(id)name;	// 0x343753b5
// converted property setter: - (void)setObjectValue:(id)value;	// 0x343753f9
// converted property setter: - (void)setStringValue:(id)value;	// 0x34377665
// converted property getter: - (id)stringValue;	// 0x3437c6b9
@end

