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
- (void)_appendAddedHeaderKey:(id)key value:(id)value toData:(id)data;	// 0x311ea645
- (void)_appendHeaderKey:(id)key value:(id)value toData:(id)data;	// 0x311ea709
- (id)_copyHeaderValueForKey:(id)key;	// 0x311ea40d
- (id)_copyHeaderValueForKey:(id)key offset:(unsigned *)offset decoded:(BOOL)decoded;	// 0x311ea2d1
- (id)_headerValueForKey:(id)key;	// 0x311ead65
- (id)allHeaderKeys;	// 0x311eaf09
- (void)dealloc;	// 0x311eafc1
- (id)description;	// 0x311e9aa5
- (id)encodedHeaders;	// 0x311e9f35
- (id)firstHeaderForKey:(id)key;	// 0x311eac6d
- (BOOL)hasHeaderForKey:(id)key;	// 0x311eae5d
- (void)mergeHeaders:(id)headers;	// 0x311ea979
- (id)mutableCopy;	// 0x311e9a31
- (void)removeHeaderForKey:(id)key;	// 0x311eabc9
- (void)setAddressList:(id)list forKey:(id)key;	// 0x311e9e99
- (void)setAddressListForBcc:(id)bcc;	// 0x311e9e09
- (void)setAddressListForCc:(id)cc;	// 0x311e9e2d
- (void)setAddressListForSender:(id)sender;	// 0x311e9e75
- (void)setAddressListForTo:(id)to;	// 0x311e9e51
- (void)setHeader:(id)header forKey:(id)key;	// 0x311eaa65
- (void)setReferences:(id)references;	// 0x311e9dbd
- (void)stripInternalHeaders;	// 0x311e9cb1
@end

