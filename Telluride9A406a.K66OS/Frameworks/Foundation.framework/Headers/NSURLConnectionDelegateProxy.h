/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSURLConnectionDelegateProxy : NSObject {
@private
	id delegate;	// 4 = 0x4
	unsigned flags;	// 8 = 0x8
}
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x35e9fd45
- (void)connection:(id)connection didCancelAuthenticationChallenge:(id)challenge;	// 0x35e9fab9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x35e9fc7d
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x35e9fa79
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x35e9fb39
- (void)connection:(id)connection didReceiveData:(id)data lengthReceived:(long long)received;	// 0x35e9fb79
- (void)connection:(id)connection didReceiveDataArray:(id)array;	// 0x35e9fbc1
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x35e9faf9
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x35e9fcbd
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x35e9fc3d
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x35e9fa2d
- (void)connectionDidFinishLoading:(id)connection;	// 0x35e9fc01
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;	// 0x35e9fd05
- (BOOL)respondsToSelector:(SEL)selector;	// 0x35e9f9c5
- (void)setDelegate:(id)delegate;	// 0x35e9f75d
@end

