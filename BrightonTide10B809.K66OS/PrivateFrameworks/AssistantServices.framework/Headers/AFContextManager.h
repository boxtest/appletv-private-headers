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
	CFArrayRef _contextProviders;	// 4 = 0x4
	CPDistributedMessagingCenter *_center;	// 8 = 0x8
}
+ (id)defaultContextManager;	// 0x334ebb29
- (id)init;	// 0x334ebba9
- (void).cxx_destruct;	// 0x334ec315
- (id)_collateContexts;	// 0x334ebe99
- (void)_collateContextsIntoArray:(id)array;	// 0x334ebdb1
- (void)_shutdownServer;	// 0x334ebf2d
- (BOOL)addContextProvider:(id)provider;	// 0x334ebf85
- (void)dealloc;	// 0x334ec2d5
- (void)nothing;	// 0x334ebc09
- (void)removeContextProvider:(id)provider;	// 0x334ec1d9
- (void)startCenter:(id)center;	// 0x334ebc0d
@end
