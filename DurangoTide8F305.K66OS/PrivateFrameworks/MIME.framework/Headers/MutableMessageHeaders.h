/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageHeaders.h"
#import "MIME-Structs.h"

@class NSMutableDictionary, NSMutableArray;

@interface MutableMessageHeaders : MessageHeaders {
	NSMutableDictionary *_headersAdded;	// 12 = 0xc
	NSMutableArray *_headersRemoved;	// 16 = 0x10
}
- (void)_appendAddedHeaderKey:(id)key value:(id)value toData:(id)data;	// 0x304ab8f9
- (void)_appendHeaderKey:(id)key value:(id)value toData:(id)data;	// 0x304ac315
- (id)_copyHeaderValueForKey:(id)key;	// 0x304ab6e5
- (id)_copyHeaderValueForKey:(id)key offset:(unsigned *)offset decoded:(BOOL)decoded;	// 0x304ab5bd
- (id)_headerValueForKey:(id)key;	// 0x304abb19
- (id)allHeaderKeys;	// 0x304abc99
- (void)dealloc;	// 0x304abd35
- (id)description;	// 0x304abf41
- (id)encodedHeaders;	// 0x304ac509
- (id)firstHeaderForKey:(id)key;	// 0x304aba35
- (BOOL)hasHeaderForKey:(id)key;	// 0x304abbfd
- (void)mergeHeaders:(id)headers;	// 0x304ac229
- (id)mutableCopy;	// 0x304abd91
- (void)removeHeaderForKey:(id)key;	// 0x304ab9ad
- (void)setAddressList:(id)list forKey:(id)key;	// 0x304ab52d
- (void)setAddressListForBcc:(id)bcc;	// 0x304ab4ad
- (void)setAddressListForCc:(id)cc;	// 0x304ab4cd
- (void)setAddressListForSender:(id)sender;	// 0x304ab50d
- (void)setAddressListForTo:(id)to;	// 0x304ab4ed
- (void)setHeader:(id)header forKey:(id)key;	// 0x304abdf9
- (void)setReferences:(id)references;	// 0x304ab46d
- (void)stripInternalHeaders;	// 0x304ac135
@end

