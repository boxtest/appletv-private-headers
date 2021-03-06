/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class NSArray, SKPaymentQueueClient;

@interface SKPaymentQueue : NSObject {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) SKPaymentQueueClient *paymentQueueClient;	// G=0x313bd25d; 
@property(readonly, assign, nonatomic) NSArray *transactions;	// G=0x313bd1b9; 
+ (BOOL)canMakePayments;	// 0x313bcb3d
+ (id)defaultQueue;	// 0x313bcb01
- (id)init;	// 0x313bca2d
- (id)initWithPaymentQueueClient:(id)paymentQueueClient;	// 0x313bd1fd
- (void)_applicationWillEnterForegroundNotification:(id)_application;	// 0x313bd2a1
- (id)_applyDownloadChangeset:(id)changeset;	// 0x313bd391
- (void)_completeRestoreWithMessage:(id)message;	// 0x313bd565
- (id)_copyDownloadIDsForDownloads:(id)downloads;	// 0x313bd665
- (id)_copyRemovalsFromUnmergedIndexSet:(id)unmergedIndexSet;	// 0x313bd801
- (id)_copyTransactionsFromXPCArray:(id)xpcarray;	// 0x313bd925
- (void)_daemonLaunchedNotification;	// 0x313bd2f5
- (void)_establishConnection;	// 0x313bda15
- (void)_establishConnectionIfNeeded;	// 0x313bddf9
- (void)_finishRefreshPayments;	// 0x313bde41
- (void)_handleConnectionDisconnect;	// 0x313bde91
- (void)_handleMessage:(id)message connection:(id)connection;	// 0x313be01d
- (id)_initSKPaymentQueue;	// 0x313bc8f5
- (void)_notifyObserversAboutChanges:(id)changes sendUpdatedDownloads:(BOOL)downloads;	// 0x313be179
- (void)_notifyObserversAboutDownloadChanges:(id)changes;	// 0x313be3a5
- (void)_notifyObserversAboutRemovals:(id)removals;	// 0x313be475
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)error;	// 0x313be545
- (void)_notifyObserversRestoreTransactionsFinished;	// 0x313be615
- (void)_processUpdates:(id)updates trimUnmatched:(BOOL)unmatched sendUpdatedDownloads:(BOOL)downloads;	// 0x313be6d9
- (void)_refreshPaymentsWithPolicy:(int)policy;	// 0x313beb25
- (void)_removeLocalTransaction:(id)transaction;	// 0x313beced
- (void)_removePaymentsForMessage:(id)message;	// 0x313bedd5
- (void)_sendCommand:(long long)command forDownloads:(id)downloads;	// 0x313bf039
- (void)_setTransactionsWithReply:(id)reply;	// 0x313bf101
- (void)_updateDownloadsForMessage:(id)message;	// 0x313bf1b5
- (void)_updatePaymentsForMessage:(id)message;	// 0x313bf34d
- (void)addPayment:(id)payment;	// 0x313bcba5
- (void)addTransactionObserver:(id)observer;	// 0x313bcdfd
- (void)cancelDownloads:(id)downloads;	// 0x313bcedd
- (void)dealloc;	// 0x313bca5d
- (void)finishTransaction:(id)transaction;	// 0x313bcf01
- (void)pauseDownloads:(id)downloads;	// 0x313bd001
// declared property getter: - (id)paymentQueueClient;	// 0x313bd25d
- (void)removeTransactionObserver:(id)observer;	// 0x313bd025
- (void)restoreCompletedTransactions;	// 0x313bd0bd
- (void)resumeDownloads:(id)downloads;	// 0x313bd171
- (void)startDownloads:(id)downloads;	// 0x313bd195
// declared property getter: - (id)transactions;	// 0x313bd1b9
@end

