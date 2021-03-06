/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSOperation.h> // Unknown library

@class NSError, NSLock, NSRunLoop, SSOperationProgress, NSArray, NSString, NSMutableArray;
@protocol ISOperationDelegate;

@interface ISOperation : NSOperation {
	id<ISOperationDelegate> _delegate;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
	NSLock *_lock;	// 20 = 0x14
	NSRunLoop *_operationRunLoop;	// 24 = 0x18
	ISOperation *_parentOperation;	// 28 = 0x1c
	SSOperationProgress *_progress;	// 32 = 0x20
	BOOL _shouldMessageMainThread;	// 36 = 0x24
	NSString *_powerAssertionIdentifier;	// 40 = 0x28
	NSArray *_serializationLockIdentifiers;	// 44 = 0x2c
	NSMutableArray *_subOperations;	// 48 = 0x30
	BOOL _shouldRunWithBackgroundPriority;	// 52 = 0x34
	BOOL _stopped;	// 53 = 0x35
	BOOL _success;	// 54 = 0x36
	id _threadSafeDelegate;	// 56 = 0x38
}
@property(assign) id<ISOperationDelegate> delegate;	// G=0x30764c49; S=0x30764ca9; 
@property(retain) NSError *error;	// G=0x30765d01; S=0x30765d15; @synthesize=_error
@property(retain) NSRunLoop *operationRunLoop;	// G=0x30765d25; S=0x30765d39; @synthesize=_operationRunLoop
@property(retain) ISOperation *parentOperation;	// G=0x30765d49; S=0x30765d5d; @synthesize=_parentOperation
@property(retain) NSString *powerAssertionIdentifier;	// G=0x30765d6d; S=0x30765d81; @synthesize=_powerAssertionIdentifier
@property(readonly, assign, nonatomic) SSOperationProgress *progress;	// G=0x307645a1; 
@property(readonly, assign) int progressWeight;	// G=0x30764601; 
@property(copy) NSArray *serializationLockIdentifiers;	// G=0x30765765; S=0x307657c5; 
@property(assign) BOOL shouldMessageMainThread;	// G=0x30764ded; S=0x30764d89; 
@property(assign) BOOL shouldRunWithBackgroundPriority;	// G=0x30765d91; S=0x30765da9; @synthesize=_shouldRunWithBackgroundPriority
@property(assign) BOOL success;	// G=0x30765dc1; S=0x30765dd9; @synthesize=_success
@property(readonly, assign) id threadSafeDelegate;	// G=0x30764e29; 
@property(readonly, assign) NSString *uniqueKey;	// G=0x30764e89; 
- (id)init;	// 0x30764461
- (void)_addSubOperation:(id)operation;	// 0x3076584d
- (void)_failAfterException;	// 0x307658b9
- (void)_keepAliveTimer:(id)timer;	// 0x3076590d
- (void)_main:(BOOL)main;	// 0x3076591d
- (void)_removeSubOperation:(id)operation;	// 0x30765b75
- (void)_sendErrorToDelegate:(id)delegate;	// 0x30765b95
- (void)_sendSuccessToDelegate;	// 0x30765c19
- (void)_sendWillStartToDelegate;	// 0x30765c8d
- (id)authenticatedAccountDSID;	// 0x3077ad19
- (void)cancel;	// 0x30764e8d
- (BOOL)copyAccountID:(id *)anId byAuthenticatingWithContext:(id)context returningError:(id *)error;	// 0x3077ad41
- (id)copyActivePowerAssertionIdentifiers;	// 0x307653f9
- (id)copySerializationLocks;	// 0x30765479
- (void)dealloc;	// 0x307644c5
// declared property getter: - (id)delegate;	// 0x30764c49
- (void)dispatchCompletionBlock;	// 0x307655b9
// declared property getter: - (id)error;	// 0x30765d01
- (BOOL)loadSoftwareMapReturningError:(id *)error;	// 0x3077a511
- (BOOL)loadURLBagWithContext:(id)context returningError:(id *)error;	// 0x3076f6ed
- (void)lock;	// 0x30765651
- (void)main;	// 0x30764f39
// declared property getter: - (id)operationRunLoop;	// 0x30765d25
// declared property getter: - (id)parentOperation;	// 0x30765d49
// declared property getter: - (id)powerAssertionIdentifier;	// 0x30765d6d
// declared property getter: - (id)progress;	// 0x307645a1
// declared property getter: - (int)progressWeight;	// 0x30764601
- (void)run;	// 0x30764605
- (void)run:(BOOL)run;	// 0x30765671
- (long)runRunLoopUntilStopped;	// 0x30764639
- (BOOL)runSubOperation:(id)operation onQueue:(id)queue error:(id *)error;	// 0x30764975
- (BOOL)runSubOperation:(id)operation returningError:(id *)error;	// 0x30764739
- (void)sendDidTakeSerializationLocks;	// 0x30765689
- (void)sendProgressToDelegate;	// 0x307656d9
// declared property getter: - (id)serializationLockIdentifiers;	// 0x30765765
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30764ca9
// declared property setter: - (void)setError:(id)error;	// 0x30765d15
// declared property setter: - (void)setOperationRunLoop:(id)loop;	// 0x30765d39
// declared property setter: - (void)setParentOperation:(id)operation;	// 0x30765d5d
// declared property setter: - (void)setPowerAssertionIdentifier:(id)identifier;	// 0x30765d81
// declared property setter: - (void)setSerializationLockIdentifiers:(id)identifiers;	// 0x307657c5
// declared property setter: - (void)setShouldMessageMainThread:(BOOL)messageMainThread;	// 0x30764d89
// declared property setter: - (void)setShouldRunWithBackgroundPriority:(BOOL)runWithBackgroundPriority;	// 0x30765da9
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x30765dd9
- (BOOL)shouldFailAfterUniquePredecessorError:(id)error;	// 0x30764de9
// declared property getter: - (BOOL)shouldMessageMainThread;	// 0x30764ded
// declared property getter: - (BOOL)shouldRunWithBackgroundPriority;	// 0x30765d91
- (BOOL)stopRunLoop;	// 0x30764a85
// declared property getter: - (BOOL)success;	// 0x30765dc1
// declared property getter: - (id)threadSafeDelegate;	// 0x30764e29
// declared property getter: - (id)uniqueKey;	// 0x30764e89
- (void)unlock;	// 0x3076582d
@end

