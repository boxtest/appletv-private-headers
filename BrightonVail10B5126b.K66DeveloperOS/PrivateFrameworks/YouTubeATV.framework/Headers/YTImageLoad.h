/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSString, NSURL, NSURLConnection;

@interface YTImageLoad : NSObject <NSURLConnectionDelegate> {
	NSURL *_URL;	// 4 = 0x4
	NSURLConnection *_connection;	// 8 = 0x8
	NSMutableData *_imageData;	// 12 = 0xc
	NSString *_videoID;	// 16 = 0x10
}
- (void)_createImage;	// 0x3670276d
- (void)_loadFinished;	// 0x367026a9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x36702825
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x36702729
- (void)connectionDidFinishLoading:(id)connection;	// 0x367027f5
- (void)dealloc;	// 0x36702589
- (void)start;	// 0x36702615
@end
