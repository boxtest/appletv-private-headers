/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTXMLHTTPRequest.h"

@class NSMutableArray, YTVideo;
@protocol YTCaptionsRequestDelegate;

@interface YTCaptionsRequest : YTXMLHTTPRequest {
	id<YTCaptionsRequestDelegate> _delegate;	// 156 = 0x9c
	NSMutableArray *_captions;	// 160 = 0xa0
	YTVideo *_video;	// 164 = 0xa4
}
@property(readonly, retain) YTVideo *video;	// G=0x368edd71; converted property
- (id)initRequestingCaptionsForVideo:(id)video withDelegate:(id)delegate;	// 0x368edc2d
- (void)_requestCaptionsFromURL:(id)url;	// 0x368edb89
- (void)dealloc;	// 0x368edd0d
- (void)didAuthenticate:(id)authenticate;	// 0x368edf0d
- (void)didParseData;	// 0x368eddfd
- (void)failWithError:(id)error;	// 0x368edf8d
- (int)parseData:(id)data;	// 0x368edd81
// converted property getter: - (id)video;	// 0x368edd71
@end
