/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

#import </libobjc.A.h>

@class NSMutableArray, CommunicationsFilterBlockListCache;
@protocol OS_xpc_object, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CommunicationsFilterBlockList : NSObject {
	NSObject<OS_xpc_object> *_connection;	// 4 = 0x4
	int _retries;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_queue;	// 12 = 0xc
	NSMutableArray *_recentObjectsTested;	// 16 = 0x10
	CommunicationsFilterBlockListCache *_cache;	// 20 = 0x14
}
+ (id)sharedInstance;	// 0x30429b4d
- (id)init;	// 0x30429c01
- (BOOL)_connect;	// 0x3042a7d5
- (BOOL)_disconnect;	// 0x3042a77d
- (void)_disconnected;	// 0x3042a721
- (id)_sendSynchronousXPCRequest:(id)request;	// 0x3042a1a9
- (BOOL)_sendXPCRequest:(id)request completionBlock:(id)block;	// 0x3042a401
- (void)addItemForAllServices:(id)allServices;	// 0x30429cb1
- (id)copyAllItems;	// 0x30429de9
- (void)dealloc;	// 0x30429c65
- (BOOL)isItemInList:(id)list;	// 0x3042a005
- (void)removeItemForAllServices:(id)allServices;	// 0x30429d4d
@end

