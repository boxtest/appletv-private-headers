/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class SKPaymentTransaction, NSError, NSData, NSArray, SKPayment, NSString, NSDate;

@interface SKPaymentTransactionInternal : NSObject {
	NSArray *_downloads;	// 4 = 0x4
	NSError *_error;	// 8 = 0x8
	SKPaymentTransaction *_originalTransaction;	// 12 = 0xc
	SKPayment *_payment;	// 16 = 0x10
	NSString *_temporaryIdentifier;	// 20 = 0x14
	NSDate *_transactionDate;	// 24 = 0x18
	NSString *_transactionIdentifier;	// 28 = 0x1c
	NSData *_transactionReceipt;	// 32 = 0x20
	int _transactionState;	// 36 = 0x24
}
- (void)dealloc;	// 0x36db53d1
@end
