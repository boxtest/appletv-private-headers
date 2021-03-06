/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AASigningSession, NSDictionary, AAAccount;

@interface AASetupAssistantCreateRequest : AARequest {
	NSDictionary *appleIDParameters;	// 16 = 0x10
	AASigningSession *signingSession;	// 20 = 0x14
	AAAccount *_account;	// 24 = 0x18
}
+ (Class)responseClass;	// 0x3573d859
- (id)initWithAccount:(id)account withAppleIDParameters:(id)appleIDParameters signingSession:(id)session;	// 0x3573d875
- (void).cxx_destruct;	// 0x3573dda1
- (id)bodyDictionary;	// 0x3573d949
- (id)urlRequest;	// 0x3573d9b1
- (id)urlString;	// 0x3573d95d
@end

