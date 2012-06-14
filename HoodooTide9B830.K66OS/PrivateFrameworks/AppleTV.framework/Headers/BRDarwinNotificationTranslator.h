/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

@interface BRDarwinNotificationTranslator : BRSingleton {
@private
	NSMutableDictionary *_registrations;	// 4 = 0x4
}
+ (BOOL)deregisterDarwinNotification:(const char *)notification;	// 0x32a9dfcd
+ (int)notificationTokenForDarwinNotification:(const char *)darwinNotification;	// 0x32a9e005
+ (BOOL)registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x32a9df91
+ (void)setSingleton:(id)singleton;	// 0x32a9de11
+ (id)singleton;	// 0x32a9de01
- (id)init;	// 0x32a9de21
- (BOOL)_deregisterDarwinNotification:(const char *)notification;	// 0x32a9e34d
- (BOOL)_registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x32a9e06d
- (id)_registrationForDarwinNotification:(const char *)darwinNotification;	// 0x32a9e465
- (id)_registrationForToken:(int)token;	// 0x32a9e4ad
- (void)dealloc;	// 0x32a9de85
@end
