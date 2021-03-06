/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MSASPlatform.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVCupidSharedPSPlatform : XXUnknownSuperclass <MSASPlatform> {
}
- (BOOL)MSASIsAllowedToTransferMetadata;	// 0x4cae5d
- (BOOL)MSASIsAllowedToUploadAssets;	// 0x4cae61
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)downloadAssets;	// 0x4cae65
- (id)albumSharingDaemon;	// 0x4ca7cd
- (id)baseSharingURLForPersonID:(id)personID;	// 0x4ca871
- (void)logLevel:(int)level personID:(id)anId albumGUID:(id)guid format:(id)format;	// 0x4ca731
- (id)pathAlbumSharingDir;	// 0x4ca851
- (BOOL)personIDEnabledForAlbumSharing:(id)albumSharing;	// 0x4cac7d
- (BOOL)personIDUsesProductionPushEnvironment:(id)environment;	// 0x4caa71
- (id)personIDsEnabledForAlbumSharing;	// 0x4cad6d
- (Class)pluginClass;	// 0x4ca855
- (id)pushTokenForPersonID:(id)personID;	// 0x4cabfd
- (BOOL)shouldEnableNewFeatures;	// 0x4cae69
- (BOOL)shouldLogAtLevel:(int)level;	// 0x4ca72d
@end

