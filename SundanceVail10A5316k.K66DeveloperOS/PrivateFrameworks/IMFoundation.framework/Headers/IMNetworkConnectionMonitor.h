/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMReachabilityDelegate.h"
#import "IMConnectionMonitor.h"
#import "IMSystemMonitorListener.h"

@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate> {
	IMReachability *_hostReachability;	// 12 = 0xc
	IMReachability *_ipReachability;	// 16 = 0x10
	unsigned _hostFlags;	// 20 = 0x14
	unsigned _ipFlags;	// 24 = 0x18
	BOOL _isConnected;	// 28 = 0x1c
	BOOL _isSleeping;	// 29 = 0x1d
}
@property(assign, nonatomic) unsigned _hostFlags;	// G=0x34a87a05; S=0x34a87a15; @synthesize
@property(retain, nonatomic) IMReachability *_hostReachability;	// G=0x34a879c5; S=0x34a879d5; @synthesize
@property(assign, nonatomic) unsigned _ipFlags;	// G=0x34a87a25; S=0x34a87a35; @synthesize
@property(retain, nonatomic) IMReachability *_ipReachability;	// G=0x34a879e5; S=0x34a879f5; @synthesize
@property(assign, nonatomic) BOOL _isConnected;	// G=0x34a87a45; S=0x34a87a55; @synthesize
@property(assign, nonatomic) BOOL _isSleeping;	// G=0x34a87a65; S=0x34a87a75; @synthesize
- (void)_clearReachability:(id *)reachability flags:(unsigned *)flags;	// 0x34a87089
- (void)_doCallbackLater;	// 0x34a87151
- (void)_doCallbackNow;	// 0x34a870c1
// declared property getter: - (unsigned)_hostFlags;	// 0x34a87a05
// declared property getter: - (id)_hostReachability;	// 0x34a879c5
// declared property getter: - (unsigned)_ipFlags;	// 0x34a87a25
// declared property getter: - (id)_ipReachability;	// 0x34a879e5
// declared property getter: - (BOOL)_isConnected;	// 0x34a87a45
// declared property getter: - (BOOL)_isSleeping;	// 0x34a87a65
- (void)_networkManagedUpdated:(id)updated;	// 0x34a874b5
- (void)_setup;	// 0x34a874c5
- (void)_setupReachability;	// 0x34a871d9
- (void)clear;	// 0x34a876dd
- (void)dealloc;	// 0x34a86f75
- (void)goConnectedWithLocalSocketAddress:(id)localSocketAddress remoteSocketAddress:(id)address;	// 0x34a87575
- (void)goDisconnected;	// 0x34a87645
- (BOOL)isImmediatelyReachable;	// 0x34a87785
- (void)reachabilityDidChange:(id)reachability;	// 0x34a872b5
// declared property setter: - (void)set_hostFlags:(unsigned)flags;	// 0x34a87a15
// declared property setter: - (void)set_hostReachability:(id)reachability;	// 0x34a879d5
// declared property setter: - (void)set_ipFlags:(unsigned)flags;	// 0x34a87a35
// declared property setter: - (void)set_ipReachability:(id)reachability;	// 0x34a879f5
// declared property setter: - (void)set_isConnected:(BOOL)connected;	// 0x34a87a55
// declared property setter: - (void)set_isSleeping:(BOOL)sleeping;	// 0x34a87a75
- (void)systemDidWake;	// 0x34a87439
- (void)systemWillSleep;	// 0x34a873bd
@end

