/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library
#import "AssistantServices-Structs.h"

@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {
@private
	CFArrayRef _contextProviders;	// 4 = 0x4
	CPDistributedMessagingCenter *_center;	// 8 = 0x8
}
+ (id)defaultContextManager;	// 0x345ac2a1
- (id)init;	// 0x345ac321
- (void).cxx_destruct;	// 0x345aca8d
- (id)_collateContexts;	// 0x345ac611
- (void)_collateContextsIntoArray:(id)array;	// 0x345ac529
- (void)_shutdownServer;	// 0x345ac6a5
- (BOOL)addContextProvider:(id)provider;	// 0x345ac6fd
- (void)dealloc;	// 0x345aca4d
- (void)nothing;	// 0x345ac381
- (void)removeContextProvider:(id)provider;	// 0x345ac951
- (void)startCenter:(id)center;	// 0x345ac385
@end
