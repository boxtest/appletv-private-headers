/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSArray, NSMutableArray, AASetupAssistantService, NSMutableDictionary;

@interface AADelegateAccountSetupHelper : NSObject {
	AASetupAssistantService *_aaService;	// 4 = 0x4
	NSArray *_delegatesToSetup;	// 8 = 0x8
	NSMutableArray *_pendingCompletionBundles;	// 12 = 0xc
	NSMutableDictionary *_assistantDelegates;	// 16 = 0x10
	NSTimer *_delegatesTimeout;	// 20 = 0x14
	id _handler;	// 24 = 0x18
}
- (id)init;	// 0x3362854d
- (void).cxx_destruct;	// 0x33629ac9
- (id)_adjustResponseDictionary:(id)dictionary forAssistantDelegate:(id)assistantDelegate withIdentifier:(id)identifier;	// 0x33628c55
- (void)_completeDelegateSetupWithResponse:(id)response;	// 0x3362939d
- (void)_delegateBundlesDidTimeout;	// 0x33628b39
- (void)_delegateBundlesFinished;	// 0x33628b21
- (id)_loadAssistantDelegateBundles;	// 0x336287a1
- (void)_setupDelegateAccountsWithEmailChoice:(id)emailChoice;	// 0x33629979
- (void)_storeDelegateTokensWithResponse:(id)response;	// 0x33628d99
- (void)setupAppleIDDelegatesWithUsername:(id)username password:(id)password emailChoice:(id)choice withHandler:(id)handler;	// 0x336285ed
- (void)setupiCloudDelegateWithUsername:(id)username password:(id)password emailChoice:(id)choice withHandler:(id)handler;	// 0x336286a1
@end

