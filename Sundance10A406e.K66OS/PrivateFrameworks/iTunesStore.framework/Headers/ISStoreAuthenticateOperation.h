/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "SSAuthenticateRequestDelegate.h"
#import "ISOperation.h"

@class NSNumber, SSAuthenticationContext, SSMutableAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {
	NSNumber *_authenticatedDSID;	// 60 = 0x3c
	SSMutableAuthenticationContext *_authenticationContext;	// 64 = 0x40
}
@property(readonly, assign) SSAuthenticationContext *authenticationContext;	// G=0x3693b59d; 
- (id)initWithAuthenticationContext:(id)authenticationContext;	// 0x3693b4e5
- (id)_authenticatedDSID;	// 0x3693b989
- (void)_handleAuthenticateResponse:(id)response;	// 0x3693b9e9
- (void)_setAuthenticatedDSID:(id)dsid;	// 0x3693bc11
- (id)authenticatedAccountDSID;	// 0x3693b5fd
// declared property getter: - (id)authenticationContext;	// 0x3693b59d
- (void)dealloc;	// 0x3693b539
- (void)run;	// 0x3693b641
- (id)uniqueKey;	// 0x3693b919
@end
