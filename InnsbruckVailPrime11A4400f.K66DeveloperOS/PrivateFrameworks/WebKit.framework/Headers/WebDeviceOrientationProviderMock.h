/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>
#import "WebKit-Structs.h"
#import "WebDeviceOrientationProvider.h"

@class WebDeviceOrientationProviderMockInternal;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {
	WebDeviceOrientationProviderMockInternal *m_internal;	// 4 = 0x4
}
+ (id)shared;	// 0x3395b1d9
- (id)init;	// 0x3395b239
- (void)dealloc;	// 0x3395b2a1
- (id)lastOrientation;	// 0x3395b34d
- (void)setController:(DeviceOrientationController *)controller;	// 0x3395b1b9
- (void)setOrientation:(id)orientation;	// 0x3395b2ed
- (void)startUpdating;	// 0x3395b30d
- (void)stopUpdating;	// 0x3395b32d
@end

