/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIRemoteApplication : NSObject {
	NSString *_machServiceName;	// 4 = 0x4
	unsigned _port;	// 8 = 0x8
}
- (id)initWithBundleIdentifier:(id)bundleIdentifier;	// 0x33c14605
- (id)initWithMachServiceName:(id)machServiceName;	// 0x33b7b36d
- (void)backgroundContinuationEnabledDidChange:(BOOL)backgroundContinuationEnabled;	// 0x33c14b75
- (void)dealloc;	// 0x33c14641
- (void)hideTopMostMiniAlert;	// 0x33c146b5
- (void)localNotificationDidSnooze:(id)localNotification;	// 0x33c14ac9
- (void)localNotificationMessageDelivered:(id)delivered;	// 0x33c14a1d
- (void)remoteNotificationMessageDelivered;	// 0x33c149c9
- (void)remoteNotificationRegistrationFailedWithErrorDomain:(id)errorDomain code:(int)code localizedDescription:(id)description;	// 0x33c1493d
- (void)remoteNotificationRegistrationSucceededWithDeviceToken:(id)deviceToken;	// 0x33c148b1
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)sheetWithRemoteViewIdentifier;	// 0x33c14819
- (void)showTopMostMiniAlertWithSynchronizationPort:(unsigned)synchronizationPort;	// 0x33c14709
- (void)simpleRemoteActionDidOccur:(int)simpleRemoteAction;	// 0x33c147c1
- (void)statusBarWillChangeOrientation:(int)statusBar duration:(float)duration;	// 0x33c14761
- (void)updatePort;	// 0x33b7b3c1
- (void)wakeTimerFired;	// 0x33c14bcd
@end
