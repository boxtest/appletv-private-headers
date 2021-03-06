/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MSASPlatform.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVCupidSharingPlatform : XXUnknownSuperclass <MSASPlatform> {
}
- (BOOL)MSASIsAllowedToTransferMetadata;	// 0xff629
- (BOOL)MSASIsAllowedToUploadAssets;	// 0xff62d
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)downloadAssets;	// 0xff631
- (id)albumSharingDaemon;	// 0xff265
- (id)baseSharingURLForPersonID:(id)personID;	// 0xff2e5
- (void)logLevel:(int)level personID:(id)anId albumGUID:(id)guid format:(id)format;	// 0xff1ed
- (id)pathAlbumSharingDir;	// 0xff2d1
- (BOOL)personIDUsesProductionPushEnvironment:(id)environment;	// 0xff43d
- (id)personIDsEnabledForAlbumSharing;	// 0xff58d
- (Class)pluginClass;	// 0xff2d5
- (id)pushTokenForPersonID:(id)personID;	// 0xff535
- (BOOL)shouldLogAtLevel:(int)level;	// 0xff1e9
@end

