/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "SCRCTargetSelector.h"
#import "ScreenReaderCore-Structs.h"

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {
	CFRunLoopTimerRef _timer;	// 12 = 0xc
	id _key;	// 16 = 0x10
	BOOL _isCancelled;	// 20 = 0x14
	BOOL _isPending;	// 21 = 0x15
	id _object;	// 24 = 0x18
	NSLock *_lock;	// 28 = 0x1c
	BOOL _createdTimer;	// 32 = 0x20
}
@property(readonly, assign) BOOL isCancelled;	// G=0x35710e49; converted property
@property(readonly, assign) BOOL isPending;	// G=0x35710e59; converted property
+ (void)_runThread;	// 0x357127b9
+ (void)initialize;	// 0x35712759
- (id)initWithTarget:(id)target selector:(SEL)selector;	// 0x35712885
- (id)initWithTarget:(id)target selector:(SEL)selector threadKey:(id)key;	// 0x3570fcc9
- (BOOL)_createdTimer;	// 0x3570e489
- (void)_dispatch;	// 0x3570e4c9
- (void)_dispatchMainThread;	// 0x35710835
- (void)_dispatchSCRCThread;	// 0x35712961
- (void)cancel;	// 0x3570f371
- (void)dealloc;	// 0x35710de1
- (void)dispatchAfterDelay:(double)delay;	// 0x3570f4f1
- (void)dispatchAfterDelay:(double)delay withObject:(id)object;	// 0x357110f5
- (void)invalidate;	// 0x35710d29
// converted property getter: - (BOOL)isCancelled;	// 0x35710e49
// converted property getter: - (BOOL)isPending;	// 0x35710e59
- (oneway void)release;	// 0x3570f175
- (id)threadKey;	// 0x35712951
@end
