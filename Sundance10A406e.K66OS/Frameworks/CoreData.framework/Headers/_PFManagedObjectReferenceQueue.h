/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject {
	int _cd_rc;	// 4 = 0x4
	int _spinLock;	// 8 = 0x8
	int _flags;	// 12 = 0xc
	int _signalRunloop;	// 16 = 0x10
	NSManagedObjectContext *_context;	// 20 = 0x14
	CFArrayRef _queue;	// 24 = 0x18
	CFRunLoopObserverRef _rlObserver;	// 28 = 0x1c
}
- (id)initForContext:(id)context;	// 0x33ccf2e5
- (BOOL)_GC_queueForDealloc:(id)dealloc;	// 0x33d37ba1
- (void)_contextDidDealloc;	// 0x33d37b41
- (BOOL)_isDeallocating;	// 0x33d37a1d
- (void)_processReferenceQueue:(BOOL)queue;	// 0x33cb7569
- (BOOL)_queueBatchForDealloc:(CFArrayRef)dealloc;	// 0x33d37ce5
- (int)_queueCount;	// 0x33cb6131
- (BOOL)_queueForDealloc:(id)dealloc;	// 0x33d37be5
- (BOOL)_signal;	// 0x33d37ba5
- (BOOL)_tryRetain;	// 0x33d37a19
- (void)_unregisterRunloopObservers;	// 0x33d37a21
- (void)dealloc;	// 0x33d37a99
- (void)finalize;	// 0x33d37aed
- (void)release;	// 0x33ccf40d
- (id)retain;	// 0x33ccf3ed
- (unsigned)retainCount;	// 0x33d37a05
@end

