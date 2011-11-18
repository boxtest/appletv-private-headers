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
@property(readonly, assign) unsigned kind;	// G=0x30bea6a9; converted property
@property(retain) NSString *name;	// G=0x30bea4e9; S=0x30be33b5; converted property
@property(retain) id objectValue;	// G=0x30eb1431; S=0x30be33f9; converted property
@property(retain) id stringValue;	// G=0x30bea6b9; S=0x30be5665; converted property
+ (void)_escapeCharacters:(const unsigned short *)characters amount:(unsigned)amount escapeWhiteSpaces:(BOOL)spaces inString:(id)string appendingToString:(CFStringRef)string5;	// 0x30bea6d9
+ (void)_escapeHTMLAttributeCharacters:(id)characters withQuote:(unsigned short)quote appendingToString:(CFStringRef)string;	// 0x30eb14f5
+ (id)attributeWithName:(id)name stringValue:(id)value;	// 0x30be330d
+ (id)elementWithName:(id)name;	// 0x30be55bd
+ (id)elementWithName:(id)name stringValue:(id)value;	// 0x30c81239
+ (id)textWithStringValue:(id)stringValue;	// 0x30be9b79
- (id)initWithKind:(unsigned)kind;	// 0x30be33a5
- (id)initWithKind:(unsigned)kind name:(id)name stringValue:(id)value;	// 0x30be3361
- (id)XMLString;	// 0x30bea2a9
- (void)_appendXMLStringToString:(CFStringRef)string level:(int)level;	// 0x30bea561
- (id)closingTagString;	// 0x30eb144d
- (id)contentString;	// 0x30eb1575
- (id)copyWithZone:(NSZone *)zone;	// 0x30eb1459
- (void)dealloc;	// 0x30c6f2f9
- (id)description;	// 0x30eb1585
// converted property getter: - (unsigned)kind;	// 0x30bea6a9
// converted property getter: - (id)name;	// 0x30bea4e9
// converted property getter: - (id)objectValue;	// 0x30eb1431
- (id)openingTagString;	// 0x30eb1441
// converted property setter: - (void)setName:(id)name;	// 0x30be33b5
// converted property setter: - (void)setObjectValue:(id)value;	// 0x30be33f9
// converted property setter: - (void)setStringValue:(id)value;	// 0x30be5665
// converted property getter: - (id)stringValue;	// 0x30bea6b9
@end

