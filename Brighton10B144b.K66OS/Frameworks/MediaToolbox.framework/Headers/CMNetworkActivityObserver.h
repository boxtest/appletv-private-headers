/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h> // Unknown library

@class CMNetworkActivityMonitor;

@interface CMNetworkActivityObserver : NSObject {
	BOOL _valid;	// 4 = 0x4
	BOOL _registered;	// 5 = 0x5
	int _cmActivityToken;	// 8 = 0x8
	int _cmActivityPollingToken;	// 12 = 0xc
	CMNetworkActivityMonitor *_activityMonitor;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) CMNetworkActivityMonitor *activityMonitor;	// G=0x3200448d; 
+ (id)registeredObserverForActivityMonitor:(id)activityMonitor;	// 0x32004945
- (id)initForActivityMonitor:(id)activityMonitor;	// 0x32004435
- (void)_pollWithInterval:(double)interval networkActivityDidCompleteBlock:(id)networkActivity;	// 0x32004541
// declared property getter: - (id)activityMonitor;	// 0x3200448d
- (void)dealloc;	// 0x320044a1
- (void)invalidate;	// 0x32004925
- (void)registerObservations;	// 0x32004765
- (void)unregisterObservations;	// 0x320044f5
@end
