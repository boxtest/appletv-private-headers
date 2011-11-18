/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference, AVPlayer;

@interface AVPlayerTimelyCaller : NSObject {
	AVWeakReference *_weakReference;	// 4 = 0x4
	AVPlayer *_player;	// 8 = 0x8
	dispatch_queue_s *_timerQueue;	// 12 = 0xc
	dispatch_source_s *_timerSource;	// 16 = 0x10
	BOOL _isTimerSourceRunning;	// 20 = 0x14
	BOOL _timerQueueIsPlayerStateDispatchQueue;	// 21 = 0x15
}
@property(readonly, retain) AVPlayer *player;	// G=0x34698d21; converted property
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference *weakReference;	// G=0x34698d31; @synthesize=_weakReference
- (id)initWithPlayer:(id)player queue:(dispatch_queue_s *)queue;	// 0x346a039d
// declared property getter: - (id)_weakReference;	// 0x34698d31
- (void)dealloc;	// 0x346a02cd
- (void)finalize;	// 0x346a022d
- (void)invalidate;	// 0x346a0159
- (void)itemTimeJumped;	// 0x34698d1d
// converted property getter: - (id)player;	// 0x34698d21
@end

