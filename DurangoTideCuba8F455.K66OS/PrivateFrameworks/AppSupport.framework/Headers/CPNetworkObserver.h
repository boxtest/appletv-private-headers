/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject {
@private
	NSLock *_lock;	// 4 = 0x4
	NSMutableDictionary *_reachabilityRequests;	// 8 = 0x8
	unsigned _networkReachability;	// 12 = 0xc
	SCNetworkReachabilityRef _networkReach;	// 16 = 0x10
	CFDictionaryRef _networkObservers;	// 20 = 0x14
	SCPreferencesRef _wifiPreferences;	// 24 = 0x18
	CFDictionaryRef _wifiObservers;	// 28 = 0x1c
	BOOL _networkNotified;	// 32 = 0x20
	BOOL _networkReachable;	// 33 = 0x21
	BOOL _wifiNotified;	// 34 = 0x22
	BOOL _wifiEnabled;	// 35 = 0x23
}
@property(readonly, assign, getter=isNetworkReachable) BOOL networkReachable;	// G=0x322a90b1; converted property
+ (id)sharedNetworkObserver;	// 0x322aa635
- (id)init;	// 0x322a9359
- (void)_networkObserversInitialize;	// 0x322aa1f9
- (void)_networkReachableCallBack:(unsigned)back;	// 0x322a9639
- (void)_networkReachableFirstCallBack:(id)back;	// 0x322a9119
- (void)_wifiCallBack:(unsigned)back;	// 0x322aa365
- (void)_wifiFirstCallBack:(id)back;	// 0x322a9085
- (void)_wifiObserversInitialize;	// 0x322aa4f9
- (void)addNetworkReachableObserver:(id)observer selector:(SEL)selector;	// 0x322a9c59
- (void)addObserver:(id)observer selector:(SEL)selector forHostname:(id)hostname;	// 0x322a9235
- (void)addWiFiObserver:(id)observer selector:(SEL)selector;	// 0x322a9be5
- (void)dealloc;	// 0x322a9fdd
// converted property getter: - (BOOL)isNetworkReachable;	// 0x322a90b1
- (BOOL)isWiFiEnabled;	// 0x322a901d
- (void)removeNetworkReachableObserver:(id)observer;	// 0x322a9ec5
- (void)removeObserver:(id)observer;	// 0x322aa0d1
- (void)removeObserver:(id)observer forHostname:(id)hostname;	// 0x322a9145
- (void)removeWiFiObserver:(id)observer;	// 0x322a9e55
@end

