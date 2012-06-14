/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "StoreBookkeeper-Structs.h"
#import <NSError.h> // Unknown library

@class MZKeyValueStoreTransaction;

__attribute__((visibility("hidden")))
@interface MZKeyValueStoreError : NSError {
@private
	MZKeyValueStoreTransaction *_transaction;	// 20 = 0x14
}
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction;	// G=0x308553f1; S=0x30855401; @synthesize=_transaction
+ (id)delegateCancelledErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x308551b9
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x30854cb1
+ (id)keyValueStoreErrorWithCode:(int)code localizedDescription:(id)description transaction:(id)transaction underlyingError:(id)error;	// 0x30854a45
+ (id)killSwitchErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x30854d31
+ (id)networkingBlockedErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x30854cf1
+ (id)noStoreAccountErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x30855081
+ (id)serverClampErrorWithTransaction:(id)transaction retrySeconds:(double)seconds underlyingError:(id)error;	// 0x308552f5
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountText:(id)previousStoreAccountText currentStoreAccontText:(id)text transaction:(id)transaction underlyingError:(id)error;	// 0x30854e39
+ (id)storeAccountSessionExpiredWithTransaction:(id)transaction underlyingError:(id)error;	// 0x308550bd
+ (id)storeGenericErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x30854f15
+ (id)storeLoggedOutErrorWithPreviousStoreAccountText:(id)previousStoreAccountText transaction:(id)transaction underlyingError:(id)error;	// 0x30854d71
+ (id)storeValidationErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x30854f8d
+ (id)transactionCancelledErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3085517d
+ (id)transactionMissingDomainErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x308550fd
+ (id)transactionMissingURLErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3085513d
+ (id)unknownErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x30854b69
+ (id)userCancelledSignInErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x30855005
+ (id)userClampErrorWithTransaction:(id)transaction retrySeconds:(double)seconds underlyingError:(id)error;	// 0x308551f9
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x30855041
- (id)copyWithZone:(NSZone *)zone;	// 0x308549ed
- (id)currentStoreAccountKey;	// 0x30854975
- (void)dealloc;	// 0x30854775
- (id)description;	// 0x308547c5
- (BOOL)isAccountsChangedError;	// 0x30854851
- (BOOL)isAuthenticationError;	// 0x3085482d
- (BOOL)isClampError;	// 0x308548d5
- (BOOL)isRecoverableError;	// 0x30854879
- (BOOL)isTransactionCancelledError;	// 0x308548f9
- (BOOL)isTransactionMissingInformationError;	// 0x3085491d
- (id)previousStoreAccountKey;	// 0x30854941
- (double)retrySeconds;	// 0x308549a9
// declared property setter: - (void)setTransaction:(id)transaction;	// 0x30855401
// declared property getter: - (id)transaction;	// 0x308553f1
@end
