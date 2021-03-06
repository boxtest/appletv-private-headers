/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableURLRequest, NSMutableData, NSURLConnection;

@interface YTAuthenticatedAccountPost : NSObject <NSURLConnectionDelegate> {
	id _delegate;	// 4 = 0x4
	NSMutableURLRequest *_postRequest;	// 8 = 0x8
	NSURLConnection *_connection;	// 12 = 0xc
	int _type;	// 16 = 0x10
	BOOL _validResponse;	// 20 = 0x14
	NSMutableData *_rawData;	// 24 = 0x18
}
- (void)_cleanup;	// 0x3670c9cd
- (void)_deleteVideo:(id)video;	// 0x3670d509
- (void)_didAuthenticate:(id)authenticate;	// 0x3670cc69
- (void)_failedToAuthenticate:(id)authenticate;	// 0x3670cd41
- (void)_listenForAuthenticationNotifications:(BOOL)authenticationNotifications;	// 0x3670c8f9
- (void)_removePS:(id)ps;	// 0x3670d5d9
- (void)addVideoToFavorites:(id)favorites;	// 0x3670d3f1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3670cfc1
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3670ce05
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3670cd8d
- (void)connectionDidFinishLoading:(id)connection;	// 0x3670ce79
- (void)dealloc;	// 0x3670ca59
- (void)failWithError:(id)error;	// 0x3670caa9
- (void)fileComplaintForVideo:(id)video;	// 0x3670d2cd
- (void)postComment:(id)comment forVideo:(id)video;	// 0x3670d131
- (void)removePlaylist:(id)playlist;	// 0x3670d695
- (void)removeVideoFromFavorites:(id)favorites;	// 0x3670d591
- (void)removeVideoFromPlaylist:(id)playlist;	// 0x3670d5b5
- (void)setDelegate:(id)delegate;	// 0x3670ca99
- (void)setRating:(BOOL)rating forVideo:(id)video;	// 0x3670cfd5
- (void)submitRequest;	// 0x3670cc4d
- (void)submitRequestOfType:(id)type;	// 0x3670cb89
- (void)unsubscribeToSubscription:(id)subscription;	// 0x3670d66d
@end

