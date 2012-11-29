/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@class BKSSignal, NSArray;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BKSApplicationStateMonitor : NSObject {
	NSObject<OS_xpc_object> *_connection;	// 4 = 0x4
	BKSSignal *_invalidationSignal;	// 8 = 0x8
	id _handler;	// 12 = 0xc
	unsigned _interestedStates;	// 16 = 0x10
	NSArray *_interestedBundleIDs;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_messageHandlingQueue;	// 28 = 0x1c
}
@property(copy, nonatomic) id handler;	// G=0x3307601d; S=0x33075f6d; @dynamic
@property(copy, nonatomic) NSArray *interestedBundleIDs;	// G=0x330761f5; S=0x33076145; @dynamic
@property(assign, nonatomic) unsigned interestedStates;	// G=0x330763a1; S=0x3307631d; @dynamic
- (id)init;	// 0x33075c09
- (id)initWithBundleIDs:(id)bundleIDs states:(unsigned)states;	// 0x33075c21
- (void)applicationInfoForApplication:(id)application completion:(id)completion;	// 0x330765b9
- (void)applicationInfoForPID:(int)pid completion:(id)completion;	// 0x33076921
- (unsigned)applicationStateForApplication:(id)application;	// 0x33076be1
- (id)bundleInfoValueForKey:(id)key PID:(int)pid;	// 0x3307739d
- (void)dealloc;	// 0x33075e61
// declared property getter: - (id)handler;	// 0x3307601d
// declared property getter: - (id)interestedBundleIDs;	// 0x330761f5
// declared property getter: - (unsigned)interestedStates;	// 0x330763a1
- (void)invalidate;	// 0x33077731
- (BOOL)isNewsstandAppWakeQuotaReached:(id)reached;	// 0x330770ed
- (unsigned)mostElevatedApplicationStateForPID:(int)pid;	// 0x33076e91
- (void)queue_connectionWasInvalidated;	// 0x33077f71
- (void)queue_handleMessage:(id)message;	// 0x33077d7d
- (void)queue_invalidate;	// 0x33077f15
- (void)queue_registerWithServer;	// 0x33077925
- (void)queue_reregister;	// 0x33077ee5
- (void)queue_setHandler:(id)handler;	// 0x330777c9
- (void)queue_setInterestedBundleIDs:(id)ids;	// 0x33077805
- (void)queue_setInterestedStates:(unsigned)states;	// 0x33077841
- (void)queue_updateInterestedStates;	// 0x33077851
- (void)queue_updateInterestedStates:(BOOL)states;	// 0x33077865
// declared property setter: - (void)setHandler:(id)handler;	// 0x33075f6d
// declared property setter: - (void)setInterestedBundleIDs:(id)ids;	// 0x33076145
// declared property setter: - (void)setInterestedStates:(unsigned)states;	// 0x3307631d
- (void)updateInterestedBundleIDs:(id)ids;	// 0x3307646d
- (void)updateInterestedBundleIDs:(id)ids states:(unsigned)states;	// 0x330764d5
- (void)updateInterestedStates:(unsigned)states;	// 0x330764a1
@end
