/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDeviceActivationDelegate.h"
#import "BRSingleton.h"

@class ATVDeviceActivationAction;

__attribute__((visibility("hidden")))
@interface ATVDeviceActivationOneShotMonitor : BRSingleton <ATVDeviceActivationDelegate> {
@private
	ATVDeviceActivationAction *_action;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x303d1d85
+ (id)singleton;	// 0x303d1d75
- (void)activationFailedForAction:(id)action withReason:(int)reason error:(id)error;	// 0x303d1fe1
- (void)activationSucceeded:(id)succeeded;	// 0x303d1ec9
- (void)performOneShotActivation;	// 0x303d1d95
@end

