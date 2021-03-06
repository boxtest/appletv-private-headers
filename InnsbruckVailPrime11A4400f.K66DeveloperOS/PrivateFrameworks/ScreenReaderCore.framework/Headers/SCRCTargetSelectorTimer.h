/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import "SCRCTargetSelector.h"

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
@property(readonly, assign) BOOL isCancelled;	// G=0x327242e9; converted property
@property(readonly, assign) BOOL isPending;	// G=0x327242f9; converted property
+ (void)_runThread;	// 0x32725bb9
+ (void)initialize;	// 0x32725b59
- (id)initWithTarget:(id)target selector:(SEL)selector;	// 0x32725c85
- (id)initWithTarget:(id)target selector:(SEL)selector threadKey:(id)key;	// 0x32723131
- (BOOL)_createdTimer;	// 0x32721801
- (void)_dispatch;	// 0x32721841
- (void)_dispatchMainThread;	// 0x32723cd9
- (void)_dispatchSCRCThread;	// 0x32725d65
- (void)cancel;	// 0x327226e9
- (void)dealloc;	// 0x32724281
- (void)dispatchAfterDelay:(double)delay;	// 0x32722871
- (void)dispatchAfterDelay:(double)delay withObject:(id)object;	// 0x3272458d
- (void)invalidate;	// 0x327241c9
// converted property getter: - (BOOL)isCancelled;	// 0x327242e9
// converted property getter: - (BOOL)isPending;	// 0x327242f9
- (oneway void)release;	// 0x327224f5
- (id)threadKey;	// 0x32725d51
@end

