/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "NSURLAuthenticationChallengeSender.h"
#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class SSDownloadAuthenticationSession;

__attribute__((visibility("hidden")))
@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	SSDownloadAuthenticationSession *_session;	// 8 = 0x8
}
@property(readonly, assign) SSDownloadAuthenticationSession *authenticationSession;	// G=0x365328c9; 
- (id)initWithAuthenticationSession:(id)authenticationSession;	// 0x365327f5
// declared property getter: - (id)authenticationSession;	// 0x365328c9
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x36532a65
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x36532a95
- (void)dealloc;	// 0x36532869
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x36532ac5
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x36532af5
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x36532b25
@end

