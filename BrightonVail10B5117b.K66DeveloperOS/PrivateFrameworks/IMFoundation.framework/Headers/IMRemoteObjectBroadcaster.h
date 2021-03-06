/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface IMRemoteObjectBroadcaster : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
}
+ (id)defaultBroadcaster;	// 0x34391b9d
- (id)init;	// 0x34391c45
- (id)_queue;	// 0x34391d01
- (id)broadcastProxyForTarget:(id)target protocol:(id)protocol;	// 0x34391d11
- (id)broadcastProxyForTargets:(id)targets protocol:(id)protocol;	// 0x34391d9d
- (void)dealloc;	// 0x34391cb9
- (void)flushProxy:(id)proxy;	// 0x34391f7d
- (BOOL)isSendQueueEmpty;	// 0x34391e0d
@end

