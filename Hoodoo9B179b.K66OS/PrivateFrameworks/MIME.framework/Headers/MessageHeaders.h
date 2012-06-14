/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSData;

@interface MessageHeaders : NSObject <NSCopying> {
	NSData *_data;	// 4 = 0x4
	unsigned _preferredEncoding;	// 8 = 0x8
}
@property(assign) unsigned long preferredEncoding;	// G=0x31d53005; S=0x31d53015; converted property
+ (id)addressListFromEncodedString:(id)encodedString;	// 0x31d53875
+ (id)addressListFromEncodedString:(id)encodedString encoding:(unsigned long)encoding;	// 0x31d53889
+ (id)basicHeaders;	// 0x31d53ddd
+ (id)encodedDataForAddressList:(id)addressList splittingAtLength:(unsigned)length firstLineBuffer:(unsigned)buffer;	// 0x31d530b1
+ (BOOL)isStructuredHeaderKey:(id)key;	// 0x31d53dd1
+ (BOOL)shouldDecodeHeaderForKey:(id)key;	// 0x31d53dad
+ (id)uniqueHeaderKeyStringForString:(id)string;	// 0x31d53065
- (id)init;	// 0x31d53025
- (id)initWithHeaderData:(id)headerData encoding:(unsigned long)encoding;	// 0x31d55661
- (id)_capitalizedKeyForKey:(id)key;	// 0x31d55401
- (unsigned long)_contentTypeEncoding;	// 0x31d5530d
- (id)_copyAddressListForKey:(id)key;	// 0x31d54d6d
- (id)_copyEncodedHeaderStringForKey:(id)key;	// 0x31d54e11
- (id)_copyHeaderValueForKey:(id)key;	// 0x31d550b9
- (id)_copyHeaderValueForKey:(id)key offset:(unsigned *)offset decoded:(BOOL)decoded;	// 0x31d551a5
- (id)_decodeHeaderKeysFromData:(id)data;	// 0x31d547f1
- (id)_headerValueForKey:(id)key;	// 0x31d55091
- (id)_headerValueForKey:(id)key offset:(unsigned *)offset;	// 0x31d55171
- (BOOL)_isStructuredHeaderKey:(id)key;	// 0x31d55521
- (void)_setCapitalizedKey:(id)key forKey:(id)key2;	// 0x31d55469
- (id)allHeaderKeys;	// 0x31d55501
- (void)appendHeaderData:(id)data andRecipients:(id)recipients;	// 0x31d53f01
- (id)copyAddressListForBcc;	// 0x31d54c7d
- (id)copyAddressListForCc;	// 0x31d54c99
- (id)copyAddressListForReplyTo;	// 0x31d54c45
- (id)copyAddressListForResentFrom;	// 0x31d54c61
- (id)copyAddressListForSender;	// 0x31d54d51
- (id)copyAddressListForTo;	// 0x31d54cb5
- (id)copyDecodedStringFromHeaderData:(id)headerData withRange:(NSRange)range;	// 0x31d5527d
- (id)copyEncodedStringForBcc;	// 0x31d54bd5
- (id)copyEncodedStringForCc;	// 0x31d54bf1
- (id)copyEncodedStringForResentFrom;	// 0x31d54bb9
- (id)copyEncodedStringForSender;	// 0x31d54c29
- (id)copyEncodedStringForTo;	// 0x31d54c0d
- (id)copyFirstHeaderForKey:(id)key;	// 0x31d54a15
- (id)copyFirstNonDecodedHeaderForKey:(id)key;	// 0x31d5498d
- (id)copyFirstStringValueForKey:(id)key;	// 0x31d548d1
- (id)copyHeadersForKey:(id)key;	// 0x31d5500d
- (id)copyWithZone:(NSZone *)zone;	// 0x31d55609
- (void)dealloc;	// 0x31d555bd
- (id)description;	// 0x31d53e8d
- (id)encodedHeaders;	// 0x31d54595
- (id)firstHeaderForKey:(id)key;	// 0x31d54a39
- (id)firstSenderAddress;	// 0x31d54cd1
- (BOOL)hasHeaderForKey:(id)key;	// 0x31d55055
- (id)headerData;	// 0x31d5552d
- (id)headersForKey:(id)key;	// 0x31d54fe5
- (id)isoLatin1CharsetHint;	// 0x31d5466d
- (BOOL)messageIsFromEntourage;	// 0x31d545cd
- (id)mutableCopy;	// 0x31d55565
// converted property getter: - (unsigned long)preferredEncoding;	// 0x31d53005
- (id)references;	// 0x31d54a59
// converted property setter: - (void)setPreferredEncoding:(unsigned long)encoding;	// 0x31d53015
@end
