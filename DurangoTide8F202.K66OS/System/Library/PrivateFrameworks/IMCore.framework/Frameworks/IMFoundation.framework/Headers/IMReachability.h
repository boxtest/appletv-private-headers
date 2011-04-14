/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol IMReachabilityDelegate;

@interface IMReachability : NSObject {
	id<IMReachabilityDelegate> _delegate;	// 4 = 0x4
	void *_reachabilityRef;	// 8 = 0x8
	NSString *_description;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
	BOOL _gettingFlags;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL connectionRequired;	// G=0x3120f979; 
@property(assign, nonatomic) id<IMReachabilityDelegate> delegate;	// G=0x3120f959; S=0x3120f969; @synthesize=_delegate
@property(readonly, retain) NSString *description;	// G=0x3120fa21; converted property
@property(readonly, assign, nonatomic) unsigned flags;	// G=0x3120f9f1; 
@property(readonly, assign, nonatomic) unsigned status;	// G=0x3120f9a1; 
+ (id)reachabilityForInternetConnection;	// 0x3120ffd1
+ (id)reachabilityForLocalWiFi;	// 0x3120ff59
+ (id)reachabilityWithHostName:(id)hostName;	// 0x3120faf9
+ (id)reachabilityWithLocalAddress:(id)localAddress remoteAddress:(id)address;	// 0x3120fa65
+ (id)reachabilityWithRemoteAddress:(id)remoteAddress;	// 0x3120fab1
- (id)initWithLocalSocketAddress:(id)localSocketAddress remoteSocketAddress:(id)address delegate:(id)delegate;	// 0x3120fcd1
- (id)initWithRemoteHost:(id)remoteHost delegate:(id)delegate;	// 0x3120fc79
- (void)_forceGetFlagsIfNecessary;	// 0x3120fe51
- (void)_handleCallbackForSCNetworkReachability:(SCNetworkReachabilityRef)scnetworkReachability;	// 0x3120fed5
- (id)_initWithReachabilityRef:(SCNetworkReachabilityRef)reachabilityRef description:(id)description delegate:(id)delegate;	// 0x3120fb81
// declared property getter: - (BOOL)connectionRequired;	// 0x3120f979
- (void)dealloc;	// 0x3120fdd5
// declared property getter: - (id)delegate;	// 0x3120f959
// converted property getter: - (id)description;	// 0x3120fa21
// declared property getter: - (unsigned)flags;	// 0x3120f9f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3120f969
// declared property getter: - (unsigned)status;	// 0x3120f9a1
@end
