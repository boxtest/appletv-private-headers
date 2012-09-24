/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSharedCredentialsAuthenticator.h"

@class AAAccount, NSString;

__attribute__((visibility("hidden")))
@interface ATVCupidAuthenticator : ATVSharedCredentialsAuthenticator {
	AAAccount *_authenticatingAppleAccount;	// 12 = 0xc
}
@property(readonly, assign) AAAccount *appleAccount;	// G=0xf1941; 
@property(readonly, assign) NSString *basePath;	// G=0xf18e5; 
- (void)_authCompletionHandler:(BOOL)handler error:(id)error callbackType:(int)type;	// 0xf1a01
- (void)_handleTOCAgreed:(id)agreed;	// 0xf215d
- (void)_loadTOCWithCompletionHandler:(id)completionHandler;	// 0xf1f81
- (id)_makeAuthenticationController;	// 0xf1605
- (void)_sendAuthenticationRequest;	// 0xf167d
// declared property getter: - (id)appleAccount;	// 0xf1941
// declared property getter: - (id)basePath;	// 0xf18e5
- (void)dealloc;	// 0xf15b9
- (BOOL)requiresPassword:(id *)password;	// 0xf1969
@end
