/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AASigningSession, NSDictionary, AAAccount;

@interface AASetupAssistantSetupDelegatesRequest : AARequest {
	NSDictionary *setupParameters;	// 16 = 0x10
	AASigningSession *signingSession;	// 20 = 0x14
	AAAccount *_account;	// 24 = 0x18
}
+ (Class)responseClass;	// 0x3573de3d
- (id)initWithAccount:(id)account withSetupParameters:(id)setupParameters signingSession:(id)session;	// 0x3573de59
- (void).cxx_destruct;	// 0x3573e35d
- (id)urlRequest;	// 0x3573df81
- (id)urlString;	// 0x3573df2d
@end

