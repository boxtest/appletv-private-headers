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
+ (BOOL)deregisterDarwinNotification:(const char *)notification;	// 0x35ebb241
+ (int)notificationTokenForDarwinNotification:(const char *)darwinNotification;	// 0x35ebb279
+ (BOOL)registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x35ebb205
+ (void)setSingleton:(id)singleton;	// 0x35ebb085
+ (id)singleton;	// 0x35ebb075
- (id)init;	// 0x35ebb095
- (BOOL)_deregisterDarwinNotification:(const char *)notification;	// 0x35ebb585
- (BOOL)_registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x35ebb2e1
- (id)_registrationForDarwinNotification:(const char *)darwinNotification;	// 0x35ebb699
- (id)_registrationForToken:(int)token;	// 0x35ebb6e1
- (void)dealloc;	// 0x35ebb0f9
@end

