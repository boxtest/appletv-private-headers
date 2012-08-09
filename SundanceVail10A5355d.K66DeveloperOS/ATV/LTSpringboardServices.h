/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LTSpringboardServices : BRSingleton {
	NSDictionary *_capabilities;	// 4 = 0x4
}
+ (void)configureAggregateReporting;	// 0x4f4dd
+ (void)configureGraphicsCapabilities;	// 0x4f60d
+ (void)monitorOSMemoryNotifications;	// 0x4f6c5
+ (void)setSingleton:(id)singleton;	// 0x4f4b9
+ (id)singleton;	// 0x4f4a9
- (void).cxx_destruct;	// 0x4f751
- (id)_collectPlaybackLogPaths;	// 0x505dd
- (id)_collectThermalLogPaths;	// 0x5085d
- (void)_generateDPLog;	// 0x503b5
- (void)_postOSMemoryNotification;	// 0x4ff6d
- (void)_sendLogsImmediately:(id)immediately;	// 0x5001d
- (void)_updateCapabilities;	// 0x4f765
@end
