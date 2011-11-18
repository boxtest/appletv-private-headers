/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVOAuth2Authenticator.h"

@class NSString;

@interface ATVOAuth2DPAuthenticator : ATVOAuth2Authenticator {
}
@property(readonly, assign) NSString *deviceEndpoint;	// G=0x35f06215; @dynamic
@property(readonly, assign) NSString *oauthScope;	// G=0x35f061f9; @dynamic
- (void)_codeDocumentReady:(id)ready;	// 0x35f06515
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x35f06475
- (void)dealloc;	// 0x35f0619d
// declared property getter: - (id)deviceEndpoint;	// 0x35f06215
- (void)generateCode;	// 0x35f06291
- (id)makeAuthenticationController;	// 0x35f06231
// declared property getter: - (id)oauthScope;	// 0x35f061f9
@end

