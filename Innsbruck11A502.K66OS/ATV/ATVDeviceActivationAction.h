/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol ATVDeviceActivationDelegate;

__attribute__((visibility("hidden")))
@interface ATVDeviceActivationAction : XXUnknownSuperclass {
	id<ATVDeviceActivationDelegate> _delegate;	// 4 = 0x4
}
- (id)initWithDelegate:(id)delegate;	// 0x30275
- (void)_activationFailedWithReason:(int)reason error:(id)error;	// 0x30775
- (void)_activationSucceeded;	// 0x306e5
- (void)start;	// 0x302bd
@end

