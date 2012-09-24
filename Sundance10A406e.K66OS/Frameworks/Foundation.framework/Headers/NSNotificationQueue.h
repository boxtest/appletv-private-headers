/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSNotificationQueue : NSObject {
	id _notificationCenter;	// 4 = 0x4
	id _asapQueue;	// 8 = 0x8
	id _asapObs;	// 12 = 0xc
	id _idleQueue;	// 16 = 0x10
	id _idleObs;	// 20 = 0x14
}
+ (id)defaultQueue;	// 0x3559685d
- (id)init;	// 0x3559690d
- (id)initWithNotificationCenter:(id)notificationCenter;	// 0x35596949
- (void)_flushNotificationQueue;	// 0x35596a5d
- (void)dealloc;	// 0x355969fd
- (void)dequeueNotificationsMatching:(id)matching coalesceMask:(unsigned)mask;	// 0x35596efd
- (void)enqueueNotification:(id)notification postingStyle:(unsigned)style;	// 0x35596aa5
- (void)enqueueNotification:(id)notification postingStyle:(unsigned)style coalesceMask:(unsigned)mask forModes:(id)modes;	// 0x35596ac9
@end
