/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <NSObject.h> // Unknown library

@class NSSet, NSMutableDictionary, NSMutableSet;

@interface ATXPCServer : NSObject {
@private
	xpc_connection_s *_conn;	// 4 = 0x4
	NSMutableSet *_connections;	// 8 = 0x8
	NSMutableDictionary *_handlerMap;	// 12 = 0xc
	id _lockdownHandler;	// 16 = 0x10
	id _disconnectHandler;	// 20 = 0x14
	id _shutdownHandler;	// 24 = 0x18
	id _defaultMessageHandler;	// 28 = 0x1c
	dispatch_queue_s *_timerQueue;	// 32 = 0x20
	dispatch_source_s *_idleTimerSource;	// 36 = 0x24
	BOOL _timerHasFiredSinceLastMessage;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSSet *connections;	// G=0x350f1b5d; @synthesize=_connections
@property(copy, nonatomic) id defaultMessageHandler;	// G=0x350f1ba1; S=0x350f1bb1; @synthesize=_defaultMessageHandler
@property(copy, nonatomic) id disconnectHandler;	// G=0x350f1bd5; S=0x350f1be5; @synthesize=_disconnectHandler
@property(copy, nonatomic) id lockdownHandler;	// G=0x350f1b6d; S=0x350f1b7d; @synthesize=_lockdownHandler
@property(copy, nonatomic) id shutdownHandler;	// G=0x350f1c09; S=0x350f1c19; @synthesize=_shutdownHandler
- (id)initListenerWithServiceName:(id)serviceName;	// 0x350f147d
- (id)_connections;	// 0x350f0f99
- (BOOL)_doingWork;	// 0x350f18bd
- (void)_handleNewConnection:(xpc_connection_s *)connection;	// 0x350f1035
- (id)_handlerForMessageName:(id)messageName;	// 0x350f0ff9
- (dispatch_queue_s *)_highAvailabilityQueue;	// 0x350f0fe9
- (void)_rescheduleIdleTimerSourceWithInterval:(double)interval;	// 0x350f196d
- (void)_resetMessageFlag;	// 0x350f183d
- (void)_runShutdownHandler;	// 0x350f1821
// declared property getter: - (id)connections;	// 0x350f1b5d
- (void)dealloc;	// 0x350f1691
// declared property getter: - (id)defaultMessageHandler;	// 0x350f1ba1
// declared property getter: - (id)disconnectHandler;	// 0x350f1bd5
// declared property getter: - (id)lockdownHandler;	// 0x350f1b6d
// declared property setter: - (void)setDefaultMessageHandler:(id)handler;	// 0x350f1bb1
// declared property setter: - (void)setDisconnectHandler:(id)handler;	// 0x350f1be5
- (void)setHandlerForMessageName:(id)messageName handler:(id)handler;	// 0x350f176d
- (void)setIdleTimerInterval:(double)interval;	// 0x350f1ac5
// declared property setter: - (void)setLockdownHandler:(id)handler;	// 0x350f1b7d
// declared property setter: - (void)setShutdownHandler:(id)handler;	// 0x350f1c19
// declared property getter: - (id)shutdownHandler;	// 0x350f1c09
@end

