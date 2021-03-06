/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString, NSCharacterSet;

@interface SFUJsonScanner : NSObject {
	NSString *mString;	// 4 = 0x4
	unsigned short *mCharacters;	// 8 = 0x8
	unsigned mLength;	// 12 = 0xc
	unsigned mOffset;	// 16 = 0x10
	NSCharacterSet *mWhitespaceCharacterSet;	// 20 = 0x14
	NSCharacterSet *mDecimalDigitCharacterSet;	// 24 = 0x18
}
- (id)initWithString:(id)string;	// 0x34ac8071
- (void)appendCharactersInRange:(NSRange)range toString:(id)string;	// 0x34ac8355
- (void)dealloc;	// 0x34ac816d
- (unsigned short)nextCharacter;	// 0x34ac81f5
- (id)parseArray;	// 0x34ac8705
- (BOOL)parseConstantString:(const char *)string;	// 0x34ac8819
- (id)parseDictionary;	// 0x34ac85ad
- (id)parseFalse;	// 0x34ac88e1
- (id)parseHexCharacter;	// 0x34ac82b1
- (id)parseNull;	// 0x34ac884d
- (id)parseNumber;	// 0x34ac892d
- (id)parseObject;	// 0x34ac8b1d
- (id)parseString;	// 0x34ac83e9
- (id)parseTrue;	// 0x34ac8895
- (void)skipWhitespace;	// 0x34ac8235
@end

