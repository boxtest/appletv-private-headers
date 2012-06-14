/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class EKEventStore, NSArray, PCPersistentTimer, NSMutableArray, NSDate;
@protocol OS_dispatch_queue;

@interface _EKNotificationMonitor : NSObject {
@private
	EKEventStore *_eventStore;	// 4 = 0x4
	id _eventStoreGetter;	// 8 = 0x8
	BOOL _running;	// 12 = 0xc
	PCPersistentTimer *_timer;	// 16 = 0x10
	NSDate *_nextFireTime;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_timerQueue;	// 28 = 0x1c
	int _lastCount;	// 32 = 0x20
	NSMutableArray *_notifications;	// 36 = 0x24
	BOOL _initialCheck;	// 40 = 0x28
	BOOL _shouldInstallPersistentTimer;	// 41 = 0x29
}
@property(readonly, assign, nonatomic) unsigned notificationCount;	// G=0x30e4b4d1; 
@property(readonly, assign, nonatomic) NSArray *notifications;	// G=0x30e4b59d; 
- (id)init;	// 0x30e4b125
- (id)initForBulletinBoardWithEventStoreGetter:(id)eventStoreGetter;	// 0x30e4b0a1
- (id)initWithEventStore:(id)eventStore;	// 0x30e4b0e5
- (unsigned)_checkForNotifications:(id)notifications;	// 0x30e4bab9
- (void)_checkForUpdates;	// 0x30e4cc71
- (void)_databaseChanged;	// 0x30e4ba31
- (id)_eventStore;	// 0x30e4b251
- (void)_notifyForUnalertedNotifications:(id)unalertedNotifications;	// 0x30e4cf95
- (void)_resetTimer;	// 0x30e4b74d
- (void)_timerFired;	// 0x30e4ba7d
- (void)adjust;	// 0x30e4b6c5
- (void)dealloc;	// 0x30e4b195
- (void)killTimer;	// 0x30e4b2a1
// declared property getter: - (unsigned)notificationCount;	// 0x30e4b4d1
// declared property getter: - (id)notifications;	// 0x30e4b59d
- (void)start;	// 0x30e4b301
- (void)stop;	// 0x30e4b3c1
@end
