/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISSingleton.h"
#import "ISOperationDelegate.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectContext, MicroPayment;

__attribute__((visibility("hidden")))
@interface MicroPaymentQueue : NSObject <ISOperationDelegate, ISSingleton> {
@private
	MicroPayment *_activePayment;	// 4 = 0x4
	int _changeSetCount;	// 8 = 0x8
	NSManagedObjectContext *_context;	// 12 = 0xc
}
+ (BOOL)canMakePayments;	// 0x35f5102d
+ (void)setSharedInstance:(id)instance;	// 0x35f50f65
+ (id)sharedInstance;	// 0x35f50fb9
- (id)init;	// 0x35f50c71
- (void)_clientRefreshedFromServer:(id)server;	// 0x35f522a5
- (id)_firstReadyPayment;	// 0x35f52345
- (void)_mainThreadNetworkTypeChanged:(id)changed;	// 0x35f522b5
- (void)_networkTypeChanged:(id)changed;	// 0x35f52319
- (void)_sendError:(id)error forProductID:(id)productID quantity:(id)quantity toClientWithIdentity:(id)identity;	// 0x35f52425
- (void)_setActivePayment:(id)payment;	// 0x35f525c5
- (void)_showPaymentsRestrictedAlert;	// 0x35f52609
- (void)addPaymentWithInfo:(id)info identity:(id)identity;	// 0x35f51275
- (void)checkInClientWithInfo:(id)info identity:(id)identity;	// 0x35f51645
- (void)checkOutClientWithInfo:(id)info identity:(id)identity;	// 0x35f51769
- (BOOL)checkQueues;	// 0x35f51031
- (void)dealloc;	// 0x35f50e71
- (void)finishPaymentWithInfo:(id)info identity:(id)identity;	// 0x35f5181d
- (void)finishRefundWithInfo:(id)info identity:(id)identity;	// 0x35f51b51
- (void)operation:(id)operation didChangeState:(int)state;	// 0x35f51f0d
- (void)operation:(id)operation failedWithError:(id)error;	// 0x35f51fc5
- (void)operationFinished:(id)finished;	// 0x35f5211d
- (void)restoreCompletedTransactionsWithInfo:(id)info identity:(id)identity;	// 0x35f51d01
- (BOOL)startFirstReadyPayment;	// 0x35f510ed
@end

