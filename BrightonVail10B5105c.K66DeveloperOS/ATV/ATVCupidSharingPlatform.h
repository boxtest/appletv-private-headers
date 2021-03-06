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
- (BOOL)MSASIsAllowedToTransferMetadata;	// 0x10add9
- (BOOL)MSASIsAllowedToUploadAssets;	// 0x10addd
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)downloadAssets;	// 0x10ade1
- (id)albumSharingDaemon;	// 0x10aa15
- (id)baseSharingURLForPersonID:(id)personID;	// 0x10aa95
- (void)logLevel:(int)level personID:(id)anId albumGUID:(id)guid format:(id)format;	// 0x10a99d
- (id)pathAlbumSharingDir;	// 0x10aa81
- (BOOL)personIDUsesProductionPushEnvironment:(id)environment;	// 0x10abed
- (id)personIDsEnabledForAlbumSharing;	// 0x10ad3d
- (Class)pluginClass;	// 0x10aa85
- (id)pushTokenForPersonID:(id)personID;	// 0x10ace5
- (BOOL)shouldLogAtLevel:(int)level;	// 0x10a999
@end

