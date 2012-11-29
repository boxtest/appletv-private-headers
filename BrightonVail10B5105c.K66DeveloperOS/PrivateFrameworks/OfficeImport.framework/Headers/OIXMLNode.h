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

@interface OIXMLNode : NSObject <NSCopying> {
	unsigned _kind;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(readonly, assign) unsigned kind;	// G=0x3791a395; converted property
@property(retain) NSString *name;	// G=0x37919f4d; S=0x37918e49; converted property
@property(retain) id objectValue;	// G=0x37b8a109; S=0x37919115; converted property
@property(retain) id stringValue;	// G=0x3791a3a5; S=0x37918e8d; converted property
+ (void)_escapeCharacters:(const unsigned short *)characters amount:(unsigned)amount escapeWhiteSpaces:(BOOL)spaces inString:(id)string appendingToString:(CFStringRef)string5;	// 0x3791a3c9
+ (void)_escapeHTMLAttributeCharacters:(id)characters withQuote:(unsigned short)quote appendingToString:(CFStringRef)string;	// 0x37b8a129
+ (id)attributeWithName:(id)name stringValue:(id)value;	// 0x37919079
+ (id)elementWithName:(id)name;	// 0x37918d8d
+ (id)elementWithName:(id)name stringValue:(id)value;	// 0x379192e9
+ (id)textWithStringValue:(id)stringValue;	// 0x37921fed
- (id)initWithKind:(unsigned)kind;	// 0x37918e39
- (id)initWithKind:(unsigned)kind name:(id)name stringValue:(id)value;	// 0x379190cd
- (id)XMLString;	// 0x37919fc1
- (void)_appendXMLStringToString:(CFStringRef)string level:(int)level;	// 0x3791a261
- (id)closingTagString;	// 0x37b8a1c1
- (id)contentString;	// 0x37b8a1b1
- (id)copyWithZone:(NSZone *)zone;	// 0x37b8a075
- (void)dealloc;	// 0x3792e3f5
- (id)description;	// 0x37b8a119
// converted property getter: - (unsigned)kind;	// 0x3791a395
// converted property getter: - (id)name;	// 0x37919f4d
// converted property getter: - (id)objectValue;	// 0x37b8a109
- (id)openingTagString;	// 0x37b8a1a5
// converted property setter: - (void)setName:(id)name;	// 0x37918e49
// converted property setter: - (void)setObjectValue:(id)value;	// 0x37919115
// converted property setter: - (void)setStringValue:(id)value;	// 0x37918e8d
// converted property getter: - (id)stringValue;	// 0x3791a3a5
@end
