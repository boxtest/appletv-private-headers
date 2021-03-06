/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library
#import "AccessibilityUtilities-Structs.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface AXIPCServer : NSObject {
	id _defaultHandler;	// 4 = 0x4
	CFRunLoopSourceRef _serverRunLoopSource;	// 8 = 0x8
	CFRunLoopSourceRef _clientInvalidationSource;	// 12 = 0xc
	unsigned _serverPort;	// 16 = 0x10
	unsigned _clientInvalidationPort;	// 20 = 0x14
	NSMutableDictionary *_validSecurityTokens;	// 24 = 0x18
	NSMutableSet *_connectedClients;	// 28 = 0x1c
	id _clientInvalidationHandler;	// 32 = 0x20
	NSMutableDictionary *_entitlements;	// 36 = 0x24
	unsigned _assignedServerPort;	// 40 = 0x28
	unsigned machPort;	// 44 = 0x2c
	BOOL _running;	// 48 = 0x30
	NSString *_serviceName;	// 52 = 0x34
	NSMutableDictionary *_handlers;	// 56 = 0x38
}
@property(copy, nonatomic) id defaultHandler;	// G=0x3338bb71; S=0x3338bc2d; 
@property(retain, nonatomic) NSMutableDictionary *handlers;	// G=0x3338cc25; S=0x3338cc35; @synthesize=_handlers
@property(readonly, assign, nonatomic) unsigned machPort;	// G=0x3338b859; @synthesize
@property(assign, nonatomic, getter=isRunning) BOOL running;	// G=0x3338cbe5; S=0x3338cbf5; @synthesize=_running
@property(retain, nonatomic) NSString *serviceName;	// G=0x3338cc05; S=0x3338cc15; @synthesize=_serviceName
@property(retain, nonatomic) CFRunLoopSourceRef serviceRunLoopSource;	// S=0x3338b61d; @dynamic
- (id)initWithPort:(unsigned)port;	// 0x3338b5ed
- (id)initWithServiceName:(id)serviceName;	// 0x3338b575
- (void)_handleClientInvalidation:(unsigned)invalidation;	// 0x3338c2f5
- (void)_handleClientRegistration:(id)registration;	// 0x3338c855
- (id)_handleIncomingMessage:(id)message securityToken:(XXStruct_AVM35A)token auditToken:(XXStruct_kUSYWB)token3 clientPort:(unsigned)port;	// 0x3338ca25
- (BOOL)_hasEntitlement:(unsigned)entitlement auditToken:(XXStruct_kUSYWB)token key:(int)key;	// 0x3338b869
- (void)_startServerThread;	// 0x3338c5f5
- (BOOL)addHandler:(id)handler forKey:(int)key withError:(id *)error;	// 0x3338c005
- (void)dealloc;	// 0x3338b641
// declared property getter: - (id)defaultHandler;	// 0x3338bb71
- (id)description;	// 0x3338b755
- (id)handlerForKey:(int)key withError:(id *)error;	// 0x3338c17d
// declared property getter: - (id)handlers;	// 0x3338cc25
// declared property getter: - (BOOL)isRunning;	// 0x3338cbe5
// declared property getter: - (unsigned)machPort;	// 0x3338b859
- (BOOL)removeHandlerForKey:(int)key withError:(id *)error;	// 0x3338c12d
// declared property getter: - (id)serviceName;	// 0x3338cc05
- (void)setClientInvalidationCallback:(id)callback;	// 0x3338c2c5
// declared property setter: - (void)setDefaultHandler:(id)handler;	// 0x3338bc2d
// declared property setter: - (void)setHandlers:(id)handlers;	// 0x3338cc35
// declared property setter: - (void)setRunning:(BOOL)running;	// 0x3338cbf5
// declared property setter: - (void)setServiceName:(id)name;	// 0x3338cc15
// declared property setter: - (void)setServiceRunLoopSource:(CFRunLoopSourceRef)source;	// 0x3338b61d
- (void)setValidateMessage:(int)message validate:(BOOL)validate withEntitlement:(id)entitlement;	// 0x3338c1cd
- (BOOL)startServerWithError:(id *)error;	// 0x3338bc61
- (BOOL)stopServerWithError:(id *)error;	// 0x3338bdf5
@end

