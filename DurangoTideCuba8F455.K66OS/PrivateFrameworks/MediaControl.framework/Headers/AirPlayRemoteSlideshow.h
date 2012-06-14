/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControl.framework/MediaControl
 */

#import "MediaControl-Structs.h"
#import <NSObject.h> // Unknown library

@class MediaControlClient;
@protocol AirPlayRemoteSlideshowDelegate;

@interface AirPlayRemoteSlideshow : NSObject {
	dispatch_queue_s *_internalQueue;	// 4 = 0x4
	dispatch_semaphore_s *_internalSem;	// 8 = 0x8
	MediaControlClient *_client;	// 12 = 0xc
	id<AirPlayRemoteSlideshowDelegate> _delegate;	// 16 = 0x10
	dispatch_queue_s *_userQueue;	// 20 = 0x14
	BOOL _started;	// 24 = 0x18
	double _startTime;	// 28 = 0x1c
}
@property(assign, nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;	// G=0x30054fd1; S=0x3005524d; @synthesize=_delegate
- (id)init;	// 0x3005526d
- (void)_configureEventHandler;	// 0x30055139
- (void)dealloc;	// 0x30055829
// declared property getter: - (id)delegate;	// 0x30054fd1
- (void)getFeaturesWithCompletion:(id)completion;	// 0x300558b9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3005524d
- (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x300559f9
- (void)setHost:(id)host;	// 0x300559a9
- (void)setPassword:(id)password;	// 0x30055959
- (void)startWithOptions:(id)options completion:(id)completion;	// 0x30055a5d
- (void)stopWithOptions:(id)options completion:(id)completion;	// 0x30055b79
@end
