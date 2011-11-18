/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSObject.h"


@protocol BRAuthenticatorDelegate <NSObject>
@optional
- (void)autenticationSucceededForAuthenticator:(id)authenticator accountChanged:(BOOL)changed;
- (void)reauthenticationFailedForAuthenticator:(id)authenticator error:(id)error;
@end

