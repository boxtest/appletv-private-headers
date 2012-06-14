/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class CPDistributedMessagingCenter;

@interface MCMDMClient : NSObject {
	CPDistributedMessagingCenter *_messageCenter;	// 4 = 0x4
}
+ (id)sharedClient;	// 0x36470471
- (id)init;	// 0x36470401
- (BOOL)authenticateWithCheckInURL:(id)url identity:(SecIdentity *)identity topic:(id)topic useDevelopmentAPNS:(BOOL)apns signMessage:(BOOL)message outError:(id *)error;	// 0x36470791
- (BOOL)checkOutCheckInURL:(id)url identity:(SecIdentity *)identity topic:(id)topic signMessage:(BOOL)message outError:(id *)error;	// 0x3647055d
- (void)notifyNewConfiguration;	// 0x3647052d
- (void)removeManagedAppsAccordingToFlags;	// 0x3647049d
- (void)scheduleTokenUpdate;	// 0x364704fd
- (void)simulatePush;	// 0x364704cd
@end
