/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import <NSObject.h> // Unknown library

@class NSNetServiceBrowser, NSMutableArray, NSThread;

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	NSMutableArray *_hostLibraryIdentifiers;	// 4 = 0x4
	NSMutableArray *_resolvingHosts;	// 8 = 0x8
	NSMutableArray *_resolvedLibraryIdentifiers;	// 12 = 0xc
	NSMutableArray *_resolvedLibraryServices;	// 16 = 0x10
	id _completion;	// 20 = 0x14
	NSNetServiceBrowser *_browser;	// 24 = 0x18
	NSThread *_wakeThread;	// 28 = 0x1c
	BOOL _searching;	// 32 = 0x20
	int _resolving;	// 36 = 0x24
	int _hostsToResolve;	// 40 = 0x28
}
+ (void)sendWakeupCall:(id)call;	// 0x36a6bab1
+ (void)sendWakeupCallToAllSyncHosts;	// 0x36a6bc39
+ (id)wakeableHostsWithCompletion:(id)completion;	// 0x36a6bef9
- (void)dealloc;	// 0x36a6c075
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x36a6b83d
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x36a6b1f9
- (void)netServiceBrowser:(id)browser didNotSearch:(id)search;	// 0x36a6b2fd
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x36a6b369
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x36a6b355
- (void)netServiceDidResolveAddress:(id)netService;	// 0x36a6b45d
- (void)stop;	// 0x36a6b8bd
- (void)wake;	// 0x36a6b92d
@end

