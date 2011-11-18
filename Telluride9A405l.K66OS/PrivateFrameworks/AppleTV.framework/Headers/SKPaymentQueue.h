/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKPaymentQueue : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *transactions;	// G=0x35f2bc45; 
+ (BOOL)canMakePayments;	// 0x35f2b6e9
+ (id)defaultQueue;	// 0x35f2b6ad
- (id)init;	// 0x35f2b5ad
- (void)_addLocalTransactionForPayment:(id)payment;	// 0x35f2c2b5
- (void)_applicationBecameActiveNotification:(id)notification;	// 0x35f2bc89
- (id)_copyRemovalsFromUnmergedIndexSet:(id)unmergedIndexSet;	// 0x35f2c3c9
- (id)_copyTransactionsFromNotification:(id)notification;	// 0x35f2c4d1
- (void)_daemonExited:(id)exited;	// 0x35f2bc99
- (void)_daemonLaunchedNotification;	// 0x35f2bcc5
- (void)_mainThreadDaemonExited:(id)exited;	// 0x35f2bd19
- (void)_notifyObserversAboutChanges:(id)changes;	// 0x35f2c649
- (void)_notifyObserversAboutRemovals:(id)removals;	// 0x35f2c705
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)error;	// 0x35f2c7c1
- (void)_notifyObserversRestoreTransactionsFinished;	// 0x35f2c87d
- (void)_processUpdates:(id)updates trimUnmatched:(BOOL)unmatched;	// 0x35f2c939
- (void)_registerForNotifications;	// 0x35f2cd9d
- (void)_registerForNotificationsIfNeeded;	// 0x35f2cf75
- (void)_removeLocalTransaction:(id)transaction;	// 0x35f2cfc9
- (void)_restoreTransactionsFailedNotification:(id)notification;	// 0x35f2be55
- (void)_restoreTransactionsFinishedNotification:(id)notification;	// 0x35f2bed1
- (void)_transactionUpdatedNotification:(id)notification;	// 0x35f2c219
- (void)_transactionsAddedNotification:(id)notification;	// 0x35f2bf11
- (void)_transactionsRefreshedNotification:(id)notification;	// 0x35f2bf59
- (void)_transactionsRemovedNotification:(id)notification;	// 0x35f2bfa1
- (void)_unregisterForNotifications;	// 0x35f2d0b5
- (void)addPayment:(id)payment;	// 0x35f2b6ed
- (void)addTransactionObserver:(id)observer;	// 0x35f2b8f9
- (void)dealloc;	// 0x35f2b649
- (void)finishTransaction:(id)transaction;	// 0x35f2b9d5
- (void)removeTransactionObserver:(id)observer;	// 0x35f2baed
- (void)restoreCompletedTransactions;	// 0x35f2bbc9
// declared property getter: - (id)transactions;	// 0x35f2bc45
@end

