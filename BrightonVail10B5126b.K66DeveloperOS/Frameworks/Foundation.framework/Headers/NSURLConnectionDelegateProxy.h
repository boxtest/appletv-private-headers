/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSURLConnectionDelegateProxy : NSObject {
	id delegate;	// 4 = 0x4
	unsigned flags;	// 8 = 0x8
}
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x31984ec9
- (void)connection:(id)connection didCancelAuthenticationChallenge:(id)challenge;	// 0x31984c95
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x31984e19
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x31984c5d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x31984d05
- (void)connection:(id)connection didReceiveData:(id)data lengthReceived:(long long)received;	// 0x31984d3d
- (void)connection:(id)connection didReceiveDataArray:(id)array;	// 0x31984d75
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x31984ccd
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x31984e51
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x31984de1
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x31984c25
- (void)connectionDidFinishLoading:(id)connection;	// 0x31984dad
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;	// 0x31984e89
- (BOOL)respondsToSelector:(SEL)selector;	// 0x31984bc9
- (void)setDelegate:(id)delegate;	// 0x319849b1
@end

