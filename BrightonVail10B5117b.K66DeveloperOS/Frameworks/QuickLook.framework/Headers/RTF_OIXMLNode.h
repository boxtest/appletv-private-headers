/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library
#import "QuickLook-Structs.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RTF_OIXMLNode : NSObject <NSCopying> {
	unsigned _kind;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(readonly, assign) unsigned kind;	// G=0x32bc3679; converted property
@property(retain) NSString *name;	// G=0x32bc36cd; S=0x32bc3689; converted property
@property(retain) id objectValue;	// G=0x32bc37b1; S=0x32bc376d; converted property
@property(retain) id stringValue;	// G=0x32bc3749; S=0x32bc3705; converted property
+ (void)_escapeCharacters:(const unsigned short *)characters amount:(unsigned)amount escapeWhiteSpaces:(BOOL)spaces inString:(id)string appendingToString:(CFStringRef)string5;	// 0x32bc384d
+ (void)_escapeHTMLAttributeCharacters:(id)characters withQuote:(unsigned short)quote appendingToString:(CFStringRef)string;	// 0x32bc37d1
+ (id)attributeWithName:(id)name stringValue:(id)value;	// 0x32bc358d
+ (id)elementWithName:(id)name;	// 0x32bc35e1
+ (id)elementWithName:(id)name stringValue:(id)value;	// 0x32bc362d
+ (id)textWithStringValue:(id)stringValue;	// 0x32bc352d
- (id)initWithKind:(unsigned)kind;	// 0x32bc33dd
- (id)initWithKind:(unsigned)kind name:(id)name stringValue:(id)value;	// 0x32bc33ed
- (id)XMLString;	// 0x32bc3b4d
- (void)_appendXMLStringToString:(CFStringRef)string;	// 0x32bc3bb1
- (id)closingTagString;	// 0x32bc3ba5
- (id)contentString;	// 0x32bc3b95
- (id)copyWithZone:(NSZone *)zone;	// 0x32bc3435
- (void)dealloc;	// 0x32bc34c9
- (id)description;	// 0x32bc37c1
// converted property getter: - (unsigned)kind;	// 0x32bc3679
// converted property getter: - (id)name;	// 0x32bc36cd
// converted property getter: - (id)objectValue;	// 0x32bc37b1
- (id)openingTagString;	// 0x32bc3b89
// converted property setter: - (void)setName:(id)name;	// 0x32bc3689
// converted property setter: - (void)setObjectValue:(id)value;	// 0x32bc376d
// converted property setter: - (void)setStringValue:(id)value;	// 0x32bc3705
// converted property getter: - (id)stringValue;	// 0x32bc3749
@end

