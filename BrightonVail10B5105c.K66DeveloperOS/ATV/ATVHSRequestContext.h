/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVHSRequest, NSObject, ATVHSConnectionStream;
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
@property(assign, nonatomic) ATVHSConnectionStream *connectionStream;	// G=0xe6055; S=0xe6065; @synthesize=_connectionStream
@property(retain) ATVHSRequest *hsRequest;	// G=0xe5fe5; S=0xe5ff9; @synthesize=_hsRequest
@property(assign, nonatomic) CFReadStreamRef stream;	// G=0xe6009; S=0xe5e65; @synthesize=_stream
@property(assign, nonatomic) double timeSinceLastBytesReceived;	// G=0xe6029; S=0xe6041; @synthesize=_timeSinceLastBytesReceived
@property(assign, nonatomic) CFRunLoopTimerRef timer;	// G=0xe6019; S=0xe5ea5; @synthesize=_timer
- (id)initWithHSRequest:(id)hsrequest withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xe5d1d
// declared property getter: - (id)connectionStream;	// 0xe6055
- (void)dealloc;	// 0xe5da9
- (id)description;	// 0xe5e45
// declared property getter: - (id)hsRequest;	// 0xe5fe5
- (void)sendCallBackWithData:(id)data httpStatus:(long)status contentType:(id)type;	// 0xe5ee5
// declared property setter: - (void)setConnectionStream:(id)stream;	// 0xe6065
// declared property setter: - (void)setHsRequest:(id)request;	// 0xe5ff9
// declared property setter: - (void)setStream:(CFReadStreamRef)stream;	// 0xe5e65
// declared property setter: - (void)setTimeSinceLastBytesReceived:(double)received;	// 0xe6041
// declared property setter: - (void)setTimer:(CFRunLoopTimerRef)timer;	// 0xe5ea5
// declared property getter: - (CFReadStreamRef)stream;	// 0xe6009
// declared property getter: - (double)timeSinceLastBytesReceived;	// 0xe6029
// declared property getter: - (CFRunLoopTimerRef)timer;	// 0xe6019
@end
