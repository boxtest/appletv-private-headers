/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library
#import "IMFoundation-Structs.h"
#import "IMSystemMonitorListener.h"
#import "IMConnectionMonitorDelegate.h"

@class NSArray, NSString, IMConnectionMonitor;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate> {
	SCDynamicStoreRef _store;	// 4 = 0x4
	CFRunLoopSourceRef _runLoopSource;	// 8 = 0x8
	NSString *_myIP;	// 12 = 0xc
	NSArray *_myIPs;	// 16 = 0x10
	IMConnectionMonitor *_connectionMonitor;	// 20 = 0x14
	BOOL _lastPostedNetworkUp;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) SCDynamicStoreRef getDynamicStore;	// G=0x30b740e9; 
@property(readonly, assign, nonatomic) BOOL isNetworkUp;	// G=0x30b740f9; 
@property(readonly, assign, nonatomic) NSString *myIPAddress;	// G=0x30b74759; 
@property(readonly, assign, nonatomic) NSArray *myIPAddresses;	// G=0x30b74711; 
@property(readonly, assign, nonatomic) unsigned short nextAvailablePort;	// G=0x30b747d1; 
+ (void)disableNotifications;	// 0x30b74195
+ (BOOL)enableNotifications;	// 0x30b741b9
+ (id)sharedNotifier;	// 0x30b741f9
- (id)init;	// 0x30b74561
- (void)_clearIPCache;	// 0x30b74145
- (void)_clearSharedDNSService;	// 0x30b740e5
- (BOOL)_listenForChanges;	// 0x30b74219
- (void)connectionMonitorDidUpdate:(id)connectionMonitor;	// 0x30b74439
- (void)dealloc;	// 0x30b74605
// declared property getter: - (SCDynamicStoreRef)getDynamicStore;	// 0x30b740e9
// declared property getter: - (BOOL)isNetworkUp;	// 0x30b740f9
// declared property getter: - (id)myIPAddress;	// 0x30b74759
// declared property getter: - (id)myIPAddresses;	// 0x30b74711
// declared property getter: - (unsigned short)nextAvailablePort;	// 0x30b747d1
- (void)systemDidWake;	// 0x30b7411d
- (void)systemWillSleep;	// 0x30b74131
@end

