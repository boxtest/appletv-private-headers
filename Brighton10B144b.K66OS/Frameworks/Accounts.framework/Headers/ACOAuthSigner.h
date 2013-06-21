/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import "Accounts-Structs.h"
#import "XPCProxyTarget.h"
#import <NSObject.h> // Unknown library

@class XPCProxy, ACAccount;
@protocol ACDOAuthSignerProtocol;

@interface ACOAuthSigner : NSObject <XPCProxyTarget> {
	XPCProxy<ACDOAuthSignerProtocol> *_oauthSignerProxy;	// 4 = 0x4
	dispatch_queue_s *_connectionQueue;	// 8 = 0x8
	xpc_connection_s *_connection;	// 12 = 0xc
	ACAccount *_account;	// 16 = 0x10
	BOOL _shouldIncludeAppIdInRequest;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL shouldIncludeAppIdInRequest;	// G=0x3086cf41; S=0x3086cf51; @synthesize=_shouldIncludeAppIdInRequest
- (id)initWithAccount:(id)account;	// 0x3086c3bd
- (void).cxx_destruct;	// 0x3086cf61
- (void)_configureWithConnection:(xpc_connection_s *)connection;	// 0x3086c575
- (void)_tearDownConnection;	// 0x3086c855
- (void)dealloc;	// 0x3086c535
- (id)oauthSignerProxy;	// 0x3086c8c9
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3086cf3d
// declared property setter: - (void)setShouldIncludeAppIdInRequest:(BOOL)includeAppIdInRequest;	// 0x3086cf51
// declared property getter: - (BOOL)shouldIncludeAppIdInRequest;	// 0x3086cf41
- (id)signedURLRequestWithURLRequest:(id)urlrequest;	// 0x3086ce85
- (id)signedURLRequestWithURLRequest:(id)urlrequest applicationID:(id)anId timestamp:(id)timestamp;	// 0x3086cc31
- (id)signedURLRequestWithURLRequest:(id)urlrequest callingPID:(id)pid timestamp:(id)timestamp;	// 0x3086c925
@end
