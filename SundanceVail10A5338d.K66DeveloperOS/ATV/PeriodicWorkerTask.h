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
@property(assign) id<PeriodicWorkerTaskDelegate> delegate;	// G=0x45b179; S=0x45b189; @synthesize=delegate_
@property(assign) BOOL executing;	// G=0x45b139; S=0x45b149; @synthesize=executing_
@property(assign) BOOL finished;	// G=0x45b159; S=0x45b169; @synthesize=finished_
@property(assign) double interval;	// G=0x45b069; S=0x45b09d; @synthesize=interval_
@property(assign) double startTime;	// G=0x45b0d1; S=0x45b105; @synthesize=startTime_
- (id)init;	// 0x45ab49
- (id)initWithInterval:(double)interval delegate:(id)delegate;	// 0x45ab79
- (void)completed;	// 0x45af15
- (void)dealloc;	// 0x45ac21
// declared property getter: - (id)delegate;	// 0x45b179
- (BOOL)executeIfReady;	// 0x45acad
- (void)executedTask;	// 0x45aec5
// declared property getter: - (BOOL)executing;	// 0x45b139
// declared property getter: - (BOOL)finished;	// 0x45b159
- (void)finishedTask;	// 0x45ae1d
// declared property getter: - (double)interval;	// 0x45b069
- (BOOL)isConcurrent;	// 0x45b065
- (BOOL)isExecuting;	// 0x45b035
- (BOOL)isFinished;	// 0x45b04d
- (void)main;	// 0x45afc5
- (void)refreshStartTime;	// 0x45ac61
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x45b189
// declared property setter: - (void)setExecuting:(BOOL)executing;	// 0x45b149
// declared property setter: - (void)setFinished:(BOOL)finished;	// 0x45b169
// declared property setter: - (void)setInterval:(double)interval;	// 0x45b09d
// declared property setter: - (void)setStartTime:(double)time;	// 0x45b105
- (void)start;	// 0x45af19
// declared property getter: - (double)startTime;	// 0x45b0d1
@end
