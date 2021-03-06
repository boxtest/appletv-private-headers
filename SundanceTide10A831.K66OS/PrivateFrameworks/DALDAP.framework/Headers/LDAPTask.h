/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import "DATask.h"
#import <DADisableableObject.h> // Unknown library

@class LDAPTaskManager;

@interface LDAPTask : DADisableableObject <DATask> {
	LDAPTaskManager *_taskManager;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
@property(assign) id delegate;	// G=0x35ce6461; S=0x35ce6451; 
@property(assign) LDAPTaskManager *taskManager;	// G=0x35ce6631; S=0x35ce6645; @synthesize=_taskManager
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x35ce6531
// declared property getter: - (id)delegate;	// 0x35ce6461
- (void)finishWithError:(id)error;	// 0x35ce64f5
- (int)numDownloadedElements;	// 0x35ce6471
- (void)performTask;	// 0x35ce6351
- (void)performTaskInBackground;	// 0x35ce644d
- (void)reportStatusWithError:(id)error;	// 0x35ce6475
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35ce6451
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x35ce6645
- (BOOL)shouldHoldPowerAssertion;	// 0x35ce6589
// declared property getter: - (id)taskManager;	// 0x35ce6631
- (int)taskStatusForError:(id)error;	// 0x35ce658d
@end

