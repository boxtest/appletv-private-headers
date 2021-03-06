/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVHSRequest, ATVHSConnectionStream, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVHSRequestContext : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue> *_completionQueue;	// 4 = 0x4
	id _completionHandler;	// 8 = 0x8
	ATVHSRequest *_hsRequest;	// 12 = 0xc
	CFReadStreamRef _stream;	// 16 = 0x10
	CFRunLoopTimerRef _timer;	// 20 = 0x14
	double _timeSinceLastBytesReceived;	// 24 = 0x18
	ATVHSConnectionStream *_connectionStream;	// 32 = 0x20
}
@property(assign, nonatomic) ATVHSConnectionStream *connectionStream;	// G=0xdc5d1; S=0xdc5e1; @synthesize=_connectionStream
@property(retain) ATVHSRequest *hsRequest;	// G=0xdc561; S=0xdc575; @synthesize=_hsRequest
@property(assign, nonatomic) CFReadStreamRef stream;	// G=0xdc585; S=0xdc3e1; @synthesize=_stream
@property(assign, nonatomic) double timeSinceLastBytesReceived;	// G=0xdc5a5; S=0xdc5bd; @synthesize=_timeSinceLastBytesReceived
@property(assign, nonatomic) CFRunLoopTimerRef timer;	// G=0xdc595; S=0xdc421; @synthesize=_timer
- (id)initWithHSRequest:(id)hsrequest withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xdc299
// declared property getter: - (id)connectionStream;	// 0xdc5d1
- (void)dealloc;	// 0xdc325
- (id)description;	// 0xdc3c1
// declared property getter: - (id)hsRequest;	// 0xdc561
- (void)sendCallBackWithData:(id)data httpStatus:(long)status contentType:(id)type;	// 0xdc461
// declared property setter: - (void)setConnectionStream:(id)stream;	// 0xdc5e1
// declared property setter: - (void)setHsRequest:(id)request;	// 0xdc575
// declared property setter: - (void)setStream:(CFReadStreamRef)stream;	// 0xdc3e1
// declared property setter: - (void)setTimeSinceLastBytesReceived:(double)received;	// 0xdc5bd
// declared property setter: - (void)setTimer:(CFRunLoopTimerRef)timer;	// 0xdc421
// declared property getter: - (CFReadStreamRef)stream;	// 0xdc585
// declared property getter: - (double)timeSinceLastBytesReceived;	// 0xdc5a5
// declared property getter: - (CFRunLoopTimerRef)timer;	// 0xdc595
@end

