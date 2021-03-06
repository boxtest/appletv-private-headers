/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _PFManagedObjectReferenceQueue : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	int _spinLock;	// 8 = 0x8
	int _flags;	// 12 = 0xc
	int _signalRunloop;	// 16 = 0x10
	NSManagedObjectContext *_context;	// 20 = 0x14
	CFArrayRef _queue;	// 24 = 0x18
	CFRunLoopObserverRef _rlObserver;	// 28 = 0x1c
}
- (id)initForContext:(id)context;	// 0x33f2e7b5
- (BOOL)_GC_queueForDealloc:(id)dealloc;	// 0x33fab309
- (void)_contextDidDealloc;	// 0x33f5de51
- (BOOL)_isDeallocating;	// 0x33fab305
- (void)_processReferenceQueue:(BOOL)queue;	// 0x33f5d575
- (BOOL)_queueBatchForDealloc:(CFArrayRef)dealloc;	// 0x33f5e459
- (int)_queueCount;	// 0x33f60d69
- (BOOL)_queueForDealloc:(id)dealloc;	// 0x33f5e22d
- (BOOL)_signal;	// 0x33fab30d
- (BOOL)_tryRetain;	// 0x33fab301
- (void)_unregisterRunloopObservers;	// 0x33f5bd15
- (void)dealloc;	// 0x33f5e619
- (void)finalize;	// 0x33fb65c1
- (void)release;	// 0x33f2e8d9
- (id)retain;	// 0x33f2e8b9
- (unsigned)retainCount;	// 0x33fab2ed
@end

