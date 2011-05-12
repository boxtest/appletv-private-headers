/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVPlayerTimelyCaller.h"


@interface AVPlayerPeriodicCaller : AVPlayerTimelyCaller {
	XXStruct_pwHToB _interval;	// 24 = 0x18
	id _block;	// 48 = 0x30
	OpaqueFigPlaybackItem *_figPlaybackItem;	// 52 = 0x34
}
- (id)initWithPlayer:(id)player interval:(XXStruct_pwHToB)interval queue:(dispatch_queue_s *)queue block:(id)block;	// 0x3473c445
- (void)_resetTimerForPlayerNewRate:(float)playerNewRate;	// 0x3473a785
- (void)_startObservingPlaybackItemNotificationsForCurrentItem;	// 0x3473af6d
- (void)_stopObservingPlaybackItemNotifications;	// 0x3473aecd
- (void)_stopRespondingToPlayerStateChanges;	// 0x34737fc9
- (void)dealloc;	// 0x347395b1
- (void)finalize;	// 0x34739571
- (void)invalidate;	// 0x3473bd35
- (void)itemTimeJumped;	// 0x3473a739
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x347390c1
@end
