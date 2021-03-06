/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectContextFaultingDelegate.h"
#import "_PFUbiquityRecordImportOperationDelegate.h"
#import "PFUbiquityImportScanOperationDelegate.h"
#import "PFUbiquityBaselineRollOperationDelegate.h"
#import "PFUbiquityBaselineRecoveryOperationDelegate.h"
#import "PFUbiquityBaselineRollResponseOperationDelegate.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, PFUbiquityLocation, NSString, NSLock, NSRecursiveLock, NSMutableSet, NSSet, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityImportScanOperationDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate> {
	NSOperationQueue *_importQueue;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_privateQueue;	// 8 = 0x8
	BOOL _isMonitoring;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
	PFUbiquityLocation *_ubiquityRootLocation;	// 20 = 0x14
	NSMutableSet *_pendingTransactionLogLocations;	// 24 = 0x18
	NSMutableSet *_failedPendingTransactionLogs;	// 28 = 0x1c
	NSObject<OS_dispatch_source> *_logRestartTimer;	// 32 = 0x20
	BOOL _hasScheduledPendingLogsBlock;	// 36 = 0x24
	BOOL _hasScheduledFailedLogsBlock;	// 37 = 0x25
	NSRecursiveLock *_schedulingLock;	// 40 = 0x28
	NSLock *_pendingLocationsLock;	// 44 = 0x2c
	BOOL _importOnlyActiveStores;	// 48 = 0x30
	BOOL _throttleNotifications;	// 49 = 0x31
	unsigned _numPendingNotifications;	// 52 = 0x34
	NSMutableDictionary *_pendingNotificationUserInfo;	// 56 = 0x38
	BOOL _allowBaselineRoll;	// 60 = 0x3c
	unsigned _pendingImportOperationsCount;	// 64 = 0x40
	NSSet *_failedPendingTransactionLogLocations;	// 68 = 0x44
}
@property(assign) BOOL allowBaselineRoll;	// G=0x35cec641; S=0x35cec659; @synthesize=_allowBaselineRoll
@property(readonly, assign) NSSet *failedPendingTransactionLogLocations;	// G=0x35cec685; @synthesize=_failedPendingTransactionLogLocations
@property(assign) BOOL importOnlyActiveStores;	// G=0x35cec611; S=0x35cec629; @synthesize=_importOnlyActiveStores
@property(readonly, assign) NSOperationQueue *importQueue;	// G=0x35cec551; @synthesize=_importQueue
@property(readonly, assign) BOOL isMonitoring;	// G=0x35cec579; @synthesize=_isMonitoring
@property(readonly, assign) NSString *localPeerID;	// G=0x35cec565; @synthesize=_localPeerID
@property(assign) NSObject<OS_dispatch_source> *logRestartTimer;	// G=0x35cec5a5; S=0x35cec5b9; @synthesize=_logRestartTimer
@property(readonly, assign) NSSet *pendingTransactionLogLocations;	// G=0x35cec671; @synthesize=_pendingTransactionLogLocations
@property(readonly, assign, nonatomic) NSRecursiveLock *schedulingLock;	// G=0x35cec5d1; @synthesize=_schedulingLock
@property(assign) BOOL throttleNotifications;	// G=0x35cec5e1; S=0x35cec5f9; @synthesize=_throttleNotifications
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x35cec591; @synthesize=_ubiquityRootLocation
+ (void)afterDelay:(double)delay executeBlockOnRootQueue:(id)queue;	// 0x35cec509
+ (BOOL)canProcessContentsOfUbiquityRootPath:(id)ubiquityRootPath;	// 0x35ceae05
+ (void)executeBlockOnRootQueue:(id)queue;	// 0x35cec4f1
+ (void)initialize;	// 0x35ce4a39
- (id)init;	// 0x35ce4aad
- (id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x35ce4ab1
- (void)_applicationResumed:(id)resumed;	// 0x35ce85d1
// declared property getter: - (BOOL)allowBaselineRoll;	// 0x35cec641
- (void)awakeFromLaunch:(BOOL)launch;	// 0x35ce4eb5
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)state;	// 0x35cebcf1
- (void)baselineRollOperationWasUnableToLockPersistentStore:(id)lockPersistentStore;	// 0x35cebd01
- (BOOL)canProcessTransactionLogWithScore:(id)score afterLogWithScore:(id)score2;	// 0x35ce6521
- (BOOL)checkSchedulingContextForMissingLocalPeerOperations:(id)missingLocalPeerOperations error:(id *)error;	// 0x35ce6705
- (int)compareScoreKnowledgeVector:(id)vector withScoreDictionary:(id)scoreDictionary;	// 0x35ceade9
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x35ceae01
- (id)createDictionaryOfStoreNameToLocations:(id)locations;	// 0x35ce70b5
- (id)createSortedOperationsArrayForLogLocationsInContext:(id)context isFirstImport:(BOOL)import;	// 0x35ce4ed9
- (void)dealloc;	// 0x35ce4cb9
- (id)description;	// 0x35ce4e25
- (void)executeBlockOnPrivateQueue:(id)queue;	// 0x35cec4dd
// declared property getter: - (id)failedPendingTransactionLogLocations;	// 0x35cec685
- (void)filePresenter:(id)presenter wasNotifiedOfTransactionLogLocation:(id)transactionLogLocation;	// 0x35ce7409
// declared property getter: - (BOOL)importOnlyActiveStores;	// 0x35cec611
// declared property getter: - (id)importQueue;	// 0x35cec551
// declared property getter: - (BOOL)isMonitoring;	// 0x35cec579
// declared property getter: - (id)localPeerID;	// 0x35cec565
// declared property getter: - (id)logRestartTimer;	// 0x35cec5a5
- (void)metadataInconsistencyDetectedForStore:(id)store;	// 0x35cebec5
- (void)operation:(id)operation failedWithError:(id)error;	// 0x35ce974d
- (void)operationDidFinish:(id)operation;	// 0x35ce9339
- (void)operationWasInterruptedDuringImport:(id)import;	// 0x35ce99c9
// declared property getter: - (id)pendingTransactionLogLocations;	// 0x35cec671
- (void)postImportNotificationForStoreName:(id)storeName andLocalPeerID:(id)anId withUserInfo:(id)userInfo;	// 0x35ce914d
- (void)recoverFailedLogs;	// 0x35ce79e5
- (void)recoveryOperation:(id)operation didReplaceLocalStoreFileWithBaseline:(id)baseline;	// 0x35cebd31
- (void)recoveryOperation:(id)operation encounteredAnError:(id)error duringRecoveryOfBaseline:(id)baseline;	// 0x35cebeb5
- (void)requestBaselineRollForStore:(id)store;	// 0x35ceaf81
- (void)rollResponseOperation:(id)operation encounteredAnError:(id)error whileTryingToAdoptBaseline:(id)adoptBaseline;	// 0x35cebe25
- (void)rollResponseOperation:(id)operation successfullyAdoptedBaseline:(id)baseline;	// 0x35cebdd1
- (void)scanOperation:(id)operation failedWithError:(id)error;	// 0x35cead69
- (BOOL)scanOperationFinished:(id)finished withDiscoveredLogLocation:(id)discoveredLogLocation error:(id *)error;	// 0x35cea065
- (void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)activeBaselineOperation;	// 0x35cebb0d
- (void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)location;	// 0x35ceb3a1
- (void)schedulePendingLogs;	// 0x35ce76f1
- (void)scheduleRecoveryTimer;	// 0x35ce9a29
- (BOOL)scheduleTransactionLogOperations:(id)operations synchronous:(BOOL)synchronous error:(id *)error;	// 0x35ce6cb5
- (BOOL)scheduleUbiquityRootScan:(BOOL)scan withLocalPeerLogs:(BOOL)localPeerLogs error:(id *)error;	// 0x35ce9c61
// declared property getter: - (id)schedulingLock;	// 0x35cec5d1
// declared property setter: - (void)setAllowBaselineRoll:(BOOL)roll;	// 0x35cec659
// declared property setter: - (void)setImportOnlyActiveStores:(BOOL)stores;	// 0x35cec629
// declared property setter: - (void)setLogRestartTimer:(id)timer;	// 0x35cec5b9
// declared property setter: - (void)setThrottleNotifications:(BOOL)notifications;	// 0x35cec5f9
- (BOOL)shouldThrottleNotificationsWithOperation:(id)operation;	// 0x35ce9149
- (BOOL)startMonitor:(id *)monitor;	// 0x35ce722d
- (void)stopMonitor;	// 0x35ce7365
// declared property getter: - (BOOL)throttleNotifications;	// 0x35cec5e1
- (void)ubiquityIdentityChanged:(id)changed;	// 0x35ce8d05
// declared property getter: - (id)ubiquityRootLocation;	// 0x35cec591
@end

