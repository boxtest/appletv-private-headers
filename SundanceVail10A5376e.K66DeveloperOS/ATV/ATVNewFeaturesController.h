/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVNewFeaturesController : BRController {
	BOOL _iTunesStoreInitialized;	// 100 = 0x64
	NSTimer *_storeWaitTimer;	// 104 = 0x68
	BOOL _launchedApp;	// 108 = 0x6c
}
- (id)init;	// 0x23b48d
- (void)_gatherConfigAndLaunch;	// 0x23b9d1
- (void)_musicStoreNotification:(id)notification;	// 0x23b675
- (void)_storeWaitTimerFired:(id)fired;	// 0x23b631
- (id)_whatsNewConfiguration;	// 0x23b865
- (id)_whatsNewURL;	// 0x23b77d
- (void)dealloc;	// 0x23b4b9
- (BOOL)isAccessibilityElement;	// 0x23b671
- (void)wasPushed;	// 0x23b515
@end
