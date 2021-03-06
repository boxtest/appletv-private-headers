/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PeriodicWorkerTaskDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSConditionLock, NSLock, NSMutableArray, NSMutableSet;

@interface PeriodicWorkerThread : XXUnknownSuperclass <PeriodicWorkerTaskDelegate> {
	BOOL running_;	// 52 = 0x34
	BOOL enabled_;	// 53 = 0x35
	NSConditionLock *workLock_;	// 56 = 0x38
	NSLock *taskLock_;	// 60 = 0x3c
	NSTimer *intervalTimer_;	// 64 = 0x40
	double interval_;	// 68 = 0x44
	NSMutableSet *tasks_;	// 76 = 0x4c
	NSMutableArray *inProcessTasks_;	// 80 = 0x50
}
@property(assign) BOOL enabled;	// G=0x5631ad; S=0x5631d1; @synthesize=enabled_
@property(retain) NSMutableArray *inProcessTasks;	// G=0x5637b1; S=0x5637c5; @synthesize=inProcessTasks_
@property(assign) double interval;	// G=0x563339; S=0x563369; @synthesize=interval_
@property(retain) NSTimer *intervalTimer;	// G=0x563769; S=0x56377d; @synthesize=intervalTimer_
@property(assign) BOOL running;	// G=0x5636f1; S=0x563709; @synthesize=running_
@property(retain) NSLock *taskLock;	// G=0x563745; S=0x563759; @synthesize=taskLock_
@property(retain) NSMutableSet *tasks;	// G=0x56378d; S=0x5637a1; @synthesize=tasks_
@property(retain) NSConditionLock *workLock;	// G=0x563721; S=0x563735; @synthesize=workLock_
- (id)init;	// 0x562b01
- (id)initWithInterval:(double)interval;	// 0x562b19
- (void)addPeriodicWorkerTask:(id)task;	// 0x5634d1
- (void)dealloc;	// 0x562c35
// declared property getter: - (BOOL)enabled;	// 0x5631ad
// declared property getter: - (id)inProcessTasks;	// 0x5637b1
- (void)installTimer;	// 0x563091
// declared property getter: - (double)interval;	// 0x563339
// declared property getter: - (id)intervalTimer;	// 0x563769
- (void)main;	// 0x562cf5
- (void)periodicWorkerTaskDidFinish:(id)periodicWorkerTask;	// 0x563689
- (void)periodicWorkerTaskDidFinishWithCancel:(id)periodicWorkerTask;	// 0x5636e1
- (void)removePeriodicWorkerTask:(id)task;	// 0x563555
- (void)removeTaskFromCollections:(id)collections;	// 0x5635c9
// declared property getter: - (BOOL)running;	// 0x5636f1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x5631d1
// declared property setter: - (void)setInProcessTasks:(id)processTasks;	// 0x5637c5
// declared property setter: - (void)setInterval:(double)interval;	// 0x563369
// declared property setter: - (void)setIntervalTimer:(id)timer;	// 0x56377d
// declared property setter: - (void)setRunning:(BOOL)running;	// 0x563709
// declared property setter: - (void)setTaskLock:(id)lock;	// 0x563759
// declared property setter: - (void)setTasks:(id)tasks;	// 0x5637a1
// declared property setter: - (void)setWorkLock:(id)lock;	// 0x563735
// declared property getter: - (id)taskLock;	// 0x563745
// declared property getter: - (id)tasks;	// 0x56378d
- (void)trigger:(id)trigger;	// 0x563159
// declared property getter: - (id)workLock;	// 0x563721
@end

