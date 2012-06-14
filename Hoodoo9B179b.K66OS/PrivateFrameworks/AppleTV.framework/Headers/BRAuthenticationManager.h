/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticatorDelegate.h"
#import <NSObject.h> // Unknown library

@class BRAuthenticator;

@interface BRAuthenticationManager : NSObject <BRAuthenticatorDelegate> {
@private
	id _authenticatorCreation;	// 4 = 0x4
	BRAuthenticator *_authenticator;	// 8 = 0x8
}
@property(readonly, retain) BRAuthenticator *authenticator;	// G=0x30321a69; converted property
@property(retain) id preferredAccount;	// G=0x303218a9; S=0x303218ad; converted property
+ (id)managerForAccountType:(id)accountType;	// 0x30322041
+ (void)registerManager:(id)manager forAccountType:(id)accountType;	// 0x30321f2d
- (id)initWithAuthenticatorCreation:(id)authenticatorCreation;	// 0x303217b1
- (void)_authenticationControllerDidCancel:(id)_authenticationController;	// 0x30321ee5
- (void)_checkAuthenticator:(id *)authenticator forAccount:(id)account scope:(unsigned)scope;	// 0x30322139
- (id)_selectAccount;	// 0x30321e0d
- (id)_selectAuthenticatorWithAccount:(id)account scope:(unsigned)scope;	// 0x30321e55
- (void)autenticationSucceededForAuthenticator:(id)authenticator accountChanged:(BOOL)changed;	// 0x30321c25
- (id)authenticationControllerForScope:(unsigned)scope;	// 0x30321aa9
// converted property getter: - (id)authenticator;	// 0x30321a69
- (void)dealloc;	// 0x30321805
// converted property getter: - (id)preferredAccount;	// 0x303218a9
- (void)reauthenticationFailedForAuthenticator:(id)authenticator error:(id)error;	// 0x30321d91
// converted property setter: - (void)setPreferredAccount:(id)account;	// 0x303218ad
@end
