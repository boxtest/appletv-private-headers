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
@property(readonly, retain) CPProgressStage *currentStage;	// G=0x349fba5d; converted property
+ (void)addProgressObserver:(id)observer selector:(SEL)selector;	// 0x349fb711
+ (void)advanceProgress:(double)progress;	// 0x34895035
+ (id)contextForCurrentThread;	// 0x34892f19
+ (id)createBranchWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;	// 0x349fb7cd
+ (void)createContextForCurrentThread;	// 0x349fb631
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2;	// 0x348a9981
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2 name:(id)name;	// 0x34892e59
+ (double)currentPosition;	// 0x349fb90d
+ (void)endBranch:(id)branch;	// 0x349fb859
+ (void)endStage;	// 0x348a37ed
+ (void)popBranch;	// 0x348b81ad
+ (void)pushBranch:(id)branch;	// 0x348a47fd
+ (void)removeContextForCurrentThread;	// 0x349fb6c1
+ (void)removeProgressObserver:(id)observer;	// 0x349fb771
+ (void)setMessage:(id)message;	// 0x349fb889
+ (void)setProgress:(double)progress;	// 0x3491d365
+ (id)stageForCurrentThread;	// 0x34895065
- (id)init;	// 0x349fb935
// converted property getter: - (id)currentStage;	// 0x349fba5d
- (void)dealloc;	// 0x349fb9cd
- (void)reportProgress:(double)progress;	// 0x349fbaa9
- (id)rootStage;	// 0x349fba6d
@end
