/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVServerPushService : XXUnknownSuperclass {
	unsigned long _pushScheduled;	// 4 = 0x4
	NSMutableDictionary *_deviceTopicsRegistry;	// 8 = 0x8
	NSMutableDictionary *_requestRegistry;	// 12 = 0xc
	NSMutableDictionary *_notificationsQueue;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableDictionary *deviceTopicsRegistry;	// G=0x278dd; S=0x278ed; @synthesize=_deviceTopicsRegistry
@property(retain, nonatomic) NSMutableDictionary *notificationsQueue;	// G=0x2794d; S=0x2795d; @synthesize=_notificationsQueue
@property(retain, nonatomic) NSMutableDictionary *requestRegistry;	// G=0x27915; S=0x27925; @synthesize=_requestRegistry
+ (id)sharedInstance;	// 0x265a5
- (id)init;	// 0x26621
- (void).cxx_destruct;	// 0x27985
- (void)_appsUpdated:(id)updated;	// 0x27245
- (void)_dataClientDataUpdated:(id)updated;	// 0x273bd
- (void)_dataClientStatusChanged:(id)changed;	// 0x2726d
- (void)_favoritesUpdated:(id)updated;	// 0x276ed
- (void)_homeSharesChanged:(id)changed;	// 0x278b5
- (void)_playerStateChanged:(id)changed;	// 0x276c5
- (void)_pushNotifications;	// 0x26e05
- (void)_pushNotificationsForReal;	// 0x26ee1
- (void)_registerHandlers;	// 0x26ee5
- (void)_schedulePushWithTopic:(id)topic userInfo:(id)info;	// 0x26e01
- (void)deregisterDevice:(id)device;	// 0x26b35
- (void)deregisterDevice:(id)device forTopic:(id)topic;	// 0x269b5
// declared property getter: - (id)deviceTopicsRegistry;	// 0x278dd
- (void)handleClientPushRequest:(ATVServerRequestRef)request forDevice:(id)device;	// 0x26cd5
// declared property getter: - (id)notificationsQueue;	// 0x2794d
- (void)registerDevice:(id)device forTopic:(id)topic;	// 0x267cd
// declared property getter: - (id)requestRegistry;	// 0x27915
// declared property setter: - (void)setDeviceTopicsRegistry:(id)registry;	// 0x278ed
// declared property setter: - (void)setNotificationsQueue:(id)queue;	// 0x2795d
// declared property setter: - (void)setRequestRegistry:(id)registry;	// 0x27925
@end

