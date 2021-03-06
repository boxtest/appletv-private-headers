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
@property(readonly, assign, nonatomic) NSSet *connections;	// G=0x3609e93d; @synthesize=_connections
@property(copy, nonatomic) id defaultMessageHandler;	// G=0x3609e981; S=0x3609e991; @synthesize=_defaultMessageHandler
@property(copy, nonatomic) id disconnectHandler;	// G=0x3609e9b5; S=0x3609e9c5; @synthesize=_disconnectHandler
@property(copy, nonatomic) id lockdownHandler;	// G=0x3609e94d; S=0x3609e95d; @synthesize=_lockdownHandler
@property(copy, nonatomic) id shutdownHandler;	// G=0x3609e9e9; S=0x3609e9f9; @synthesize=_shutdownHandler
- (id)initListenerWithServiceName:(id)serviceName;	// 0x3609e225
- (id)_connections;	// 0x3609dd41
- (BOOL)_doingWork;	// 0x3609e69d
- (void)_handleNewConnection:(xpc_connection_s *)connection;	// 0x3609dddd
- (id)_handlerForMessageName:(id)messageName;	// 0x3609dda1
- (dispatch_queue_s *)_highAvailabilityQueue;	// 0x3609dd91
- (void)_rescheduleIdleTimerSourceWithInterval:(double)interval;	// 0x3609e74d
- (void)_resetMessageFlag;	// 0x3609e61d
- (void)_runShutdownHandler;	// 0x3609e601
// declared property getter: - (id)connections;	// 0x3609e93d
- (void)dealloc;	// 0x3609e471
// declared property getter: - (id)defaultMessageHandler;	// 0x3609e981
// declared property getter: - (id)disconnectHandler;	// 0x3609e9b5
// declared property getter: - (id)lockdownHandler;	// 0x3609e94d
// declared property setter: - (void)setDefaultMessageHandler:(id)handler;	// 0x3609e991
// declared property setter: - (void)setDisconnectHandler:(id)handler;	// 0x3609e9c5
- (void)setHandlerForMessageName:(id)messageName handler:(id)handler;	// 0x3609e54d
- (void)setIdleTimerInterval:(double)interval;	// 0x3609e8a5
// declared property setter: - (void)setLockdownHandler:(id)handler;	// 0x3609e95d
// declared property setter: - (void)setShutdownHandler:(id)handler;	// 0x3609e9f9
// declared property getter: - (id)shutdownHandler;	// 0x3609e9e9
@end

