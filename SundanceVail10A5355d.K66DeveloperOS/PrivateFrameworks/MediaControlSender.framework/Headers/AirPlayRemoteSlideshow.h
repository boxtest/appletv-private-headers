/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

#import <NSObject.h> // Unknown library

@class MediaControlClient;
@protocol OS_dispatch_queue, AirPlayRemoteSlideshowDelegate;

@interface AirPlayRemoteSlideshow : NSObject {
	NSObject<OS_dispatch_queue> *_internalQueue;	// 4 = 0x4
	MediaControlClient *_client;	// 8 = 0x8
	id<AirPlayRemoteSlideshowDelegate> _delegate;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_userQueue;	// 16 = 0x10
	BOOL _started;	// 20 = 0x14
	double _startTime;	// 24 = 0x18
}
@property(assign, nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;	// G=0x362ec5d5; S=0x362ebc49; @synthesize=_delegate
- (id)init;	// 0x362eb84d
- (void)_configureEventHandler;	// 0x362ebeb5
- (void)dealloc;	// 0x362ebbcd
// declared property getter: - (id)delegate;	// 0x362ec5d5
- (void)getFeaturesWithCompletion:(id)completion;	// 0x362ec171
- (void)getFeaturesWithOptions:(unsigned)options completion:(id)completion;	// 0x362ec039
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x362ebc49
- (void)setDispatchQueue:(id)queue;	// 0x362ebc69
- (void)setHost:(id)host;	// 0x362ebd3d
- (void)setPassword:(id)password;	// 0x362ebdf9
- (void)startWithOptions:(id)options completion:(id)completion;	// 0x362ec185
- (void)stopWithOptions:(id)options completion:(id)completion;	// 0x362ec39d
@end

