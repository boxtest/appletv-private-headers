/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol PeriodicWorkerTaskDelegate;

@interface PeriodicWorkerTask : XXUnknownSuperclass {
	double interval_;	// 12 = 0xc
	double startTime_;	// 20 = 0x14
	BOOL executing_;	// 28 = 0x1c
	BOOL finished_;	// 29 = 0x1d
	id<PeriodicWorkerTaskDelegate> delegate_;	// 32 = 0x20
}
@property(assign) id<PeriodicWorkerTaskDelegate> delegate;	// G=0x476ac5; S=0x476ad9; @synthesize=delegate_
@property(assign) BOOL executing;	// G=0x476a65; S=0x476a7d; @synthesize=executing_
@property(assign) BOOL finished;	// G=0x476a95; S=0x476aad; @synthesize=finished_
@property(assign) double interval;	// G=0x476995; S=0x4769c9; @synthesize=interval_
@property(assign) double startTime;	// G=0x4769fd; S=0x476a31; @synthesize=startTime_
- (id)init;	// 0x476449
- (id)initWithInterval:(double)interval delegate:(id)delegate;	// 0x476481
- (void)completed;	// 0x476839
- (void)dealloc;	// 0x476529
// declared property getter: - (id)delegate;	// 0x476ac5
- (BOOL)executeIfReady;	// 0x4765b5
- (void)executedTask;	// 0x4767e9
// declared property getter: - (BOOL)executing;	// 0x476a65
// declared property getter: - (BOOL)finished;	// 0x476a95
- (void)finishedTask;	// 0x47673d
// declared property getter: - (double)interval;	// 0x476995
- (BOOL)isConcurrent;	// 0x476991
- (BOOL)isExecuting;	// 0x476961
- (BOOL)isFinished;	// 0x476979
- (void)main;	// 0x4768f1
- (void)refreshStartTime;	// 0x476569
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x476ad9
// declared property setter: - (void)setExecuting:(BOOL)executing;	// 0x476a7d
// declared property setter: - (void)setFinished:(BOOL)finished;	// 0x476aad
// declared property setter: - (void)setInterval:(double)interval;	// 0x4769c9
// declared property setter: - (void)setStartTime:(double)time;	// 0x476a31
- (void)start;	// 0x47683d
// declared property getter: - (double)startTime;	// 0x4769fd
@end
