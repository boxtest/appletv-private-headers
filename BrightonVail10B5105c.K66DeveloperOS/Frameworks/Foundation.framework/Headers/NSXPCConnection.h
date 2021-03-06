/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSXPCProxyCreating.h"

@class NSXPCListenerEndpoint, NSXPCInterface, NSString;
@protocol NSObject, OS_dispatch_queue;

@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {
	void *_xconnection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_userQueue;	// 12 = 0xc
	unsigned long long _state;	// 16 = 0x10
	id _interruptionHandler;	// 24 = 0x18
	id _invalidationHandler;	// 28 = 0x1c
	id _exportInfo;	// 32 = 0x20
	id _replyInfo;	// 36 = 0x24
	id _importInfo;	// 40 = 0x28
	id<NSObject> _otherInfo;	// 44 = 0x2c
	id _reserved1;	// 48 = 0x30
	id _lock;	// 52 = 0x34
	NSXPCInterface *_remoteObjectInterface;	// 56 = 0x38
	NSString *_serviceName;	// 60 = 0x3c
	NSXPCListenerEndpoint *_endpoint;	// 64 = 0x40
	id _reserved2;	// 68 = 0x44
	id _reserved3;	// 72 = 0x48
}
@property(readonly, assign) int auditSessionIdentifier;	// G=0x361caa81; 
@property(assign) id delegate;	// G=0x361ca7e9; S=0x361ca7d9; converted property
@property(readonly, assign) unsigned effectiveGroupIdentifier;	// G=0x361cad1d; 
@property(readonly, assign) unsigned effectiveUserIdentifier;	// G=0x361cac3d; 
@property(readonly, assign) NSXPCListenerEndpoint *endpoint;	// G=0x361ca471; 
@property(retain) NSXPCInterface *exportedInterface;	// G=0x361ca8e1; S=0x361ca905; 
@property(retain) id exportedObject;	// G=0x361ca88d; S=0x361ca8b1; 
@property(copy) id interruptionHandler;	// G=0x361ca361; S=0x360b1869; 
@property(copy) id invalidationHandler;	// G=0x361ca3cd; S=0x360b17dd; 
@property(readonly, assign) int processIdentifier;	// G=0x361cab61; 
@property(retain) NSXPCInterface *remoteObjectInterface;	// G=0x361caef1; S=0x360b17cd; @synthesize=_remoteObjectInterface
@property(readonly, assign) NSString *serviceName;	// G=0x361ca439; 
@property(retain) id userInfo;	// G=0x361ca75d; S=0x361ca795; converted property
+ (void)beginTransaction;	// 0x361cadfd
+ (id)currentConnection;	// 0x361ca729
+ (void)endTransaction;	// 0x361cae01
- (id)init;	// 0x360b0dd1
- (id)initWithEndpoint:(id)endpoint;	// 0x361c975d
- (id)initWithListenerEndpoint:(id)listenerEndpoint;	// 0x361c9791
- (id)initWithMachServiceName:(id)machServiceName;	// 0x361c9749
- (id)initWithMachServiceName:(id)machServiceName options:(unsigned)options;	// 0x360b0c0d
- (id)initWithServiceName:(id)serviceName;	// 0x361c9565
- (void)_addProxy:(unsigned long long)proxy;	// 0x361caa15
- (void)_decodeAndInvokeMessageWithData:(id)data;	// 0x361c8a05
- (void)_decodeAndInvokeReplyBlockWithData:(id)data;	// 0x360b41d9
- (id)_exportTable;	// 0x361ca4a9
- (id)_initWithPeerConnection:(id)peerConnection name:(id)name;	// 0x361c9429
- (void)_removeProxy:(unsigned long long)proxy;	// 0x361caa35
- (void)_sendDesistForProxyNumber:(unsigned long long)proxyNumber;	// 0x361c9f59
- (void)_sendInvocation:(id)invocation proxyNumber:(unsigned long long)number remoteInterface:(id)interface;	// 0x360b1cc1
- (void)_sendInvocation:(id)invocation proxyNumber:(unsigned long long)number remoteInterface:(id)interface withErrorHandler:(id)errorHandler;	// 0x361ca109
- (void)_sendInvocation:(id)invocation proxyNumber:(unsigned long long)number remoteInterface:(id)interface withErrorHandler:(id)errorHandler timeout:(double)timeout;	// 0x360b1cf9
- (void)_setUUID:(id)uuid;	// 0x361cae05
// declared property getter: - (int)auditSessionIdentifier;	// 0x361caa81
- (XXStruct_kUSYWB)auditToken;	// 0x361ca569
- (void)dealloc;	// 0x361c9945
- (id)debugDescription;	// 0x361ca7f9
// converted property getter: - (id)delegate;	// 0x361ca7e9
// declared property getter: - (unsigned)effectiveGroupIdentifier;	// 0x361cad1d
// declared property getter: - (unsigned)effectiveUserIdentifier;	// 0x361cac3d
// declared property getter: - (id)endpoint;	// 0x361ca471
// declared property getter: - (id)exportedInterface;	// 0x361ca8e1
// declared property getter: - (id)exportedObject;	// 0x361ca88d
- (void)finalize;	// 0x361c9ab5
// declared property getter: - (id)interruptionHandler;	// 0x361ca361
- (void)invalidate;	// 0x361c9c9d
// declared property getter: - (id)invalidationHandler;	// 0x361ca3cd
// declared property getter: - (int)processIdentifier;	// 0x361cab61
// declared property getter: - (id)remoteObjectInterface;	// 0x361caef1
- (id)remoteObjectProxy;	// 0x360b194d
- (id)remoteObjectProxyWithErrorHandler:(id)errorHandler;	// 0x361ca939
- (id)remoteObjectProxyWithTimeout:(double)timeout errorHandler:(id)handler;	// 0x361ca9a1
- (id)replacementObjectForEncoder:(id)encoder object:(id)object;	// 0x360b3b19
- (void)resume;	// 0x360b18f5
// declared property getter: - (id)serviceName;	// 0x361ca439
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x361ca7d9
// declared property setter: - (void)setExportedInterface:(id)interface;	// 0x361ca905
// declared property setter: - (void)setExportedObject:(id)object;	// 0x361ca8b1
// declared property setter: - (void)setInterruptionHandler:(id)handler;	// 0x360b1869
// declared property setter: - (void)setInvalidationHandler:(id)handler;	// 0x360b17dd
- (void)setOptions:(unsigned)options;	// 0x361ca4b9
// declared property setter: - (void)setRemoteObjectInterface:(id)interface;	// 0x360b17cd
// converted property setter: - (void)setUserInfo:(id)info;	// 0x361ca795
- (void)start;	// 0x361c9c3d
- (void)stop;	// 0x361c9c6d
- (void)suspend;	// 0x361c9b31
// converted property getter: - (id)userInfo;	// 0x361ca75d
- (id)valueForEntitlement:(id)entitlement;	// 0x361ca665
@end

