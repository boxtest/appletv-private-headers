/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class _UIAsyncInvocation;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _UIViewServiceXPCListener : NSObject {
	NSObject<OS_xpc_object> *_connection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_incomingConnectionQueue;	// 8 = 0x8
	_UIAsyncInvocation *_invalidationInvocation;	// 12 = 0xc
	int __automatic_invalidation_retainCount;	// 16 = 0x10
	BOOL __automatic_invalidation_invalidated;	// 20 = 0x14
}
- (id)initWithName:(id)name connectionHandler:(id)handler;	// 0x32f4d051
- (int)__automatic_invalidation_logic;	// 0x32f4cde9
- (void)_invalidateUnconditionallyThen:(id)then;	// 0x32f4d4e5
- (BOOL)_isDeallocating;	// 0x32f4d025
- (BOOL)_tryRetain;	// 0x32f4cfd5
- (void)dealloc;	// 0x32f4d421
- (id)endpoint;	// 0x32f4d491
- (id)invalidate;	// 0x32f4d6c9
- (oneway void)release;	// 0x32f4cf01
- (id)retain;	// 0x32f4cec9
- (unsigned)retainCount;	// 0x32f4cfc1
@end

