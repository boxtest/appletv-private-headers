/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, SSXPCConnection;
@protocol SSDownloadHandlerDelegate;

@interface SSDownloadHandler : NSObject {
@private
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	id<SSDownloadHandlerDelegate> _delegate;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
	NSArray *_downloadPhasesToIgnore;	// 16 = 0x10
	long long _handlerID;	// 20 = 0x14
	SSXPCConnection *_observerConnection;	// 28 = 0x1c
	BOOL _sessionsNeedPowerAssertion;	// 32 = 0x20
	BOOL _sessionsShouldBlockOtherDownloads;	// 33 = 0x21
}
@property(assign) id<SSDownloadHandlerDelegate> delegate;	// G=0x3652d21d; S=0x3652d79d; 
@property(copy) NSArray *downloadPhasesToIgnore;	// G=0x3652d3cd; S=0x3652d849; 
@property(readonly, assign) long long handlerIdentifier;	// G=0x3652d569; 
@property(assign) BOOL sessionsNeedPowerAssertion;	// G=0x3652d5f5; S=0x3652d95d; 
@property(assign) BOOL sessionsShouldBlockOtherDownloads;	// G=0x3652d6c9; S=0x3652da11; 
- (id)init;	// 0x3652cf69
- (void)_connectToDaemon;	// 0x3652dcc5
- (id)_controlConnection;	// 0x3652e159
- (void)_handleMessage:(void *)message fromServerConnection:(xpc_connection_s *)serverConnection;	// 0x3652e2f5
- (id)_newSessionWithMessage:(void *)message;	// 0x3652e4e9
- (BOOL)_sendAuthenticationSessionWithMessage:(void *)message;	// 0x3652e559
- (void)_sendDisconnectMessage;	// 0x3652e655
- (BOOL)_sendSessionCancelWithMessage:(void *)message;	// 0x3652e6c5
- (BOOL)_sendSessionHandleWithMessage:(void *)message;	// 0x3652e76d
- (BOOL)_sendSessionPauseWithMessage:(void *)message;	// 0x3652e815
- (void)_setValue:(void *)value forProperty:(const char *)property;	// 0x3652e8c1
- (void)dealloc;	// 0x3652d0f9
// declared property getter: - (id)delegate;	// 0x3652d21d
- (id)description;	// 0x3652dac5
// declared property getter: - (id)downloadPhasesToIgnore;	// 0x3652d3cd
// declared property getter: - (long long)handlerIdentifier;	// 0x3652d569
- (void)resetDisavowedSessions;	// 0x3652d581
// declared property getter: - (BOOL)sessionsNeedPowerAssertion;	// 0x3652d5f5
// declared property getter: - (BOOL)sessionsShouldBlockOtherDownloads;	// 0x3652d6c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3652d79d
// declared property setter: - (void)setDownloadPhasesToIgnore:(id)ignore;	// 0x3652d849
// declared property setter: - (void)setSessionsNeedPowerAssertion:(BOOL)assertion;	// 0x3652d95d
// declared property setter: - (void)setSessionsShouldBlockOtherDownloads:(BOOL)blockOtherDownloads;	// 0x3652da11
@end

