/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NccpHandlerDelegate.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface AppNccpHandlerDelegate : NSObject <NccpHandlerDelegate> {
}
- (id)init;	// 0x33c636bc
- (void)dealloc;	// 0x33c647bc
- (BOOL)handleStaleCredentials;	// 0x33c636fc
- (void)notifyNflxhlsUserCredentialsDidUpdate;	// 0x33c63f8c
- (void)reportErrorMessage:(id)message;	// 0x33c64474
- (void)reportInvalidCredentials;	// 0x33c64390
- (void)reportNetworkingError;	// 0x33c642b0
- (void)reportUnrecoverableError;	// 0x33c6369c
- (void)reportUnsupportedSoftwareVersion:(id)version;	// 0x33c6433c
- (BOOL)startTransaction;	// 0x33c63690
- (void)stopTransaction;	// 0x33c63698
@end
