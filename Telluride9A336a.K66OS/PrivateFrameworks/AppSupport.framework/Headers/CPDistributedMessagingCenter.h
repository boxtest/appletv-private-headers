/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSOperationQueue, NSMutableDictionary, NSString, CPDistributedMessagingCallout;

@interface CPDistributedMessagingCenter : NSObject {
	NSString *_centerName;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	unsigned _sendPort;	// 12 = 0xc
	NSOperationQueue *_asyncQueue;	// 16 = 0x10
	CFRunLoopSourceRef _serverSource;	// 20 = 0x14
	NSString *_requiredEntitlement;	// 24 = 0x18
	NSMutableDictionary *_callouts;	// 28 = 0x1c
	unsigned _parkedServerPort;	// 32 = 0x20
	CPDistributedMessagingCallout *_currentCallout;	// 36 = 0x24
	unsigned _replyPort;	// 40 = 0x28
	BOOL _portPassing;	// 44 = 0x2c
	BOOL _delayedReply;	// 45 = 0x2d
}
+ (id)centerNamed:(id)named;	// 0x3603e8b9
- (void)_dispatchMessageNamed:(id)named userInfo:(id)info reply:(id *)reply auditToken:(XXStruct_kUSYWB *)token;	// 0x3603ec51
- (id)_initAnonymousServer;	// 0x3603e67d
- (id)_initClientWithPort:(unsigned)port;	// 0x3603d92d
- (id)_initWithServerName:(id)serverName;	// 0x3603d8bd
- (BOOL)_isTaskEntitled:(XXStruct_kUSYWB *)entitled;	// 0x3603ea3d
- (id)_requiredEntitlement;	// 0x3603d705
- (BOOL)_sendMessage:(id)message userInfo:(id)info receiveReply:(id *)reply error:(id *)error toTarget:(id)target selector:(SEL)selector context:(void *)context;	// 0x3603dcc5
- (BOOL)_sendMessage:(id)message userInfo:(id)info receiveReply:(id *)reply error:(id *)error toTarget:(id)target selector:(SEL)selector context:(void *)context nonBlocking:(BOOL)blocking;	// 0x3603f641
- (BOOL)_sendMessage:(id)message userInfoData:(id)data oolKey:(id)key oolData:(id)data4 makeServer:(BOOL)server receiveReply:(id *)reply nonBlocking:(BOOL)blocking error:(id *)error;	// 0x3603f159
- (unsigned)_sendPort;	// 0x3603f9b5
- (void)_sendReplyMessage:(id)message portPassing:(BOOL)passing onMachPort:(unsigned)port;	// 0x3603eb29
- (unsigned)_serverPort;	// 0x3603e71d
- (void)_setSendPort:(unsigned)port;	// 0x3603d9e5
- (void)_setupInvalidationSource;	// 0x3603faa5
- (void)dealloc;	// 0x3603e781
- (id)delayReply;	// 0x3603df01
- (BOOL)doesServerExist;	// 0x3603e209
- (id)name;	// 0x3603d6f5
- (void)registerForMessageName:(id)messageName target:(id)target selector:(SEL)selector;	// 0x3603dd21
- (void)runServerOnCurrentThread;	// 0x3603dd0d
- (void)runServerOnCurrentThreadProtectedByEntitlement:(id)entitlement;	// 0x3603eec1
- (void)sendDelayedReply:(id)reply dictionary:(id)dictionary;	// 0x3603e0a9
- (id)sendMessageAndReceiveReplyName:(id)name userInfo:(id)info;	// 0x3603db61
- (id)sendMessageAndReceiveReplyName:(id)name userInfo:(id)info error:(id *)error;	// 0x3603db99
- (void)sendMessageAndReceiveReplyName:(id)name userInfo:(id)info toTarget:(id)target selector:(SEL)selector context:(void *)context;	// 0x3603dbd5
- (BOOL)sendMessageName:(id)name userInfo:(id)info;	// 0x3603dafd
- (BOOL)sendNonBlockingMessageName:(id)name userInfo:(id)info;	// 0x3603db31
- (void)stopServer;	// 0x3603ee55
- (void)unregisterForMessageName:(id)messageName;	// 0x3603e119
@end

