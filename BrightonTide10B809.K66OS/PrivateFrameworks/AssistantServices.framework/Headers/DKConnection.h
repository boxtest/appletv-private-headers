/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library
#import "AssistantServices-Structs.h"

@class NSString;

@interface DKConnection : NSObject {
	dispatch_queue_s *_queue;	// 4 = 0x4
	xpc_connection_s *_conn;	// 8 = 0x8
	dispatch_queue_s *_deliveryQueue;	// 12 = 0xc
	id _messageHandler;	// 16 = 0x10
	id _disconnectHandler;	// 20 = 0x14
	id _target;	// 24 = 0x18
}
@property(copy, nonatomic) id disconnectHandler;	// G=0x334e4e6d; S=0x334e4e81; @synthesize=_disconnectHandler
@property(copy, nonatomic) id messageHandler;	// G=0x334e4e49; S=0x334e4e5d; @synthesize=_messageHandler
@property(readonly, assign) NSString *serviceName;	// G=0x334e4361; 
@property(retain, nonatomic) id target;	// G=0x334e4e91; S=0x334e4ea1; @synthesize=_target
- (id)initWithServiceName:(id)serviceName onQueue:(dispatch_queue_s *)queue;	// 0x334e4149
- (void).cxx_destruct;	// 0x334e4eb5
- (void)_handleBarrierMessage:(void *)message;	// 0x334e4b1d
- (void)_handleXPCError:(void *)error;	// 0x334e4a39
- (void)_handleXPCMessage:(void *)message;	// 0x334e4ba9
- (id)_initWithXPCConnection:(xpc_connection_s *)xpcconnection;	// 0x334e4221
- (void)_sendMessage:(id)message handler:(id)handler;	// 0x334e43ad
- (void)_setEventHandlerOnConnection:(xpc_connection_s *)connection;	// 0x334e4cdd
- (void)asyncBarrierWithBlock:(id)block;	// 0x334e48f9
- (void)dealloc;	// 0x334e40d9
// declared property getter: - (id)disconnectHandler;	// 0x334e4e6d
// declared property getter: - (id)messageHandler;	// 0x334e4e49
- (void)remoteBarrier;	// 0x334e4919
- (BOOL)remoteBarrierWithTimeout:(double)timeout;	// 0x334e4939
- (void)sendMessage:(id)message;	// 0x334e44dd
- (void)sendMessage:(id)message withReply:(id)reply;	// 0x334e44f1
- (void)sendMessage:(id)message withReplySync:(id)replySync;	// 0x334e481d
// declared property getter: - (id)serviceName;	// 0x334e4361
// declared property setter: - (void)setDisconnectHandler:(id)handler;	// 0x334e4e81
// declared property setter: - (void)setMessageHandler:(id)handler;	// 0x334e4e5d
// declared property setter: - (void)setTarget:(id)target;	// 0x334e4ea1
// declared property getter: - (id)target;	// 0x334e4e91
@end

