/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CPProgressStage, NSDate, NSMutableArray;

@interface CPProgressContext : NSObject {
	CPProgressStage *m_currentStage;	// 4 = 0x4
	NSDate *m_lastReportTime;	// 8 = 0x8
	NSMutableArray *m_stackOfBranches;	// 12 = 0xc
}
@property(readonly, retain) CPProgressStage *currentStage;	// G=0x31d7e9ad; converted property
+ (void)addProgressObserver:(id)observer selector:(SEL)selector;	// 0x31d7e661
+ (void)advanceProgress:(double)progress;	// 0x31c17fed
+ (id)contextForCurrentThread;	// 0x31c15ed1
+ (id)createBranchWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;	// 0x31d7e71d
+ (void)createContextForCurrentThread;	// 0x31d7e581
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2;	// 0x31c2c939
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;	// 0x31c15e11
+ (double)currentPosition;	// 0x31d7e85d
+ (void)endBranch:(id)branch;	// 0x31d7e7a9
+ (void)endStage;	// 0x31c267a5
+ (void)popBranch;	// 0x31c3b165
+ (void)pushBranch:(id)branch;	// 0x31c277b5
+ (void)removeContextForCurrentThread;	// 0x31d7e611
+ (void)removeProgressObserver:(id)observer;	// 0x31d7e6c1
+ (void)setMessage:(id)message;	// 0x31d7e7d9
+ (void)setProgress:(double)progress;	// 0x31ca031d
+ (id)stageForCurrentThread;	// 0x31c1801d
- (id)init;	// 0x31d7e885
// converted property getter: - (id)currentStage;	// 0x31d7e9ad
- (void)dealloc;	// 0x31d7e91d
- (void)reportProgress:(double)progress;	// 0x31d7e9f9
- (id)rootStage;	// 0x31d7e9bd
@end

