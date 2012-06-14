/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebInspectorServerConnection.h"

@class NSString, WebInspectorServerXPC;

__attribute__((visibility("hidden")))
@interface WebInspectorServerConnectionXPC : WebInspectorServerConnection {
@private
	WebInspectorServerXPC *_server;	// 8 = 0x8
	NSString *_destination;	// 12 = 0xc
	NSString *_identifier;	// 16 = 0x10
}
@property(readonly, retain) NSString *identifier;	// G=0x353fcbcd; converted property
- (id)initWithServer:(id)server destination:(id)destination identifier:(id)identifier;	// 0x353fc975
- (void)clearChannel;	// 0x353fcb7d
- (void)dealloc;	// 0x353fcc05
// converted property getter: - (id)identifier;	// 0x353fcbcd
- (void)receivedData:(id)data;	// 0x353fca4d
- (void)receivedDidClose:(id)received;	// 0x353fca01
- (void)sendWebSocketMessage:(id)message;	// 0x353fcad1
- (BOOL)setupChannel;	// 0x353fcc65
@end
