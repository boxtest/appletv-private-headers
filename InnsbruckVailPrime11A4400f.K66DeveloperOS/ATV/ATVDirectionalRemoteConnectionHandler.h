/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, ATVTCPControlReceiver;

__attribute__((visibility("hidden")))
@interface ATVDirectionalRemoteConnectionHandler : XXUnknownSuperclass {
	ATVTCPControlReceiver *_controlReceiver;	// 4 = 0x4
	unsigned long _receiverDecryptionKey;	// 8 = 0x8
	NSMutableData *_remainderData;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x2140a9; S=0x2140b9; converted property
- (id)init;	// 0x213f81
- (id)_checkDataIntegrity:(id)integrity;	// 0x2143f9
- (unsigned long)_decryptReceivedWord:(unsigned long)word;	// 0x214801
- (void)_processTouchCommand:(id)command;	// 0x214819
- (void)_promptReceived:(id)received;	// 0x214bb1
- (void)_setupControlReceiver:(id)receiver encryptionKey:(unsigned long)key;	// 0x21460d
- (void)allConnectionsClosed:(id)closed;	// 0x2140c9
- (void)dealloc;	// 0x214005
// converted property getter: - (id)delegate;	// 0x2140a9
- (void)newBytesReceived:(id)received data:(id)data;	// 0x214101
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2140b9
@end

