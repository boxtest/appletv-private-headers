/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSOperationQueue, NSOperation;

__attribute__((visibility("hidden")))
@interface __NSOperationInternal : NSObject {
	unsigned char __pad1[16];	// 4 = 0x4
	NSOperation *__outerOp;	// 20 = 0x14
	NSOperation *__prevOp;	// 24 = 0x18
	NSOperation *__nextOp;	// 28 = 0x1c
	NSOperation *__nextPriOp;	// 32 = 0x20
	NSOperationQueue *__queue;	// 36 = 0x24
	id __dependencies;	// 40 = 0x28
	id __down_dependencies;	// 44 = 0x2c
	long long __unfinished_deps;	// 48 = 0x30
	id __completion;	// 56 = 0x38
	void *__obsInfo;	// 60 = 0x3c
	void *__implicitObsInfo;	// 64 = 0x40
	long long __seqno;	// 68 = 0x44
	double __thread_prio;	// 76 = 0x4c
	int __RC;	// 84 = 0x54
	int __state;	// 88 = 0x58
	BOOL __prio;	// 92 = 0x5c
	unsigned char __cached_isReady;	// 93 = 0x5d
	unsigned char __isCancelled;	// 94 = 0x5e
	unsigned char __isBarrier;	// 95 = 0x5f
	unsigned char __pad2[4];	// 96 = 0x60
	opaque_pthread_mutex_t __wait_mutex;	// 100 = 0x64
	opaque_pthread_cond_t __wait_cond;	// 144 = 0x90
	unsigned char __pad3[40];	// 172 = 0xac
}
@property(retain) id completionBlock;	// G=0x31970e99; S=0x31980fed; converted property
@property(readonly, retain) id dependencies;	// G=0x319e443d; converted property
@property(assign) int queuePriority;	// G=0x319e3a71; S=0x319e3a81; converted property
@property(assign) double threadPriority;	// G=0x319e3d29; S=0x319e3d41; converted property
+ (void)_observeValueForKeyPath:(id)keyPath ofObject:(id)object changeKind:(unsigned)kind oldValue:(id)value newValue:(id)value5 indexes:(id)indexes context:(void *)context;	// 0x3196feed
- (id)init;	// 0x3196e8f1
- (id)__;	// 0x319e48d5
- (BOOL)_isDeallocating;	// 0x319e3805
- (BOOL)_tryRetain;	// 0x319e3801
- (void)addDependency:(id)dependency;	// 0x319e3ee9
- (void)cancel;	// 0x31993f51
// converted property getter: - (id)completionBlock;	// 0x31970e99
- (void)dealloc;	// 0x3197ffc5
// converted property getter: - (id)dependencies;	// 0x319e443d
- (void)finalize;	// 0x319e3985
- (void)invalidate;	// 0x3197ff69
- (BOOL)isCancelled;	// 0x31980f91
- (BOOL)isExecuting;	// 0x31977381
- (BOOL)isFinished;	// 0x31970db9
- (BOOL)isReady;	// 0x3196efd1
// converted property getter: - (int)queuePriority;	// 0x319e3a71
- (oneway void)release;	// 0x3197ff6d
- (void)removeDependency:(id)dependency;	// 0x319e4195
- (id)retain;	// 0x319e37b1
- (unsigned)retainCount;	// 0x319e37f1
// converted property setter: - (void)setCompletionBlock:(id)block;	// 0x31980fed
// converted property setter: - (void)setQueuePriority:(int)priority;	// 0x319e3a81
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x319e3d41
- (void)start;	// 0x3196ea71
// converted property getter: - (double)threadPriority;	// 0x319e3d29
- (void)waitUntilFinished;	// 0x319969bd
- (void)waitUntilFinishedOrTimeout:(double)timeout;	// 0x319e3d99
@end

