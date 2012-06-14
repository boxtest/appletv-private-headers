/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEODirectionsRequester : NSObject {
	NSMapTable *_pendingRequests;	// 4 = 0x4
	NSLock *_pendingRequestsLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedRequester;	// 0x35f31015
- (id)init;	// 0x35f31089
- (void)cancelRequest:(id)request;	// 0x35f31665
- (Class)classForProviderID:(short)providerID;	// 0x35f3175d
- (void)dealloc;	// 0x35f31165
- (id)hostnameForProviderID:(short)providerID;	// 0x35f3177d
- (void)registerProvider:(Class)provider;	// 0x35f3171d
- (void)startRequest:(id)request finished:(id)finished networkActivity:(id)activity error:(id)error;	// 0x35f31275
@end
