/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebInspectorXPCWrapperDelegate.h"
#import "WebInspectorClientRegistryDelegate.h"

@class WebInspectorXPCWrapper, WebInspectorServerWebViewConnectionController;

@interface WebInspectorServer : NSObject <WebInspectorXPCWrapperDelegate, WebInspectorClientRegistryDelegate> {
	BOOL _isEnabled;	// 4 = 0x4
	int _notifyToken;	// 8 = 0x8
	WebInspectorXPCWrapper *_xpcConnection;	// 12 = 0xc
	WebInspectorServerWebViewConnectionController *_connectionController;	// 16 = 0x10
}
@property(readonly, assign) BOOL isEnabled;	// G=0x316b7ad5; converted property
@property(readonly, retain) WebInspectorXPCWrapper *xpcConnection;	// G=0x316b7ae5; converted property
- (id)init;	// 0x316b7859
- (void)dealloc;	// 0x316b78f9
- (void)didRegisterClient:(WebInspectorClient *)client;	// 0x316b7cb1
- (void)didUnregisterClient:(WebInspectorClient *)client;	// 0x316b7cc1
// converted property getter: - (BOOL)isEnabled;	// 0x316b7ad5
- (void)pushListing;	// 0x316b7ba1
- (void)setupXPCConnectionIfNeeded;	// 0x316b7af5
- (void)start;	// 0x316b7985
- (void)stop;	// 0x316b7a39
// converted property getter: - (id)xpcConnection;	// 0x316b7ae5
- (void)xpcConnection:(id)connection receivedMessage:(id)message userInfo:(id)info;	// 0x316b7be5
- (void)xpcConnectionFailed:(id)failed;	// 0x316b7c4d
@end
