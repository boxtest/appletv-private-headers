/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITargetedProxy.h"
#import "XPCProxyTarget.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIQueueingProxy : _UITargetedProxy <XPCProxyTarget> {
	int _lock;	// 8 = 0x8
	unsigned _suspensionCount;	// 12 = 0xc
	NSMutableArray *_queuedInvocations;	// 16 = 0x10
	id _shouldSuspendInvocationBlock;	// 20 = 0x14
}
+ (id)proxyWithTarget:(id)target;	// 0x330b2d39
+ (id)proxyWithTarget:(id)target shouldSuspendInvocationBlock:(id)block;	// 0x330b2cad
- (void)_dispatchSuspendedMessages;	// 0x330b2f3d
- (void)dealloc;	// 0x330b2d4d
- (id)description;	// 0x330b3129
- (void)forwardInvocation:(id)invocation;	// 0x330b2db1
- (BOOL)isBlock;	// 0x330b30f9
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x330b319d
- (void)removeAllEnqueuedInvocations;	// 0x330b30b5
- (BOOL)respondsToSelector:(SEL)selector;	// 0x330b30fd
- (void)resume;	// 0x330b3065
- (void)suspend;	// 0x330b2f05
@end

