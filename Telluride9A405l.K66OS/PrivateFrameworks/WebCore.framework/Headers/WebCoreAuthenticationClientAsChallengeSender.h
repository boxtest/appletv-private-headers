/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h> // Unknown library
#import "WebCore-Structs.h"
#import "NSURLAuthenticationChallengeSender.h"


__attribute__((visibility("hidden")))
@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
@private
	AuthenticationClient *m_client;	// 4 = 0x4
	CFURLAuthChallengeRef m_cfChallenge;	// 8 = 0x8
}
@property(readonly, assign) CFURLAuthChallengeRef cfChallenge;	// G=0x30685dd1; converted property
@property(readonly, assign) AuthenticationClient *client;	// G=0x30685d9d; converted property
- (id)initWithAuthenticationClient:(AuthenticationClient *)authenticationClient;	// 0x30685de1
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x306860f9
// converted property getter: - (CFURLAuthChallengeRef)cfChallenge;	// 0x30685dd1
// converted property getter: - (AuthenticationClient *)client;	// 0x30685d9d
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x30686209
- (void)detachClient;	// 0x30685dad
- (void)setCFChallenge:(CFURLAuthChallengeRef)challenge;	// 0x30685dc1
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x30686319
@end

