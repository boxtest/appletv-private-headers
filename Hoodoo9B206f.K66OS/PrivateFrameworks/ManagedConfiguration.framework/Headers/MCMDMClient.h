/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "ManagedConfiguration-Structs.h"

@class CPDistributedMessagingCenter;

@interface MCMDMClient : NSObject {
	CPDistributedMessagingCenter *_messageCenter;	// 4 = 0x4
}
+ (id)sharedClient;	// 0x31903add
- (id)init;	// 0x31903a6d
- (BOOL)authenticateWithCheckInURL:(id)url identity:(SecIdentity *)identity topic:(id)topic useDevelopmentAPNS:(BOOL)apns signMessage:(BOOL)message outError:(id *)error;	// 0x31903dfd
- (BOOL)checkOutCheckInURL:(id)url identity:(SecIdentity *)identity topic:(id)topic signMessage:(BOOL)message outError:(id *)error;	// 0x31903bc9
- (void)notifyNewConfiguration;	// 0x31903b99
- (void)removeManagedAppsAccordingToFlags;	// 0x31903b09
- (void)scheduleTokenUpdate;	// 0x31903b69
- (void)simulatePush;	// 0x31903b39
@end
