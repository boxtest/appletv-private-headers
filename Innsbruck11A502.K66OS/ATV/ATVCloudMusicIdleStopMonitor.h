/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVCloudMusicIdleStopMonitor : XXUnknownSuperclass {
	NSTimer *_playerStopTimer;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x443e41
- (id)init;	// 0x443ebd
- (void).cxx_destruct;	// 0x44425d
- (void)_cancelPlayerStopTimer;	// 0x4441d1
- (void)_playerStateChanged:(id)changed;	// 0x443f51
- (void)_playerStopTimerHandler:(id)handler;	// 0x444159
- (void)_userActivityHandler:(id)handler;	// 0x4440f1
@end

