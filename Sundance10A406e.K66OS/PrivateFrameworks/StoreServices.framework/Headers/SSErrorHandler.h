/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSArray, SSXPCConnection;
@protocol SSErrorHandlerDelegate, OS_dispatch_queue;

@interface SSErrorHandler : NSObject {
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	id<SSErrorHandlerDelegate> _delegate;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_delegateQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
	NSArray *_failureTypes;	// 20 = 0x14
	SSXPCConnection *_observerConnection;	// 24 = 0x18
}
@property(assign) id<SSErrorHandlerDelegate> delegate;	// G=0x312e7a89; S=0x312e7dfd; 
@property(copy) NSArray *failureTypes;	// G=0x312e7c4d; S=0x312e7ea9; 
- (id)init;	// 0x312e7861
- (void)_dispatchToDelegate:(id)delegate;	// 0x312e82ed
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x312e8301
- (void)_openSessionWithMessage:(id)message;	// 0x312e8401
- (void)_reconnectToDaemonWithCompletionBlock:(id)completionBlock;	// 0x312e85f1
- (void)_sendDisconnectMessage;	// 0x312e88f9
- (void)_tearDownConnections;	// 0x312e89e1
- (void)dealloc;	// 0x312e79e5
// declared property getter: - (id)delegate;	// 0x312e7a89
// declared property getter: - (id)failureTypes;	// 0x312e7c4d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x312e7dfd
// declared property setter: - (void)setFailureTypes:(id)types;	// 0x312e7ea9
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x312e7f89
- (void)stopWithCompletionBlock:(id)completionBlock;	// 0x312e821d
@end
