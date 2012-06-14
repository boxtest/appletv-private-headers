/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface ACDAuthenticationHandlerQueueManager : NSObject {
@private
	NSMutableDictionary *_verificationHandlerQueues;	// 4 = 0x4
	NSMutableDictionary *_renewalHandlerQueues;	// 8 = 0x8
}
- (id)init;	// 0x324a2e5d
- (void).cxx_destruct;	// 0x324a375d
- (BOOL)hasRenewalQueueForAccountID:(id)accountID;	// 0x324a3331
- (BOOL)hasVerificationQueueForAccountID:(id)accountID;	// 0x324a2f05
- (id)popRenewalHandlerForAccountID:(id)accountID;	// 0x324a35d5
- (id)popVerificationHandlerForAccountID:(id)accountID;	// 0x324a31a9
- (void)pushRenewalHandler:(id)handler forAccountID:(id)accountID;	// 0x324a341d
- (void)pushVerificationHandler:(id)handler forAccountID:(id)accountID;	// 0x324a2ff1
@end
