/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSStreamDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSOutputStream, NSMutableData, ATVTCPControlReceiver, NSMutableArray, NSData, NSInputStream;

__attribute__((visibility("hidden")))
@interface ATVTCPConnection : XXUnknownSuperclass <NSStreamDelegate> {
	id _delegate;	// 4 = 0x4
	NSData *_peerAddress;	// 8 = 0x8
	ATVTCPControlReceiver *_server;	// 12 = 0xc
	NSMutableArray *_requests;	// 16 = 0x10
	NSInputStream *_istream;	// 20 = 0x14
	NSOutputStream *_ostream;	// 24 = 0x18
	NSMutableData *_ibuffer;	// 28 = 0x1c
	NSMutableData *_obuffer;	// 32 = 0x20
	BOOL _isValid;	// 36 = 0x24
}
@property(assign) id delegate;	// G=0x22b6b9; S=0x22b6c9; converted property
@property(readonly, assign) BOOL isValid;	// G=0x22b6f9; converted property
@property(readonly, retain) NSData *peerAddress;	// G=0x22b6d9; converted property
@property(readonly, retain) ATVTCPControlReceiver *server;	// G=0x22b6e9; converted property
- (id)init;	// 0x22b4f9
- (id)initWithPeerAddress:(id)peerAddress inputStream:(id)stream outputStream:(id)stream3 forServer:(id)server;	// 0x22b511
- (void)dealloc;	// 0x22b659
// converted property getter: - (id)delegate;	// 0x22b6b9
- (void)invalidate;	// 0x22b709
// converted property getter: - (BOOL)isValid;	// 0x22b6f9
// converted property getter: - (id)peerAddress;	// 0x22b6d9
- (BOOL)processIncomingBytes;	// 0x22b825
// converted property getter: - (id)server;	// 0x22b6e9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x22b6c9
- (void)stream:(id)stream handleEvent:(unsigned)event;	// 0x22b8bd
@end

