/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MFMimeCharset : NSObject {
	unsigned _encoding;	// 4 = 0x4
	NSString *_primaryLanguage;	// 8 = 0x8
	NSString *_charsetName;	// 12 = 0xc
	unsigned _coversLargeUnicodeSubset : 1;	// 16 = 0x10
	unsigned _useBase64InHeaders : 1;	// 16 = 0x10
	unsigned _canBeUsedForOutgoingMessages : 1;	// 16 = 0x10
}
@property(readonly, retain) NSString *charsetName;	// G=0x32faf43d; converted property
@property(readonly, retain) NSString *primaryLanguage;	// G=0x32faeb1d; converted property
+ (id)allMimeCharsets;	// 0x32faec7d
+ (id)allMimeCharsets:(BOOL)charsets;	// 0x32faec91
+ (id)charsetForEncoding:(unsigned long)encoding;	// 0x32faec1d
+ (id)preferredMimeCharset;	// 0x32faebd5
- (id)initWithEncoding:(unsigned long)encoding;	// 0x32faf4a1
- (void)_setPrimaryLanguage:(id)language;	// 0x32faeb2d
- (BOOL)canBeUsedForOutgoingMessages;	// 0x32faeae1
// converted property getter: - (id)charsetName;	// 0x32faf43d
- (BOOL)coversLargeUnicodeSubset;	// 0x32faeaf5
- (void)dealloc;	// 0x32faeb75
- (id)description;	// 0x32faf35d
- (id)displayName;	// 0x32faf3f9
- (unsigned long)encoding;	// 0x32faead1
// converted property getter: - (id)primaryLanguage;	// 0x32faeb1d
- (BOOL)useBase64InHeaders;	// 0x32faeb09
@end

